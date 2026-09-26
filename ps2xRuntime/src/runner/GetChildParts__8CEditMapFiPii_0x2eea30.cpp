#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetChildParts__8CEditMapFiPii
// Address: 0x2eea30 - 0x2eeaec
void GetChildParts__8CEditMapFiPii_0x2eea30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChildParts__8CEditMapFiPii_0x2eea30");
#endif

    switch (ctx->pc) {
        case 0x2eea5cu: goto label_2eea5c;
        case 0x2eea80u: goto label_2eea80;
        default: break;
    }

    ctx->pc = 0x2eea30u;

    // 0x2eea30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2eea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2eea34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2eea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2eea38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2eea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2eea3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eea3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eea40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eea40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eea48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2eea48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eea50: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2eea50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea54: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2EEA54u;
    SET_GPR_U32(ctx, 31, 0x2EEA5Cu);
    ctx->pc = 0x2EEA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA54u;
            // 0x2eea58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEA5Cu; }
        if (ctx->pc != 0x2EEA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEA5Cu; }
        if (ctx->pc != 0x2EEA5Cu) { return; }
    }
    ctx->pc = 0x2EEA5Cu;
label_2eea5c:
    // 0x2eea5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEA5Cu;
    {
        const bool branch_taken_0x2eea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA5Cu;
            // 0x2eea60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea5c) {
            ctx->pc = 0x2EEA6Cu;
            goto label_2eea6c;
        }
    }
    ctx->pc = 0x2EEA64u;
    // 0x2eea64: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2EEA64u;
    {
        const bool branch_taken_0x2eea64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA64u;
            // 0x2eea68: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea64) {
            ctx->pc = 0x2EEAD4u;
            goto label_2eead4;
        }
    }
    ctx->pc = 0x2EEA6Cu;
label_2eea6c:
    // 0x2eea6c: 0x8e650f4c  lw          $a1, 0xF4C($s3)
    ctx->pc = 0x2eea6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3916)));
    // 0x2eea70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eea70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eea74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eea78: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EEA78u;
    {
        const bool branch_taken_0x2eea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA78u;
            // 0x2eea7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eea78) {
            ctx->pc = 0x2EEAC0u;
            goto label_2eeac0;
        }
    }
    ctx->pc = 0x2EEA80u;
label_2eea80:
    // 0x2eea80: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x2eea80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eea84: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x2eea84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2eea88: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EEA88u;
    {
        const bool branch_taken_0x2eea88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eea88) {
            ctx->pc = 0x2EEAB4u;
            goto label_2eeab4;
        }
    }
    ctx->pc = 0x2EEA90u;
    // 0x2eea90: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x2eea90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2eea94: 0x14720007  bne         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EEA94u;
    {
        const bool branch_taken_0x2eea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2eea94) {
            ctx->pc = 0x2EEAB4u;
            goto label_2eeab4;
        }
    }
    ctx->pc = 0x2EEA9Cu;
    // 0x2eea9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2eea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eeaa0: 0x2271821  addu        $v1, $s1, $a3
    ctx->pc = 0x2eeaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2eeaa4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x2eeaa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2eeaa8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2eeaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2eeaac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EEAACu;
    {
        const bool branch_taken_0x2eeaac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAACu;
            // 0x2eeab0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eeaac) {
            ctx->pc = 0x2EEAD0u;
            goto label_2eead0;
        }
    }
    ctx->pc = 0x2EEAB4u;
label_2eeab4:
    // 0x2eeab4: 0x0  nop
    ctx->pc = 0x2eeab4u;
    // NOP
    // 0x2eeab8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2eeab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2eeabc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2eeabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2eeac0:
    // 0x2eeac0: 0x8e630f48  lw          $v1, 0xF48($s3)
    ctx->pc = 0x2eeac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3912)));
    // 0x2eeac4: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x2eeac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eeac8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2EEAC8u;
    {
        const bool branch_taken_0x2eeac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eeac8) {
            ctx->pc = 0x2EEA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eea80;
        }
    }
    ctx->pc = 0x2EEAD0u;
label_2eead0:
    // 0x2eead0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2eead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2eead4:
    // 0x2eead4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eead4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eead8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eead8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eeadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eeadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eeae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eeae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eeae4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEAE4u;
            // 0x2eeae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEAECu;
}
