#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNameRegistFontKanjiList__FiPc
// Address: 0x30ac70 - 0x30ad3c
void GetNameRegistFontKanjiList__FiPc_0x30ac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNameRegistFontKanjiList__FiPc_0x30ac70");
#endif

    switch (ctx->pc) {
        case 0x30ac84u: goto label_30ac84;
        case 0x30acccu: goto label_30accc;
        default: break;
    }

    ctx->pc = 0x30ac70u;

    // 0x30ac70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ac70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ac74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30ac78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30ac80: 0x2463def0  addiu       $v1, $v1, -0x2110
    ctx->pc = 0x30ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958832));
label_30ac84:
    // 0x30ac84: 0x14c4000e  bne         $a2, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30AC84u;
    {
        const bool branch_taken_0x30ac84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x30AC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AC84u;
            // 0x30ac88: 0x691021  addu        $v0, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac84) {
            ctx->pc = 0x30ACC0u;
            goto label_30acc0;
        }
    }
    ctx->pc = 0x30AC8Cu;
    // 0x30ac8c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30ac90: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x30ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x30ac94: 0x2442e1d0  addiu       $v0, $v0, -0x1E30
    ctx->pc = 0x30ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959568));
    // 0x30ac98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x30ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ac9c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x30ac9cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30aca0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x30aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x30aca4: 0x2442e1d1  addiu       $v0, $v0, -0x1E2F
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959569));
    // 0x30aca8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30acac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30acb0: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x30acb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30acb4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x30acb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30acb8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30ACB8u;
    {
        const bool branch_taken_0x30acb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ACB8u;
            // 0x30acbc: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acb8) {
            ctx->pc = 0x30AD34u;
            goto label_30ad34;
        }
    }
    ctx->pc = 0x30ACC0u;
label_30acc0:
    // 0x30acc0: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x30acc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x30acc4: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x30ACC4u;
    {
        const bool branch_taken_0x30acc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ACC4u;
            // 0x30acc8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acc4) {
            ctx->pc = 0x30ACFCu;
            goto label_30acfc;
        }
    }
    ctx->pc = 0x30ACCCu;
label_30accc:
    // 0x30accc: 0x0  nop
    ctx->pc = 0x30acccu;
    // NOP
    // 0x30acd0: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30ACD0u;
    {
        const bool branch_taken_0x30acd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x30acd0) {
            ctx->pc = 0x30ACF0u;
            goto label_30acf0;
        }
    }
    ctx->pc = 0x30ACD8u;
    // 0x30acd8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x30acd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30acdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30acdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ace0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x30ace0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30ace4: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x30ace4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x30ace8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x30ACE8u;
    {
        const bool branch_taken_0x30ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ACE8u;
            // 0x30acec: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ace8) {
            ctx->pc = 0x30AD34u;
            goto label_30ad34;
        }
    }
    ctx->pc = 0x30ACF0u;
label_30acf0:
    // 0x30acf0: 0x8d080004  lw          $t0, 0x4($t0)
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x30acf4: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x30ACF4u;
    {
        const bool branch_taken_0x30acf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ACF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30ACF4u;
            // 0x30acf8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acf4) {
            ctx->pc = 0x30ACCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30accc;
        }
    }
    ctx->pc = 0x30ACFCu;
label_30acfc:
    // 0x30acfc: 0x0  nop
    ctx->pc = 0x30acfcu;
    // NOP
    // 0x30ad00: 0x14c40006  bne         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30AD00u;
    {
        const bool branch_taken_0x30ad00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x30AD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD00u;
            // 0x30ad04: 0x2402ff81  addiu       $v0, $zero, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad00) {
            ctx->pc = 0x30AD1Cu;
            goto label_30ad1c;
        }
    }
    ctx->pc = 0x30AD08u;
    // 0x30ad08: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x30ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ad0c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x30ad0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30ad10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30ad14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30AD14u;
    {
        const bool branch_taken_0x30ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD14u;
            // 0x30ad18: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad14) {
            ctx->pc = 0x30AD34u;
            goto label_30ad34;
        }
    }
    ctx->pc = 0x30AD1Cu;
label_30ad1c:
    // 0x30ad1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x30ad1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30ad20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30ad20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30ad24: 0x28e2002c  slti        $v0, $a3, 0x2C
    ctx->pc = 0x30ad24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)44) ? 1 : 0);
    // 0x30ad28: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x30AD28u;
    {
        const bool branch_taken_0x30ad28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30AD28u;
            // 0x30ad2c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad28) {
            ctx->pc = 0x30AC84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ac84;
        }
    }
    ctx->pc = 0x30AD30u;
    // 0x30ad30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30ad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30ad34:
    // 0x30ad34: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30AD3Cu;
}
