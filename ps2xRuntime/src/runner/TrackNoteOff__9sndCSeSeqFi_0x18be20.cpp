#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TrackNoteOff__9sndCSeSeqFi
// Address: 0x18be20 - 0x18beb4
void TrackNoteOff__9sndCSeSeqFi_0x18be20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TrackNoteOff__9sndCSeSeqFi_0x18be20");
#endif

    switch (ctx->pc) {
        case 0x18be44u: goto label_18be44;
        case 0x18be60u: goto label_18be60;
        case 0x18be78u: goto label_18be78;
        default: break;
    }

    ctx->pc = 0x18be20u;

    // 0x18be20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18be20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18be24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18be24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18be28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18be2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18be30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18be34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18be34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18be38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18be38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be3c: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BE3Cu;
    SET_GPR_U32(ctx, 31, 0x18BE44u);
    ctx->pc = 0x18BE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE3Cu;
            // 0x18be40: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE44u; }
        if (ctx->pc != 0x18BE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chk_trk__9sndCSeSeqFi_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE44u; }
        if (ctx->pc != 0x18BE44u) { return; }
    }
    ctx->pc = 0x18BE44u;
label_18be44:
    // 0x18be44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x18BE44u;
    {
        const bool branch_taken_0x18be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE44u;
            // 0x18be48: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be44) {
            ctx->pc = 0x18BE98u;
            goto label_18be98;
        }
    }
    ctx->pc = 0x18BE4Cu;
    // 0x18be4c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x18be50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18be50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be54: 0x24720030  addiu       $s2, $v1, 0x30
    ctx->pc = 0x18be54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x18be58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18BE58u;
    {
        const bool branch_taken_0x18be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE58u;
            // 0x18be5c: 0x2653000c  addiu       $s3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18be58) {
            ctx->pc = 0x18BE84u;
            goto label_18be84;
        }
    }
    ctx->pc = 0x18BE60u;
label_18be60:
    // 0x18be60: 0x82670002  lb          $a3, 0x2($s3)
    ctx->pc = 0x18be60u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x18be64: 0x82680003  lb          $t0, 0x3($s3)
    ctx->pc = 0x18be64u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x18be68: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18be68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18be6c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x18be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18be70: 0xc063d08  jal         func_18F420
    ctx->pc = 0x18BE70u;
    SET_GPR_U32(ctx, 31, 0x18BE78u);
    ctx->pc = 0x18BE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE70u;
            // 0x18be74: 0x82660001  lb          $a2, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18F420u;
    if (runtime->hasFunction(0x18F420u)) {
        auto targetFn = runtime->lookupFunction(0x18F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE78u; }
        if (ctx->pc != 0x18BE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStopPBPrKr__Fiiiii_0x18f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE78u; }
        if (ctx->pc != 0x18BE78u) { return; }
    }
    ctx->pc = 0x18BE78u;
label_18be78:
    // 0x18be78: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x18be78u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x18be7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18be7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18be80: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18be80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18be84:
    // 0x18be84: 0x0  nop
    ctx->pc = 0x18be84u;
    // NOP
    // 0x18be88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18be8c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x18be8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18be90: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x18BE90u;
    {
        const bool branch_taken_0x18be90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18be90) {
            ctx->pc = 0x18BE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18be60;
        }
    }
    ctx->pc = 0x18BE98u;
label_18be98:
    // 0x18be98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18be98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18be9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18be9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18bea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18bea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18beac: 0x3e00008  jr          $ra
    ctx->pc = 0x18BEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEACu;
            // 0x18beb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BEB4u;
}
