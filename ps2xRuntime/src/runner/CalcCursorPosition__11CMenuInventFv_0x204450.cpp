#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__11CMenuInventFv
// Address: 0x204450 - 0x2048c4
void CalcCursorPosition__11CMenuInventFv_0x204450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__11CMenuInventFv_0x204450");
#endif

    switch (ctx->pc) {
        case 0x20447cu: goto label_20447c;
        case 0x20449cu: goto label_20449c;
        case 0x2044d0u: goto label_2044d0;
        case 0x2044e8u: goto label_2044e8;
        case 0x2044fcu: goto label_2044fc;
        case 0x204510u: goto label_204510;
        case 0x204534u: goto label_204534;
        case 0x204550u: goto label_204550;
        case 0x20458cu: goto label_20458c;
        case 0x2045f8u: goto label_2045f8;
        case 0x204644u: goto label_204644;
        case 0x204664u: goto label_204664;
        case 0x2046ccu: goto label_2046cc;
        case 0x2046ecu: goto label_2046ec;
        case 0x204708u: goto label_204708;
        case 0x204758u: goto label_204758;
        case 0x204770u: goto label_204770;
        case 0x20479cu: goto label_20479c;
        case 0x2047bcu: goto label_2047bc;
        case 0x2047dcu: goto label_2047dc;
        case 0x2047fcu: goto label_2047fc;
        case 0x204844u: goto label_204844;
        case 0x204880u: goto label_204880;
        case 0x204890u: goto label_204890;
        case 0x2048acu: goto label_2048ac;
        default: break;
    }

    ctx->pc = 0x204450u;

    // 0x204450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x204450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x204454: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x204458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20445c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204464: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x204464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x204468: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x204468u;
    {
        const bool branch_taken_0x204468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204468u;
            // 0x20446c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204468) {
            ctx->pc = 0x204484u;
            goto label_204484;
        }
    }
    ctx->pc = 0x204470u;
    // 0x204470: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204474: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x204474u;
    SET_GPR_U32(ctx, 31, 0x20447Cu);
    ctx->pc = 0x204478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204474u;
            // 0x204478: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20447Cu; }
        if (ctx->pc != 0x20447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20447Cu; }
        if (ctx->pc != 0x20447Cu) { return; }
    }
    ctx->pc = 0x20447Cu;
label_20447c:
    // 0x20447c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x20447Cu;
    {
        const bool branch_taken_0x20447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20447Cu;
            // 0x204480: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20447c) {
            ctx->pc = 0x2048B4u;
            goto label_2048b4;
        }
    }
    ctx->pc = 0x204484u;
label_204484:
    // 0x204484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204488: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204488u;
    {
        const bool branch_taken_0x204488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204488) {
            ctx->pc = 0x20449Cu;
            goto label_20449c;
        }
    }
    ctx->pc = 0x204490u;
    // 0x204490: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204494: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x204494u;
    SET_GPR_U32(ctx, 31, 0x20449Cu);
    ctx->pc = 0x204498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204494u;
            // 0x204498: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20449Cu; }
        if (ctx->pc != 0x20449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20449Cu; }
        if (ctx->pc != 0x20449Cu) { return; }
    }
    ctx->pc = 0x20449Cu;
label_20449c:
    // 0x20449c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20449cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2044a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2044a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2044a4: 0x2442ef20  addiu       $v0, $v0, -0x10E0
    ctx->pc = 0x2044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962976));
    // 0x2044a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2044a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2044ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2044acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2044b0: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x2044b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2044b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2044b8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x2044b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x2044bc: 0xdf829118  ld          $v0, -0x6EE8($gp)
    ctx->pc = 0x2044bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938904)));
    // 0x2044c0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2044c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2044c4: 0x86260014  lh          $a2, 0x14($s1)
    ctx->pc = 0x2044c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2044c8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2044C8u;
    SET_GPR_U32(ctx, 31, 0x2044D0u);
    ctx->pc = 0x2044CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2044C8u;
            // 0x2044cc: 0x24a596b8  addiu       $a1, $a1, -0x6948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044D0u; }
        if (ctx->pc != 0x2044D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044D0u; }
        if (ctx->pc != 0x2044D0u) { return; }
    }
    ctx->pc = 0x2044D0u;
label_2044d0:
    // 0x2044d0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2044d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2044d4: 0x27b00074  addiu       $s0, $sp, 0x74
    ctx->pc = 0x2044d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x2044d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2044d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2044dc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2044dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2044e0: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x2044E0u;
    SET_GPR_U32(ctx, 31, 0x2044E8u);
    ctx->pc = 0x2044E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2044E0u;
            // 0x2044e4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044E8u; }
        if (ctx->pc != 0x2044E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044E8u; }
        if (ctx->pc != 0x2044E8u) { return; }
    }
    ctx->pc = 0x2044E8u;
label_2044e8:
    // 0x2044e8: 0x86260014  lh          $a2, 0x14($s1)
    ctx->pc = 0x2044e8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2044ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2044ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2044f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2044f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2044f4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2044F4u;
    SET_GPR_U32(ctx, 31, 0x2044FCu);
    ctx->pc = 0x2044F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2044F4u;
            // 0x2044f8: 0x24a596c8  addiu       $a1, $a1, -0x6938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044FCu; }
        if (ctx->pc != 0x2044FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2044FCu; }
        if (ctx->pc != 0x2044FCu) { return; }
    }
    ctx->pc = 0x2044FCu;
label_2044fc:
    // 0x2044fc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2044fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x204500: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x204500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204504: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x204504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x204508: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x204508u;
    SET_GPR_U32(ctx, 31, 0x204510u);
    ctx->pc = 0x20450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204508u;
            // 0x20450c: 0x27a7006c  addiu       $a3, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204510u; }
        if (ctx->pc != 0x204510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204510u; }
        if (ctx->pc != 0x204510u) { return; }
    }
    ctx->pc = 0x204510u;
label_204510:
    // 0x204510: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x204510u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x204514: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x204514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x204518: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x204518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x20451c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204520: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x204520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x204524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204528: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x204528u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20452c: 0xc08f058  jal         func_23C160
    ctx->pc = 0x20452Cu;
    SET_GPR_U32(ctx, 31, 0x204534u);
    ctx->pc = 0x204530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20452Cu;
            // 0x204530: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204534u; }
        if (ctx->pc != 0x204534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204534u; }
        if (ctx->pc != 0x204534u) { return; }
    }
    ctx->pc = 0x204534u;
label_204534:
    // 0x204534: 0x86230014  lh          $v1, 0x14($s1)
    ctx->pc = 0x204534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x204538: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x204538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x20453c: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x20453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x204540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204544: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x204544u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204548: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x204548u;
    SET_GPR_U32(ctx, 31, 0x204550u);
    ctx->pc = 0x20454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204548u;
            // 0x20454c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204550u; }
        if (ctx->pc != 0x204550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204550u; }
        if (ctx->pc != 0x204550u) { return; }
    }
    ctx->pc = 0x204550u;
label_204550:
    // 0x204550: 0x86220014  lh          $v0, 0x14($s1)
    ctx->pc = 0x204550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x204554: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x204554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x204558: 0x102000ac  beqz        $at, . + 4 + (0xAC << 2)
    ctx->pc = 0x204558u;
    {
        const bool branch_taken_0x204558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204558u;
            // 0x20455c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204558) {
            ctx->pc = 0x20480Cu;
            goto label_20480c;
        }
    }
    ctx->pc = 0x204560u;
    // 0x204560: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x204560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x204564: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x204564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x204568: 0x24639710  addiu       $v1, $v1, -0x68F0
    ctx->pc = 0x204568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940432));
    // 0x20456c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204570: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x204570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204574: 0x400008  jr          $v0
    ctx->pc = 0x204574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20457Cu: goto label_20457c;
            case 0x20462Cu: goto label_20462c;
            case 0x20464Cu: goto label_20464c;
            case 0x2046F4u: goto label_2046f4;
            case 0x204738u: goto label_204738;
            case 0x204784u: goto label_204784;
            case 0x2047A4u: goto label_2047a4;
            case 0x2047C4u: goto label_2047c4;
            case 0x2047E4u: goto label_2047e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20457Cu;
label_20457c:
    // 0x20457c: 0x8e250124  lw          $a1, 0x124($s1)
    ctx->pc = 0x20457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x204580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204584: 0xc082128  jal         func_2084A0
    ctx->pc = 0x204584u;
    SET_GPR_U32(ctx, 31, 0x20458Cu);
    ctx->pc = 0x204588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204584u;
            // 0x204588: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20458Cu; }
        if (ctx->pc != 0x20458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20458Cu; }
        if (ctx->pc != 0x20458Cu) { return; }
    }
    ctx->pc = 0x20458Cu;
label_20458c:
    // 0x20458c: 0x8e230ec0  lw          $v1, 0xEC0($s1)
    ctx->pc = 0x20458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    // 0x204590: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x204590u;
    {
        const bool branch_taken_0x204590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204590) {
            ctx->pc = 0x2045FCu;
            goto label_2045fc;
        }
    }
    ctx->pc = 0x204598u;
    // 0x204598: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x204598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x20459c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20459Cu;
    {
        const bool branch_taken_0x20459c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2045A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20459Cu;
            // 0x2045a0: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20459c) {
            ctx->pc = 0x2045ACu;
            goto label_2045ac;
        }
    }
    ctx->pc = 0x2045A4u;
    // 0x2045a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2045a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2045a8: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x2045a8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_2045ac:
    // 0x2045ac: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x2045acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2045b0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2045b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2045b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2045b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2045b8: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2045b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2045bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2045bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2045c0: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x2045c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x2045c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2045c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2045c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2045c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2045cc: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2045ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2045d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2045d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2045d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2045d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2045d8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2045d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2045dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2045dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2045e0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2045e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2045e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2045e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2045e8: 0x0  nop
    ctx->pc = 0x2045e8u;
    // NOP
    // 0x2045ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2045ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2045f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2045F0u;
    SET_GPR_U32(ctx, 31, 0x2045F8u);
    ctx->pc = 0x2045F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2045F0u;
            // 0x2045f4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2045F8u; }
        if (ctx->pc != 0x2045F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2045F8u; }
        if (ctx->pc != 0x2045F8u) { return; }
    }
    ctx->pc = 0x2045F8u;
label_2045f8:
    // 0x2045f8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x2045f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_2045fc:
    // 0x2045fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2045fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204600: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x204600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x204604: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x204604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x204608: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x204608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x20460c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204610: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x204614: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x204614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x204618: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x204618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20461c: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x20461cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x204620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204624: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x204624u;
    {
        const bool branch_taken_0x204624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204624u;
            // 0x204628: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204624) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x20462Cu;
label_20462c:
    // 0x20462c: 0x8e240ee4  lw          $a0, 0xEE4($s1)
    ctx->pc = 0x20462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3812)));
    // 0x204630: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x204634: 0x24a596d0  addiu       $a1, $a1, -0x6930
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940368));
    // 0x204638: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x204638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20463c: 0xc08974c  jal         func_225D30
    ctx->pc = 0x20463Cu;
    SET_GPR_U32(ctx, 31, 0x204644u);
    ctx->pc = 0x204640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20463Cu;
            // 0x204640: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204644u; }
        if (ctx->pc != 0x204644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204644u; }
        if (ctx->pc != 0x204644u) { return; }
    }
    ctx->pc = 0x204644u;
label_204644:
    // 0x204644: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x204644u;
    {
        const bool branch_taken_0x204644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204644) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x20464Cu;
label_20464c:
    // 0x20464c: 0x8e230ee0  lw          $v1, 0xEE0($s1)
    ctx->pc = 0x20464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3808)));
    // 0x204650: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x204650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x204654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x204654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204658: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x204658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20465c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x20465Cu;
    SET_GPR_U32(ctx, 31, 0x204664u);
    ctx->pc = 0x204660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20465Cu;
            // 0x204660: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204664u; }
        if (ctx->pc != 0x204664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204664u; }
        if (ctx->pc != 0x204664u) { return; }
    }
    ctx->pc = 0x204664u;
label_204664:
    // 0x204664: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x204664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x204668: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x204668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x20466c: 0x8e260114  lw          $a2, 0x114($s1)
    ctx->pc = 0x20466cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x204670: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x204670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x204674: 0x8e230118  lw          $v1, 0x118($s1)
    ctx->pc = 0x204674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x204678: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x204678u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20467c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x204680: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x204680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x204684: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x204684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x204688: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20468c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20468cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204690: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x204694: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x204694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x204698: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x204698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20469c: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x20469Cu;
    {
        const bool branch_taken_0x20469c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20469c) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x2046A4u;
    // 0x2046a4: 0x82260108  lb          $a2, 0x108($s1)
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x2046a8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2046a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x2046ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2046acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2046b0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2046b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2046b4: 0x2463cdf0  addiu       $v1, $v1, -0x3210
    ctx->pc = 0x2046b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954480));
    // 0x2046b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x2046b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2046bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2046bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2046c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2046c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2046c4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2046C4u;
    SET_GPR_U32(ctx, 31, 0x2046CCu);
    ctx->pc = 0x2046C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2046C4u;
            // 0x2046c8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046CCu; }
        if (ctx->pc != 0x2046CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046CCu; }
        if (ctx->pc != 0x2046CCu) { return; }
    }
    ctx->pc = 0x2046CCu;
label_2046cc:
    // 0x2046cc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2046ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2046d0: 0x82230108  lb          $v1, 0x108($s1)
    ctx->pc = 0x2046d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x2046d4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2046d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2046d8: 0x2442cdf4  addiu       $v0, $v0, -0x320C
    ctx->pc = 0x2046d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954484));
    // 0x2046dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2046dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2046e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2046e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2046e4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2046E4u;
    SET_GPR_U32(ctx, 31, 0x2046ECu);
    ctx->pc = 0x2046E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2046E4u;
            // 0x2046e8: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046ECu; }
        if (ctx->pc != 0x2046ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046ECu; }
        if (ctx->pc != 0x2046ECu) { return; }
    }
    ctx->pc = 0x2046ECu;
label_2046ec:
    // 0x2046ec: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2046ECu;
    {
        const bool branch_taken_0x2046ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2046F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2046ECu;
            // 0x2046f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2046ec) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x2046F4u;
label_2046f4:
    // 0x2046f4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2046f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2046f8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2046f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2046fc: 0x8e26011c  lw          $a2, 0x11C($s1)
    ctx->pc = 0x2046fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x204700: 0xc08b0e0  jal         func_22C380
    ctx->pc = 0x204700u;
    SET_GPR_U32(ctx, 31, 0x204708u);
    ctx->pc = 0x204704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204700u;
            // 0x204704: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204708u; }
        if (ctx->pc != 0x204708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204708u; }
        if (ctx->pc != 0x204708u) { return; }
    }
    ctx->pc = 0x204708u;
label_204708:
    // 0x204708: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x204708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20470c: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x20470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x204710: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x204710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x204714: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x204714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x204718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x204718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20471c: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x20471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x204720: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x204720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x204724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x204724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204728: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x204728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x20472c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204730: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x204730u;
    {
        const bool branch_taken_0x204730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204730u;
            // 0x204734: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204730) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x204738u;
label_204738:
    // 0x204738: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x204738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x20473c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20473cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x204740: 0x8e23012c  lw          $v1, 0x12C($s1)
    ctx->pc = 0x204740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x204744: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x204744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204748: 0x24a596d8  addiu       $a1, $a1, -0x6928
    ctx->pc = 0x204748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940376));
    // 0x20474c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20474cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x204750: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x204750u;
    SET_GPR_U32(ctx, 31, 0x204758u);
    ctx->pc = 0x204754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204750u;
            // 0x204754: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204758u; }
        if (ctx->pc != 0x204758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204758u; }
        if (ctx->pc != 0x204758u) { return; }
    }
    ctx->pc = 0x204758u;
label_204758:
    // 0x204758: 0x8e240ee8  lw          $a0, 0xEE8($s1)
    ctx->pc = 0x204758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3816)));
    // 0x20475c: 0x27b00034  addiu       $s0, $sp, 0x34
    ctx->pc = 0x20475cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x204760: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x204760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x204764: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x204764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x204768: 0xc08974c  jal         func_225D30
    ctx->pc = 0x204768u;
    SET_GPR_U32(ctx, 31, 0x204770u);
    ctx->pc = 0x20476Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204768u;
            // 0x20476c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204770u; }
        if (ctx->pc != 0x204770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204770u; }
        if (ctx->pc != 0x204770u) { return; }
    }
    ctx->pc = 0x204770u;
label_204770:
    // 0x204770: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x204770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204774: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x204774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x204778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x204778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20477c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20477Cu;
    {
        const bool branch_taken_0x20477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20477Cu;
            // 0x204780: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20477c) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x204784u;
label_204784:
    // 0x204784: 0x8e240ec0  lw          $a0, 0xEC0($s1)
    ctx->pc = 0x204784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    // 0x204788: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x204788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20478c: 0x24a596e0  addiu       $a1, $a1, -0x6920
    ctx->pc = 0x20478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940384));
    // 0x204790: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x204790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x204794: 0xc08974c  jal         func_225D30
    ctx->pc = 0x204794u;
    SET_GPR_U32(ctx, 31, 0x20479Cu);
    ctx->pc = 0x204798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204794u;
            // 0x204798: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20479Cu; }
        if (ctx->pc != 0x20479Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20479Cu; }
        if (ctx->pc != 0x20479Cu) { return; }
    }
    ctx->pc = 0x20479Cu;
label_20479c:
    // 0x20479c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x20479Cu;
    {
        const bool branch_taken_0x20479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20479c) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x2047A4u;
label_2047a4:
    // 0x2047a4: 0x8e240eec  lw          $a0, 0xEEC($s1)
    ctx->pc = 0x2047a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3820)));
    // 0x2047a8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2047a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2047ac: 0x24a596f0  addiu       $a1, $a1, -0x6910
    ctx->pc = 0x2047acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940400));
    // 0x2047b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2047b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2047b4: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2047B4u;
    SET_GPR_U32(ctx, 31, 0x2047BCu);
    ctx->pc = 0x2047B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2047B4u;
            // 0x2047b8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047BCu; }
        if (ctx->pc != 0x2047BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047BCu; }
        if (ctx->pc != 0x2047BCu) { return; }
    }
    ctx->pc = 0x2047BCu;
label_2047bc:
    // 0x2047bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2047BCu;
    {
        const bool branch_taken_0x2047bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2047bc) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x2047C4u;
label_2047c4:
    // 0x2047c4: 0x8e240ec0  lw          $a0, 0xEC0($s1)
    ctx->pc = 0x2047c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    // 0x2047c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2047c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2047cc: 0x24a596f8  addiu       $a1, $a1, -0x6908
    ctx->pc = 0x2047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940408));
    // 0x2047d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2047d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2047d4: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2047D4u;
    SET_GPR_U32(ctx, 31, 0x2047DCu);
    ctx->pc = 0x2047D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2047D4u;
            // 0x2047d8: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047DCu; }
        if (ctx->pc != 0x2047DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047DCu; }
        if (ctx->pc != 0x2047DCu) { return; }
    }
    ctx->pc = 0x2047DCu;
label_2047dc:
    // 0x2047dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2047DCu;
    {
        const bool branch_taken_0x2047dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2047dc) {
            ctx->pc = 0x204808u;
            goto label_204808;
        }
    }
    ctx->pc = 0x2047E4u;
label_2047e4:
    // 0x2047e4: 0x8e230134  lw          $v1, 0x134($s1)
    ctx->pc = 0x2047e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x2047e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2047e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2047ec: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x2047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2047f0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2047f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2047f4: 0xc082150  jal         func_208540
    ctx->pc = 0x2047F4u;
    SET_GPR_U32(ctx, 31, 0x2047FCu);
    ctx->pc = 0x2047F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2047F4u;
            // 0x2047f8: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208540u;
    if (runtime->hasFunction(0x208540u)) {
        auto targetFn = runtime->lookupFunction(0x208540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047FCu; }
        if (ctx->pc != 0x2047FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaMemoCursorPosition__11CMenuInventFiPi_0x208540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2047FCu; }
        if (ctx->pc != 0x2047FCu) { return; }
    }
    ctx->pc = 0x2047FCu;
label_2047fc:
    // 0x2047fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2047fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204800: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x204800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x204804: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x204804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_204808:
    // 0x204808: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x204808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20480c:
    // 0x20480c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204810: 0xaf8395fc  sw          $v1, -0x6A04($gp)
    ctx->pc = 0x204810u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940156), GPR_U32(ctx, 3));
    // 0x204814: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x204814u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204818: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204818u;
    {
        const bool branch_taken_0x204818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204818u;
            // 0x20481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204818) {
            ctx->pc = 0x20483Cu;
            goto label_20483c;
        }
    }
    ctx->pc = 0x204820u;
    // 0x204820: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x204824: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204824u;
    {
        const bool branch_taken_0x204824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204824) {
            ctx->pc = 0x204844u;
            goto label_204844;
        }
    }
    ctx->pc = 0x20482Cu;
    // 0x20482c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x20482cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x204830: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x204830u;
    {
        const bool branch_taken_0x204830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204830) {
            ctx->pc = 0x204844u;
            goto label_204844;
        }
    }
    ctx->pc = 0x204838u;
    // 0x204838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20483c:
    // 0x20483c: 0xc08e134  jal         func_2384D0
    ctx->pc = 0x20483Cu;
    SET_GPR_U32(ctx, 31, 0x204844u);
    ctx->pc = 0x204840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20483Cu;
            // 0x204840: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2384D0u;
    if (runtime->hasFunction(0x2384D0u)) {
        auto targetFn = runtime->lookupFunction(0x2384D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204844u; }
        if (ctx->pc != 0x204844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemCmdMsgPos__14CBaseMenuClassFPi_0x2384d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204844u; }
        if (ctx->pc != 0x204844u) { return; }
    }
    ctx->pc = 0x204844u;
label_204844:
    // 0x204844: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x204844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204848: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20484c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20484Cu;
    {
        const bool branch_taken_0x20484c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20484Cu;
            // 0x204850: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20484c) {
            ctx->pc = 0x204874u;
            goto label_204874;
        }
    }
    ctx->pc = 0x204854u;
    // 0x204854: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204854u;
    {
        const bool branch_taken_0x204854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204854u;
            // 0x204858: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204854) {
            ctx->pc = 0x204874u;
            goto label_204874;
        }
    }
    ctx->pc = 0x20485Cu;
    // 0x20485c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20485Cu;
    {
        const bool branch_taken_0x20485c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20485Cu;
            // 0x204860: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20485c) {
            ctx->pc = 0x204874u;
            goto label_204874;
        }
    }
    ctx->pc = 0x204864u;
    // 0x204864: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204864u;
    {
        const bool branch_taken_0x204864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x204868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204864u;
            // 0x204868: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204864) {
            ctx->pc = 0x204874u;
            goto label_204874;
        }
    }
    ctx->pc = 0x20486Cu;
    // 0x20486c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20486Cu;
    {
        const bool branch_taken_0x20486c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20486c) {
            ctx->pc = 0x204880u;
            goto label_204880;
        }
    }
    ctx->pc = 0x204874u;
label_204874:
    // 0x204874: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204878: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x204878u;
    SET_GPR_U32(ctx, 31, 0x204880u);
    ctx->pc = 0x20487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204878u;
            // 0x20487c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204880u; }
        if (ctx->pc != 0x204880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204880u; }
        if (ctx->pc != 0x204880u) { return; }
    }
    ctx->pc = 0x204880u;
label_204880:
    // 0x204880: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x204880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x204884: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x204884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x204888: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 31, 0x204890u);
    ctx->pc = 0x20488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204888u;
            // 0x20488c: 0x27a60068  addiu       $a2, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204890u; }
        if (ctx->pc != 0x204890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204890u; }
        if (ctx->pc != 0x204890u) { return; }
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x92230eb6  lbu         $v1, 0xEB6($s1)
    ctx->pc = 0x204890u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3766)));
    // 0x204894: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204894u;
    {
        const bool branch_taken_0x204894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204894) {
            ctx->pc = 0x2048B0u;
            goto label_2048b0;
        }
    }
    ctx->pc = 0x20489Cu;
    // 0x20489c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20489cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2048a0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x2048a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2048a4: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2048A4u;
    SET_GPR_U32(ctx, 31, 0x2048ACu);
    ctx->pc = 0x2048A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2048A4u;
            // 0x2048a8: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048ACu; }
        if (ctx->pc != 0x2048ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2048ACu; }
        if (ctx->pc != 0x2048ACu) { return; }
    }
    ctx->pc = 0x2048ACu;
label_2048ac:
    // 0x2048ac: 0xa2200eb6  sb          $zero, 0xEB6($s1)
    ctx->pc = 0x2048acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3766), (uint8_t)GPR_U32(ctx, 0));
label_2048b0:
    // 0x2048b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2048b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2048b4:
    // 0x2048b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2048b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2048b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2048b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2048bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2048BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2048C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2048BCu;
            // 0x2048c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2048C4u;
}
