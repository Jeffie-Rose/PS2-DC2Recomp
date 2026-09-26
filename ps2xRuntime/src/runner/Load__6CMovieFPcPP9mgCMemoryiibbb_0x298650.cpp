#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Load__6CMovieFPcPP9mgCMemoryiibbb
// Address: 0x298650 - 0x298ac8
void Load__6CMovieFPcPP9mgCMemoryiibbb_0x298650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Load__6CMovieFPcPP9mgCMemoryiibbb_0x298650");
#endif

    switch (ctx->pc) {
        case 0x2986b8u: goto label_2986b8;
        case 0x2986d0u: goto label_2986d0;
        case 0x2986dcu: goto label_2986dc;
        case 0x2986f4u: goto label_2986f4;
        case 0x298700u: goto label_298700;
        case 0x298718u: goto label_298718;
        case 0x29872cu: goto label_29872c;
        case 0x298744u: goto label_298744;
        case 0x298750u: goto label_298750;
        case 0x298768u: goto label_298768;
        case 0x298774u: goto label_298774;
        case 0x298784u: goto label_298784;
        case 0x29879cu: goto label_29879c;
        case 0x2987b4u: goto label_2987b4;
        case 0x2987ccu: goto label_2987cc;
        case 0x2987e8u: goto label_2987e8;
        case 0x298804u: goto label_298804;
        case 0x29880cu: goto label_29880c;
        case 0x298828u: goto label_298828;
        case 0x298830u: goto label_298830;
        case 0x29884cu: goto label_29884c;
        case 0x29885cu: goto label_29885c;
        case 0x298878u: goto label_298878;
        case 0x298880u: goto label_298880;
        case 0x29889cu: goto label_29889c;
        case 0x2988acu: goto label_2988ac;
        case 0x2988ccu: goto label_2988cc;
        case 0x2988f4u: goto label_2988f4;
        case 0x2988fcu: goto label_2988fc;
        case 0x29890cu: goto label_29890c;
        case 0x298944u: goto label_298944;
        case 0x298954u: goto label_298954;
        case 0x298964u: goto label_298964;
        case 0x298978u: goto label_298978;
        case 0x298998u: goto label_298998;
        case 0x2989bcu: goto label_2989bc;
        case 0x2989ecu: goto label_2989ec;
        case 0x298a34u: goto label_298a34;
        case 0x298a44u: goto label_298a44;
        case 0x298a70u: goto label_298a70;
        case 0x298a84u: goto label_298a84;
        case 0x298a94u: goto label_298a94;
        default: break;
    }

    ctx->pc = 0x298650u;

    // 0x298650: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x298654: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298658: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x298658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29865c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x298660: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x298660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x298664: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x298664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x298668: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x298668u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29866c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x298670: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x298670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298674: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x298674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x298678: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x298678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29867c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29867cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x298680: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x298680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298684: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x298684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x298688: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x298688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29868c: 0xa38998f8  sb          $t1, -0x6708($gp)
    ctx->pc = 0x29868cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940920), (uint8_t)GPR_U32(ctx, 9));
    // 0x298690: 0xa3809900  sb          $zero, -0x6700($gp)
    ctx->pc = 0x298690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940928), (uint8_t)GPR_U32(ctx, 0));
    // 0x298694: 0xa38098fc  sb          $zero, -0x6704($gp)
    ctx->pc = 0x298694u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940924), (uint8_t)GPR_U32(ctx, 0));
    // 0x298698: 0xa0203900  sb          $zero, 0x3900($at)
    ctx->pc = 0x298698u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14592), (uint8_t)GPR_U32(ctx, 0));
    // 0x29869c: 0xa3809910  sb          $zero, -0x66F0($gp)
    ctx->pc = 0x29869cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940944), (uint8_t)GPR_U32(ctx, 0));
    // 0x2986a0: 0xa3809914  sb          $zero, -0x66EC($gp)
    ctx->pc = 0x2986a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940948), (uint8_t)GPR_U32(ctx, 0));
    // 0x2986a4: 0xaf879908  sw          $a3, -0x66F8($gp)
    ctx->pc = 0x2986a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940936), GPR_U32(ctx, 7));
    // 0x2986a8: 0xaf88990c  sw          $t0, -0x66F4($gp)
    ctx->pc = 0x2986a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940940), GPR_U32(ctx, 8));
    // 0x2986ac: 0xa38a9904  sb          $t2, -0x66FC($gp)
    ctx->pc = 0x2986acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940932), (uint8_t)GPR_U32(ctx, 10));
    // 0x2986b0: 0xc0a63e0  jal         func_298F80
    ctx->pc = 0x2986B0u;
    SET_GPR_U32(ctx, 31, 0x2986B8u);
    ctx->pc = 0x2986B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986B0u;
            // 0x2986b4: 0xaf809918  sw          $zero, -0x66E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F80u;
    if (runtime->hasFunction(0x298F80u)) {
        auto targetFn = runtime->lookupFunction(0x298F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986B8u; }
        if (ctx->pc != 0x2986B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoBufDataSize__6CMovieFv_0x298f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986B8u; }
        if (ctx->pc != 0x2986B8u) { return; }
    }
    ctx->pc = 0x2986B8u;
label_2986b8:
    // 0x2986b8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2986B8u;
    {
        const bool branch_taken_0x2986b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2986BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2986B8u;
            // 0x2986bc: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986b8) {
            ctx->pc = 0x2986C8u;
            goto label_2986c8;
        }
    }
    ctx->pc = 0x2986C0u;
    // 0x2986c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2986c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2986c4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_2986c8:
    // 0x2986c8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2986C8u;
    SET_GPR_U32(ctx, 31, 0x2986D0u);
    ctx->pc = 0x2986CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986C8u;
            // 0x2986cc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D0u; }
        if (ctx->pc != 0x2986D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986D0u; }
        if (ctx->pc != 0x2986D0u) { return; }
    }
    ctx->pc = 0x2986D0u;
label_2986d0:
    // 0x2986d0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2986d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2986d4: 0xc0a63e4  jal         func_298F90
    ctx->pc = 0x2986D4u;
    SET_GPR_U32(ctx, 31, 0x2986DCu);
    ctx->pc = 0x2986D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986D4u;
            // 0x2986d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F90u;
    if (runtime->hasFunction(0x298F90u)) {
        auto targetFn = runtime->lookupFunction(0x298F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986DCu; }
        if (ctx->pc != 0x2986DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetViBufDataSize__6CMovieFv_0x298f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986DCu; }
        if (ctx->pc != 0x2986DCu) { return; }
    }
    ctx->pc = 0x2986DCu;
label_2986dc:
    // 0x2986dc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2986DCu;
    {
        const bool branch_taken_0x2986dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2986E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2986DCu;
            // 0x2986e0: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986dc) {
            ctx->pc = 0x2986ECu;
            goto label_2986ec;
        }
    }
    ctx->pc = 0x2986E4u;
    // 0x2986e4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2986e8: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x2986e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_2986ec:
    // 0x2986ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2986ECu;
    SET_GPR_U32(ctx, 31, 0x2986F4u);
    ctx->pc = 0x2986F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986ECu;
            // 0x2986f0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986F4u; }
        if (ctx->pc != 0x2986F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2986F4u; }
        if (ctx->pc != 0x2986F4u) { return; }
    }
    ctx->pc = 0x2986F4u;
label_2986f4:
    // 0x2986f4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2986f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x2986f8: 0xc0a63e8  jal         func_298FA0
    ctx->pc = 0x2986F8u;
    SET_GPR_U32(ctx, 31, 0x298700u);
    ctx->pc = 0x2986FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2986F8u;
            // 0x2986fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FA0u;
    if (runtime->hasFunction(0x298FA0u)) {
        auto targetFn = runtime->lookupFunction(0x298FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298700u; }
        if (ctx->pc != 0x298700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetViBufTagSize__6CMovieFv_0x298fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298700u; }
        if (ctx->pc != 0x298700u) { return; }
    }
    ctx->pc = 0x298700u;
label_298700:
    // 0x298700: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298700u;
    {
        const bool branch_taken_0x298700 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298700u;
            // 0x298704: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298700) {
            ctx->pc = 0x298710u;
            goto label_298710;
        }
    }
    ctx->pc = 0x298708u;
    // 0x298708: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29870c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x29870cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_298710:
    // 0x298710: 0xc04e748  jal         func_139D20
    ctx->pc = 0x298710u;
    SET_GPR_U32(ctx, 31, 0x298718u);
    ctx->pc = 0x298714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298710u;
            // 0x298714: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298718u; }
        if (ctx->pc != 0x298718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298718u; }
        if (ctx->pc != 0x298718u) { return; }
    }
    ctx->pc = 0x298718u;
label_298718:
    // 0x298718: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x298718u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x29871c: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x29871cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x298720: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x298724: 0xc0a63ec  jal         func_298FB0
    ctx->pc = 0x298724u;
    SET_GPR_U32(ctx, 31, 0x29872Cu);
    ctx->pc = 0x298728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298724u;
            // 0x298728: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FB0u;
    if (runtime->hasFunction(0x298FB0u)) {
        auto targetFn = runtime->lookupFunction(0x298FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29872Cu; }
        if (ctx->pc != 0x29872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMpegWorkSize__6CMovieFii_0x298fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29872Cu; }
        if (ctx->pc != 0x29872Cu) { return; }
    }
    ctx->pc = 0x29872Cu;
label_29872c:
    // 0x29872c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29872Cu;
    {
        const bool branch_taken_0x29872c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29872Cu;
            // 0x298730: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29872c) {
            ctx->pc = 0x29873Cu;
            goto label_29873c;
        }
    }
    ctx->pc = 0x298734u;
    // 0x298734: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x298738: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x298738u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_29873c:
    // 0x29873c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x29873Cu;
    SET_GPR_U32(ctx, 31, 0x298744u);
    ctx->pc = 0x298740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29873Cu;
            // 0x298740: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298744u; }
        if (ctx->pc != 0x298744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298744u; }
        if (ctx->pc != 0x298744u) { return; }
    }
    ctx->pc = 0x298744u;
label_298744:
    // 0x298744: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x298744u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x298748: 0xc0a63f8  jal         func_298FE0
    ctx->pc = 0x298748u;
    SET_GPR_U32(ctx, 31, 0x298750u);
    ctx->pc = 0x29874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298748u;
            // 0x29874c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FE0u;
    if (runtime->hasFunction(0x298FE0u)) {
        auto targetFn = runtime->lookupFunction(0x298FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298750u; }
        if (ctx->pc != 0x298750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBufSize__6CMovieFv_0x298fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298750u; }
        if (ctx->pc != 0x298750u) { return; }
    }
    ctx->pc = 0x298750u;
label_298750:
    // 0x298750: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298750u;
    {
        const bool branch_taken_0x298750 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298750u;
            // 0x298754: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298750) {
            ctx->pc = 0x298760u;
            goto label_298760;
        }
    }
    ctx->pc = 0x298758u;
    // 0x298758: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29875c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x29875cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_298760:
    // 0x298760: 0xc04e748  jal         func_139D20
    ctx->pc = 0x298760u;
    SET_GPR_U32(ctx, 31, 0x298768u);
    ctx->pc = 0x298764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298760u;
            // 0x298764: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298768u; }
        if (ctx->pc != 0x298768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298768u; }
        if (ctx->pc != 0x298768u) { return; }
    }
    ctx->pc = 0x298768u;
label_298768:
    // 0x298768: 0xaf8298ec  sw          $v0, -0x6714($gp)
    ctx->pc = 0x298768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940908), GPR_U32(ctx, 2));
    // 0x29876c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29876cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298770: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x298770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298774:
    // 0x298774: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x298774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x298778: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x298778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x29877c: 0xc0a63fc  jal         func_298FF0
    ctx->pc = 0x29877Cu;
    SET_GPR_U32(ctx, 31, 0x298784u);
    ctx->pc = 0x298780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29877Cu;
            // 0x298780: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FF0u;
    if (runtime->hasFunction(0x298FF0u)) {
        auto targetFn = runtime->lookupFunction(0x298FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298784u; }
        if (ctx->pc != 0x298784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTagProgSize__6CMovieFii_0x298ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298784u; }
        if (ctx->pc != 0x298784u) { return; }
    }
    ctx->pc = 0x298784u;
label_298784:
    // 0x298784: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298784u;
    {
        const bool branch_taken_0x298784 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298784u;
            // 0x298788: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298784) {
            ctx->pc = 0x298794u;
            goto label_298794;
        }
    }
    ctx->pc = 0x29878Cu;
    // 0x29878c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x29878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x298790: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x298790u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_298794:
    // 0x298794: 0xc04e748  jal         func_139D20
    ctx->pc = 0x298794u;
    SET_GPR_U32(ctx, 31, 0x29879Cu);
    ctx->pc = 0x298798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298794u;
            // 0x298798: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29879Cu; }
        if (ctx->pc != 0x29879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29879Cu; }
        if (ctx->pc != 0x29879Cu) { return; }
    }
    ctx->pc = 0x29879Cu;
label_29879c:
    // 0x29879c: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x29879cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2987a0: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2987a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2987a4: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x2987a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x2987a8: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x2987a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x2987ac: 0xc0a63fc  jal         func_298FF0
    ctx->pc = 0x2987ACu;
    SET_GPR_U32(ctx, 31, 0x2987B4u);
    ctx->pc = 0x2987B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2987ACu;
            // 0x2987b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FF0u;
    if (runtime->hasFunction(0x298FF0u)) {
        auto targetFn = runtime->lookupFunction(0x298FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987B4u; }
        if (ctx->pc != 0x2987B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTagProgSize__6CMovieFii_0x298ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987B4u; }
        if (ctx->pc != 0x2987B4u) { return; }
    }
    ctx->pc = 0x2987B4u;
label_2987b4:
    // 0x2987b4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2987B4u;
    {
        const bool branch_taken_0x2987b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2987B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987B4u;
            // 0x2987b8: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987b4) {
            ctx->pc = 0x2987C4u;
            goto label_2987c4;
        }
    }
    ctx->pc = 0x2987BCu;
    // 0x2987bc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2987bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2987c0: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x2987c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_2987c4:
    // 0x2987c4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2987C4u;
    SET_GPR_U32(ctx, 31, 0x2987CCu);
    ctx->pc = 0x2987C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2987C4u;
            // 0x2987c8: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987CCu; }
        if (ctx->pc != 0x2987CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987CCu; }
        if (ctx->pc != 0x2987CCu) { return; }
    }
    ctx->pc = 0x2987CCu;
label_2987cc:
    // 0x2987cc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2987ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2987d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2987d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2987d4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2987d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2987d8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2987D8u;
    {
        const bool branch_taken_0x2987d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2987DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987D8u;
            // 0x2987dc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987d8) {
            ctx->pc = 0x298774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298774;
        }
    }
    ctx->pc = 0x2987E0u;
    // 0x2987e0: 0xc0a63e0  jal         func_298F80
    ctx->pc = 0x2987E0u;
    SET_GPR_U32(ctx, 31, 0x2987E8u);
    ctx->pc = 0x2987E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2987E0u;
            // 0x2987e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F80u;
    if (runtime->hasFunction(0x298F80u)) {
        auto targetFn = runtime->lookupFunction(0x298F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987E8u; }
        if (ctx->pc != 0x2987E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVoBufDataSize__6CMovieFv_0x298f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2987E8u; }
        if (ctx->pc != 0x2987E8u) { return; }
    }
    ctx->pc = 0x2987E8u;
label_2987e8:
    // 0x2987e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2987E8u;
    {
        const bool branch_taken_0x2987e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2987ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2987E8u;
            // 0x2987ec: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2987e8) {
            ctx->pc = 0x2987F8u;
            goto label_2987f8;
        }
    }
    ctx->pc = 0x2987F0u;
    // 0x2987f0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2987f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2987f4: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x2987f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_2987f8:
    // 0x2987f8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2987f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2987fc: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2987FCu;
    SET_GPR_U32(ctx, 31, 0x298804u);
    ctx->pc = 0x298800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2987FCu;
            // 0x298800: 0x2484dd78  addiu       $a0, $a0, -0x2288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298804u; }
        if (ctx->pc != 0x298804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298804u; }
        if (ctx->pc != 0x298804u) { return; }
    }
    ctx->pc = 0x298804u;
label_298804:
    // 0x298804: 0xc0a63e4  jal         func_298F90
    ctx->pc = 0x298804u;
    SET_GPR_U32(ctx, 31, 0x29880Cu);
    ctx->pc = 0x298808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298804u;
            // 0x298808: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F90u;
    if (runtime->hasFunction(0x298F90u)) {
        auto targetFn = runtime->lookupFunction(0x298F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29880Cu; }
        if (ctx->pc != 0x29880Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetViBufDataSize__6CMovieFv_0x298f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29880Cu; }
        if (ctx->pc != 0x29880Cu) { return; }
    }
    ctx->pc = 0x29880Cu;
label_29880c:
    // 0x29880c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29880Cu;
    {
        const bool branch_taken_0x29880c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29880Cu;
            // 0x298810: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29880c) {
            ctx->pc = 0x29881Cu;
            goto label_29881c;
        }
    }
    ctx->pc = 0x298814u;
    // 0x298814: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x298818: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x298818u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_29881c:
    // 0x29881c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29881cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x298820: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x298820u;
    SET_GPR_U32(ctx, 31, 0x298828u);
    ctx->pc = 0x298824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298820u;
            // 0x298824: 0x2484dd88  addiu       $a0, $a0, -0x2278 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298828u; }
        if (ctx->pc != 0x298828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298828u; }
        if (ctx->pc != 0x298828u) { return; }
    }
    ctx->pc = 0x298828u;
label_298828:
    // 0x298828: 0xc0a63e8  jal         func_298FA0
    ctx->pc = 0x298828u;
    SET_GPR_U32(ctx, 31, 0x298830u);
    ctx->pc = 0x29882Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298828u;
            // 0x29882c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FA0u;
    if (runtime->hasFunction(0x298FA0u)) {
        auto targetFn = runtime->lookupFunction(0x298FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298830u; }
        if (ctx->pc != 0x298830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetViBufTagSize__6CMovieFv_0x298fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298830u; }
        if (ctx->pc != 0x298830u) { return; }
    }
    ctx->pc = 0x298830u;
label_298830:
    // 0x298830: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298830u;
    {
        const bool branch_taken_0x298830 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298830u;
            // 0x298834: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298830) {
            ctx->pc = 0x298840u;
            goto label_298840;
        }
    }
    ctx->pc = 0x298838u;
    // 0x298838: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29883c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x29883cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_298840:
    // 0x298840: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x298840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x298844: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x298844u;
    SET_GPR_U32(ctx, 31, 0x29884Cu);
    ctx->pc = 0x298848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298844u;
            // 0x298848: 0x2484dd98  addiu       $a0, $a0, -0x2268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29884Cu; }
        if (ctx->pc != 0x29884Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29884Cu; }
        if (ctx->pc != 0x29884Cu) { return; }
    }
    ctx->pc = 0x29884Cu;
label_29884c:
    // 0x29884c: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x29884cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x298850: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x298850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x298854: 0xc0a63ec  jal         func_298FB0
    ctx->pc = 0x298854u;
    SET_GPR_U32(ctx, 31, 0x29885Cu);
    ctx->pc = 0x298858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298854u;
            // 0x298858: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FB0u;
    if (runtime->hasFunction(0x298FB0u)) {
        auto targetFn = runtime->lookupFunction(0x298FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29885Cu; }
        if (ctx->pc != 0x29885Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMpegWorkSize__6CMovieFii_0x298fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29885Cu; }
        if (ctx->pc != 0x29885Cu) { return; }
    }
    ctx->pc = 0x29885Cu;
label_29885c:
    // 0x29885c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29885Cu;
    {
        const bool branch_taken_0x29885c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29885Cu;
            // 0x298860: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29885c) {
            ctx->pc = 0x29886Cu;
            goto label_29886c;
        }
    }
    ctx->pc = 0x298864u;
    // 0x298864: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x298868: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x298868u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_29886c:
    // 0x29886c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x298870: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x298870u;
    SET_GPR_U32(ctx, 31, 0x298878u);
    ctx->pc = 0x298874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298870u;
            // 0x298874: 0x2484dda8  addiu       $a0, $a0, -0x2258 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298878u; }
        if (ctx->pc != 0x298878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298878u; }
        if (ctx->pc != 0x298878u) { return; }
    }
    ctx->pc = 0x298878u;
label_298878:
    // 0x298878: 0xc0a63f8  jal         func_298FE0
    ctx->pc = 0x298878u;
    SET_GPR_U32(ctx, 31, 0x298880u);
    ctx->pc = 0x29887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298878u;
            // 0x29887c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FE0u;
    if (runtime->hasFunction(0x298FE0u)) {
        auto targetFn = runtime->lookupFunction(0x298FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298880u; }
        if (ctx->pc != 0x298880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBufSize__6CMovieFv_0x298fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298880u; }
        if (ctx->pc != 0x298880u) { return; }
    }
    ctx->pc = 0x298880u;
label_298880:
    // 0x298880: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x298880u;
    {
        const bool branch_taken_0x298880 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x298884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298880u;
            // 0x298884: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298880) {
            ctx->pc = 0x298890u;
            goto label_298890;
        }
    }
    ctx->pc = 0x298888u;
    // 0x298888: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x298888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x29888c: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x29888cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_298890:
    // 0x298890: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x298894: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x298894u;
    SET_GPR_U32(ctx, 31, 0x29889Cu);
    ctx->pc = 0x298898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298894u;
            // 0x298898: 0x2484ddb8  addiu       $a0, $a0, -0x2248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29889Cu; }
        if (ctx->pc != 0x29889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29889Cu; }
        if (ctx->pc != 0x29889Cu) { return; }
    }
    ctx->pc = 0x29889Cu;
label_29889c:
    // 0x29889c: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x29889cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x2988a0: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x2988a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x2988a4: 0xc0a63fc  jal         func_298FF0
    ctx->pc = 0x2988A4u;
    SET_GPR_U32(ctx, 31, 0x2988ACu);
    ctx->pc = 0x2988A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2988A4u;
            // 0x2988a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FF0u;
    if (runtime->hasFunction(0x298FF0u)) {
        auto targetFn = runtime->lookupFunction(0x298FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988ACu; }
        if (ctx->pc != 0x2988ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTagProgSize__6CMovieFii_0x298ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988ACu; }
        if (ctx->pc != 0x2988ACu) { return; }
    }
    ctx->pc = 0x2988ACu;
label_2988ac:
    // 0x2988ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2988ACu;
    {
        const bool branch_taken_0x2988ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2988B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2988ACu;
            // 0x2988b0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2988ac) {
            ctx->pc = 0x2988BCu;
            goto label_2988bc;
        }
    }
    ctx->pc = 0x2988B4u;
    // 0x2988b4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2988b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2988b8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x2988b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_2988bc:
    // 0x2988bc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2988bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2988c0: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2988c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2988c4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2988C4u;
    SET_GPR_U32(ctx, 31, 0x2988CCu);
    ctx->pc = 0x2988C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2988C4u;
            // 0x2988c8: 0x2484ddd0  addiu       $a0, $a0, -0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988CCu; }
        if (ctx->pc != 0x2988CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988CCu; }
        if (ctx->pc != 0x2988CCu) { return; }
    }
    ctx->pc = 0x2988CCu;
label_2988cc:
    // 0x2988cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2988ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2988d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2988d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2988d4: 0x8c23e000  lw          $v1, -0x2000($at)
    ctx->pc = 0x2988d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959104)));
    // 0x2988d8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x2988d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x2988dc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2988dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2988e0: 0xac23e000  sw          $v1, -0x2000($at)
    ctx->pc = 0x2988e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959104), GPR_U32(ctx, 3));
    // 0x2988e4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x2988e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x2988e8: 0xac22e010  sw          $v0, -0x1FF0($at)
    ctx->pc = 0x2988e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 2));
    // 0x2988ec: 0xc0a6bb0  jal         func_29AEC0
    ctx->pc = 0x2988ECu;
    SET_GPR_U32(ctx, 31, 0x2988F4u);
    ctx->pc = 0x2988F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2988ECu;
            // 0x2988f0: 0x8f8498ec  lw          $a0, -0x6714($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AEC0u;
    if (runtime->hasFunction(0x29AEC0u)) {
        auto targetFn = runtime->lookupFunction(0x29AEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988F4u; }
        if (ctx->pc != 0x2988F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufCreate__FP7ReadBuf_0x29aec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988F4u; }
        if (ctx->pc != 0x2988F4u) { return; }
    }
    ctx->pc = 0x2988F4u;
label_2988f4:
    // 0x2988f4: 0xc043812  jal         func_10E048
    ctx->pc = 0x2988F4u;
    SET_GPR_U32(ctx, 31, 0x2988FCu);
    ctx->pc = 0x10E048u;
    if (runtime->hasFunction(0x10E048u)) {
        auto targetFn = runtime->lookupFunction(0x10E048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988FCu; }
        if (ctx->pc != 0x2988FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegInit_0x10e048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2988FCu; }
        if (ctx->pc != 0x2988FCu) { return; }
    }
    ctx->pc = 0x2988FCu;
label_2988fc:
    // 0x2988fc: 0x8f859908  lw          $a1, -0x66F8($gp)
    ctx->pc = 0x2988fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940936)));
    // 0x298900: 0x8f86990c  lw          $a2, -0x66F4($gp)
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940940)));
    // 0x298904: 0xc0a63ec  jal         func_298FB0
    ctx->pc = 0x298904u;
    SET_GPR_U32(ctx, 31, 0x29890Cu);
    ctx->pc = 0x298908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298904u;
            // 0x298908: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298FB0u;
    if (runtime->hasFunction(0x298FB0u)) {
        auto targetFn = runtime->lookupFunction(0x298FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29890Cu; }
        if (ctx->pc != 0x29890Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMpegWorkSize__6CMovieFii_0x298fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29890Cu; }
        if (ctx->pc != 0x29890Cu) { return; }
    }
    ctx->pc = 0x29890Cu;
label_29890c:
    // 0x29890c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29890cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298910: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x298914: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x298918: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x298918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x29891c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x29891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x298920: 0x34210900  ori         $at, $at, 0x900
    ctx->pc = 0x298920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2304);
    // 0x298924: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x298924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x298928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x298928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29892c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x29892cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x298930: 0x24a55350  addiu       $a1, $a1, 0x5350
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
    // 0x298934: 0x8e89000c  lw          $t1, 0xC($s4)
    ctx->pc = 0x298934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x298938: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x298938u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29893c: 0xc0a6414  jal         func_299050
    ctx->pc = 0x29893Cu;
    SET_GPR_U32(ctx, 31, 0x298944u);
    ctx->pc = 0x298940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29893Cu;
            // 0x298940: 0x2815821  addu        $t3, $s4, $at (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299050u;
    if (runtime->hasFunction(0x299050u)) {
        auto targetFn = runtime->lookupFunction(0x299050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298944u; }
        if (ctx->pc != 0x298944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecCreate__6CMovieFP8VideoDecPUciP1P1iP9TimeStampi_0x299050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298944u; }
        if (ctx->pc != 0x298944u) { return; }
    }
    ctx->pc = 0x298944u;
label_298944:
    // 0x298944: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x298944u;
    {
        const bool branch_taken_0x298944 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x298944) {
            ctx->pc = 0x298978u;
            goto label_298978;
        }
    }
    ctx->pc = 0x29894Cu;
    // 0x29894c: 0xc046404  jal         func_119010
    ctx->pc = 0x29894Cu;
    SET_GPR_U32(ctx, 31, 0x298954u);
    ctx->pc = 0x119010u;
    if (runtime->hasFunction(0x119010u)) {
        auto targetFn = runtime->lookupFunction(0x119010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298954u; }
        if (ctx->pc != 0x298954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemoteInit_0x119010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298954u; }
        if (ctx->pc != 0x298954u) { return; }
    }
    ctx->pc = 0x298954u;
label_298954:
    // 0x298954: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298958: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x298958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29895c: 0xc046454  jal         func_119150
    ctx->pc = 0x29895Cu;
    SET_GPR_U32(ctx, 31, 0x298964u);
    ctx->pc = 0x298960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29895Cu;
            // 0x298960: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298964u; }
        if (ctx->pc != 0x298964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298964u; }
        if (ctx->pc != 0x298964u) { return; }
    }
    ctx->pc = 0x298964u;
label_298964:
    // 0x298964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298968: 0x34058070  ori         $a1, $zero, 0x8070
    ctx->pc = 0x298968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32880);
    // 0x29896c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x29896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x298970: 0xc046454  jal         func_119150
    ctx->pc = 0x298970u;
    SET_GPR_U32(ctx, 31, 0x298978u);
    ctx->pc = 0x298974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298970u;
            // 0x298974: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298978u; }
        if (ctx->pc != 0x298978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298978u; }
        if (ctx->pc != 0x298978u) { return; }
    }
    ctx->pc = 0x298978u;
label_298978:
    // 0x298978: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x29897c: 0x34018900  ori         $at, $zero, 0x8900
    ctx->pc = 0x29897cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35072);
    // 0x298980: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x298980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x298984: 0x24845410  addiu       $a0, $a0, 0x5410
    ctx->pc = 0x298984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21520));
    // 0x298988: 0x2812821  addu        $a1, $s4, $at
    ctx->pc = 0x298988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x29898c: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x29898cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x298990: 0xc0a6c14  jal         func_29B050
    ctx->pc = 0x298990u;
    SET_GPR_U32(ctx, 31, 0x298998u);
    ctx->pc = 0x298994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298990u;
            // 0x298994: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B050u;
    if (runtime->hasFunction(0x29B050u)) {
        auto targetFn = runtime->lookupFunction(0x29B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298998u; }
        if (ctx->pc != 0x298998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        audioDecCreate__FP8AudioDecPUcii_0x29b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298998u; }
        if (ctx->pc != 0x298998u) { return; }
    }
    ctx->pc = 0x298998u;
label_298998:
    // 0x298998: 0x8f8998ec  lw          $t1, -0x6714($gp)
    ctx->pc = 0x298998u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
    // 0x29899c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x2989a0: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x2989a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x2989a4: 0x250895f0  addiu       $t0, $t0, -0x6A10
    ctx->pc = 0x2989a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940144));
    // 0x2989a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2989a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989ac: 0x24a55350  addiu       $a1, $a1, 0x5350
    ctx->pc = 0x2989acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
    // 0x2989b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2989b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989b4: 0xc0a6454  jal         func_299150
    ctx->pc = 0x2989B4u;
    SET_GPR_U32(ctx, 31, 0x2989BCu);
    ctx->pc = 0x2989B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2989B4u;
            // 0x2989b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299150u;
    if (runtime->hasFunction(0x299150u)) {
        auto targetFn = runtime->lookupFunction(0x299150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989BCu; }
        if (ctx->pc != 0x2989BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream__6CMovieFP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv_0x299150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989BCu; }
        if (ctx->pc != 0x2989BCu) { return; }
    }
    ctx->pc = 0x2989BCu;
label_2989bc:
    // 0x2989bc: 0x938298f8  lbu         $v0, -0x6708($gp)
    ctx->pc = 0x2989bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940920)));
    // 0x2989c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2989C0u;
    {
        const bool branch_taken_0x2989c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2989c0) {
            ctx->pc = 0x2989ECu;
            goto label_2989ec;
        }
    }
    ctx->pc = 0x2989C8u;
    // 0x2989c8: 0x8f8998ec  lw          $t1, -0x6714($gp)
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
    // 0x2989cc: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x2989d0: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x2989d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
    // 0x2989d4: 0x25089720  addiu       $t0, $t0, -0x68E0
    ctx->pc = 0x2989d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940448));
    // 0x2989d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2989d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989dc: 0x24a55350  addiu       $a1, $a1, 0x5350
    ctx->pc = 0x2989dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21328));
    // 0x2989e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2989e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2989e4: 0xc0a6454  jal         func_299150
    ctx->pc = 0x2989E4u;
    SET_GPR_U32(ctx, 31, 0x2989ECu);
    ctx->pc = 0x2989E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2989E4u;
            // 0x2989e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299150u;
    if (runtime->hasFunction(0x299150u)) {
        auto targetFn = runtime->lookupFunction(0x299150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989ECu; }
        if (ctx->pc != 0x2989ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecSetStream__6CMovieFP8VideoDeciiPFP7sceMpegP13sceMpegCbDataPv_iPv_0x299150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2989ECu; }
        if (ctx->pc != 0x2989ECu) { return; }
    }
    ctx->pc = 0x2989ECu;
label_2989ec:
    // 0x2989ec: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2989f0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2989f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2989f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2989f8: 0x24845470  addiu       $a0, $a0, 0x5470
    ctx->pc = 0x2989f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21616));
    // 0x2989fc: 0x26860040  addiu       $a2, $s4, 0x40
    ctx->pc = 0x2989fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x298a00: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x298a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298a04: 0xae830080  sw          $v1, 0x80($s4)
    ctx->pc = 0x298a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 3));
    // 0x298a08: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x298a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x298a0c: 0xae830084  sw          $v1, 0x84($s4)
    ctx->pc = 0x298a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 3));
    // 0x298a10: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x298a14: 0xae8300c8  sw          $v1, 0xC8($s4)
    ctx->pc = 0x298a14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 3));
    // 0x298a18: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x298a1c: 0xae8300cc  sw          $v1, 0xCC($s4)
    ctx->pc = 0x298a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 204), GPR_U32(ctx, 3));
    // 0x298a20: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x298a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x298a24: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x298a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x298a28: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x298a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x298a2c: 0xc0a6648  jal         func_299920
    ctx->pc = 0x298A2Cu;
    SET_GPR_U32(ctx, 31, 0x298A34u);
    ctx->pc = 0x298A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A2Cu;
            // 0x298a30: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299920u;
    if (runtime->hasFunction(0x299920u)) {
        auto targetFn = runtime->lookupFunction(0x299920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A34u; }
        if (ctx->pc != 0x298A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufCreate__FP5VoBufP6VoDataP5VoTagi_0x299920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A34u; }
        if (ctx->pc != 0x298A34u) { return; }
    }
    ctx->pc = 0x298A34u;
label_298a34:
    // 0x298a34: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x298a38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x298a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a3c: 0xc0a6ac4  jal         func_29AB10
    ctx->pc = 0x298A3Cu;
    SET_GPR_U32(ctx, 31, 0x298A44u);
    ctx->pc = 0x298A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A3Cu;
            // 0x298a40: 0x24845490  addiu       $a0, $a0, 0x5490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AB10u;
    if (runtime->hasFunction(0x29AB10u)) {
        auto targetFn = runtime->lookupFunction(0x29AB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A44u; }
        if (ctx->pc != 0x298A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileOpen__FP7StrFilePc_0x29ab10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A44u; }
        if (ctx->pc != 0x298A44u) { return; }
    }
    ctx->pc = 0x298A44u;
label_298a44:
    // 0x298a44: 0x0  nop
    ctx->pc = 0x298a44u;
    // NOP
    // 0x298a48: 0x0  nop
    ctx->pc = 0x298a48u;
    // NOP
    // 0x298a4c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x298A4Cu;
    {
        const bool branch_taken_0x298a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298a4c) {
            ctx->pc = 0x298A34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298a34;
        }
    }
    ctx->pc = 0x298A54u;
    // 0x298a54: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x298a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x298a58: 0x8f8498ec  lw          $a0, -0x6714($gp)
    ctx->pc = 0x298a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
    // 0x298a5c: 0x8c2254bc  lw          $v0, 0x54BC($at)
    ctx->pc = 0x298a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 21692)));
    // 0x298a60: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x298a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x298a64: 0xaf8298f0  sw          $v0, -0x6710($gp)
    ctx->pc = 0x298a64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940912), GPR_U32(ctx, 2));
    // 0x298a68: 0xc0a6bbc  jal         func_29AEF0
    ctx->pc = 0x298A68u;
    SET_GPR_U32(ctx, 31, 0x298A70u);
    ctx->pc = 0x298A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A68u;
            // 0x298a6c: 0xaf8298f4  sw          $v0, -0x670C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AEF0u;
    if (runtime->hasFunction(0x29AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x29AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A70u; }
        if (ctx->pc != 0x298A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufBeginPut__FP7ReadBufPPUc_0x29aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A70u; }
        if (ctx->pc != 0x298A70u) { return; }
    }
    ctx->pc = 0x298A70u;
label_298a70:
    // 0x298a70: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x298a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x298a74: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x298a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x298a78: 0x24845490  addiu       $a0, $a0, 0x5490
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21648));
    // 0x298a7c: 0xc0a6ba0  jal         func_29AE80
    ctx->pc = 0x298A7Cu;
    SET_GPR_U32(ctx, 31, 0x298A84u);
    ctx->pc = 0x298A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A7Cu;
            // 0x298a80: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AE80u;
    if (runtime->hasFunction(0x29AE80u)) {
        auto targetFn = runtime->lookupFunction(0x29AE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A84u; }
        if (ctx->pc != 0x298A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strFileRead__FP7StrFilePvi_0x29ae80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A84u; }
        if (ctx->pc != 0x298A84u) { return; }
    }
    ctx->pc = 0x298A84u;
label_298a84:
    // 0x298a84: 0x8f8498ec  lw          $a0, -0x6714($gp)
    ctx->pc = 0x298a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940908)));
    // 0x298a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a8c: 0xc0a6bcc  jal         func_29AF30
    ctx->pc = 0x298A8Cu;
    SET_GPR_U32(ctx, 31, 0x298A94u);
    ctx->pc = 0x298A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298A8Cu;
            // 0x298a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF30u;
    if (runtime->hasFunction(0x29AF30u)) {
        auto targetFn = runtime->lookupFunction(0x29AF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A94u; }
        if (ctx->pc != 0x298A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        readBufEndPut__FP7ReadBufi_0x29af30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298A94u; }
        if (ctx->pc != 0x298A94u) { return; }
    }
    ctx->pc = 0x298A94u;
label_298a94:
    // 0x298a94: 0x8f8398f4  lw          $v1, -0x670C($gp)
    ctx->pc = 0x298a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940916)));
    // 0x298a98: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x298a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x298a9c: 0xaf8398f4  sw          $v1, -0x670C($gp)
    ctx->pc = 0x298a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940916), GPR_U32(ctx, 3));
    // 0x298aa0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x298aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x298aa4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x298aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x298aa8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x298aa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298aac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x298aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298ab0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x298ab0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298ab4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x298ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298ab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x298ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x298abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x298AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298AC0u;
            // 0x298ac4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298AC8u;
}
