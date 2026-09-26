#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_CHECK__FP12RS_STACKDATAi
// Address: 0x26f1b0 - 0x26f1f4
void ps2__CMRS_CHECK__FP12RS_STACKDATAi_0x26f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_CHECK__FP12RS_STACKDATAi_0x26f1b0");
#endif

    switch (ctx->pc) {
        case 0x26f1ccu: goto label_26f1cc;
        case 0x26f1e0u: goto label_26f1e0;
        default: break;
    }

    ctx->pc = 0x26f1b0u;

    // 0x26f1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1c0: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f1c4: 0xc0964f0  jal         func_2593C0
    ctx->pc = 0x26F1C4u;
    SET_GPR_U32(ctx, 31, 0x26F1CCu);
    ctx->pc = 0x26F1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1C4u;
            // 0x26f1c8: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2593C0u;
    if (runtime->hasFunction(0x2593C0u)) {
        auto targetFn = runtime->lookupFunction(0x2593C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1CCu; }
        if (ctx->pc != 0x26F1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__12CSceneCmrSeqFv_0x2593c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1CCu; }
        if (ctx->pc != 0x26F1CCu) { return; }
    }
    ctx->pc = 0x26F1CCu;
label_26f1cc:
    // 0x26f1cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26f1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26f1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f1d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f1d8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26F1D8u;
    SET_GPR_U32(ctx, 31, 0x26F1E0u);
    ctx->pc = 0x26F1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1D8u;
            // 0x26f1dc: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1E0u; }
        if (ctx->pc != 0x26F1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F1E0u; }
        if (ctx->pc != 0x26F1E0u) { return; }
    }
    ctx->pc = 0x26F1E0u;
label_26f1e0:
    // 0x26f1e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x26F1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1ECu;
            // 0x26f1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F1F4u;
}
