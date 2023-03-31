#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>
#include "obj_dir/Vtest.h"
#include <chrono>
#include <thread>
#include <fstream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    Vtest* test = new Vtest;

    // Open the VCD file
    std::ofstream vcdfile("test.vcd");
    Verilated::traceEverOn(true);
    VerilatedVcdC* tracer = new VerilatedVcdC;
    test->trace(tracer, 99);
    tracer->open("test.vcd");

    // Initialize test inputs
    test->clk = 0;
    test->rst = 1;
    test->X = 0;
    test->Y = 0;
    test->Z = 0;
    test->eval();
    tracer->dump(0);

    // Wait for a few clock cycles while the reset is active
    for (int i = 0; i < 5; i++) {
        test->clk = 0;
        test->eval();
        tracer->dump(10*i);
        test->clk = 1;
        test->eval();
        tracer->dump(10*i + 5);
    }

    // De-assert reset and start the simulation
    test->rst = 0;
    for (int i = 0; i < 10; i++) {
        test->clk = 0;
        test->eval();
        tracer->dump(50 + 10*i);
        test->clk = 1;
        test->eval();
        tracer->dump(50 + 10*i + 5);

        // Toggle the inputs X and Y every other clock cycle
        test->X = (i % 2 == 0) ? 1 : 0;
        test->Y = (i % 2 == 0) ? 0 : 1;
        test->Z = (i % 2 == 0) ? 1 : 0;
    }

    // Close the VCD file
    tracer->close();
    delete test;
    return 0;
}
