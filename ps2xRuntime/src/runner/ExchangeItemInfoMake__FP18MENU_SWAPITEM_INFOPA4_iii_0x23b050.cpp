#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii
// Address: 0x23b050 - 0x23b15c
void ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050");
#endif

    ctx->pc = 0x23b050u;

    // 0x23b050: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x23b050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b058: 0xaca80010  sw          $t0, 0x10($a1)
    ctx->pc = 0x23b058u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 8));
    // 0x23b05c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x23b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x23b060: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x23b060u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x23b064: 0x14c00030  bnez        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x23B064u;
    {
        const bool branch_taken_0x23b064 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B064u;
            // 0x23b068: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b064) {
            ctx->pc = 0x23B128u;
            goto label_23b128;
        }
    }
    ctx->pc = 0x23B06Cu;
    // 0x23b06c: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x23b06cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23b070: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B070u;
    {
        const bool branch_taken_0x23b070 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B070u;
            // 0x23b074: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b070) {
            ctx->pc = 0x23B088u;
            goto label_23b088;
        }
    }
    ctx->pc = 0x23B078u;
    // 0x23b078: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B078u;
    {
        const bool branch_taken_0x23b078 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b078) {
            ctx->pc = 0x23B088u;
            goto label_23b088;
        }
    }
    ctx->pc = 0x23B080u;
    // 0x23b080: 0x14c8001b  bne         $a2, $t0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23B080u;
    {
        const bool branch_taken_0x23b080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x23B084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B080u;
            // 0x23b084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b080) {
            ctx->pc = 0x23B0F0u;
            goto label_23b0f0;
        }
    }
    ctx->pc = 0x23B088u;
label_23b088:
    // 0x23b088: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x23B088u;
    {
        const bool branch_taken_0x23b088 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b088) {
            ctx->pc = 0x23B0ECu;
            goto label_23b0ec;
        }
    }
    ctx->pc = 0x23B090u;
    // 0x23b090: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x23b090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x23b094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b098: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x23b09c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x23b0a0: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x23b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x23b0a4: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23b0a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0B4u;
            goto label_23b0b4;
        }
    }
    ctx->pc = 0x23B0B0u;
    // 0x23b0b0: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x23b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
label_23b0b4:
    // 0x23b0b4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23b0b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b0bc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x23b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x23b0c0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23b0c4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23B0C4u;
    {
        const bool branch_taken_0x23b0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0C4u;
            // 0x23b0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c4) {
            ctx->pc = 0x23B0E4u;
            goto label_23b0e4;
        }
    }
    ctx->pc = 0x23B0CCu;
    // 0x23b0cc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23b0ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23b0d0: 0x27828358  addiu       $v0, $gp, -0x7CA8
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
    // 0x23b0d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b0d8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23b0dc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x23b0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x23b0e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b0e4:
    // 0x23b0e4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23B0E4u;
    {
        const bool branch_taken_0x23b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b0e4) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B0ECu;
label_23b0ec:
    // 0x23b0ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23b0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23b0f0:
    // 0x23b0f0: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B0F0u;
    {
        const bool branch_taken_0x23b0f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x23B0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0F0u;
            // 0x23b0f4: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0f0) {
            ctx->pc = 0x23B100u;
            goto label_23b100;
        }
    }
    ctx->pc = 0x23B0F8u;
    // 0x23b0f8: 0x14c30006  bne         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B0F8u;
    {
        const bool branch_taken_0x23b0f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B0F8u;
            // 0x23b0fc: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0f8) {
            ctx->pc = 0x23B114u;
            goto label_23b114;
        }
    }
    ctx->pc = 0x23B100u;
label_23b100:
    // 0x23b100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b104: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x23b104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x23b108: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23b10c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23B10Cu;
    {
        const bool branch_taken_0x23b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B10Cu;
            // 0x23b110: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b10c) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B114u;
label_23b114:
    // 0x23b114: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x23B114u;
    {
        const bool branch_taken_0x23b114 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x23B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B114u;
            // 0x23b118: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b114) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B11Cu;
    // 0x23b11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b120: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23B120u;
    {
        const bool branch_taken_0x23b120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B120u;
            // 0x23b124: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b120) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B128u;
label_23b128:
    // 0x23b128: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b12c: 0x14c70009  bne         $a2, $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B12Cu;
    {
        const bool branch_taken_0x23b12c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        if (branch_taken_0x23b12c) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B134u;
    // 0x23b134: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23b138: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23b138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23b13c: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23B13Cu;
    {
        const bool branch_taken_0x23b13c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x23b13c) {
            ctx->pc = 0x23B154u;
            goto label_23b154;
        }
    }
    ctx->pc = 0x23B144u;
    // 0x23b144: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x23b144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x23b148: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x23b148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b14c: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23b150: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x23b150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_23b154:
    // 0x23b154: 0x3e00008  jr          $ra
    ctx->pc = 0x23B154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23B15Cu;
}
