module helloworldfpga(

    input  wire X,
    input  wire Y,
    input  wire Z,
    
    output wire F,
    );
   // assign X=0;
    //assign Y=0;
    //assign Z=0;
    
    always @(*)
    begin
   F=((!X)|Y); 
    end
    endmodule
