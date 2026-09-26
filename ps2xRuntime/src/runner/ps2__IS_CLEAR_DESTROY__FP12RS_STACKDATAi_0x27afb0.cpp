#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _IS_CLEAR_DESTROY__FP12RS_STACKDATAi
// Address: 0x27afb0 - 0x27b010
void ps2__IS_CLEAR_DESTROY__FP12RS_STACKDATAi_0x27afb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IS_CLEAR_DESTROY__FP12RS_STACKDATAi_0x27afb0");
#endif

    switch (ctx->pc) {
        case 0x27aff0u: goto label_27aff0;
        case 0x27affcu: goto label_27affc;
        default: break;
    }

    ctx->pc = 0x27afb0u;

    // 0x27afb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27afb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27afb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27afbc: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27afc0: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x27afc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AFC4u;
    {
        const bool branch_taken_0x27afc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFC4u;
            // 0x27afc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afc4) {
            ctx->pc = 0x27AFD4u;
            goto label_27afd4;
        }
    }
    ctx->pc = 0x27AFCCu;
    // 0x27afcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27AFCCu;
    {
        const bool branch_taken_0x27afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFCCu;
            // 0x27afd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afcc) {
            ctx->pc = 0x27B000u;
            goto label_27b000;
        }
    }
    ctx->pc = 0x27AFD4u;
label_27afd4:
    // 0x27afd4: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x27afd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x27afd8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AFD8u;
    {
        const bool branch_taken_0x27afd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFD8u;
            // 0x27afdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afd8) {
            ctx->pc = 0x27AFE8u;
            goto label_27afe8;
        }
    }
    ctx->pc = 0x27AFE0u;
    // 0x27afe0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27AFE0u;
    {
        const bool branch_taken_0x27afe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFE0u;
            // 0x27afe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afe0) {
            ctx->pc = 0x27B004u;
            goto label_27b004;
        }
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0xc0be654  jal         func_2F9950
    ctx->pc = 0x27AFE8u;
    SET_GPR_U32(ctx, 31, 0x27AFF0u);
    ctx->pc = 0x2F9950u;
    if (runtime->hasFunction(0x2F9950u)) {
        auto targetFn = runtime->lookupFunction(0x2F9950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFF0u; }
        if (ctx->pc != 0x27AFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsClearMostFastDestroy__16CDngFloorManagerFv_0x2f9950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFF0u; }
        if (ctx->pc != 0x27AFF0u) { return; }
    }
    ctx->pc = 0x27AFF0u;
label_27aff0:
    // 0x27aff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aff4: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27AFF4u;
    SET_GPR_U32(ctx, 31, 0x27AFFCu);
    ctx->pc = 0x27AFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AFF4u;
            // 0x27aff8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFFCu; }
        if (ctx->pc != 0x27AFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AFFCu; }
        if (ctx->pc != 0x27AFFCu) { return; }
    }
    ctx->pc = 0x27AFFCu;
label_27affc:
    // 0x27affc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27affcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27b000:
    // 0x27b000: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27b004:
    // 0x27b004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b008: 0x3e00008  jr          $ra
    ctx->pc = 0x27B008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B008u;
            // 0x27b00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27B010u;
}
