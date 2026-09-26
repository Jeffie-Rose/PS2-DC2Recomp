#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_editeff.cpp
// Address: 0x374a50 - 0x374a90
void ps2___sinit_editeff_cpp_0x374a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_editeff_cpp_0x374a50");
#endif

    switch (ctx->pc) {
        case 0x374a78u: goto label_374a78;
        case 0x374a84u: goto label_374a84;
        default: break;
    }

    ctx->pc = 0x374a50u;

    // 0x374a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374a54: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374a58: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x374a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x374a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a60: 0x24849370  addiu       $a0, $a0, -0x6C90
    ctx->pc = 0x374a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939504));
    // 0x374a64: 0x24a5c470  addiu       $a1, $a1, -0x3B90
    ctx->pc = 0x374a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952048));
    // 0x374a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x374a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a6c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x374a70: 0xc040070  jal         func_1001C0
    ctx->pc = 0x374A70u;
    SET_GPR_U32(ctx, 31, 0x374A78u);
    ctx->pc = 0x374A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A70u;
            // 0x374a74: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A78u; }
        if (ctx->pc != 0x374A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A78u; }
        if (ctx->pc != 0x374A78u) { return; }
    }
    ctx->pc = 0x374A78u;
label_374a78:
    // 0x374a78: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x374a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x374a7c: 0xc04e640  jal         func_139900
    ctx->pc = 0x374A7Cu;
    SET_GPR_U32(ctx, 31, 0x374A84u);
    ctx->pc = 0x374A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x374A7Cu;
            // 0x374a80: 0x24849670  addiu       $a0, $a0, -0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A84u; }
        if (ctx->pc != 0x374A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x374A84u; }
        if (ctx->pc != 0x374A84u) { return; }
    }
    ctx->pc = 0x374A84u;
label_374a84:
    // 0x374a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374a88: 0x3e00008  jr          $ra
    ctx->pc = 0x374A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x374A88u;
            // 0x374a8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x374A90u;
}
