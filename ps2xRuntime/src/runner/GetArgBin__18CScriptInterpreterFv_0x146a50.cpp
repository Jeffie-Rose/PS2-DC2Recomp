#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArgBin__18CScriptInterpreterFv
// Address: 0x146a50 - 0x146c6c
void GetArgBin__18CScriptInterpreterFv_0x146a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArgBin__18CScriptInterpreterFv_0x146a50");
#endif

    switch (ctx->pc) {
        case 0x146aa4u: goto label_146aa4;
        case 0x146b58u: goto label_146b58;
        case 0x146bf4u: goto label_146bf4;
        case 0x146c3cu: goto label_146c3c;
        default: break;
    }

    ctx->pc = 0x146a50u;

    // 0x146a50: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x146a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x146a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x146a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146a60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x146a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146a68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x146a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146a6c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x146a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x146a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146a74: 0x84700000  lh          $s0, 0x0($v1)
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146a78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x146a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x146a7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146A7Cu;
    {
        const bool branch_taken_0x146a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A7Cu;
            // 0x146a80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a7c) {
            ctx->pc = 0x146A8Cu;
            goto label_146a8c;
        }
    }
    ctx->pc = 0x146A84u;
    // 0x146a84: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x146A84u;
    {
        const bool branch_taken_0x146a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A84u;
            // 0x146a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a84) {
            ctx->pc = 0x146C54u;
            goto label_146c54;
        }
    }
    ctx->pc = 0x146A8Cu;
label_146a8c:
    // 0x146a8c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x146a8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x146a90: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x146A90u;
    {
        const bool branch_taken_0x146a90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x146A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A90u;
            // 0x146a94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a90) {
            ctx->pc = 0x146B18u;
            goto label_146b18;
        }
    }
    ctx->pc = 0x146A98u;
    // 0x146a98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146a9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146aa0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x146aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_146aa4:
    // 0x146aa4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146aa8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x146aac: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x146aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x146ab0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x146ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146ab4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146ab8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x146ab8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146abc: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x146ABCu;
    {
        const bool branch_taken_0x146abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x146abc) {
            ctx->pc = 0x146AFCu;
            goto label_146afc;
        }
    }
    ctx->pc = 0x146AC4u;
    // 0x146ac4: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146AC4u;
    {
        const bool branch_taken_0x146ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x146ac4) {
            ctx->pc = 0x146AECu;
            goto label_146aec;
        }
    }
    ctx->pc = 0x146ACCu;
    // 0x146acc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146ACCu;
    {
        const bool branch_taken_0x146acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x146acc) {
            ctx->pc = 0x146ADCu;
            goto label_146adc;
        }
    }
    ctx->pc = 0x146AD4u;
    // 0x146ad4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x146AD4u;
    {
        const bool branch_taken_0x146ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ad4) {
            ctx->pc = 0x146B08u;
            goto label_146b08;
        }
    }
    ctx->pc = 0x146ADCu;
label_146adc:
    // 0x146adc: 0x0  nop
    ctx->pc = 0x146adcu;
    // NOP
    // 0x146ae0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x146ae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146AE4u;
    {
        const bool branch_taken_0x146ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AE4u;
            // 0x146ae8: 0xa0430040  sb          $v1, 0x40($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ae4) {
            ctx->pc = 0x146B08u;
            goto label_146b08;
        }
    }
    ctx->pc = 0x146AECu;
label_146aec:
    // 0x146aec: 0x0  nop
    ctx->pc = 0x146aecu;
    // NOP
    // 0x146af0: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x146af4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146AF4u;
    {
        const bool branch_taken_0x146af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AF4u;
            // 0x146af8: 0xa0440040  sb          $a0, 0x40($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146af4) {
            ctx->pc = 0x146B08u;
            goto label_146b08;
        }
    }
    ctx->pc = 0x146AFCu;
label_146afc:
    // 0x146afc: 0x0  nop
    ctx->pc = 0x146afcu;
    // NOP
    // 0x146b00: 0xfd1021  addu        $v0, $a3, $sp
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x146b04: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x146b04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
label_146b08:
    // 0x146b08: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x146b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x146b0c: 0xf0102a  slt         $v0, $a3, $s0
    ctx->pc = 0x146b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x146b10: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x146B10u;
    {
        const bool branch_taken_0x146b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146b10) {
            ctx->pc = 0x146AA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146aa4;
        }
    }
    ctx->pc = 0x146B18u;
label_146b18:
    // 0x146b18: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146b1c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146B1Cu;
    {
        const bool branch_taken_0x146b1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x146B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B1Cu;
            // 0x146b20: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b1c) {
            ctx->pc = 0x146B30u;
            goto label_146b30;
        }
    }
    ctx->pc = 0x146B24u;
    // 0x146b24: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146B24u;
    {
        const bool branch_taken_0x146b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b24) {
            ctx->pc = 0x146B30u;
            goto label_146b30;
        }
    }
    ctx->pc = 0x146B2Cu;
    // 0x146b2c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x146b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_146b30:
    // 0x146b30: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146B30u;
    {
        const bool branch_taken_0x146b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B30u;
            // 0x146b34: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b30) {
            ctx->pc = 0x146B4Cu;
            goto label_146b4c;
        }
    }
    ctx->pc = 0x146B38u;
    // 0x146b38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146b3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x146b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146b40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x146b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146b48: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x146b48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_146b4c:
    // 0x146b4c: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x146B4Cu;
    {
        const bool branch_taken_0x146b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B4Cu;
            // 0x146b50: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b4c) {
            ctx->pc = 0x146C4Cu;
            goto label_146c4c;
        }
    }
    ctx->pc = 0x146B54u;
    // 0x146b54: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_146b58:
    // 0x146b58: 0x80420040  lb          $v0, 0x40($v0)
    ctx->pc = 0x146b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x146b5c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x146b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x146b60: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x146b64: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x146B64u;
    {
        const bool branch_taken_0x146b64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B64u;
            // 0x146b68: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b64) {
            ctx->pc = 0x146BD4u;
            goto label_146bd4;
        }
    }
    ctx->pc = 0x146B6Cu;
    // 0x146b6c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x146B6Cu;
    {
        const bool branch_taken_0x146b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B6Cu;
            // 0x146b70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b6c) {
            ctx->pc = 0x146BACu;
            goto label_146bac;
        }
    }
    ctx->pc = 0x146B74u;
    // 0x146b74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146B74u;
    {
        const bool branch_taken_0x146b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146b74) {
            ctx->pc = 0x146B84u;
            goto label_146b84;
        }
    }
    ctx->pc = 0x146B7Cu;
    // 0x146b7c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x146B7Cu;
    {
        const bool branch_taken_0x146b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b7c) {
            ctx->pc = 0x146C2Cu;
            goto label_146c2c;
        }
    }
    ctx->pc = 0x146B84u;
label_146b84:
    // 0x146b84: 0x0  nop
    ctx->pc = 0x146b84u;
    // NOP
    // 0x146b88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x146b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146b8c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146b90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146b94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146b98: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x146b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    // 0x146b9c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146ba0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x146ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146ba4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x146BA4u;
    {
        const bool branch_taken_0x146ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BA4u;
            // 0x146ba8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ba4) {
            ctx->pc = 0x146C2Cu;
            goto label_146c2c;
        }
    }
    ctx->pc = 0x146BACu;
label_146bac:
    // 0x146bac: 0x0  nop
    ctx->pc = 0x146bacu;
    // NOP
    // 0x146bb0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x146bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146bb4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146bb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x146bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146bbc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x146bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146bc0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x146bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x146bc4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146bc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x146bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x146bcc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x146BCCu;
    {
        const bool branch_taken_0x146bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BCCu;
            // 0x146bd0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bcc) {
            ctx->pc = 0x146C2Cu;
            goto label_146c2c;
        }
    }
    ctx->pc = 0x146BD4u;
label_146bd4:
    // 0x146bd4: 0x0  nop
    ctx->pc = 0x146bd4u;
    // NOP
    // 0x146bd8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146bdc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146be0: 0x27a4014c  addiu       $a0, $sp, 0x14C
    ctx->pc = 0x146be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
    // 0x146be4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x146be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146be8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146bec: 0xc04a422  jal         func_129088
    ctx->pc = 0x146BECu;
    SET_GPR_U32(ctx, 31, 0x146BF4u);
    ctx->pc = 0x146BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146BECu;
            // 0x146bf0: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BF4u; }
        if (ctx->pc != 0x146BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146BF4u; }
        if (ctx->pc != 0x146BF4u) { return; }
    }
    ctx->pc = 0x146BF4u;
label_146bf4:
    // 0x146bf4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x146bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146bf8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146BF8u;
    {
        const bool branch_taken_0x146bf8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x146BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BF8u;
            // 0x146bfc: 0x30640003  andi        $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bf8) {
            ctx->pc = 0x146C0Cu;
            goto label_146c0c;
        }
    }
    ctx->pc = 0x146C00u;
    // 0x146c00: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c00) {
            ctx->pc = 0x146C0Cu;
            goto label_146c0c;
        }
    }
    ctx->pc = 0x146C08u;
    // 0x146c08: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x146c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_146c0c:
    // 0x146c0c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146C0Cu;
    {
        const bool branch_taken_0x146c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C0Cu;
            // 0x146c10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c0c) {
            ctx->pc = 0x146C1Cu;
            goto label_146c1c;
        }
    }
    ctx->pc = 0x146C14u;
    // 0x146c14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x146c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x146c18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x146c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_146c1c:
    // 0x146c1c: 0x0  nop
    ctx->pc = 0x146c1cu;
    // NOP
    // 0x146c20: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x146c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x146c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146c28: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x146c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_146c2c:
    // 0x146c2c: 0x0  nop
    ctx->pc = 0x146c2cu;
    // NOP
    // 0x146c30: 0xdfa50148  ld          $a1, 0x148($sp)
    ctx->pc = 0x146c30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x146c34: 0xc051940  jal         func_146500
    ctx->pc = 0x146C34u;
    SET_GPR_U32(ctx, 31, 0x146C3Cu);
    ctx->pc = 0x146C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C34u;
            // 0x146c38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146500u;
    if (runtime->hasFunction(0x146500u)) {
        auto targetFn = runtime->lookupFunction(0x146500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C3Cu; }
        if (ctx->pc != 0x146C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PushStack__18CScriptInterpreterF9SPI_STACK_0x146500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C3Cu; }
        if (ctx->pc != 0x146C3Cu) { return; }
    }
    ctx->pc = 0x146C3Cu;
label_146c3c:
    // 0x146c3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x146c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x146c40: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x146c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x146c44: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x146C44u;
    {
        const bool branch_taken_0x146c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C44u;
            // 0x146c48: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c44) {
            ctx->pc = 0x146B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146b58;
        }
    }
    ctx->pc = 0x146C4Cu;
label_146c4c:
    // 0x146c4c: 0x0  nop
    ctx->pc = 0x146c4cu;
    // NOP
    // 0x146c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146c54:
    // 0x146c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146c64: 0x3e00008  jr          $ra
    ctx->pc = 0x146C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C64u;
            // 0x146c68: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x146C6Cu;
}
