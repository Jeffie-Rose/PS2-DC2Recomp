#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawGlidCheck__11CDngFreeMapFP9GLID_INFO
// Address: 0x1ebe40 - 0x1ebf70
void DrawGlidCheck__11CDngFreeMapFP9GLID_INFO_0x1ebe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawGlidCheck__11CDngFreeMapFP9GLID_INFO_0x1ebe40");
#endif

    switch (ctx->pc) {
        case 0x1ebe60u: goto label_1ebe60;
        default: break;
    }

    ctx->pc = 0x1ebe40u;

    // 0x1ebe40: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBE40u;
    {
        const bool branch_taken_0x1ebe40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE40u;
            // 0x1ebe44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe40) {
            ctx->pc = 0x1EBE50u;
            goto label_1ebe50;
        }
    }
    ctx->pc = 0x1EBE48u;
    // 0x1ebe48: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1EBE48u;
    {
        const bool branch_taken_0x1ebe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE48u;
            // 0x1ebe4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebe48) {
            ctx->pc = 0x1EBF68u;
            goto label_1ebf68;
        }
    }
    ctx->pc = 0x1EBE50u;
label_1ebe50:
    // 0x1ebe50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ebe50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ebe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe58: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ebe5c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ebe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebe60:
    // 0x1ebe60: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x1ebe60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ebe64: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x1ebe64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1ebe68: 0x1140003b  beqz        $t2, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EBE68u;
    {
        const bool branch_taken_0x1ebe68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe68) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBE70u;
    // 0x1ebe70: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ebe74: 0x14c00038  bnez        $a2, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EBE74u;
    {
        const bool branch_taken_0x1ebe74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe74) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBE7Cu;
    // 0x1ebe7c: 0x85460000  lh          $a2, 0x0($t2)
    ctx->pc = 0x1ebe7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ebe80: 0x14c90035  bne         $a2, $t1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EBE80u;
    {
        const bool branch_taken_0x1ebe80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        if (branch_taken_0x1ebe80) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBE88u;
    // 0x1ebe88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBE88u;
    {
        const bool branch_taken_0x1ebe88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe88) {
            ctx->pc = 0x1EBEA8u;
            goto label_1ebea8;
        }
    }
    ctx->pc = 0x1EBE90u;
    // 0x1ebe90: 0x85470004  lh          $a3, 0x4($t2)
    ctx->pc = 0x1ebe90u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1ebe94: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1ebe94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ebe98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ebe98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ebe9c: 0x14e60002  bne         $a3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBE9Cu;
    {
        const bool branch_taken_0x1ebe9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebe9c) {
            ctx->pc = 0x1EBEA8u;
            goto label_1ebea8;
        }
    }
    ctx->pc = 0x1EBEA4u;
    // 0x1ebea4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ebea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1ebea8:
    // 0x1ebea8: 0x14680007  bne         $v1, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBEA8u;
    {
        const bool branch_taken_0x1ebea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1ebea8) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBEB0u;
    // 0x1ebeb0: 0x85470002  lh          $a3, 0x2($t2)
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1ebeb4: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x1ebeb4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ebeb8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ebeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ebebc: 0x14e60002  bne         $a3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBEBCu;
    {
        const bool branch_taken_0x1ebebc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebebc) {
            ctx->pc = 0x1EBEC8u;
            goto label_1ebec8;
        }
    }
    ctx->pc = 0x1EBEC4u;
    // 0x1ebec4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1ebec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1ebec8:
    // 0x1ebec8: 0x8d47002c  lw          $a3, 0x2C($t2)
    ctx->pc = 0x1ebec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x1ebecc: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x1ebeccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x1ebed0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBED0u;
    {
        const bool branch_taken_0x1ebed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBED0u;
            // 0x1ebed4: 0x30e60008  andi        $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebed0) {
            ctx->pc = 0x1EBEE0u;
            goto label_1ebee0;
        }
    }
    ctx->pc = 0x1EBED8u;
    // 0x1ebed8: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EBED8u;
    {
        const bool branch_taken_0x1ebed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebed8) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBEE0u;
label_1ebee0:
    // 0x1ebee0: 0x91460065  lbu         $a2, 0x65($t2)
    ctx->pc = 0x1ebee0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 101)));
    // 0x1ebee4: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EBEE4u;
    {
        const bool branch_taken_0x1ebee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebee4) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBEECu;
    // 0x1ebeec: 0x854d0002  lh          $t5, 0x2($t2)
    ctx->pc = 0x1ebeecu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1ebef0: 0x84ac0002  lh          $t4, 0x2($a1)
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1ebef4: 0x15ac000c  bne         $t5, $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x1EBEF4u;
    {
        const bool branch_taken_0x1ebef4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 12));
        if (branch_taken_0x1ebef4) {
            ctx->pc = 0x1EBF28u;
            goto label_1ebf28;
        }
    }
    ctx->pc = 0x1EBEFCu;
    // 0x1ebefc: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ebf00: 0x854b0004  lh          $t3, 0x4($t2)
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1ebf04: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x1ebf04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1ebf08: 0x15660002  bne         $t3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBF08u;
    {
        const bool branch_taken_0x1ebf08 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebf08) {
            ctx->pc = 0x1EBF14u;
            goto label_1ebf14;
        }
    }
    ctx->pc = 0x1EBF10u;
    // 0x1ebf10: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1ebf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_1ebf14:
    // 0x1ebf14: 0x0  nop
    ctx->pc = 0x1ebf14u;
    // NOP
    // 0x1ebf18: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x1ebf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ebf1c: 0x15660002  bne         $t3, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBF1Cu;
    {
        const bool branch_taken_0x1ebf1c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebf1c) {
            ctx->pc = 0x1EBF28u;
            goto label_1ebf28;
        }
    }
    ctx->pc = 0x1EBF24u;
    // 0x1ebf24: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ebf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1ebf28:
    // 0x1ebf28: 0x85470004  lh          $a3, 0x4($t2)
    ctx->pc = 0x1ebf28u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1ebf2c: 0x84a60004  lh          $a2, 0x4($a1)
    ctx->pc = 0x1ebf2cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ebf30: 0x14e60009  bne         $a3, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EBF30u;
    {
        const bool branch_taken_0x1ebf30 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x1EBF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF30u;
            // 0x1ebf34: 0x2586ffff  addiu       $a2, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf30) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBF38u;
    // 0x1ebf38: 0x15a60002  bne         $t5, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBF38u;
    {
        const bool branch_taken_0x1ebf38 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebf38) {
            ctx->pc = 0x1EBF44u;
            goto label_1ebf44;
        }
    }
    ctx->pc = 0x1EBF40u;
    // 0x1ebf40: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1ebf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_1ebf44:
    // 0x1ebf44: 0x0  nop
    ctx->pc = 0x1ebf44u;
    // NOP
    // 0x1ebf48: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x1ebf48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1ebf4c: 0x15a60002  bne         $t5, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EBF4Cu;
    {
        const bool branch_taken_0x1ebf4c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ebf4c) {
            ctx->pc = 0x1EBF58u;
            goto label_1ebf58;
        }
    }
    ctx->pc = 0x1EBF54u;
    // 0x1ebf54: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x1ebf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_1ebf58:
    // 0x1ebf58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ebf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ebf5c: 0x28660004  slti        $a2, $v1, 0x4
    ctx->pc = 0x1ebf5cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ebf60: 0x14c0ffbf  bnez        $a2, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EBF60u;
    {
        const bool branch_taken_0x1ebf60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF60u;
            // 0x1ebf64: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf60) {
            ctx->pc = 0x1EBE60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ebe60;
        }
    }
    ctx->pc = 0x1EBF68u;
label_1ebf68:
    // 0x1ebf68: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBF70u;
}
