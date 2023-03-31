module test(
    input clk,
    input rst,
    input X,
    input Y,
    input Z,
    output  reg F
    );

    always @(posedge clk, posedge rst) begin
        if (rst) begin
            F <= 0;
        end
        else begin
            F <= (Y || (X && (!Z)));
        end
    end

endmodule
