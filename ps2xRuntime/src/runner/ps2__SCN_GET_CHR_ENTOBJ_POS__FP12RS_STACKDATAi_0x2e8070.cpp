#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SCN_GET_CHR_ENTOBJ_POS__FP12RS_STACKDATAi
// Address: 0x2e8070 - 0x2e8118
void ps2__SCN_GET_CHR_ENTOBJ_POS__FP12RS_STACKDATAi_0x2e8070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SCN_GET_CHR_ENTOBJ_POS__FP12RS_STACKDATAi_0x2e8070");
#endif

    switch (ctx->pc) {
        case 0x2e8098u: goto label_2e8098;
        case 0x2e80a8u: goto label_2e80a8;
        case 0x2e80b8u: goto label_2e80b8;
        case 0x2e80d4u: goto label_2e80d4;
        case 0x2e80e4u: goto label_2e80e4;
        case 0x2e80f4u: goto label_2e80f4;
        case 0x2e8100u: goto label_2e8100;
        default: break;
    }

    ctx->pc = 0x2e8070u;

    // 0x2e8070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e8070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e8074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e8074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e8078: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e807c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8080: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8080u;
    {
        const bool branch_taken_0x2e8080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E8084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8080u;
            // 0x2e8084: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8080) {
            ctx->pc = 0x2E8090u;
            goto label_2e8090;
        }
    }
    ctx->pc = 0x2E8088u;
    // 0x2e8088: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E8088u;
    {
        const bool branch_taken_0x2e8088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E808Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8088u;
            // 0x2e808c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8088) {
            ctx->pc = 0x2E8104u;
            goto label_2e8104;
        }
    }
    ctx->pc = 0x2E8090u;
label_2e8090:
    // 0x2e8090: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E8090u;
    SET_GPR_U32(ctx, 31, 0x2E8098u);
    ctx->pc = 0x2E8094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8090u;
            // 0x2e8094: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8098u; }
        if (ctx->pc != 0x2E8098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8098u; }
        if (ctx->pc != 0x2E8098u) { return; }
    }
    ctx->pc = 0x2E8098u;
label_2e8098:
    // 0x2e8098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e809c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e809cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80a0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E80A0u;
    SET_GPR_U32(ctx, 31, 0x2E80A8u);
    ctx->pc = 0x2E80A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80A0u;
            // 0x2e80a4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80A8u; }
        if (ctx->pc != 0x2E80A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80A8u; }
        if (ctx->pc != 0x2E80A8u) { return; }
    }
    ctx->pc = 0x2E80A8u;
label_2e80a8:
    // 0x2e80a8: 0x8f849ec8  lw          $a0, -0x6138($gp)
    ctx->pc = 0x2e80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942408)));
    // 0x2e80ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e80acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80b0: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2E80B0u;
    SET_GPR_U32(ctx, 31, 0x2E80B8u);
    ctx->pc = 0x2E80B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80B0u;
            // 0x2e80b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80B8u; }
        if (ctx->pc != 0x2E80B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80B8u; }
        if (ctx->pc != 0x2E80B8u) { return; }
    }
    ctx->pc = 0x2E80B8u;
label_2e80b8:
    // 0x2e80b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E80B8u;
    {
        const bool branch_taken_0x2e80b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E80BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80B8u;
            // 0x2e80bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80b8) {
            ctx->pc = 0x2E80C8u;
            goto label_2e80c8;
        }
    }
    ctx->pc = 0x2E80C0u;
    // 0x2e80c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E80C0u;
    {
        const bool branch_taken_0x2e80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E80C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80C0u;
            // 0x2e80c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e80c0) {
            ctx->pc = 0x2E8104u;
            goto label_2e8104;
        }
    }
    ctx->pc = 0x2E80C8u;
label_2e80c8:
    // 0x2e80c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e80c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80cc: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x2E80CCu;
    SET_GPR_U32(ctx, 31, 0x2E80D4u);
    ctx->pc = 0x2E80D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80CCu;
            // 0x2e80d0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80D4u; }
        if (ctx->pc != 0x2E80D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80D4u; }
        if (ctx->pc != 0x2E80D4u) { return; }
    }
    ctx->pc = 0x2E80D4u;
label_2e80d4:
    // 0x2e80d4: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x2e80d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e80d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e80d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80dc: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E80DCu;
    SET_GPR_U32(ctx, 31, 0x2E80E4u);
    ctx->pc = 0x2E80E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80DCu;
            // 0x2e80e0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80E4u; }
        if (ctx->pc != 0x2E80E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80E4u; }
        if (ctx->pc != 0x2E80E4u) { return; }
    }
    ctx->pc = 0x2E80E4u;
label_2e80e4:
    // 0x2e80e4: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2e80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e80e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e80e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80ec: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E80ECu;
    SET_GPR_U32(ctx, 31, 0x2E80F4u);
    ctx->pc = 0x2E80F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80ECu;
            // 0x2e80f0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80F4u; }
        if (ctx->pc != 0x2E80F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E80F4u; }
        if (ctx->pc != 0x2E80F4u) { return; }
    }
    ctx->pc = 0x2E80F4u;
label_2e80f4:
    // 0x2e80f4: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x2e80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e80f8: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E80F8u;
    SET_GPR_U32(ctx, 31, 0x2E8100u);
    ctx->pc = 0x2E80FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E80F8u;
            // 0x2e80fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8100u; }
        if (ctx->pc != 0x2E8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8100u; }
        if (ctx->pc != 0x2E8100u) { return; }
    }
    ctx->pc = 0x2E8100u;
label_2e8100:
    // 0x2e8100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e8100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e8104:
    // 0x2e8104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e810c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e810cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8110: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8110u;
            // 0x2e8114: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8118u;
}
