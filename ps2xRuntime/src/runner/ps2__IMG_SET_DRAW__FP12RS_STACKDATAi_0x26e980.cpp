#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IMG_SET_DRAW__FP12RS_STACKDATAi
// Address: 0x26e980 - 0x26e9c4
void ps2__IMG_SET_DRAW__FP12RS_STACKDATAi_0x26e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IMG_SET_DRAW__FP12RS_STACKDATAi_0x26e980");
#endif

    switch (ctx->pc) {
        case 0x26e994u: goto label_26e994;
        case 0x26e9a0u: goto label_26e9a0;
        case 0x26e9b4u: goto label_26e9b4;
        default: break;
    }

    ctx->pc = 0x26e980u;

    // 0x26e980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26e988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26e98c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E98Cu;
    SET_GPR_U32(ctx, 31, 0x26E994u);
    ctx->pc = 0x26E990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E98Cu;
            // 0x26e990: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E994u; }
        if (ctx->pc != 0x26E994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E994u; }
        if (ctx->pc != 0x26E994u) { return; }
    }
    ctx->pc = 0x26E994u;
label_26e994:
    // 0x26e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e998: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E998u;
    SET_GPR_U32(ctx, 31, 0x26E9A0u);
    ctx->pc = 0x26E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E998u;
            // 0x26e99c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9A0u; }
        if (ctx->pc != 0x26E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9A0u; }
        if (ctx->pc != 0x26E9A0u) { return; }
    }
    ctx->pc = 0x26E9A0u;
label_26e9a0:
    // 0x26e9a0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x26e9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e9a8: 0x2484ea80  addiu       $a0, $a0, -0x1580
    ctx->pc = 0x26e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
    // 0x26e9ac: 0xc0a41b0  jal         func_2906C0
    ctx->pc = 0x26E9ACu;
    SET_GPR_U32(ctx, 31, 0x26E9B4u);
    ctx->pc = 0x26E9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9ACu;
            // 0x26e9b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2906C0u;
    if (runtime->hasFunction(0x2906C0u)) {
        auto targetFn = runtime->lookupFunction(0x2906C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9B4u; }
        if (ctx->pc != 0x26E9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDraw__18CEventSpriteMotherFii_0x2906c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E9B4u; }
        if (ctx->pc != 0x26E9B4u) { return; }
    }
    ctx->pc = 0x26E9B4u;
label_26e9b4:
    // 0x26e9b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e9b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e9b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x26E9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E9BCu;
            // 0x26e9c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E9C4u;
}
