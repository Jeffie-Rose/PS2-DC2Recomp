#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckInventItem__Fi
// Address: 0x200350 - 0x2004f8
void CheckInventItem__Fi_0x200350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckInventItem__Fi_0x200350");
#endif

    switch (ctx->pc) {
        case 0x20037cu: goto label_20037c;
        case 0x200398u: goto label_200398;
        case 0x2003acu: goto label_2003ac;
        case 0x2003bcu: goto label_2003bc;
        case 0x2003c4u: goto label_2003c4;
        case 0x2003d4u: goto label_2003d4;
        case 0x2003fcu: goto label_2003fc;
        case 0x200408u: goto label_200408;
        case 0x200464u: goto label_200464;
        case 0x200470u: goto label_200470;
        default: break;
    }

    ctx->pc = 0x200350u;

    // 0x200350: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x200350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x200354: 0x342147c0  ori         $at, $at, 0x47C0
    ctx->pc = 0x200354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18368);
    // 0x200358: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x200358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x20035c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x200360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20036c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x200370: 0xa7a00030  sh          $zero, 0x30($sp)
    ctx->pc = 0x200370u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x200374: 0xc094430  jal         func_2510C0
    ctx->pc = 0x200374u;
    SET_GPR_U32(ctx, 31, 0x20037Cu);
    ctx->pc = 0x200378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200374u;
            // 0x200378: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2510C0u;
    if (runtime->hasFunction(0x2510C0u)) {
        auto targetFn = runtime->lookupFunction(0x2510C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20037Cu; }
        if (ctx->pc != 0x20037Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCalcBufAlignment__FP1_0x2510c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20037Cu; }
        if (ctx->pc != 0x20037Cu) { return; }
    }
    ctx->pc = 0x20037Cu;
label_20037c:
    // 0x20037c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20037cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200380: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x200380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x200384: 0x24849088  addiu       $a0, $a0, -0x6F78
    ctx->pc = 0x200384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938760));
    // 0x200388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20038c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x20038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x200390: 0xc0524dc  jal         func_149370
    ctx->pc = 0x200390u;
    SET_GPR_U32(ctx, 31, 0x200398u);
    ctx->pc = 0x200394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200390u;
            // 0x200394: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200398u; }
        if (ctx->pc != 0x200398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200398u; }
        if (ctx->pc != 0x200398u) { return; }
    }
    ctx->pc = 0x200398u;
label_200398:
    // 0x200398: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x200398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x20039c: 0x27a57840  addiu       $a1, $sp, 0x7840
    ctx->pc = 0x20039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 30784));
    // 0x2003a0: 0x2484b7a0  addiu       $a0, $a0, -0x4860
    ctx->pc = 0x2003a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x2003a4: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2003A4u;
    SET_GPR_U32(ctx, 31, 0x2003ACu);
    ctx->pc = 0x2003A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003A4u;
            // 0x2003a8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ACu; }
        if (ctx->pc != 0x2003ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003ACu; }
        if (ctx->pc != 0x2003ACu) { return; }
    }
    ctx->pc = 0x2003ACu;
label_2003ac:
    // 0x2003ac: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x2003acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2003b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2003b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003b4: 0xc0800b4  jal         func_2002D0
    ctx->pc = 0x2003B4u;
    SET_GPR_U32(ctx, 31, 0x2003BCu);
    ctx->pc = 0x2003B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003B4u;
            // 0x2003b8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2002D0u;
    if (runtime->hasFunction(0x2002D0u)) {
        auto targetFn = runtime->lookupFunction(0x2002D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003BCu; }
        if (ctx->pc != 0x2003BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadAnalyzeInventFile__17CInventDataManageFPci_0x2002d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003BCu; }
        if (ctx->pc != 0x2003BCu) { return; }
    }
    ctx->pc = 0x2003BCu;
label_2003bc:
    // 0x2003bc: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x2003BCu;
    SET_GPR_U32(ctx, 31, 0x2003C4u);
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003C4u; }
        if (ctx->pc != 0x2003C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003C4u; }
        if (ctx->pc != 0x2003C4u) { return; }
    }
    ctx->pc = 0x2003C4u;
label_2003c4:
    // 0x2003c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2003c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003c8: 0xaf8290d4  sw          $v0, -0x6F2C($gp)
    ctx->pc = 0x2003c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 2));
    // 0x2003cc: 0xc07fef0  jal         func_1FFBC0
    ctx->pc = 0x2003CCu;
    SET_GPR_U32(ctx, 31, 0x2003D4u);
    ctx->pc = 0x2003D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2003CCu;
            // 0x2003d0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D4u; }
        if (ctx->pc != 0x2003D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2003D4u; }
        if (ctx->pc != 0x2003D4u) { return; }
    }
    ctx->pc = 0x2003D4u;
label_2003d4:
    // 0x2003d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2003D4u;
    {
        const bool branch_taken_0x2003d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2003D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2003D4u;
            // 0x2003d8: 0x24500002  addiu       $s0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003d4) {
            ctx->pc = 0x2003E4u;
            goto label_2003e4;
        }
    }
    ctx->pc = 0x2003DCu;
    // 0x2003dc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2003DCu;
    {
        const bool branch_taken_0x2003dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2003E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2003DCu;
            // 0x2003e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2003dc) {
            ctx->pc = 0x2004E0u;
            goto label_2004e0;
        }
    }
    ctx->pc = 0x2003E4u;
label_2003e4:
    // 0x2003e4: 0x87839108  lh          $v1, -0x6EF8($gp)
    ctx->pc = 0x2003e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938888)));
    // 0x2003e8: 0x9382910a  lbu         $v0, -0x6EF6($gp)
    ctx->pc = 0x2003e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938890)));
    // 0x2003ec: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2003ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2003f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2003f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2003f4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2003f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2003f8: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2003f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
label_2003fc:
    // 0x2003fc: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x2003fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x200400: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x200400u;
    SET_GPR_U32(ctx, 31, 0x200408u);
    ctx->pc = 0x200404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200400u;
            // 0x200404: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200408u; }
        if (ctx->pc != 0x200408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200408u; }
        if (ctx->pc != 0x200408u) { return; }
    }
    ctx->pc = 0x200408u;
label_200408:
    // 0x200408: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x200408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20040c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20040Cu;
    {
        const bool branch_taken_0x20040c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20040c) {
            ctx->pc = 0x200450u;
            goto label_200450;
        }
    }
    ctx->pc = 0x200414u;
    // 0x200414: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x200414u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x200418: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x200418u;
    {
        const bool branch_taken_0x200418 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x200418) {
            ctx->pc = 0x200450u;
            goto label_200450;
        }
    }
    ctx->pc = 0x200420u;
    // 0x200420: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x200420u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200424: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200424u;
    {
        const bool branch_taken_0x200424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200424u;
            // 0x200428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200424) {
            ctx->pc = 0x200430u;
            goto label_200430;
        }
    }
    ctx->pc = 0x20042Cu;
    // 0x20042c: 0xa3a2003c  sb          $v0, 0x3C($sp)
    ctx->pc = 0x20042cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
label_200430:
    // 0x200430: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x200430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x200434: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200434u;
    {
        const bool branch_taken_0x200434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200434u;
            // 0x200438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200434) {
            ctx->pc = 0x200440u;
            goto label_200440;
        }
    }
    ctx->pc = 0x20043Cu;
    // 0x20043c: 0xa3a2003d  sb          $v0, 0x3D($sp)
    ctx->pc = 0x20043cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 2));
label_200440:
    // 0x200440: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x200440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200444: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200444u;
    {
        const bool branch_taken_0x200444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200444u;
            // 0x200448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200444) {
            ctx->pc = 0x200450u;
            goto label_200450;
        }
    }
    ctx->pc = 0x20044Cu;
    // 0x20044c: 0xa3a2003e  sb          $v0, 0x3E($sp)
    ctx->pc = 0x20044cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 62), (uint8_t)GPR_U32(ctx, 2));
label_200450:
    // 0x200450: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200454: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x200454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x200458: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x200458u;
    {
        const bool branch_taken_0x200458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200458) {
            ctx->pc = 0x2003FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2003fc;
        }
    }
    ctx->pc = 0x200460u;
    // 0x200460: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200464:
    // 0x200464: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x200464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x200468: 0xc07fb00  jal         func_1FEC00
    ctx->pc = 0x200468u;
    SET_GPR_U32(ctx, 31, 0x200470u);
    ctx->pc = 0x20046Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200468u;
            // 0x20046c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC00u;
    if (runtime->hasFunction(0x1FEC00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200470u; }
        if (ctx->pc != 0x200470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaID__15CInventUserDataFi_0x1fec00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200470u; }
        if (ctx->pc != 0x200470u) { return; }
    }
    ctx->pc = 0x200470u;
label_200470:
    // 0x200470: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x200470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200474: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200474u;
    {
        const bool branch_taken_0x200474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200474u;
            // 0x200478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200474) {
            ctx->pc = 0x200480u;
            goto label_200480;
        }
    }
    ctx->pc = 0x20047Cu;
    // 0x20047c: 0xa3a3003c  sb          $v1, 0x3C($sp)
    ctx->pc = 0x20047cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 3));
label_200480:
    // 0x200480: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x200480u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x200484: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200484u;
    {
        const bool branch_taken_0x200484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200484u;
            // 0x200488: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200484) {
            ctx->pc = 0x200490u;
            goto label_200490;
        }
    }
    ctx->pc = 0x20048Cu;
    // 0x20048c: 0xa3a3003d  sb          $v1, 0x3D($sp)
    ctx->pc = 0x20048cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 61), (uint8_t)GPR_U32(ctx, 3));
label_200490:
    // 0x200490: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x200490u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200494: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x200494u;
    {
        const bool branch_taken_0x200494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200494u;
            // 0x200498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200494) {
            ctx->pc = 0x2004A0u;
            goto label_2004a0;
        }
    }
    ctx->pc = 0x20049Cu;
    // 0x20049c: 0xa3a2003e  sb          $v0, 0x3E($sp)
    ctx->pc = 0x20049cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 62), (uint8_t)GPR_U32(ctx, 2));
label_2004a0:
    // 0x2004a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2004a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2004a4: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x2004a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2004a8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2004A8u;
    {
        const bool branch_taken_0x2004a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2004a8) {
            ctx->pc = 0x200464u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200464;
        }
    }
    ctx->pc = 0x2004B0u;
    // 0x2004b0: 0x83a2003c  lb          $v0, 0x3C($sp)
    ctx->pc = 0x2004b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2004b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2004B4u;
    {
        const bool branch_taken_0x2004b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004B4u;
            // 0x2004b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004b4) {
            ctx->pc = 0x2004E0u;
            goto label_2004e0;
        }
    }
    ctx->pc = 0x2004BCu;
    // 0x2004bc: 0x83a2003d  lb          $v0, 0x3D($sp)
    ctx->pc = 0x2004bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 61)));
    // 0x2004c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2004C0u;
    {
        const bool branch_taken_0x2004c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2004c0) {
            ctx->pc = 0x2004DCu;
            goto label_2004dc;
        }
    }
    ctx->pc = 0x2004C8u;
    // 0x2004c8: 0x83a2003e  lb          $v0, 0x3E($sp)
    ctx->pc = 0x2004c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 62)));
    // 0x2004cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2004CCu;
    {
        const bool branch_taken_0x2004cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004CCu;
            // 0x2004d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004cc) {
            ctx->pc = 0x2004DCu;
            goto label_2004dc;
        }
    }
    ctx->pc = 0x2004D4u;
    // 0x2004d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2004D4u;
    {
        const bool branch_taken_0x2004d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2004D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004D4u;
            // 0x2004d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2004d4) {
            ctx->pc = 0x2004E4u;
            goto label_2004e4;
        }
    }
    ctx->pc = 0x2004DCu;
label_2004dc:
    // 0x2004dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2004dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2004e0:
    // 0x2004e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2004e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2004e4:
    // 0x2004e4: 0x3401b840  ori         $at, $zero, 0xB840
    ctx->pc = 0x2004e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47168);
    // 0x2004e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2004e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2004ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2004ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2004f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2004F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2004F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2004F0u;
            // 0x2004f4: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2004F8u;
}
