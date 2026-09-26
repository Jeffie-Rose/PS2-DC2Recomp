#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPhotoFlag__Fv
// Address: 0x1ffb00 - 0x1ffbc0
void CheckPhotoFlag__Fv_0x1ffb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPhotoFlag__Fv_0x1ffb00");
#endif

    switch (ctx->pc) {
        case 0x1ffb28u: goto label_1ffb28;
        case 0x1ffb38u: goto label_1ffb38;
        case 0x1ffb44u: goto label_1ffb44;
        case 0x1ffb6cu: goto label_1ffb6c;
        case 0x1ffb80u: goto label_1ffb80;
        default: break;
    }

    ctx->pc = 0x1ffb00u;

    // 0x1ffb00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ffb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ffb04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ffb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ffb08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ffb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ffb0c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ffb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ffb10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ffb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ffb14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ffb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ffb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ffb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffb1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ffb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffb20: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x1FFB20u;
    SET_GPR_U32(ctx, 31, 0x1FFB28u);
    ctx->pc = 0x1FFB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB20u;
            // 0x1ffb24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB28u; }
        if (ctx->pc != 0x1FFB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB28u; }
        if (ctx->pc != 0x1FFB28u) { return; }
    }
    ctx->pc = 0x1FFB28u;
label_1ffb28:
    // 0x1ffb28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ffb28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ffb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb30: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x1FFB30u;
    SET_GPR_U32(ctx, 31, 0x1FFB38u);
    ctx->pc = 0x1FFB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB30u;
            // 0x1ffb34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB38u; }
        if (ctx->pc != 0x1FFB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB38u; }
        if (ctx->pc != 0x1FFB38u) { return; }
    }
    ctx->pc = 0x1FFB38u;
label_1ffb38:
    // 0x1ffb38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ffb38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ffb3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ffb40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ffb44:
    // 0x1ffb44: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x1ffb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1ffb48: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x1ffb48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffb4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FFB4Cu;
    {
        const bool branch_taken_0x1ffb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffb4c) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB54u;
    // 0x1ffb54: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x1ffb54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1ffb58: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1ffb58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ffb5c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FFB5Cu;
    {
        const bool branch_taken_0x1ffb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB5Cu;
            // 0x1ffb60: 0x2475000a  addiu       $s5, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb5c) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB64u;
    // 0x1ffb64: 0xc07faf0  jal         func_1FEBC0
    ctx->pc = 0x1FFB64u;
    SET_GPR_U32(ctx, 31, 0x1FFB6Cu);
    ctx->pc = 0x1FFB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB64u;
            // 0x1ffb68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBC0u;
    if (runtime->hasFunction(0x1FEBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB6Cu; }
        if (ctx->pc != 0x1FFB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNetaFlag__15CInventUserDataFi_0x1febc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB6Cu; }
        if (ctx->pc != 0x1FFB6Cu) { return; }
    }
    ctx->pc = 0x1FFB6Cu;
label_1ffb6c:
    // 0x1ffb6c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFB6Cu;
    {
        const bool branch_taken_0x1ffb6c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ffb6c) {
            ctx->pc = 0x1FFB84u;
            goto label_1ffb84;
        }
    }
    ctx->pc = 0x1FFB74u;
    // 0x1ffb74: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x1ffb74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ffb78: 0xc07fb10  jal         func_1FEC40
    ctx->pc = 0x1FFB78u;
    SET_GPR_U32(ctx, 31, 0x1FFB80u);
    ctx->pc = 0x1FFB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB78u;
            // 0x1ffb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC40u;
    if (runtime->hasFunction(0x1FEC40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB80u; }
        if (ctx->pc != 0x1FFB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNetaFlag__15CInventUserDataFi_0x1fec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFB80u; }
        if (ctx->pc != 0x1FFB80u) { return; }
    }
    ctx->pc = 0x1FFB80u;
label_1ffb80:
    // 0x1ffb80: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ffb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ffb84:
    // 0x1ffb84: 0x0  nop
    ctx->pc = 0x1ffb84u;
    // NOP
    // 0x1ffb88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ffb88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ffb8c: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x1ffb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1ffb90: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1FFB90u;
    {
        const bool branch_taken_0x1ffb90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFB90u;
            // 0x1ffb94: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffb90) {
            ctx->pc = 0x1FFB44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ffb44;
        }
    }
    ctx->pc = 0x1FFB98u;
    // 0x1ffb98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ffb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb9c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ffb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ffba0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ffba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ffba4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ffba4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ffba8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ffba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffbac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ffbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ffbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ffbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFBB8u;
            // 0x1ffbbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FFBC0u;
}
