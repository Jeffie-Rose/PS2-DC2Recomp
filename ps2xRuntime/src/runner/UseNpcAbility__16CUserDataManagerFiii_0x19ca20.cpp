#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UseNpcAbility__16CUserDataManagerFiii
// Address: 0x19ca20 - 0x19cacc
void UseNpcAbility__16CUserDataManagerFiii_0x19ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseNpcAbility__16CUserDataManagerFiii_0x19ca20");
#endif

    switch (ctx->pc) {
        case 0x19ca4cu: goto label_19ca4c;
        case 0x19ca58u: goto label_19ca58;
        default: break;
    }

    ctx->pc = 0x19ca20u;

    // 0x19ca20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19ca24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19ca28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ca2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ca30: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x19ca30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ca38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19ca38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ca40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19ca40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca44: 0xc067278  jal         func_19C9E0
    ctx->pc = 0x19CA44u;
    SET_GPR_U32(ctx, 31, 0x19CA4Cu);
    ctx->pc = 0x19CA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA44u;
            // 0x19ca48: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C9E0u;
    if (runtime->hasFunction(0x19C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA4Cu; }
        if (ctx->pc != 0x19CA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaInfo__16CUserDataManagerFi_0x19c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA4Cu; }
        if (ctx->pc != 0x19CA4Cu) { return; }
    }
    ctx->pc = 0x19CA4Cu;
label_19ca4c:
    // 0x19ca4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca50: 0xc0aad44  jal         func_2AB510
    ctx->pc = 0x19CA50u;
    SET_GPR_U32(ctx, 31, 0x19CA58u);
    ctx->pc = 0x19CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA50u;
            // 0x19ca54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB510u;
    if (runtime->hasFunction(0x2AB510u)) {
        auto targetFn = runtime->lookupFunction(0x2AB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyNPCData__Fi_0x2ab510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA58u; }
        if (ctx->pc != 0x19CA58u) { return; }
    }
    ctx->pc = 0x19CA58u;
label_19ca58:
    // 0x19ca58: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CA58u;
    {
        const bool branch_taken_0x19ca58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca58) {
            ctx->pc = 0x19CA68u;
            goto label_19ca68;
        }
    }
    ctx->pc = 0x19CA60u;
    // 0x19ca60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CA60u;
    {
        const bool branch_taken_0x19ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ca60) {
            ctx->pc = 0x19CA70u;
            goto label_19ca70;
        }
    }
    ctx->pc = 0x19CA68u;
label_19ca68:
    // 0x19ca68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19CA68u;
    {
        const bool branch_taken_0x19ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA68u;
            // 0x19ca6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca68) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19CA70u;
label_19ca70:
    // 0x19ca70: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19ca74: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19ca78: 0x90420032  lbu         $v0, 0x32($v0)
    ctx->pc = 0x19ca78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x19ca7c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19ca7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ca80: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x19CA80u;
    {
        const bool branch_taken_0x19ca80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ca80) {
            ctx->pc = 0x19CAACu;
            goto label_19caac;
        }
    }
    ctx->pc = 0x19CA88u;
    // 0x19ca88: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x19CA88u;
    {
        const bool branch_taken_0x19ca88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CA88u;
            // 0x19ca8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca88) {
            ctx->pc = 0x19CAACu;
            goto label_19caac;
        }
    }
    ctx->pc = 0x19CA90u;
    // 0x19ca90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ca90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ca94: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19ca98: 0xa6220004  sh          $v0, 0x4($s1)
    ctx->pc = 0x19ca98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ca9c: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x19ca9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19caa0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CAA0u;
    {
        const bool branch_taken_0x19caa0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19CAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAA0u;
            // 0x19caa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caa0) {
            ctx->pc = 0x19CAB0u;
            goto label_19cab0;
        }
    }
    ctx->pc = 0x19CAA8u;
    // 0x19caa8: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x19caa8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
label_19caac:
    // 0x19caac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19caacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cab0:
    // 0x19cab0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19cab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cab4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19cab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cabc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cabcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x19CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19CAC4u;
            // 0x19cac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19CACCu;
}
