#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepEffect__11CCharacter2Fv
// Address: 0x177c00 - 0x177ca4
void StepEffect__11CCharacter2Fv_0x177c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepEffect__11CCharacter2Fv_0x177c00");
#endif

    switch (ctx->pc) {
        case 0x177c24u: goto label_177c24;
        case 0x177c3cu: goto label_177c3c;
        case 0x177c44u: goto label_177c44;
        case 0x177c64u: goto label_177c64;
        case 0x177c6cu: goto label_177c6c;
        case 0x177c78u: goto label_177c78;
        default: break;
    }

    ctx->pc = 0x177c00u;

    // 0x177c00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x177c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x177c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x177c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x177c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x177c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x177c10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177c10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x177c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x177c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x177c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x177c1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x177c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177c20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177c24:
    // 0x177c24: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x177c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x177c28: 0x8c640570  lw          $a0, 0x570($v1)
    ctx->pc = 0x177c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1392)));
    // 0x177c2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x177C2Cu;
    {
        const bool branch_taken_0x177c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x177C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C2Cu;
            // 0x177c30: 0x24720570  addiu       $s2, $v1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c2c) {
            ctx->pc = 0x177C44u;
            goto label_177c44;
        }
    }
    ctx->pc = 0x177C34u;
    // 0x177c34: 0xc0bd77c  jal         func_2F5DF0
    ctx->pc = 0x177C34u;
    SET_GPR_U32(ctx, 31, 0x177C3Cu);
    ctx->pc = 0x2F5DF0u;
    if (runtime->hasFunction(0x2F5DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C3Cu; }
        if (ctx->pc != 0x177C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__17CSWordAfterEffectFv_0x2f5df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C3Cu; }
        if (ctx->pc != 0x177C3Cu) { return; }
    }
    ctx->pc = 0x177C3Cu;
label_177c3c:
    // 0x177c3c: 0xc0bd6f4  jal         func_2F5BD0
    ctx->pc = 0x177C3Cu;
    SET_GPR_U32(ctx, 31, 0x177C44u);
    ctx->pc = 0x177C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C3Cu;
            // 0x177c40: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BD0u;
    if (runtime->hasFunction(0x2F5BD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F5BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C44u; }
        if (ctx->pc != 0x177C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPointList__17CSWordAfterEffectFv_0x2f5bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C44u; }
        if (ctx->pc != 0x177C44u) { return; }
    }
    ctx->pc = 0x177C44u;
label_177c44:
    // 0x177c44: 0x0  nop
    ctx->pc = 0x177c44u;
    // NOP
    // 0x177c48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x177c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177c4c: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x177c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x177c50: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x177C50u;
    {
        const bool branch_taken_0x177c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C50u;
            // 0x177c54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c50) {
            ctx->pc = 0x177C24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177c24;
        }
    }
    ctx->pc = 0x177C58u;
    // 0x177c58: 0x8e7005e8  lw          $s0, 0x5E8($s3)
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1512)));
    // 0x177c5c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177C5Cu;
    {
        const bool branch_taken_0x177c5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x177c5c) {
            ctx->pc = 0x177C84u;
            goto label_177c84;
        }
    }
    ctx->pc = 0x177C64u;
label_177c64:
    // 0x177c64: 0xc060af4  jal         func_182BD0
    ctx->pc = 0x177C64u;
    SET_GPR_U32(ctx, 31, 0x177C6Cu);
    ctx->pc = 0x177C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C64u;
            // 0x177c68: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD0u;
    if (runtime->hasFunction(0x182BD0u)) {
        auto targetFn = runtime->lookupFunction(0x182BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C6Cu; }
        if (ctx->pc != 0x177C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Ctrl__14CEffectManagerFv_0x182bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C6Cu; }
        if (ctx->pc != 0x177C6Cu) { return; }
    }
    ctx->pc = 0x177C6Cu;
label_177c6c:
    // 0x177c6c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x177c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x177c70: 0xc060b3c  jal         func_182CF0
    ctx->pc = 0x177C70u;
    SET_GPR_U32(ctx, 31, 0x177C78u);
    ctx->pc = 0x177C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177C70u;
            // 0x177c74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182CF0u;
    if (runtime->hasFunction(0x182CF0u)) {
        auto targetFn = runtime->lookupFunction(0x182CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C78u; }
        if (ctx->pc != 0x177C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CEffectManagerFi_0x182cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177C78u; }
        if (ctx->pc != 0x177C78u) { return; }
    }
    ctx->pc = 0x177C78u;
label_177c78:
    // 0x177c78: 0x8e100024  lw          $s0, 0x24($s0)
    ctx->pc = 0x177c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x177c7c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177C7Cu;
    {
        const bool branch_taken_0x177c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x177c7c) {
            ctx->pc = 0x177C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177c64;
        }
    }
    ctx->pc = 0x177C84u;
label_177c84:
    // 0x177c84: 0x0  nop
    ctx->pc = 0x177c84u;
    // NOP
    // 0x177c88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x177c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177c8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177c90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x177c90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177c94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x177c94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177c98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x177c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x177C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177C9Cu;
            // 0x177ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177CA4u;
}
