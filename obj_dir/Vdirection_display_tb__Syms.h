// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDIRECTION_DISPLAY_TB__SYMS_H_
#define VERILATED_VDIRECTION_DISPLAY_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vdirection_display_tb.h"

// INCLUDE MODULE CLASSES
#include "Vdirection_display_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdirection_display_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdirection_display_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdirection_display_tb___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_direction_display_tb;

    // CONSTRUCTORS
    Vdirection_display_tb__Syms(VerilatedContext* contextp, const char* namep, Vdirection_display_tb* modelp);
    ~Vdirection_display_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
