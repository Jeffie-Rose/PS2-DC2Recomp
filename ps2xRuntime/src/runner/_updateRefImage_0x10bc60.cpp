#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _updateRefImage
// Address: 0x10bc60 - 0x10bf14
void _updateRefImage_0x10bc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_updateRefImage_0x10bc60");
#endif

    ctx->pc = 0x10bc60u;

    // 0x10bc60: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10bc60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc64: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x10bc64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10bc68: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x10bc68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x10bc6c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10bc70: 0x8cea0150  lw          $t2, 0x150($a3)
    ctx->pc = 0x10bc70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x10bc74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10bc74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc78: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x10bc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x10bc7c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x10bc7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc80: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x10bc80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bc84: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x10BC84u;
    {
        const bool branch_taken_0x10bc84 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        ctx->pc = 0x10BC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BC84u;
            // 0x10bc88: 0x182580a  movz        $t3, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc84) {
            ctx->pc = 0x10BD98u;
            goto label_10bd98;
        }
    }
    ctx->pc = 0x10BC8Cu;
    // 0x10bc8c: 0x8ce200a0  lw          $v0, 0xA0($a3)
    ctx->pc = 0x10bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x10bc90: 0x8ce300a4  lw          $v1, 0xA4($a3)
    ctx->pc = 0x10bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x10bc94: 0x8ce501c4  lw          $a1, 0x1C4($a3)
    ctx->pc = 0x10bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 452)));
    // 0x10bc98: 0x8ce601d4  lw          $a2, 0x1D4($a3)
    ctx->pc = 0x10bc98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 468)));
    // 0x10bc9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10bca0: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x10bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x10bca4: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x10bca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x10bca8: 0xace501c0  sw          $a1, 0x1C0($a3)
    ctx->pc = 0x10bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 5));
    // 0x10bcac: 0xace601d0  sw          $a2, 0x1D0($a3)
    ctx->pc = 0x10bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 6));
    // 0x10bcb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BCB0u;
    {
        const bool branch_taken_0x10bcb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCB0u;
            // 0x10bcb4: 0xace401e0  sw          $a0, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bcb0) {
            ctx->pc = 0x10BCC4u;
            goto label_10bcc4;
        }
    }
    ctx->pc = 0x10BCB8u;
    // 0x10bcb8: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x10bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
    // 0x10bcbc: 0xace001a8  sw          $zero, 0x1A8($a3)
    ctx->pc = 0x10bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
    // 0x10bcc0: 0xace001a4  sw          $zero, 0x1A4($a3)
    ctx->pc = 0x10bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 420), GPR_U32(ctx, 0));
label_10bcc4:
    // 0x10bcc4: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x10bcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
    // 0x10bcc8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BCC8u;
    {
        const bool branch_taken_0x10bcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bcc8) {
            ctx->pc = 0x10BCCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCC8u;
            // 0x10bccc: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BCE0u;
            goto label_10bce0;
        }
    }
    ctx->pc = 0x10BCD0u;
    // 0x10bcd0: 0x8ce201a8  lw          $v0, 0x1A8($a3)
    ctx->pc = 0x10bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 424)));
    // 0x10bcd4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x10BCD4u;
    {
        const bool branch_taken_0x10bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bcd4) {
            ctx->pc = 0x10BCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCD4u;
            // 0x10bcd8: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD08u;
            goto label_10bd08;
        }
    }
    ctx->pc = 0x10BCDCu;
    // 0x10bcdc: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x10bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_10bce0:
    // 0x10bce0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BCE0u;
    {
        const bool branch_taken_0x10bce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bce0) {
            ctx->pc = 0x10BCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BCE0u;
            // 0x10bce4: 0xace000e8  sw          $zero, 0xE8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD08u;
            goto label_10bd08;
        }
    }
    ctx->pc = 0x10BCE8u;
    // 0x10bce8: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10bcec: 0x8ce401c8  lw          $a0, 0x1C8($a3)
    ctx->pc = 0x10bcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10bcf0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x10bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x10bcf4: 0x8ce301d8  lw          $v1, 0x1D8($a3)
    ctx->pc = 0x10bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10bcf8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x10bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x10bcfc: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x10bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x10bd00: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x10bd00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x10bd04: 0xace000e8  sw          $zero, 0xE8($a3)
    ctx->pc = 0x10bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 232), GPR_U32(ctx, 0));
label_10bd08:
    // 0x10bd08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bd0c: 0x1522000b  bne         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10BD0Cu;
    {
        const bool branch_taken_0x10bd0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD0Cu;
            // 0x10bd10: 0xace001a8  sw          $zero, 0x1A8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 424), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd0c) {
            ctx->pc = 0x10BD3Cu;
            goto label_10bd3c;
        }
    }
    ctx->pc = 0x10BD14u;
    // 0x10bd14: 0x8ce301b8  lw          $v1, 0x1B8($a3)
    ctx->pc = 0x10bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10bd18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd1c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10bd20: 0x50440018  beql        $v0, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10BD20u;
    {
        const bool branch_taken_0x10bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x10bd20) {
            ctx->pc = 0x10BD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD20u;
            // 0x10bd24: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD84u;
            goto label_10bd84;
        }
    }
    ctx->pc = 0x10BD28u;
    // 0x10bd28: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x10bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
    // 0x10bd2c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x10BD2Cu;
    {
        const bool branch_taken_0x10bd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD2Cu;
            // 0x10bd30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd2c) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BD34u;
    // 0x10bd34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x10BD34u;
    {
        const bool branch_taken_0x10bd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD34u;
            // 0x10bd38: 0x8ce301bc  lw          $v1, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd34) {
            ctx->pc = 0x10BD84u;
            goto label_10bd84;
        }
    }
    ctx->pc = 0x10BD3Cu;
label_10bd3c:
    // 0x10bd3c: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10bd40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd44: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10bd48: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BD48u;
    {
        const bool branch_taken_0x10bd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10bd48) {
            ctx->pc = 0x10BD4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD48u;
            // 0x10bd4c: 0x8ce201a4  lw          $v0, 0x1A4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD64u;
            goto label_10bd64;
        }
    }
    ctx->pc = 0x10BD50u;
    // 0x10bd50: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10bd54: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10bd58: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BD58u;
    {
        const bool branch_taken_0x10bd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10bd58) {
            ctx->pc = 0x10BD5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD58u;
            // 0x10bd5c: 0x8ce201cc  lw          $v0, 0x1CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD70u;
            goto label_10bd70;
        }
    }
    ctx->pc = 0x10BD60u;
    // 0x10bd60: 0x8ce201a4  lw          $v0, 0x1A4($a3)
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_10bd64:
    // 0x10bd64: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x10BD64u;
    {
        const bool branch_taken_0x10bd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD64u;
            // 0x10bd68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd64) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BD6Cu;
    // 0x10bd6c: 0x8ce201cc  lw          $v0, 0x1CC($a3)
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
label_10bd70:
    // 0x10bd70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd74: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10bd78: 0x14830035  bne         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x10BD78u;
    {
        const bool branch_taken_0x10bd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD78u;
            // 0x10bd7c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd78) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BD80u;
    // 0x10bd80: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x10bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
label_10bd84:
    // 0x10bd84: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x10bd84u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd88: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x10bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x10bd8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10bd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10bd90: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x10BD90u;
    {
        const bool branch_taken_0x10bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD90u;
            // 0x10bd94: 0x2680b  movn        $t5, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd90) {
            ctx->pc = 0x10BE4Cu;
            goto label_10be4c;
        }
    }
    ctx->pc = 0x10BD98u;
label_10bd98:
    // 0x10bd98: 0x54a0000e  bnel        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10BD98u;
    {
        const bool branch_taken_0x10bd98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bd98) {
            ctx->pc = 0x10BD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD98u;
            // 0x10bd9c: 0x8ce201bc  lw          $v0, 0x1BC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BDD4u;
            goto label_10bdd4;
        }
    }
    ctx->pc = 0x10BDA0u;
    // 0x10bda0: 0x8ce601b8  lw          $a2, 0x1B8($a3)
    ctx->pc = 0x10bda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10bda4: 0x8ce401bc  lw          $a0, 0x1BC($a3)
    ctx->pc = 0x10bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
    // 0x10bda8: 0xace601bc  sw          $a2, 0x1BC($a3)
    ctx->pc = 0x10bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 444), GPR_U32(ctx, 6));
    // 0x10bdac: 0x8ce601c8  lw          $a2, 0x1C8($a3)
    ctx->pc = 0x10bdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
    // 0x10bdb0: 0x8ce301cc  lw          $v1, 0x1CC($a3)
    ctx->pc = 0x10bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x10bdb4: 0xace601cc  sw          $a2, 0x1CC($a3)
    ctx->pc = 0x10bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 460), GPR_U32(ctx, 6));
    // 0x10bdb8: 0x8ce601d8  lw          $a2, 0x1D8($a3)
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
    // 0x10bdbc: 0x8ce201dc  lw          $v0, 0x1DC($a3)
    ctx->pc = 0x10bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10bdc0: 0xace401b8  sw          $a0, 0x1B8($a3)
    ctx->pc = 0x10bdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 440), GPR_U32(ctx, 4));
    // 0x10bdc4: 0xace301c8  sw          $v1, 0x1C8($a3)
    ctx->pc = 0x10bdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 456), GPR_U32(ctx, 3));
    // 0x10bdc8: 0xace201d8  sw          $v0, 0x1D8($a3)
    ctx->pc = 0x10bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 472), GPR_U32(ctx, 2));
    // 0x10bdcc: 0xace601dc  sw          $a2, 0x1DC($a3)
    ctx->pc = 0x10bdccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 476), GPR_U32(ctx, 6));
    // 0x10bdd0: 0x8ce201bc  lw          $v0, 0x1BC($a3)
    ctx->pc = 0x10bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 444)));
label_10bdd4:
    // 0x10bdd4: 0x8ce401cc  lw          $a0, 0x1CC($a3)
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 460)));
    // 0x10bdd8: 0x8ce301dc  lw          $v1, 0x1DC($a3)
    ctx->pc = 0x10bdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 476)));
    // 0x10bddc: 0xace201c0  sw          $v0, 0x1C0($a3)
    ctx->pc = 0x10bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 448), GPR_U32(ctx, 2));
    // 0x10bde0: 0xace401d0  sw          $a0, 0x1D0($a3)
    ctx->pc = 0x10bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 464), GPR_U32(ctx, 4));
    // 0x10bde4: 0x152e0006  bne         $t1, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BDE4u;
    {
        const bool branch_taken_0x10bde4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x10BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDE4u;
            // 0x10bde8: 0xace301e0  sw          $v1, 0x1E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bde4) {
            ctx->pc = 0x10BE00u;
            goto label_10be00;
        }
    }
    ctx->pc = 0x10BDECu;
    // 0x10bdec: 0x554c0017  bnel        $t2, $t4, . + 4 + (0x17 << 2)
    ctx->pc = 0x10BDECu;
    {
        const bool branch_taken_0x10bdec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x10bdec) {
            ctx->pc = 0x10BDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDECu;
            // 0x10bdf0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BE4Cu;
            goto label_10be4c;
        }
    }
    ctx->pc = 0x10BDF4u;
    // 0x10bdf4: 0x8ce201b8  lw          $v0, 0x1B8($a3)
    ctx->pc = 0x10bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x10bdf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10BDF8u;
    {
        const bool branch_taken_0x10bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDF8u;
            // 0x10bdfc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdf8) {
            ctx->pc = 0x10BE3Cu;
            goto label_10be3c;
        }
    }
    ctx->pc = 0x10BE00u;
label_10be00:
    // 0x10be00: 0x39220001  xori        $v0, $t1, 0x1
    ctx->pc = 0x10be00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
    // 0x10be04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10be04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10be08: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x10be08u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x10be0c: 0x154c000e  bne         $t2, $t4, . + 4 + (0xE << 2)
    ctx->pc = 0x10BE0Cu;
    {
        const bool branch_taken_0x10be0c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x10BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE0Cu;
            // 0x10be10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be0c) {
            ctx->pc = 0x10BE48u;
            goto label_10be48;
        }
    }
    ctx->pc = 0x10BE14u;
    // 0x10be14: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BE14u;
    {
        const bool branch_taken_0x10be14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10be14) {
            ctx->pc = 0x10BE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE14u;
            // 0x10be18: 0x8ce201c8  lw          $v0, 0x1C8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BE2Cu;
            goto label_10be2c;
        }
    }
    ctx->pc = 0x10BE1Cu;
    // 0x10be1c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x10be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10be20: 0x5046000a  beql        $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10BE20u;
    {
        const bool branch_taken_0x10be20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x10be20) {
            ctx->pc = 0x10BE24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE20u;
            // 0x10be24: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BE4Cu;
            goto label_10be4c;
        }
    }
    ctx->pc = 0x10BE28u;
    // 0x10be28: 0x8ce201c8  lw          $v0, 0x1C8($a3)
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 456)));
label_10be2c:
    // 0x10be2c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10be30: 0x14860007  bne         $a0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BE30u;
    {
        const bool branch_taken_0x10be30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x10BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE30u;
            // 0x10be34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be30) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BE38u;
    // 0x10be38: 0x8ce201d8  lw          $v0, 0x1D8($a3)
    ctx->pc = 0x10be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 472)));
label_10be3c:
    // 0x10be3c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10be3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10be40: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE40u;
    {
        const bool branch_taken_0x10be40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE40u;
            // 0x10be44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be40) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BE48u;
label_10be48:
    // 0x10be48: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x10be48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10be4c:
    // 0x10be4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10be50:
    // 0x10be50: 0x1122000c  beq         $t1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10BE50u;
    {
        const bool branch_taken_0x10be50 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE50u;
            // 0x10be54: 0x29220003  slti        $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be50) {
            ctx->pc = 0x10BE84u;
            goto label_10be84;
        }
    }
    ctx->pc = 0x10BE58u;
    // 0x10be58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BE58u;
    {
        const bool branch_taken_0x10be58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE58u;
            // 0x10be5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be58) {
            ctx->pc = 0x10BE70u;
            goto label_10be70;
        }
    }
    ctx->pc = 0x10BE60u;
    // 0x10be60: 0x51220009  beql        $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BE60u;
    {
        const bool branch_taken_0x10be60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10be60) {
            ctx->pc = 0x10BE64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE60u;
            // 0x10be64: 0x8ce801d0  lw          $t0, 0x1D0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 464)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BE88u;
            goto label_10be88;
        }
    }
    ctx->pc = 0x10BE68u;
    // 0x10be68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10BE68u;
    {
        const bool branch_taken_0x10be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE68u;
            // 0x10be6c: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be68) {
            ctx->pc = 0x10BE8Cu;
            goto label_10be8c;
        }
    }
    ctx->pc = 0x10BE70u;
label_10be70:
    // 0x10be70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10be74: 0x51220004  beql        $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BE74u;
    {
        const bool branch_taken_0x10be74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x10be74) {
            ctx->pc = 0x10BE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE74u;
            // 0x10be78: 0x8ce801c0  lw          $t0, 0x1C0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BE88u;
            goto label_10be88;
        }
    }
    ctx->pc = 0x10BE7Cu;
    // 0x10be7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE7Cu;
    {
        const bool branch_taken_0x10be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE7Cu;
            // 0x10be80: 0xad000028  sw          $zero, 0x28($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be7c) {
            ctx->pc = 0x10BE8Cu;
            goto label_10be8c;
        }
    }
    ctx->pc = 0x10BE84u;
label_10be84:
    // 0x10be84: 0x8ce801e0  lw          $t0, 0x1E0($a3)
    ctx->pc = 0x10be84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 480)));
label_10be88:
    // 0x10be88: 0xad000028  sw          $zero, 0x28($t0)
    ctx->pc = 0x10be88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
label_10be8c:
    // 0x10be8c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x10be8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be90: 0xdce30828  ld          $v1, 0x828($a3)
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2088)));
    // 0x10be94: 0x8ce40150  lw          $a0, 0x150($a3)
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x10be98: 0xfd030018  sd          $v1, 0x18($t0)
    ctx->pc = 0x10be98u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 3));
    // 0x10be9c: 0xad04002c  sw          $a0, 0x2C($t0)
    ctx->pc = 0x10be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 4));
    // 0x10bea0: 0xdce30830  ld          $v1, 0x830($a3)
    ctx->pc = 0x10bea0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 2096)));
    // 0x10bea4: 0x8ce40174  lw          $a0, 0x174($a3)
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x10bea8: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x10bea8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x10beac: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x10beacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x10beb0: 0x8ce3013c  lw          $v1, 0x13C($a3)
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 316)));
    // 0x10beb4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x10beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x10beb8: 0x8ce40188  lw          $a0, 0x188($a3)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 392)));
    // 0x10bebc: 0xad040038  sw          $a0, 0x38($t0)
    ctx->pc = 0x10bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 4));
    // 0x10bec0: 0x8ce30178  lw          $v1, 0x178($a3)
    ctx->pc = 0x10bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x10bec4: 0xad03003c  sw          $v1, 0x3C($t0)
    ctx->pc = 0x10bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
    // 0x10bec8: 0x8ce40184  lw          $a0, 0x184($a3)
    ctx->pc = 0x10bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 388)));
    // 0x10becc: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x10beccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x10bed0: 0x8ce3018c  lw          $v1, 0x18C($a3)
    ctx->pc = 0x10bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 396)));
    // 0x10bed4: 0xad030044  sw          $v1, 0x44($t0)
    ctx->pc = 0x10bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 3));
    // 0x10bed8: 0x8ce40190  lw          $a0, 0x190($a3)
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 400)));
    // 0x10bedc: 0xad040048  sw          $a0, 0x48($t0)
    ctx->pc = 0x10bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 4));
    // 0x10bee0: 0x8ce30194  lw          $v1, 0x194($a3)
    ctx->pc = 0x10bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 404)));
    // 0x10bee4: 0xad03004c  sw          $v1, 0x4C($t0)
    ctx->pc = 0x10bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 3));
    // 0x10bee8: 0x8ce40198  lw          $a0, 0x198($a3)
    ctx->pc = 0x10bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 408)));
    // 0x10beec: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x10beecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x10bef0: 0x8ce3019c  lw          $v1, 0x19C($a3)
    ctx->pc = 0x10bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 412)));
    // 0x10bef4: 0xad030054  sw          $v1, 0x54($t0)
    ctx->pc = 0x10bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 3));
    // 0x10bef8: 0x8ce401a0  lw          $a0, 0x1A0($a3)
    ctx->pc = 0x10bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 416)));
    // 0x10befc: 0xad040058  sw          $a0, 0x58($t0)
    ctx->pc = 0x10befcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 4));
    // 0x10bf00: 0x8ce30148  lw          $v1, 0x148($a3)
    ctx->pc = 0x10bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x10bf04: 0xad03005c  sw          $v1, 0x5C($t0)
    ctx->pc = 0x10bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 3));
    // 0x10bf08: 0x8ce4014c  lw          $a0, 0x14C($a3)
    ctx->pc = 0x10bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 332)));
    // 0x10bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF0Cu;
            // 0x10bf10: 0xad040060  sw          $a0, 0x60($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10BF14u;
}
