module mux2 (
    input wire a,    // First input
    input wire b,    // Second input
    input wire sel,  // Select line
    output wire out    // Output
);

assign out = sel ? b : a;

endmodule
