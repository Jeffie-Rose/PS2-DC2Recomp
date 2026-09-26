#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchEffectDisplayPosition__13CMenuItemInfoFPiP13CGameDataUsed
// Address: 0x24cf70 - 0x24d110
void SearchEffectDisplayPosition__13CMenuItemInfoFPiP13CGameDataUsed_0x24cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchEffectDisplayPosition__13CMenuItemInfoFPiP13CGameDataUsed_0x24cf70");
#endif

    switch (ctx->pc) {
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfc4u: goto label_24cfc4;
        case 0x24d058u: goto label_24d058;
        case 0x24d07cu: goto label_24d07c;
        case 0x24d0c0u: goto label_24d0c0;
        case 0x24d0e8u: goto label_24d0e8;
        default: break;
    }

    ctx->pc = 0x24cf70u;

    // 0x24cf70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24cf74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x24cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24cf78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24cf7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24cf80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24cf80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24cf84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24cf88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24cf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x24cf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24cf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cf98: 0xc0943e4  jal         func_250F90
    ctx->pc = 0x24CF98u;
    SET_GPR_U32(ctx, 31, 0x24CFA0u);
    ctx->pc = 0x24CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CF98u;
            // 0x24cf9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250F90u;
    if (runtime->hasFunction(0x250F90u)) {
        auto targetFn = runtime->lookupFunction(0x250F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFA0u; }
        if (ctx->pc != 0x24CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSameAdrressUserData__FP13CGameDataUsedi_0x250f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFA0u; }
        if (ctx->pc != 0x24CFA0u) { return; }
    }
    ctx->pc = 0x24CFA0u;
label_24cfa0:
    // 0x24cfa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24cfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfa4: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x24cfa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x24cfa8: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x24CFA8u;
    {
        const bool branch_taken_0x24cfa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cfa8) {
            ctx->pc = 0x24D008u;
            goto label_24d008;
        }
    }
    ctx->pc = 0x24CFB0u;
    // 0x24cfb0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24cfb4: 0x27859690  addiu       $a1, $gp, -0x6970
    ctx->pc = 0x24cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
    // 0x24cfb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24cfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cfbc: 0xc08b09c  jal         func_22C270
    ctx->pc = 0x24CFBCu;
    SET_GPR_U32(ctx, 31, 0x24CFC4u);
    ctx->pc = 0x24CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24CFBCu;
            // 0x24cfc0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C270u;
    if (runtime->hasFunction(0x22C270u)) {
        auto targetFn = runtime->lookupFunction(0x22C270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFC4u; }
        if (ctx->pc != 0x24CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdKoma__18CMenuPosDataManageFPiii_0x22c270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CFC4u; }
        if (ctx->pc != 0x24CFC4u) { return; }
    }
    ctx->pc = 0x24CFC4u;
label_24cfc4:
    // 0x24cfc4: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x24cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x24cfc8: 0x87849588  lh          $a0, -0x6A78($gp)
    ctx->pc = 0x24cfc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
    // 0x24cfcc: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x24cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x24cfd0: 0x102fc2  srl         $a1, $s0, 31
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x24cfd4: 0x700018  mult        $zero, $v1, $s0
    ctx->pc = 0x24cfd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24cfd8: 0x0  nop
    ctx->pc = 0x24cfd8u;
    // NOP
    // 0x24cfdc: 0x0  nop
    ctx->pc = 0x24cfdcu;
    // NOP
    // 0x24cfe0: 0x1810  mfhi        $v1
    ctx->pc = 0x24cfe0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24cfe4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x24cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24cfe8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x24cfe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x24cfec: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24CFECu;
    {
        const bool branch_taken_0x24cfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24CFECu;
            // 0x24cff0: 0x24830005  addiu       $v1, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfec) {
            ctx->pc = 0x24D000u;
            goto label_24d000;
        }
    }
    ctx->pc = 0x24CFF4u;
    // 0x24cff4: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x24cff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24cff8: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x24CFF8u;
    {
        const bool branch_taken_0x24cff8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24cff8) {
            ctx->pc = 0x24D0F4u;
            goto label_24d0f4;
        }
    }
    ctx->pc = 0x24D000u;
label_24d000:
    // 0x24d000: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24D000u;
    {
        const bool branch_taken_0x24d000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D000u;
            // 0x24d004: 0xa260016d  sb          $zero, 0x16D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 365), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d000) {
            ctx->pc = 0x24D0F4u;
            goto label_24d0f4;
        }
    }
    ctx->pc = 0x24D008u;
label_24d008:
    // 0x24d008: 0x86640110  lh          $a0, 0x110($s3)
    ctx->pc = 0x24d008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x24d00c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D00Cu;
    {
        const bool branch_taken_0x24d00c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D00Cu;
            // 0x24d010: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d00c) {
            ctx->pc = 0x24D01Cu;
            goto label_24d01c;
        }
    }
    ctx->pc = 0x24D014u;
    // 0x24d014: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x24D014u;
    {
        const bool branch_taken_0x24d014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24d014) {
            ctx->pc = 0x24D088u;
            goto label_24d088;
        }
    }
    ctx->pc = 0x24D01Cu;
label_24d01c:
    // 0x24d01c: 0x86640114  lh          $a0, 0x114($s3)
    ctx->pc = 0x24d01cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x24d020: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x24d020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x24d024: 0x2463d8c0  addiu       $v1, $v1, -0x2740
    ctx->pc = 0x24d024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957248));
    // 0x24d028: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24d028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x24d02c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d030: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x24d030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d034: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x24d034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x24d038: 0x24a30170  addiu       $v1, $a1, 0x170
    ctx->pc = 0x24d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x24d03c: 0x14710008  bne         $v1, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D03Cu;
    {
        const bool branch_taken_0x24d03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x24D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D03Cu;
            // 0x24d040: 0x8c840180  lw          $a0, 0x180($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d03c) {
            ctx->pc = 0x24D060u;
            goto label_24d060;
        }
    }
    ctx->pc = 0x24D044u;
    // 0x24d044: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24d044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24d048: 0x27869690  addiu       $a2, $gp, -0x6970
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
    // 0x24d04c: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10
    ctx->pc = 0x24d04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
    // 0x24d050: 0xc08974c  jal         func_225D30
    ctx->pc = 0x24D050u;
    SET_GPR_U32(ctx, 31, 0x24D058u);
    ctx->pc = 0x24D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D050u;
            // 0x24d054: 0x27879694  addiu       $a3, $gp, -0x696C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D058u; }
        if (ctx->pc != 0x24D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D058u; }
        if (ctx->pc != 0x24D058u) { return; }
    }
    ctx->pc = 0x24D058u;
label_24d058:
    // 0x24d058: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24D058u;
    {
        const bool branch_taken_0x24d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D058u;
            // 0x24d05c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d058) {
            ctx->pc = 0x24D080u;
            goto label_24d080;
        }
    }
    ctx->pc = 0x24D060u;
label_24d060:
    // 0x24d060: 0x24a301dc  addiu       $v1, $a1, 0x1DC
    ctx->pc = 0x24d060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 476));
    // 0x24d064: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D064u;
    {
        const bool branch_taken_0x24d064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x24D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D064u;
            // 0x24d068: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d064) {
            ctx->pc = 0x24D07Cu;
            goto label_24d07c;
        }
    }
    ctx->pc = 0x24D06Cu;
    // 0x24d06c: 0x27869690  addiu       $a2, $gp, -0x6970
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
    // 0x24d070: 0x24a5b120  addiu       $a1, $a1, -0x4EE0
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947104));
    // 0x24d074: 0xc08974c  jal         func_225D30
    ctx->pc = 0x24D074u;
    SET_GPR_U32(ctx, 31, 0x24D07Cu);
    ctx->pc = 0x24D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D074u;
            // 0x24d078: 0x27879694  addiu       $a3, $gp, -0x696C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D07Cu; }
        if (ctx->pc != 0x24D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D07Cu; }
        if (ctx->pc != 0x24D07Cu) { return; }
    }
    ctx->pc = 0x24D07Cu;
label_24d07c:
    // 0x24d07c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24d080:
    // 0x24d080: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x24d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x24d084: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x24d084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_24d088:
    // 0x24d088: 0x86640110  lh          $a0, 0x110($s3)
    ctx->pc = 0x24d088u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 272)));
    // 0x24d08c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d090: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24D090u;
    {
        const bool branch_taken_0x24d090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24D094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D090u;
            // 0x24d094: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d090) {
            ctx->pc = 0x24D0F4u;
            goto label_24d0f4;
        }
    }
    ctx->pc = 0x24D098u;
    // 0x24d098: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x24d098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x24d09c: 0x24830108  addiu       $v1, $a0, 0x108
    ctx->pc = 0x24d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    // 0x24d0a0: 0x14710009  bne         $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24D0A0u;
    {
        const bool branch_taken_0x24d0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x24D0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D0A0u;
            // 0x24d0a4: 0x24830030  addiu       $v1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0a0) {
            ctx->pc = 0x24D0C8u;
            goto label_24d0c8;
        }
    }
    ctx->pc = 0x24D0A8u;
    // 0x24d0a8: 0x8e64018c  lw          $a0, 0x18C($s3)
    ctx->pc = 0x24d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 396)));
    // 0x24d0ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24d0b0: 0x24a5b9a8  addiu       $a1, $a1, -0x4658
    ctx->pc = 0x24d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949288));
    // 0x24d0b4: 0x27869690  addiu       $a2, $gp, -0x6970
    ctx->pc = 0x24d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
    // 0x24d0b8: 0xc08974c  jal         func_225D30
    ctx->pc = 0x24D0B8u;
    SET_GPR_U32(ctx, 31, 0x24D0C0u);
    ctx->pc = 0x24D0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D0B8u;
            // 0x24d0bc: 0x27879694  addiu       $a3, $gp, -0x696C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D0C0u; }
        if (ctx->pc != 0x24D0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D0C0u; }
        if (ctx->pc != 0x24D0C0u) { return; }
    }
    ctx->pc = 0x24D0C0u;
label_24d0c0:
    // 0x24d0c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x24D0C0u;
    {
        const bool branch_taken_0x24d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D0C0u;
            // 0x24d0c4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0c0) {
            ctx->pc = 0x24D0ECu;
            goto label_24d0ec;
        }
    }
    ctx->pc = 0x24D0C8u;
label_24d0c8:
    // 0x24d0c8: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D0C8u;
    {
        const bool branch_taken_0x24d0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x24d0c8) {
            ctx->pc = 0x24D0E8u;
            goto label_24d0e8;
        }
    }
    ctx->pc = 0x24D0D0u;
    // 0x24d0d0: 0x8e64018c  lw          $a0, 0x18C($s3)
    ctx->pc = 0x24d0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 396)));
    // 0x24d0d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24d0d8: 0x24a5b0f0  addiu       $a1, $a1, -0x4F10
    ctx->pc = 0x24d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947056));
    // 0x24d0dc: 0x27869690  addiu       $a2, $gp, -0x6970
    ctx->pc = 0x24d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940304));
    // 0x24d0e0: 0xc08974c  jal         func_225D30
    ctx->pc = 0x24D0E0u;
    SET_GPR_U32(ctx, 31, 0x24D0E8u);
    ctx->pc = 0x24D0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24D0E0u;
            // 0x24d0e4: 0x27879694  addiu       $a3, $gp, -0x696C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D0E8u; }
        if (ctx->pc != 0x24D0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24D0E8u; }
        if (ctx->pc != 0x24D0E8u) { return; }
    }
    ctx->pc = 0x24D0E8u;
label_24d0e8:
    // 0x24d0e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24d0ec:
    // 0x24d0ec: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x24d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x24d0f0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x24d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_24d0f4:
    // 0x24d0f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24d0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24d0f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24d0f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d0fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24d0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24d104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d108: 0x3e00008  jr          $ra
    ctx->pc = 0x24D108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24D108u;
            // 0x24d10c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24D110u;
}
