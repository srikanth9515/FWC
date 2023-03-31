// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest__Syms.h"


//======================

void Vtest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vtest* t = (Vtest*)userthis;
    Vtest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vtest::traceChgThis(Vtest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vtest::traceChgThis__2(Vtest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vtest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->clk));
        vcdp->chgBit(c+9,(vlTOPp->rst));
        vcdp->chgBit(c+17,(vlTOPp->X));
        vcdp->chgBit(c+25,(vlTOPp->Y));
        vcdp->chgBit(c+33,(vlTOPp->Z));
        vcdp->chgBit(c+41,(vlTOPp->F));
    }
}
