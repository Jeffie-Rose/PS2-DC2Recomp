#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetActiveVillager__6CSceneFv
// Address: 0x2cb010 - 0x2cb104
void SetActiveVillager__6CSceneFv_0x2cb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetActiveVillager__6CSceneFv_0x2cb010");
#endif

    switch (ctx->pc) {
        case 0x2cb04cu: goto label_2cb04c;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0c0u: goto label_2cb0c0;
        case 0x2cb0d4u: goto label_2cb0d4;
        default: break;
    }

    ctx->pc = 0x2cb010u;

    // 0x2cb010: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb014: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cb014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cb018: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2cb01c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cb01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cb020: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cb020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cb024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cb028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb02c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cb02cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb030: 0x8c832e5c  lw          $v1, 0x2E5C($a0)
    ctx->pc = 0x2cb030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x2cb034: 0x8c923054  lw          $s2, 0x3054($a0)
    ctx->pc = 0x2cb034u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12372)));
    // 0x2cb038: 0x608026  xor         $s0, $v1, $zero
    ctx->pc = 0x2cb038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2cb03c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2cb03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2cb040: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CB040u;
    {
        const bool branch_taken_0x2cb040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB040u;
            // 0x2cb044: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb040) {
            ctx->pc = 0x2CB0E8u;
            goto label_2cb0e8;
        }
    }
    ctx->pc = 0x2CB048u;
    // 0x2cb048: 0x26643050  addiu       $a0, $s3, 0x3050
    ctx->pc = 0x2cb048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12368));
label_2cb04c:
    // 0x2cb04c: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CB04Cu;
    SET_GPR_U32(ctx, 31, 0x2CB054u);
    ctx->pc = 0x2CB050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB04Cu;
            // 0x2cb050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB054u; }
        if (ctx->pc != 0x2CB054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB054u; }
        if (ctx->pc != 0x2CB054u) { return; }
    }
    ctx->pc = 0x2CB054u;
label_2cb054:
    // 0x2cb054: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CB054u;
    {
        const bool branch_taken_0x2cb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb054) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB05Cu;
    // 0x2cb05c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2cb05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2cb060: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x2cb060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2cb064: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB064u;
    {
        const bool branch_taken_0x2cb064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb064) {
            ctx->pc = 0x2CB078u;
            goto label_2cb078;
        }
    }
    ctx->pc = 0x2CB06Cu;
    // 0x2cb06c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2cb06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2cb070: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2cb070u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cb074: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cb074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2cb078:
    // 0x2cb078: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cb078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cb07c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB07Cu;
    {
        const bool branch_taken_0x2cb07c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb07c) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB084u;
    // 0x2cb084: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB084u;
    {
        const bool branch_taken_0x2cb084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb084) {
            ctx->pc = 0x2CB0A4u;
            goto label_2cb0a4;
        }
    }
    ctx->pc = 0x2CB08Cu;
    // 0x2cb08c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb090: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cb090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb094: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB094u;
    SET_GPR_U32(ctx, 31, 0x2CB09Cu);
    ctx->pc = 0x2CB098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB094u;
            // 0x2cb098: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB09Cu; }
        if (ctx->pc != 0x2CB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB09Cu; }
        if (ctx->pc != 0x2CB09Cu) { return; }
    }
    ctx->pc = 0x2CB09Cu;
label_2cb09c:
    // 0x2cb09c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2CB09Cu;
    {
        const bool branch_taken_0x2cb09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb09c) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB0A4u;
label_2cb0a4:
    // 0x2cb0a4: 0x0  nop
    ctx->pc = 0x2cb0a4u;
    // NOP
    // 0x2cb0a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb0ac: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x2cb0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2cb0b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB0B0u;
    {
        const bool branch_taken_0x2cb0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB0B0u;
            // 0x2cb0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0b0) {
            ctx->pc = 0x2CB0C8u;
            goto label_2cb0c8;
        }
    }
    ctx->pc = 0x2CB0B8u;
    // 0x2cb0b8: 0xc0a11b4  jal         func_2846D0
    ctx->pc = 0x2CB0B8u;
    SET_GPR_U32(ctx, 31, 0x2CB0C0u);
    ctx->pc = 0x2CB0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB0B8u;
            // 0x2cb0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB0C0u; }
        if (ctx->pc != 0x2CB0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB0C0u; }
        if (ctx->pc != 0x2CB0C0u) { return; }
    }
    ctx->pc = 0x2CB0C0u;
label_2cb0c0:
    // 0x2cb0c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB0C0u;
    {
        const bool branch_taken_0x2cb0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0c0) {
            ctx->pc = 0x2CB0D4u;
            goto label_2cb0d4;
        }
    }
    ctx->pc = 0x2CB0C8u;
label_2cb0c8:
    // 0x2cb0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cb0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb0cc: 0xc0a11c0  jal         func_284700
    ctx->pc = 0x2CB0CCu;
    SET_GPR_U32(ctx, 31, 0x2CB0D4u);
    ctx->pc = 0x2CB0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB0CCu;
            // 0x2cb0d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB0D4u; }
        if (ctx->pc != 0x2CB0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB0D4u; }
        if (ctx->pc != 0x2CB0D4u) { return; }
    }
    ctx->pc = 0x2CB0D4u;
label_2cb0d4:
    // 0x2cb0d4: 0x0  nop
    ctx->pc = 0x2cb0d4u;
    // NOP
    // 0x2cb0d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2cb0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2cb0dc: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x2cb0dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2cb0e0: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2CB0E0u;
    {
        const bool branch_taken_0x2cb0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB0E0u;
            // 0x2cb0e4: 0x26643050  addiu       $a0, $s3, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb0e0) {
            ctx->pc = 0x2CB04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb04c;
        }
    }
    ctx->pc = 0x2CB0E8u;
label_2cb0e8:
    // 0x2cb0e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cb0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb0ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb0f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cb0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB0FCu;
            // 0x2cb100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB104u;
}
