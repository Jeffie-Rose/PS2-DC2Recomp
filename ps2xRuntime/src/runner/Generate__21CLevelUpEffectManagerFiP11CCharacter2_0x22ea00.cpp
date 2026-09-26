#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__21CLevelUpEffectManagerFiP11CCharacter2
// Address: 0x22ea00 - 0x22eaa0
void Generate__21CLevelUpEffectManagerFiP11CCharacter2_0x22ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__21CLevelUpEffectManagerFiP11CCharacter2_0x22ea00");
#endif

    switch (ctx->pc) {
        case 0x22ea30u: goto label_22ea30;
        case 0x22ea3cu: goto label_22ea3c;
        case 0x22ea68u: goto label_22ea68;
        default: break;
    }

    ctx->pc = 0x22ea00u;

    // 0x22ea00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22ea04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22ea08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22ea0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22ea10: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22ea10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22ea18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22ea18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22ea20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22ea20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22ea28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ea28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ea2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22ea30:
    // 0x22ea30: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x22ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22ea34: 0xc08b908  jal         func_22E420
    ctx->pc = 0x22EA34u;
    SET_GPR_U32(ctx, 31, 0x22EA3Cu);
    ctx->pc = 0x22EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA34u;
            // 0x22ea38: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E420u;
    if (runtime->hasFunction(0x22E420u)) {
        auto targetFn = runtime->lookupFunction(0x22E420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA3Cu; }
        if (ctx->pc != 0x22EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRun__14CLevelUpEffectFv_0x22e420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA3Cu; }
        if (ctx->pc != 0x22EA3Cu) { return; }
    }
    ctx->pc = 0x22EA3Cu;
label_22ea3c:
    // 0x22ea3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22EA3Cu;
    {
        const bool branch_taken_0x22ea3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ea3c) {
            ctx->pc = 0x22EA70u;
            goto label_22ea70;
        }
    }
    ctx->pc = 0x22EA44u;
    // 0x22ea44: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x22ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22ea48: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x22ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x22ea4c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22ea50: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22ea50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22ea58: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22ea58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea5c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x22ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22ea60: 0xc08b8a0  jal         func_22E280
    ctx->pc = 0x22EA60u;
    SET_GPR_U32(ctx, 31, 0x22EA68u);
    ctx->pc = 0x22EA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA60u;
            // 0x22ea64: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E280u;
    if (runtime->hasFunction(0x22E280u)) {
        auto targetFn = runtime->lookupFunction(0x22E280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA68u; }
        if (ctx->pc != 0x22EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__14CLevelUpEffectFP10mgCTextureiP11CCharacter2_0x22e280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22EA68u; }
        if (ctx->pc != 0x22EA68u) { return; }
    }
    ctx->pc = 0x22EA68u;
label_22ea68:
    // 0x22ea68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22EA68u;
    {
        const bool branch_taken_0x22ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea68) {
            ctx->pc = 0x22EA80u;
            goto label_22ea80;
        }
    }
    ctx->pc = 0x22EA70u;
label_22ea70:
    // 0x22ea70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ea74: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x22ea74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x22ea78: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22EA78u;
    {
        const bool branch_taken_0x22ea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA78u;
            // 0x22ea7c: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ea78) {
            ctx->pc = 0x22EA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ea30;
        }
    }
    ctx->pc = 0x22EA80u;
label_22ea80:
    // 0x22ea80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ea84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ea84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ea88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ea88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ea8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ea8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ea90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ea90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ea94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ea94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ea98: 0x3e00008  jr          $ra
    ctx->pc = 0x22EA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EA98u;
            // 0x22ea9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EAA0u;
}
