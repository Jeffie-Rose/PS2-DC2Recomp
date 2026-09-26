#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickupRandomItemCheckMax__FP22TRESURE_BOX_FLOOR_INFOi
// Address: 0x28df90 - 0x28e070
void PickupRandomItemCheckMax__FP22TRESURE_BOX_FLOOR_INFOi_0x28df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickupRandomItemCheckMax__FP22TRESURE_BOX_FLOOR_INFOi_0x28df90");
#endif

    switch (ctx->pc) {
        case 0x28dfc4u: goto label_28dfc4;
        case 0x28dfdcu: goto label_28dfdc;
        case 0x28e004u: goto label_28e004;
        default: break;
    }

    ctx->pc = 0x28df90u;

    // 0x28df90: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x28df90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x28df94: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x28df94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x28df98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x28df98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28df9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28df9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28dfa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dfa4: 0xa4800002  sh          $zero, 0x2($a0)
    ctx->pc = 0x28dfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x28dfa8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x28dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28dfac: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x28dfacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x28dfb0: 0x8c272208  lw          $a3, 0x2208($at)
    ctx->pc = 0x28dfb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8712)));
    // 0x28dfb4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x28dfb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28dfb8: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x28DFB8u;
    {
        const bool branch_taken_0x28dfb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFB8u;
            // 0x28dfbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfb8) {
            ctx->pc = 0x28E068u;
            goto label_28e068;
        }
    }
    ctx->pc = 0x28DFC0u;
    // 0x28dfc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28dfc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28dfc4:
    // 0x28dfc4: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x28dfc8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28dfc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x28dfcc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x28dfd0: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x28dfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x28dfd4: 0x8c29220c  lw          $t1, 0x220C($at)
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8716)));
    // 0x28dfd8: 0x0  nop
    ctx->pc = 0x28dfd8u;
    // NOP
label_28dfdc:
    // 0x28dfdc: 0x0  nop
    ctx->pc = 0x28dfdcu;
    // NOP
    // 0x28dfe0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28dfe4: 0x10690003  beq         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DFE4u;
    {
        const bool branch_taken_0x28dfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x28dfe4) {
            ctx->pc = 0x28DFF4u;
            goto label_28dff4;
        }
    }
    ctx->pc = 0x28DFECu;
    // 0x28dfec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DFECu;
    {
        const bool branch_taken_0x28dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFECu;
            // 0x28dff0: 0x24c60488  addiu       $a2, $a2, 0x488 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfec) {
            ctx->pc = 0x28DFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28dfdc;
        }
    }
    ctx->pc = 0x28DFF4u;
label_28dff4:
    // 0x28dff4: 0x0  nop
    ctx->pc = 0x28dff4u;
    // NOP
    // 0x28dff8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28dff8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dffc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28DFFCu;
    {
        const bool branch_taken_0x28dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFFCu;
            // 0x28e000: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dffc) {
            ctx->pc = 0x28E048u;
            goto label_28e048;
        }
    }
    ctx->pc = 0x28E004u;
label_28e004:
    // 0x28e004: 0x0  nop
    ctx->pc = 0x28e004u;
    // NOP
    // 0x28e008: 0xca1821  addu        $v1, $a2, $t2
    ctx->pc = 0x28e008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x28e00c: 0x8c6c000c  lw          $t4, 0xC($v1)
    ctx->pc = 0x28e00cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28e010: 0x246d000c  addiu       $t5, $v1, 0xC
    ctx->pc = 0x28e010u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28e014: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x28e014u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28e018: 0x6c082a  slt         $at, $v1, $t4
    ctx->pc = 0x28e018u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x28e01c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E01Cu;
    {
        const bool branch_taken_0x28e01c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e01c) {
            ctx->pc = 0x28E028u;
            goto label_28e028;
        }
    }
    ctx->pc = 0x28E024u;
    // 0x28e024: 0xa48c0000  sh          $t4, 0x0($a0)
    ctx->pc = 0x28e024u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 12));
label_28e028:
    // 0x28e028: 0x8dac0000  lw          $t4, 0x0($t5)
    ctx->pc = 0x28e028u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x28e02c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x28e02cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x28e030: 0x183082a  slt         $at, $t4, $v1
    ctx->pc = 0x28e030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e034: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E034u;
    {
        const bool branch_taken_0x28e034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e034) {
            ctx->pc = 0x28E040u;
            goto label_28e040;
        }
    }
    ctx->pc = 0x28E03Cu;
    // 0x28e03c: 0xa48c0002  sh          $t4, 0x2($a0)
    ctx->pc = 0x28e03cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 12));
label_28e040:
    // 0x28e040: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
    // 0x28e044: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_28e048:
    // 0x28e048: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28e04c: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x28e04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28e050: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28E050u;
    {
        const bool branch_taken_0x28e050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e050) {
            ctx->pc = 0x28E004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e004;
        }
    }
    ctx->pc = 0x28E058u;
    // 0x28e058: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x28e058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x28e05c: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x28e05cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28e060: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x28E060u;
    {
        const bool branch_taken_0x28e060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E060u;
            // 0x28e064: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e060) {
            ctx->pc = 0x28DFC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28dfc4;
        }
    }
    ctx->pc = 0x28E068u;
label_28e068:
    // 0x28e068: 0x3e00008  jr          $ra
    ctx->pc = 0x28E068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E070u;
}
