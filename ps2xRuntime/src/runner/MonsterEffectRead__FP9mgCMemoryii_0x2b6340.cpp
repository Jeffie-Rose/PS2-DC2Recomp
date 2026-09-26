#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterEffectRead__FP9mgCMemoryii
// Address: 0x2b6340 - 0x2b6550
void MonsterEffectRead__FP9mgCMemoryii_0x2b6340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterEffectRead__FP9mgCMemoryii_0x2b6340");
#endif

    switch (ctx->pc) {
        case 0x2b6368u: goto label_2b6368;
        case 0x2b6390u: goto label_2b6390;
        case 0x2b63b4u: goto label_2b63b4;
        case 0x2b63bcu: goto label_2b63bc;
        case 0x2b63f8u: goto label_2b63f8;
        case 0x2b6424u: goto label_2b6424;
        case 0x2b6460u: goto label_2b6460;
        case 0x2b6468u: goto label_2b6468;
        case 0x2b64a4u: goto label_2b64a4;
        case 0x2b64d4u: goto label_2b64d4;
        case 0x2b6510u: goto label_2b6510;
        default: break;
    }

    ctx->pc = 0x2b6340u;

    // 0x2b6340: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2b6340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2b6344: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b6344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2b6348: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b6348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b634c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b6350: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b6350u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6358: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b6358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b635c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b635cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6360: 0xc066a24  jal         func_19A890
    ctx->pc = 0x2B6360u;
    SET_GPR_U32(ctx, 31, 0x2B6368u);
    ctx->pc = 0x2B6364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6360u;
            // 0x2b6364: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A890u;
    if (runtime->hasFunction(0x19A890u)) {
        auto targetFn = runtime->lookupFunction(0x19A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6368u; }
        if (ctx->pc != 0x2B6368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterHengeParam__Fi_0x19a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6368u; }
        if (ctx->pc != 0x2B6368u) { return; }
    }
    ctx->pc = 0x2B6368u;
label_2b6368:
    // 0x2b6368: 0xaf829be0  sw          $v0, -0x6420($gp)
    ctx->pc = 0x2b6368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941664), GPR_U32(ctx, 2));
    // 0x2b636c: 0x8f829be0  lw          $v0, -0x6420($gp)
    ctx->pc = 0x2b636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941664)));
    // 0x2b6370: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x2B6370u;
    {
        const bool branch_taken_0x2b6370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6370u;
            // 0x2b6374: 0xaf809be4  sw          $zero, -0x641C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6370) {
            ctx->pc = 0x2B6530u;
            goto label_2b6530;
        }
    }
    ctx->pc = 0x2B6378u;
    // 0x2b6378: 0x1260006d  beqz        $s3, . + 4 + (0x6D << 2)
    ctx->pc = 0x2B6378u;
    {
        const bool branch_taken_0x2b6378 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6378) {
            ctx->pc = 0x2B6530u;
            goto label_2b6530;
        }
    }
    ctx->pc = 0x2B6380u;
    // 0x2b6380: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b6384: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2B6384u;
    {
        const bool branch_taken_0x2b6384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6384u;
            // 0x2b6388: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6384) {
            ctx->pc = 0x2B6530u;
            goto label_2b6530;
        }
    }
    ctx->pc = 0x2B638Cu;
    // 0x2b638c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b638cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6390:
    // 0x2b6390: 0x8f829be0  lw          $v0, -0x6420($gp)
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941664)));
    // 0x2b6394: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b6398: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2b6398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2b639c: 0x10a0005f  beqz        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2B639Cu;
    {
        const bool branch_taken_0x2b639c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b639c) {
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B63A4u;
    // 0x2b63a4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x2b63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b63a8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b63a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b63ac: 0xc0b8344  jal         func_2E0D10
    ctx->pc = 0x2B63ACu;
    SET_GPR_U32(ctx, 31, 0x2B63B4u);
    ctx->pc = 0x2B63B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63ACu;
            // 0x2b63b0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D10u;
    if (runtime->hasFunction(0x2E0D10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63B4u; }
        if (ctx->pc != 0x2B63B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNeedFilePath__16CEffectScriptManFPcPcPc_0x2e0d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63B4u; }
        if (ctx->pc != 0x2B63B4u) { return; }
    }
    ctx->pc = 0x2B63B4u;
label_2b63b4:
    // 0x2b63b4: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B63B4u;
    SET_GPR_U32(ctx, 31, 0x2B63BCu);
    ctx->pc = 0x2B63B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63B4u;
            // 0x2b63b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63BCu; }
        if (ctx->pc != 0x2B63BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63BCu; }
        if (ctx->pc != 0x2B63BCu) { return; }
    }
    ctx->pc = 0x2B63BCu;
label_2b63bc:
    // 0x2b63bc: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b63c0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x2b63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b63c4: 0x2442cf50  addiu       $v0, $v0, -0x30B0
    ctx->pc = 0x2b63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954832));
    // 0x2b63c8: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b63cc: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2b63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b63d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b63d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b63d8: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B63D8u;
    {
        const bool branch_taken_0x2b63d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B63DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63D8u;
            // 0x2b63dc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63d8) {
            ctx->pc = 0x2B6408u;
            goto label_2b6408;
        }
    }
    ctx->pc = 0x2B63E0u;
    // 0x2b63e0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b63e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b63e4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b63e8: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x2b63e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
    // 0x2b63ec: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2b63ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b63f0: 0xc05224c  jal         func_148930
    ctx->pc = 0x2B63F0u;
    SET_GPR_U32(ctx, 31, 0x2B63F8u);
    ctx->pc = 0x2B63F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B63F0u;
            // 0x2b63f4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63F8u; }
        if (ctx->pc != 0x2B63F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B63F8u; }
        if (ctx->pc != 0x2B63F8u) { return; }
    }
    ctx->pc = 0x2B63F8u;
label_2b63f8:
    // 0x2b63f8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B63F8u;
    {
        const bool branch_taken_0x2b63f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63f8) {
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B6400u;
    // 0x2b6400: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B6400u;
    {
        const bool branch_taken_0x2b6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6400) {
            ctx->pc = 0x2B642Cu;
            goto label_2b642c;
        }
    }
    ctx->pc = 0x2B6408u;
label_2b6408:
    // 0x2b6408: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b6408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b640c: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b640cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b6410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6414: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x2b6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
    // 0x2b6418: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2b6418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b641c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2B641Cu;
    SET_GPR_U32(ctx, 31, 0x2B6424u);
    ctx->pc = 0x2B6420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B641Cu;
            // 0x2b6420: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6424u; }
        if (ctx->pc != 0x2B6424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6424u; }
        if (ctx->pc != 0x2B6424u) { return; }
    }
    ctx->pc = 0x2B6424u;
label_2b6424:
    // 0x2b6424: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B6424u;
    {
        const bool branch_taken_0x2b6424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6424) {
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B642Cu;
label_2b642c:
    // 0x2b642c: 0x0  nop
    ctx->pc = 0x2b642cu;
    // NOP
    // 0x2b6430: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b6430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b6434: 0x2442cf70  addiu       $v0, $v0, -0x3090
    ctx->pc = 0x2b6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954864));
    // 0x2b6438: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b643c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b643cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6440: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x2b6440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2b6444: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2b6444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b6448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6448u;
    {
        const bool branch_taken_0x2b6448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6448u;
            // 0x2b644c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6448) {
            ctx->pc = 0x2B6458u;
            goto label_2b6458;
        }
    }
    ctx->pc = 0x2B6450u;
    // 0x2b6450: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b6450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b6454: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b6454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b6458:
    // 0x2b6458: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B6458u;
    SET_GPR_U32(ctx, 31, 0x2B6460u);
    ctx->pc = 0x2B645Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6458u;
            // 0x2b645c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6460u; }
        if (ctx->pc != 0x2B6460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6460u; }
        if (ctx->pc != 0x2B6460u) { return; }
    }
    ctx->pc = 0x2B6460u;
label_2b6460:
    // 0x2b6460: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2B6460u;
    SET_GPR_U32(ctx, 31, 0x2B6468u);
    ctx->pc = 0x2B6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6460u;
            // 0x2b6464: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6468u; }
        if (ctx->pc != 0x2B6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6468u; }
        if (ctx->pc != 0x2B6468u) { return; }
    }
    ctx->pc = 0x2B6468u;
label_2b6468:
    // 0x2b6468: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b6468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b646c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x2b646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x2b6470: 0x2442cf60  addiu       $v0, $v0, -0x30A0
    ctx->pc = 0x2b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x2b6474: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2b6474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b6478: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x2b6478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b647c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b647cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b6480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6484: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B6484u;
    {
        const bool branch_taken_0x2b6484 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6484u;
            // 0x2b6488: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6484) {
            ctx->pc = 0x2B64B4u;
            goto label_2b64b4;
        }
    }
    ctx->pc = 0x2B648Cu;
    // 0x2b648c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b648cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b6490: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b6490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b6494: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x2b6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x2b6498: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2b6498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b649c: 0xc05224c  jal         func_148930
    ctx->pc = 0x2B649Cu;
    SET_GPR_U32(ctx, 31, 0x2B64A4u);
    ctx->pc = 0x2B64A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B649Cu;
            // 0x2b64a0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64A4u; }
        if (ctx->pc != 0x2B64A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64A4u; }
        if (ctx->pc != 0x2B64A4u) { return; }
    }
    ctx->pc = 0x2B64A4u;
label_2b64a4:
    // 0x2b64a4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B64A4u;
    {
        const bool branch_taken_0x2b64a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64a4) {
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B64ACu;
    // 0x2b64ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B64ACu;
    {
        const bool branch_taken_0x2b64ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64ac) {
            ctx->pc = 0x2B64DCu;
            goto label_2b64dc;
        }
    }
    ctx->pc = 0x2B64B4u;
label_2b64b4:
    // 0x2b64b4: 0x0  nop
    ctx->pc = 0x2b64b4u;
    // NOP
    // 0x2b64b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b64b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b64bc: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b64c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b64c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64c4: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x2b64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x2b64c8: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2b64c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b64cc: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2B64CCu;
    SET_GPR_U32(ctx, 31, 0x2B64D4u);
    ctx->pc = 0x2B64D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B64CCu;
            // 0x2b64d0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64D4u; }
        if (ctx->pc != 0x2B64D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B64D4u; }
        if (ctx->pc != 0x2B64D4u) { return; }
    }
    ctx->pc = 0x2B64D4u;
label_2b64d4:
    // 0x2b64d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B64D4u;
    {
        const bool branch_taken_0x2b64d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64d4) {
            ctx->pc = 0x2B651Cu;
            goto label_2b651c;
        }
    }
    ctx->pc = 0x2B64DCu;
label_2b64dc:
    // 0x2b64dc: 0x0  nop
    ctx->pc = 0x2b64dcu;
    // NOP
    // 0x2b64e0: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
    // 0x2b64e4: 0x2442cf80  addiu       $v0, $v0, -0x3080
    ctx->pc = 0x2b64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954880));
    // 0x2b64e8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b64ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b64f0: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x2b64f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2b64f4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2b64f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2b64f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B64F8u;
    {
        const bool branch_taken_0x2b64f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B64FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B64F8u;
            // 0x2b64fc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64f8) {
            ctx->pc = 0x2B6508u;
            goto label_2b6508;
        }
    }
    ctx->pc = 0x2B6500u;
    // 0x2b6500: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b6500u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2b6504: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b6504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b6508:
    // 0x2b6508: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2B6508u;
    SET_GPR_U32(ctx, 31, 0x2B6510u);
    ctx->pc = 0x2B650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6508u;
            // 0x2b650c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6510u; }
        if (ctx->pc != 0x2B6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6510u; }
        if (ctx->pc != 0x2B6510u) { return; }
    }
    ctx->pc = 0x2B6510u;
label_2b6510:
    // 0x2b6510: 0x8f829be4  lw          $v0, -0x641C($gp)
    ctx->pc = 0x2b6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941668)));
    // 0x2b6514: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b6514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b6518: 0xaf829be4  sw          $v0, -0x641C($gp)
    ctx->pc = 0x2b6518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941668), GPR_U32(ctx, 2));
label_2b651c:
    // 0x2b651c: 0x0  nop
    ctx->pc = 0x2b651cu;
    // NOP
    // 0x2b6520: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b6524: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2b6524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b6528: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2B6528u;
    {
        const bool branch_taken_0x2b6528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6528u;
            // 0x2b652c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6528) {
            ctx->pc = 0x2B6390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b6390;
        }
    }
    ctx->pc = 0x2B6530u;
label_2b6530:
    // 0x2b6530: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b6530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6534: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b6534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6538: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b6538u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b653c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b653cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6544: 0x8f829be4  lw          $v0, -0x641C($gp)
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941668)));
    // 0x2b6548: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B654Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6548u;
            // 0x2b654c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6550u;
}
