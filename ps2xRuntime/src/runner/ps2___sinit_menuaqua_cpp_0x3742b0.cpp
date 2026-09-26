#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sinit_menuaqua.cpp
// Address: 0x3742b0 - 0x3742f4
void ps2___sinit_menuaqua_cpp_0x3742b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sinit_menuaqua_cpp_0x3742b0");
#endif

    switch (ctx->pc) {
        case 0x3742c4u: goto label_3742c4;
        case 0x3742d0u: goto label_3742d0;
        case 0x3742dcu: goto label_3742dc;
        case 0x3742e8u: goto label_3742e8;
        default: break;
    }

    ctx->pc = 0x3742b0u;

    // 0x3742b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3742b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3742b4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3742b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3742b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3742b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3742bc: 0xc04e640  jal         func_139900
    ctx->pc = 0x3742BCu;
    SET_GPR_U32(ctx, 31, 0x3742C4u);
    ctx->pc = 0x3742C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742BCu;
            // 0x3742c0: 0x2484c410  addiu       $a0, $a0, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742C4u; }
        if (ctx->pc != 0x3742C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742C4u; }
        if (ctx->pc != 0x3742C4u) { return; }
    }
    ctx->pc = 0x3742C4u;
label_3742c4:
    // 0x3742c4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3742c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3742c8: 0xc084a48  jal         func_212920
    ctx->pc = 0x3742C8u;
    SET_GPR_U32(ctx, 31, 0x3742D0u);
    ctx->pc = 0x3742CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742C8u;
            // 0x3742cc: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    if (runtime->hasFunction(0x212920u)) {
        auto targetFn = runtime->lookupFunction(0x212920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742D0u; }
        if (ctx->pc != 0x3742D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CAquariumFv_0x212920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742D0u; }
        if (ctx->pc != 0x3742D0u) { return; }
    }
    ctx->pc = 0x3742D0u;
label_3742d0:
    // 0x3742d0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3742d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3742d4: 0xc04e640  jal         func_139900
    ctx->pc = 0x3742D4u;
    SET_GPR_U32(ctx, 31, 0x3742DCu);
    ctx->pc = 0x3742D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742D4u;
            // 0x3742d8: 0x2484c900  addiu       $a0, $a0, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742DCu; }
        if (ctx->pc != 0x3742DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742DCu; }
        if (ctx->pc != 0x3742DCu) { return; }
    }
    ctx->pc = 0x3742DCu;
label_3742dc:
    // 0x3742dc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x3742dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x3742e0: 0xc04e640  jal         func_139900
    ctx->pc = 0x3742E0u;
    SET_GPR_U32(ctx, 31, 0x3742E8u);
    ctx->pc = 0x3742E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3742E0u;
            // 0x3742e4: 0x2484c990  addiu       $a0, $a0, -0x3670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742E8u; }
        if (ctx->pc != 0x3742E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3742E8u; }
        if (ctx->pc != 0x3742E8u) { return; }
    }
    ctx->pc = 0x3742E8u;
label_3742e8:
    // 0x3742e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3742e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3742ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3742ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3742F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3742ECu;
            // 0x3742f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3742F4u;
}
