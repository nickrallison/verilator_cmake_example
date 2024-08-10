#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmux2.h"
#include "Vmux2___024root.h"

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    Vmux2 *dut = new Vmux2;

    // Verilated::traceEverOn(true);
    // VerilatedVcdC *m_trace = new VerilatedVcdC;
    // dut->trace(m_trace, 5);
    // m_trace->open("waveform.vcd");

    bool a = false;
    bool b = false;
    bool sel = false;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    bool out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = true;
    b = false;
    sel = false;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = false;
    b = false;
    sel = true;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = true;
    b = false;
    sel = true;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;
    // m_trace->close();


    a = false;
    b = true;
    sel = false;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = true;
    b = true;
    sel = false;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = false;
    b = true;
    sel = true;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;

    a = true;
    b = true;
    sel = true;
    dut->a = a;
    dut->b = b;
    dut->sel = sel;
    dut->eval();
    out = dut->out;
    // m_trace->dump(sim_time);
    sim_time++;
    std::cout << "a: " << a << " b: " << b << " sel: " << sel << " out: " << out << std::endl;
    // m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
