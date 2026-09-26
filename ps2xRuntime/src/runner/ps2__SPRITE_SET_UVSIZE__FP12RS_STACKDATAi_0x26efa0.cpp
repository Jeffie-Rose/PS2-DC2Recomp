#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_UVSIZE__FP12RS_STACKDATAi
// Address: 0x26efa0 - 0x26f048
void ps2__SPRITE_SET_UVSIZE__FP12RS_STACKDATAi_0x26efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_UVSIZE__FP12RS_STACKDATAi_0x26efa0");
#endif

    switch (ctx->pc) {
        case 0x26efc0u: goto label_26efc0;
        case 0x26efd0u: goto label_26efd0;
        case 0x26efe0u: goto label_26efe0;
        case 0x26eff0u: goto label_26eff0;
        case 0x26effcu: goto label_26effc;
        case 0x26f008u: goto label_26f008;
        case 0x26f028u: goto label_26f028;
        default: break;
    }

    ctx->pc = 0x26efa0u;

    // 0x26efa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26efa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26efa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26efa8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26efa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26efac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26efacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26efb0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x26efb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26efb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26efb8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EFB8u;
    SET_GPR_U32(ctx, 31, 0x26EFC0u);
    ctx->pc = 0x26EFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFB8u;
            // 0x26efbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFC0u; }
        if (ctx->pc != 0x26EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFC0u; }
        if (ctx->pc != 0x26EFC0u) { return; }
    }
    ctx->pc = 0x26EFC0u;
label_26efc0:
    // 0x26efc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26efc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26efc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efc8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EFC8u;
    SET_GPR_U32(ctx, 31, 0x26EFD0u);
    ctx->pc = 0x26EFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFC8u;
            // 0x26efcc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFD0u; }
        if (ctx->pc != 0x26EFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFD0u; }
        if (ctx->pc != 0x26EFD0u) { return; }
    }
    ctx->pc = 0x26EFD0u;
label_26efd0:
    // 0x26efd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efd8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EFD8u;
    SET_GPR_U32(ctx, 31, 0x26EFE0u);
    ctx->pc = 0x26EFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFD8u;
            // 0x26efdc: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFE0u; }
        if (ctx->pc != 0x26EFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFE0u; }
        if (ctx->pc != 0x26EFE0u) { return; }
    }
    ctx->pc = 0x26EFE0u;
label_26efe0:
    // 0x26efe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26efe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26efe8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EFE8u;
    SET_GPR_U32(ctx, 31, 0x26EFF0u);
    ctx->pc = 0x26EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFE8u;
            // 0x26efec: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFF0u; }
        if (ctx->pc != 0x26EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFF0u; }
        if (ctx->pc != 0x26EFF0u) { return; }
    }
    ctx->pc = 0x26EFF0u;
label_26eff0:
    // 0x26eff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eff4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EFF4u;
    SET_GPR_U32(ctx, 31, 0x26EFFCu);
    ctx->pc = 0x26EFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EFF4u;
            // 0x26eff8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFFCu; }
        if (ctx->pc != 0x26EFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EFFCu; }
        if (ctx->pc != 0x26EFFCu) { return; }
    }
    ctx->pc = 0x26EFFCu;
label_26effc:
    // 0x26effc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f000: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26F000u;
    SET_GPR_U32(ctx, 31, 0x26F008u);
    ctx->pc = 0x26F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F000u;
            // 0x26f004: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F008u; }
        if (ctx->pc != 0x26F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F008u; }
        if (ctx->pc != 0x26F008u) { return; }
    }
    ctx->pc = 0x26F008u;
label_26f008:
    // 0x26f008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F008u;
    {
        const bool branch_taken_0x26f008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F008u;
            // 0x26f00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f008) {
            ctx->pc = 0x26F018u;
            goto label_26f018;
        }
    }
    ctx->pc = 0x26F010u;
    // 0x26f010: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26F010u;
    {
        const bool branch_taken_0x26f010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F010u;
            // 0x26f014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f010) {
            ctx->pc = 0x26F02Cu;
            goto label_26f02c;
        }
    }
    ctx->pc = 0x26F018u;
label_26f018:
    // 0x26f018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f01c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26f01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f020: 0xc0a42ec  jal         func_290BB0
    ctx->pc = 0x26F020u;
    SET_GPR_U32(ctx, 31, 0x26F028u);
    ctx->pc = 0x26F024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F020u;
            // 0x26f024: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290BB0u;
    if (runtime->hasFunction(0x290BB0u)) {
        auto targetFn = runtime->lookupFunction(0x290BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F028u; }
        if (ctx->pc != 0x26F028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetUvSize__13CEventSprite2Fiiii_0x290bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F028u; }
        if (ctx->pc != 0x26F028u) { return; }
    }
    ctx->pc = 0x26F028u;
label_26f028:
    // 0x26f028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f02c:
    // 0x26f02c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26f02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f030: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26f030u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f034: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f03c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f040: 0x3e00008  jr          $ra
    ctx->pc = 0x26F040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F040u;
            // 0x26f044: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F048u;
}
