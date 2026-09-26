#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__8CThunderFv
// Address: 0x1d48b0 - 0x1d48e0
void ps2___ct__8CThunderFv_0x1d48b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__8CThunderFv_0x1d48b0");
#endif

    switch (ctx->pc) {
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48ccu: goto label_1d48cc;
        default: break;
    }

    ctx->pc = 0x1d48b0u;

    // 0x1d48b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d48b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d48b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d48b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d48b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d48bc: 0xc04d924  jal         func_136490
    ctx->pc = 0x1D48BCu;
    SET_GPR_U32(ctx, 31, 0x1D48C4u);
    ctx->pc = 0x1D48C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48BCu;
            // 0x1d48c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48C4u; }
        if (ctx->pc != 0x1D48C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48C4u; }
        if (ctx->pc != 0x1D48C4u) { return; }
    }
    ctx->pc = 0x1D48C4u;
label_1d48c4:
    // 0x1d48c4: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x1D48C4u;
    SET_GPR_U32(ctx, 31, 0x1D48CCu);
    ctx->pc = 0x1D48C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48C4u;
            // 0x1d48c8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48CCu; }
        if (ctx->pc != 0x1D48CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48CCu; }
        if (ctx->pc != 0x1D48CCu) { return; }
    }
    ctx->pc = 0x1D48CCu;
label_1d48cc:
    // 0x1d48cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d48ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d48d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d48d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d48d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48D8u;
            // 0x1d48dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D48E0u;
}
