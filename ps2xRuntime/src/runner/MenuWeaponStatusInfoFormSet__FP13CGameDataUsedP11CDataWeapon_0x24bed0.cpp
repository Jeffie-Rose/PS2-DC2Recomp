#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon
// Address: 0x24bed0 - 0x24c160
void MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon_0x24bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWeaponStatusInfoFormSet__FP13CGameDataUsedP11CDataWeapon_0x24bed0");
#endif

    switch (ctx->pc) {
        case 0x24bef0u: goto label_24bef0;
        case 0x24bfdcu: goto label_24bfdc;
        case 0x24c0e8u: goto label_24c0e8;
        default: break;
    }

    ctx->pc = 0x24bed0u;

    // 0x24bed0: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24bed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24bed4: 0x8c630188  lw          $v1, 0x188($v1)
    ctx->pc = 0x24bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x24bed8: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x24BED8u;
    {
        const bool branch_taken_0x24bed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BED8u;
            // 0x24bedc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bed8) {
            ctx->pc = 0x24C158u;
            goto label_24c158;
        }
    }
    ctx->pc = 0x24BEE0u;
    // 0x24bee0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24bee0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bee4: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x24bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x24bee8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x24bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24beec: 0x2463dac0  addiu       $v1, $v1, -0x2540
    ctx->pc = 0x24beecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957760));
label_24bef0:
    // 0x24bef0: 0x684821  addu        $t1, $v1, $t0
    ctx->pc = 0x24bef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x24bef4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x24bef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x24bef8: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x24bef8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24befc: 0x28ea0002  slti        $t2, $a3, 0x2
    ctx->pc = 0x24befcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24bf00: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x24bf00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x24bf04: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf04u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf08: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x24bf08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24bf0c: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf10: 0x8d2b0000  lw          $t3, 0x0($t1)
    ctx->pc = 0x24bf10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24bf14: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf14u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf18: 0x8d2b0004  lw          $t3, 0x4($t1)
    ctx->pc = 0x24bf18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24bf1c: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf20: 0x8d2b0004  lw          $t3, 0x4($t1)
    ctx->pc = 0x24bf20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24bf24: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf24u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf28: 0x8d2b0004  lw          $t3, 0x4($t1)
    ctx->pc = 0x24bf28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24bf2c: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf30: 0x8d2b0008  lw          $t3, 0x8($t1)
    ctx->pc = 0x24bf30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x24bf34: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf38: 0x8d2b0008  lw          $t3, 0x8($t1)
    ctx->pc = 0x24bf38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x24bf3c: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf3cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf40: 0x8d2b0008  lw          $t3, 0x8($t1)
    ctx->pc = 0x24bf40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x24bf44: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf44u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf48: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x24bf48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x24bf4c: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf50: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x24bf50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x24bf54: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf54u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf58: 0x8d2b000c  lw          $t3, 0xC($t1)
    ctx->pc = 0x24bf58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x24bf5c: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf60: 0x8d2b0010  lw          $t3, 0x10($t1)
    ctx->pc = 0x24bf60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x24bf64: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf68: 0x8d2b0010  lw          $t3, 0x10($t1)
    ctx->pc = 0x24bf68u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x24bf6c: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf70: 0x8d2b0010  lw          $t3, 0x10($t1)
    ctx->pc = 0x24bf70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x24bf74: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf78: 0x8d2b0014  lw          $t3, 0x14($t1)
    ctx->pc = 0x24bf78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x24bf7c: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf7cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf80: 0x8d2b0014  lw          $t3, 0x14($t1)
    ctx->pc = 0x24bf80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x24bf84: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf84u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf88: 0x8d2b0014  lw          $t3, 0x14($t1)
    ctx->pc = 0x24bf88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x24bf8c: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf90: 0x8d2b0018  lw          $t3, 0x18($t1)
    ctx->pc = 0x24bf90u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x24bf94: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bf94u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bf98: 0x8d2b0018  lw          $t3, 0x18($t1)
    ctx->pc = 0x24bf98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x24bf9c: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bfa0: 0x8d2b0018  lw          $t3, 0x18($t1)
    ctx->pc = 0x24bfa0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x24bfa4: 0xa1660009  sb          $a2, 0x9($t3)
    ctx->pc = 0x24bfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bfa8: 0x8d2b001c  lw          $t3, 0x1C($t1)
    ctx->pc = 0x24bfa8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x24bfac: 0xa1660007  sb          $a2, 0x7($t3)
    ctx->pc = 0x24bfacu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bfb0: 0x8d2b001c  lw          $t3, 0x1C($t1)
    ctx->pc = 0x24bfb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x24bfb4: 0xa1660008  sb          $a2, 0x8($t3)
    ctx->pc = 0x24bfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x24bfb8: 0x8d29001c  lw          $t1, 0x1C($t1)
    ctx->pc = 0x24bfb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x24bfbc: 0x1540ffcc  bnez        $t2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x24BFBCu;
    {
        const bool branch_taken_0x24bfbc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFBCu;
            // 0x24bfc0: 0xa1260009  sb          $a2, 0x9($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 9), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfbc) {
            ctx->pc = 0x24BEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bef0;
        }
    }
    ctx->pc = 0x24BFC4u;
    // 0x24bfc4: 0x28e1000a  slti        $at, $a3, 0xA
    ctx->pc = 0x24bfc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24bfc8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x24BFC8u;
    {
        const bool branch_taken_0x24bfc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24BFC8u;
            // 0x24bfcc: 0x75080  sll         $t2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bfc8) {
            ctx->pc = 0x24C008u;
            goto label_24c008;
        }
    }
    ctx->pc = 0x24BFD0u;
    // 0x24bfd0: 0x3c0801ed  lui         $t0, 0x1ED
    ctx->pc = 0x24bfd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)493 << 16));
    // 0x24bfd4: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x24bfd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x24bfd8: 0x2508dac0  addiu       $t0, $t0, -0x2540
    ctx->pc = 0x24bfd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957760));
label_24bfdc:
    // 0x24bfdc: 0x10a5821  addu        $t3, $t0, $t2
    ctx->pc = 0x24bfdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x24bfe0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24bfe4: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x24bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x24bfe8: 0x28e3000a  slti        $v1, $a3, 0xA
    ctx->pc = 0x24bfe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x24bfec: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x24bfecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x24bff0: 0xa0c90007  sb          $t1, 0x7($a2)
    ctx->pc = 0x24bff0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 9));
    // 0x24bff4: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x24bff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x24bff8: 0xa0c90008  sb          $t1, 0x8($a2)
    ctx->pc = 0x24bff8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 9));
    // 0x24bffc: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x24bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x24c000: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x24C000u;
    {
        const bool branch_taken_0x24c000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C000u;
            // 0x24c004: 0xa0c90009  sb          $t1, 0x9($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c000) {
            ctx->pc = 0x24BFDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24bfdc;
        }
    }
    ctx->pc = 0x24C008u;
label_24c008:
    // 0x24c008: 0x83839760  lb          $v1, -0x68A0($gp)
    ctx->pc = 0x24c008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940512)));
    // 0x24c00c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C00Cu;
    {
        const bool branch_taken_0x24c00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C00Cu;
            // 0x24c010: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c00c) {
            ctx->pc = 0x24C01Cu;
            goto label_24c01c;
        }
    }
    ctx->pc = 0x24C014u;
    // 0x24c014: 0xa380975c  sb          $zero, -0x68A4($gp)
    ctx->pc = 0x24c014u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940508), (uint8_t)GPR_U32(ctx, 0));
    // 0x24c018: 0xa3839760  sb          $v1, -0x68A0($gp)
    ctx->pc = 0x24c018u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940512), (uint8_t)GPR_U32(ctx, 3));
label_24c01c:
    // 0x24c01c: 0x8386975c  lb          $a2, -0x68A4($gp)
    ctx->pc = 0x24c01cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940508)));
    // 0x24c020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24c020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24c024: 0xa386975c  sb          $a2, -0x68A4($gp)
    ctx->pc = 0x24c024u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940508), (uint8_t)GPR_U32(ctx, 6));
    // 0x24c028: 0x8386975c  lb          $a2, -0x68A4($gp)
    ctx->pc = 0x24c028u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940508)));
    // 0x24c02c: 0x28c1001f  slti        $at, $a2, 0x1F
    ctx->pc = 0x24c02cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x24c030: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C030u;
    {
        const bool branch_taken_0x24c030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C030u;
            // 0x24c034: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c030) {
            ctx->pc = 0x24C03Cu;
            goto label_24c03c;
        }
    }
    ctx->pc = 0x24C038u;
    // 0x24c038: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x24c038u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_24c03c:
    // 0x24c03c: 0x28c1003d  slti        $at, $a2, 0x3D
    ctx->pc = 0x24c03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x24c040: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C040u;
    {
        const bool branch_taken_0x24c040 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c040) {
            ctx->pc = 0x24C04Cu;
            goto label_24c04c;
        }
    }
    ctx->pc = 0x24C048u;
    // 0x24c048: 0xa380975c  sb          $zero, -0x68A4($gp)
    ctx->pc = 0x24c048u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940508), (uint8_t)GPR_U32(ctx, 0));
label_24c04c:
    // 0x24c04c: 0x10a00041  beqz        $a1, . + 4 + (0x41 << 2)
    ctx->pc = 0x24C04Cu;
    {
        const bool branch_taken_0x24c04c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c04c) {
            ctx->pc = 0x24C154u;
            goto label_24c154;
        }
    }
    ctx->pc = 0x24C054u;
    // 0x24c054: 0x84a70004  lh          $a3, 0x4($a1)
    ctx->pc = 0x24c054u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24c058: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x24c058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24c05c: 0x84880022  lh          $t0, 0x22($a0)
    ctx->pc = 0x24c05cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x24c060: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x24c060u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c064: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x24c064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x24c068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24c068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24c06c: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x24c06cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x24c070: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x24c070u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c074: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x24c074u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24c078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24c078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24c07c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x24c07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24c080: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24c080u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c084: 0x0  nop
    ctx->pc = 0x24c084u;
    // NOP
    // 0x24c088: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x24C088u;
    {
        const bool branch_taken_0x24c088 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C088u;
            // 0x24c08c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c088) {
            ctx->pc = 0x24C0C4u;
            goto label_24c0c4;
        }
    }
    ctx->pc = 0x24C090u;
    // 0x24c090: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C090u;
    {
        const bool branch_taken_0x24c090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C090u;
            // 0x24c094: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c090) {
            ctx->pc = 0x24C0C0u;
            goto label_24c0c0;
        }
    }
    ctx->pc = 0x24C098u;
    // 0x24c098: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x24c098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x24c09c: 0x8c24dac0  lw          $a0, -0x2540($at)
    ctx->pc = 0x24c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957760)));
    // 0x24c0a0: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x24c0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x24c0a4: 0xa0880007  sb          $t0, 0x7($a0)
    ctx->pc = 0x24c0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 8));
    // 0x24c0a8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24c0ac: 0x8c24dac0  lw          $a0, -0x2540($at)
    ctx->pc = 0x24c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957760)));
    // 0x24c0b0: 0xa0870008  sb          $a3, 0x8($a0)
    ctx->pc = 0x24c0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x24c0b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24c0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24c0b8: 0x8c24dac0  lw          $a0, -0x2540($at)
    ctx->pc = 0x24c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957760)));
    // 0x24c0bc: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x24c0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
label_24c0c0:
    // 0x24c0c0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x24c0c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c0c4:
    // 0x24c0c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x24c0c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x24c0c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c0cc: 0x3c043f66  lui         $a0, 0x3F66
    ctx->pc = 0x24c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16230 << 16));
    // 0x24c0d0: 0x3c0901ed  lui         $t1, 0x1ED
    ctx->pc = 0x24c0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)493 << 16));
    // 0x24c0d4: 0x34846666  ori         $a0, $a0, 0x6666
    ctx->pc = 0x24c0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26214);
    // 0x24c0d8: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x24c0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x24c0dc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24c0dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24c0e0: 0x2529dac0  addiu       $t1, $t1, -0x2540
    ctx->pc = 0x24c0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957760));
    // 0x24c0e4: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x24c0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_24c0e8:
    // 0x24c0e8: 0xab2021  addu        $a0, $a1, $t3
    ctx->pc = 0x24c0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x24c0ec: 0xcb4021  addu        $t0, $a2, $t3
    ctx->pc = 0x24c0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x24c0f0: 0x8484000c  lh          $a0, 0xC($a0)
    ctx->pc = 0x24c0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x24c0f4: 0x85080016  lh          $t0, 0x16($t0)
    ctx->pc = 0x24c0f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 22)));
    // 0x24c0f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x24c0f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24c0fc: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x24c0fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24c100: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24c100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24c104: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x24c104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x24c108: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24c108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24c10c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x24c10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24c110: 0x0  nop
    ctx->pc = 0x24c110u;
    // NOP
    // 0x24c114: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24C114u;
    {
        const bool branch_taken_0x24c114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24c114) {
            ctx->pc = 0x24C13Cu;
            goto label_24c13c;
        }
    }
    ctx->pc = 0x24C11Cu;
    // 0x24c11c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C11Cu;
    {
        const bool branch_taken_0x24c11c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C11Cu;
            // 0x24c120: 0x12c4021  addu        $t0, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c11c) {
            ctx->pc = 0x24C13Cu;
            goto label_24c13c;
        }
    }
    ctx->pc = 0x24C124u;
    // 0x24c124: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x24c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24c128: 0xa08a0007  sb          $t2, 0x7($a0)
    ctx->pc = 0x24c128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 10));
    // 0x24c12c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x24c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24c130: 0xa0870008  sb          $a3, 0x8($a0)
    ctx->pc = 0x24c130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x24c134: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x24c134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24c138: 0xa0870009  sb          $a3, 0x9($a0)
    ctx->pc = 0x24c138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 7));
label_24c13c:
    // 0x24c13c: 0x0  nop
    ctx->pc = 0x24c13cu;
    // NOP
    // 0x24c140: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x24c140u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x24c144: 0x29a40008  slti        $a0, $t5, 0x8
    ctx->pc = 0x24c144u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x24c148: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x24c148u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x24c14c: 0x1480ffe6  bnez        $a0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x24C14Cu;
    {
        const bool branch_taken_0x24c14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C14Cu;
            // 0x24c150: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c14c) {
            ctx->pc = 0x24C0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c0e8;
        }
    }
    ctx->pc = 0x24C154u;
label_24c154:
    // 0x24c154: 0x0  nop
    ctx->pc = 0x24c154u;
    // NOP
label_24c158:
    // 0x24c158: 0x3e00008  jr          $ra
    ctx->pc = 0x24C158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C160u;
}
