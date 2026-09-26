#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextModeBuildUpInfo__13CMenuItemInfoFP13CGameDataUsed
// Address: 0x2407f0 - 0x2409bc
void NextModeBuildUpInfo__13CMenuItemInfoFP13CGameDataUsed_0x2407f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextModeBuildUpInfo__13CMenuItemInfoFP13CGameDataUsed_0x2407f0");
#endif

    switch (ctx->pc) {
        case 0x240850u: goto label_240850;
        case 0x240870u: goto label_240870;
        case 0x240898u: goto label_240898;
        case 0x2408acu: goto label_2408ac;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408f0u: goto label_2408f0;
        case 0x240948u: goto label_240948;
        case 0x240954u: goto label_240954;
        case 0x24095cu: goto label_24095c;
        case 0x240990u: goto label_240990;
        default: break;
    }

    ctx->pc = 0x2407f0u;

    // 0x2407f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2407f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2407f4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2407f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2407f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2407fc: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x2407fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x240800: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x240800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x240804: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240808: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x240808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x24080c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x24080cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240810: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x240810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x240814: 0x24c6dc2c  addiu       $a2, $a2, -0x23D4
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958124));
    // 0x240818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24081c: 0x3c1501ed  lui         $s5, 0x1ED
    ctx->pc = 0x24081cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)493 << 16));
    // 0x240820: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x240824: 0x24e7dc38  addiu       $a3, $a3, -0x23C8
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958136));
    // 0x240828: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24082c: 0x26b5dc20  addiu       $s5, $s5, -0x23E0
    ctx->pc = 0x24082cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958112));
    // 0x240830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x240834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x240838: 0xac25dc44  sw          $a1, -0x23BC($at)
    ctx->pc = 0x240838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958148), GPR_U32(ctx, 5));
    // 0x24083c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240840: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x240840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x240844: 0x8c24dc44  lw          $a0, -0x23BC($at)
    ctx->pc = 0x240844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958148)));
    // 0x240848: 0xc092afc  jal         func_24ABF0
    ctx->pc = 0x240848u;
    SET_GPR_U32(ctx, 31, 0x240850u);
    ctx->pc = 0x24084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240848u;
            // 0x24084c: 0x24a5dc28  addiu       $a1, $a1, -0x23D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240850u; }
        if (ctx->pc != 0x240850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240850u; }
        if (ctx->pc != 0x240850u) { return; }
    }
    ctx->pc = 0x240850u;
label_240850:
    // 0x240850: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x240854: 0xa422dc24  sh          $v0, -0x23DC($at)
    ctx->pc = 0x240854u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958116), (uint16_t)GPR_U32(ctx, 2));
    // 0x240858: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24085c: 0x8c22dc28  lw          $v0, -0x23D8($at)
    ctx->pc = 0x24085cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958120)));
    // 0x240860: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240860u;
    {
        const bool branch_taken_0x240860 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x240864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240860u;
            // 0x240864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240860) {
            ctx->pc = 0x240878u;
            goto label_240878;
        }
    }
    ctx->pc = 0x240868u;
    // 0x240868: 0xc094274  jal         func_2509D0
    ctx->pc = 0x240868u;
    SET_GPR_U32(ctx, 31, 0x240870u);
    ctx->pc = 0x24086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240868u;
            // 0x24086c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240870u; }
        if (ctx->pc != 0x240870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240870u; }
        if (ctx->pc != 0x240870u) { return; }
    }
    ctx->pc = 0x240870u;
label_240870:
    // 0x240870: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x240870u;
    {
        const bool branch_taken_0x240870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240870u;
            // 0x240874: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240870) {
            ctx->pc = 0x240994u;
            goto label_240994;
        }
    }
    ctx->pc = 0x240878u;
label_240878:
    // 0x240878: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24087c: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x24087cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x240880: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x240880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240884: 0xa2a00003  sb          $zero, 0x3($s5)
    ctx->pc = 0x240884u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x240888: 0x8c30ca58  lw          $s0, -0x35A8($at)
    ctx->pc = 0x240888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x24088c: 0x8f9682a4  lw          $s6, -0x7D5C($gp)
    ctx->pc = 0x24088cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
    // 0x240890: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x240890u;
    SET_GPR_U32(ctx, 31, 0x240898u);
    ctx->pc = 0x240894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240890u;
            // 0x240894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240898u; }
        if (ctx->pc != 0x240898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240898u; }
        if (ctx->pc != 0x240898u) { return; }
    }
    ctx->pc = 0x240898u;
label_240898:
    // 0x240898: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x240898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24089c: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x24089cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2408a0: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x2408a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x2408a4: 0xc065810  jal         func_196040
    ctx->pc = 0x2408A4u;
    SET_GPR_U32(ctx, 31, 0x2408ACu);
    ctx->pc = 0x2408A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408A4u;
            // 0x2408a8: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408ACu; }
        if (ctx->pc != 0x2408ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408ACu; }
        if (ctx->pc != 0x2408ACu) { return; }
    }
    ctx->pc = 0x2408ACu;
label_2408ac:
    // 0x2408ac: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2408acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2408b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2408b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2408b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2408B4u;
    {
        const bool branch_taken_0x2408b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2408B4u;
            // 0x2408b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408b4) {
            ctx->pc = 0x240928u;
            goto label_240928;
        }
    }
    ctx->pc = 0x2408BCu;
label_2408bc:
    // 0x2408bc: 0x8e92000c  lw          $s2, 0xC($s4)
    ctx->pc = 0x2408bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2408c0: 0xc065710  jal         func_195C40
    ctx->pc = 0x2408C0u;
    SET_GPR_U32(ctx, 31, 0x2408C8u);
    ctx->pc = 0x2408C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408C0u;
            // 0x2408c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C40u;
    if (runtime->hasFunction(0x195C40u)) {
        auto targetFn = runtime->lookupFunction(0x195C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408C8u; }
        if (ctx->pc != 0x2408C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponInfoData__Fi_0x195c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408C8u; }
        if (ctx->pc != 0x2408C8u) { return; }
    }
    ctx->pc = 0x2408C8u;
label_2408c8:
    // 0x2408c8: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x2408c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x2408cc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2408d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2408D0u;
    {
        const bool branch_taken_0x2408d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2408D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2408D0u;
            // 0x2408d4: 0x28410010  slti        $at, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408d0) {
            ctx->pc = 0x2408E4u;
            goto label_2408e4;
        }
    }
    ctx->pc = 0x2408D8u;
    // 0x2408d8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2408D8u;
    {
        const bool branch_taken_0x2408d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2408D8u;
            // 0x2408dc: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408d8) {
            ctx->pc = 0x2408E4u;
            goto label_2408e4;
        }
    }
    ctx->pc = 0x2408E0u;
    // 0x2408e0: 0xac521a08  sw          $s2, 0x1A08($v0)
    ctx->pc = 0x2408e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6664), GPR_U32(ctx, 18));
label_2408e4:
    // 0x2408e4: 0x0  nop
    ctx->pc = 0x2408e4u;
    // NOP
    // 0x2408e8: 0xc065810  jal         func_196040
    ctx->pc = 0x2408E8u;
    SET_GPR_U32(ctx, 31, 0x2408F0u);
    ctx->pc = 0x2408ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2408E8u;
            // 0x2408ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408F0u; }
        if (ctx->pc != 0x2408F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2408F0u; }
        if (ctx->pc != 0x2408F0u) { return; }
    }
    ctx->pc = 0x2408F0u;
label_2408f0:
    // 0x2408f0: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2408f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2408f4: 0x24630094  addiu       $v1, $v1, 0x94
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 148));
    // 0x2408f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2408f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2408fc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2408fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x240900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x240900u;
    {
        const bool branch_taken_0x240900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240900u;
            // 0x240904: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240900) {
            ctx->pc = 0x240920u;
            goto label_240920;
        }
    }
    ctx->pc = 0x240908u;
    // 0x240908: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240908u;
    {
        const bool branch_taken_0x240908 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240908u;
            // 0x24090c: 0xac760000  sw          $s6, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240908) {
            ctx->pc = 0x240920u;
            goto label_240920;
        }
    }
    ctx->pc = 0x240910u;
    // 0x240910: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x240910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x240914: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x240914u;
    {
        const bool branch_taken_0x240914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240914u;
            // 0x240918: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240914) {
            ctx->pc = 0x240920u;
            goto label_240920;
        }
    }
    ctx->pc = 0x24091Cu;
    // 0x24091c: 0xac401a08  sw          $zero, 0x1A08($v0)
    ctx->pc = 0x24091cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6664), GPR_U32(ctx, 0));
label_240920:
    // 0x240920: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x240924: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x240924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_240928:
    // 0x240928: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x240928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24092c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x24092cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240930: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x240930u;
    {
        const bool branch_taken_0x240930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240930u;
            // 0x240934: 0x2b3a021  addu        $s4, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240930) {
            ctx->pc = 0x2408BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2408bc;
        }
    }
    ctx->pc = 0x240938u;
    // 0x240938: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x240938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240940: 0xc087720  jal         func_21DC80
    ctx->pc = 0x240940u;
    SET_GPR_U32(ctx, 31, 0x240948u);
    ctx->pc = 0x240944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240940u;
            // 0x240944: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240948u; }
        if (ctx->pc != 0x240948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240948u; }
        if (ctx->pc != 0x240948u) { return; }
    }
    ctx->pc = 0x240948u;
label_240948:
    // 0x240948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24094c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x24094Cu;
    SET_GPR_U32(ctx, 31, 0x240954u);
    ctx->pc = 0x240950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24094Cu;
            // 0x240950: 0x240500b5  addiu       $a1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240954u; }
        if (ctx->pc != 0x240954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240954u; }
        if (ctx->pc != 0x240954u) { return; }
    }
    ctx->pc = 0x240954u;
label_240954:
    // 0x240954: 0xc087898  jal         func_21E260
    ctx->pc = 0x240954u;
    SET_GPR_U32(ctx, 31, 0x24095Cu);
    ctx->pc = 0x240958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240954u;
            // 0x240958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24095Cu; }
        if (ctx->pc != 0x24095Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24095Cu; }
        if (ctx->pc != 0x24095Cu) { return; }
    }
    ctx->pc = 0x24095Cu;
label_24095c:
    // 0x24095c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24095cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x240960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240964: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x240964u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x240968: 0xa6e00002  sh          $zero, 0x2($s7)
    ctx->pc = 0x240968u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x24096c: 0xa6e200c8  sh          $v0, 0xC8($s7)
    ctx->pc = 0x24096cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x240970: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240974: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x240974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x240978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x240978u;
    {
        const bool branch_taken_0x240978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240978u;
            // 0x24097c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240978) {
            ctx->pc = 0x240988u;
            goto label_240988;
        }
    }
    ctx->pc = 0x240980u;
    // 0x240980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240984: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x240984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_240988:
    // 0x240988: 0xc094274  jal         func_2509D0
    ctx->pc = 0x240988u;
    SET_GPR_U32(ctx, 31, 0x240990u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240990u; }
        if (ctx->pc != 0x240990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240990u; }
        if (ctx->pc != 0x240990u) { return; }
    }
    ctx->pc = 0x240990u;
label_240990:
    // 0x240990: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x240990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_240994:
    // 0x240994: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x240994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x240998: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x240998u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24099c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24099cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2409a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2409a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2409a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2409a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2409a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2409a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2409ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2409acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2409b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2409b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2409b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2409B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2409B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2409B4u;
            // 0x2409b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2409BCu;
}
