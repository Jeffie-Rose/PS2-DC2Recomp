#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CTRLC_SET_ROT_CANCEL__FP12RS_STACKDATAi
// Address: 0x277770 - 0x2777a8
void ps2__CTRLC_SET_ROT_CANCEL__FP12RS_STACKDATAi_0x277770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CTRLC_SET_ROT_CANCEL__FP12RS_STACKDATAi_0x277770");
#endif

    switch (ctx->pc) {
        case 0x277780u: goto label_277780;
        case 0x277788u: goto label_277788;
        case 0x277794u: goto label_277794;
        default: break;
    }

    ctx->pc = 0x277770u;

    // 0x277770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x277774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x277778: 0xc097e18  jal         func_25F860
    ctx->pc = 0x277778u;
    SET_GPR_U32(ctx, 31, 0x277780u);
    ctx->pc = 0x27777Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277778u;
            // 0x27777c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277780u; }
        if (ctx->pc != 0x277780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277780u; }
        if (ctx->pc != 0x277780u) { return; }
    }
    ctx->pc = 0x277780u;
label_277780:
    // 0x277780: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x277780u;
    SET_GPR_U32(ctx, 31, 0x277788u);
    ctx->pc = 0x277784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x277780u;
            // 0x277784: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277788u; }
        if (ctx->pc != 0x277788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277788u; }
        if (ctx->pc != 0x277788u) { return; }
    }
    ctx->pc = 0x277788u;
label_277788:
    // 0x277788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27778c: 0xc0baff4  jal         func_2EBFD0
    ctx->pc = 0x27778Cu;
    SET_GPR_U32(ctx, 31, 0x277794u);
    ctx->pc = 0x277790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27778Cu;
            // 0x277790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277794u; }
        if (ctx->pc != 0x277794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277794u; }
        if (ctx->pc != 0x277794u) { return; }
    }
    ctx->pc = 0x277794u;
label_277794:
    // 0x277794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x277794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27779c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27779cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2777a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2777A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2777A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2777A0u;
            // 0x2777a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2777A8u;
}
