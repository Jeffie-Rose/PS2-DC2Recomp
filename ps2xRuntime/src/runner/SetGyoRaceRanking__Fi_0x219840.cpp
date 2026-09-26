#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGyoRaceRanking__Fi
// Address: 0x219840 - 0x219964
void SetGyoRaceRanking__Fi_0x219840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGyoRaceRanking__Fi_0x219840");
#endif

    switch (ctx->pc) {
        case 0x219860u: goto label_219860;
        case 0x219868u: goto label_219868;
        case 0x219870u: goto label_219870;
        case 0x219884u: goto label_219884;
        case 0x21991cu: goto label_21991c;
        case 0x21994cu: goto label_21994c;
        default: break;
    }

    ctx->pc = 0x219840u;

    // 0x219840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x219840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x219844: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x219844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x219848: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21984c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21984cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x219850: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219850u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219858: 0xc086600  jal         func_219800
    ctx->pc = 0x219858u;
    SET_GPR_U32(ctx, 31, 0x219860u);
    ctx->pc = 0x21985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219858u;
            // 0x21985c: 0xa3849258  sb          $a0, -0x6DA8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939224), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219800u;
    if (runtime->hasFunction(0x219800u)) {
        auto targetFn = runtime->lookupFunction(0x219800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219860u; }
        if (ctx->pc != 0x219860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceClass__Fv_0x219800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219860u; }
        if (ctx->pc != 0x219860u) { return; }
    }
    ctx->pc = 0x219860u;
label_219860:
    // 0x219860: 0xc064220  jal         func_190880
    ctx->pc = 0x219860u;
    SET_GPR_U32(ctx, 31, 0x219868u);
    ctx->pc = 0x219864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219860u;
            // 0x219864: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219868u; }
        if (ctx->pc != 0x219868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219868u; }
        if (ctx->pc != 0x219868u) { return; }
    }
    ctx->pc = 0x219868u;
label_219868:
    // 0x219868: 0xc08660c  jal         func_219830
    ctx->pc = 0x219868u;
    SET_GPR_U32(ctx, 31, 0x219870u);
    ctx->pc = 0x21986Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219868u;
            // 0x21986c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219830u;
    if (runtime->hasFunction(0x219830u)) {
        auto targetFn = runtime->lookupFunction(0x219830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219870u; }
        if (ctx->pc != 0x219870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceNo__Fv_0x219830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219870u; }
        if (ctx->pc != 0x219870u) { return; }
    }
    ctx->pc = 0x219870u;
label_219870:
    // 0x219870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219874: 0x14430035  bne         $v0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x219874u;
    {
        const bool branch_taken_0x219874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219874) {
            ctx->pc = 0x21994Cu;
            goto label_21994c;
        }
    }
    ctx->pc = 0x21987Cu;
    // 0x21987c: 0xc0865f0  jal         func_2197C0
    ctx->pc = 0x21987Cu;
    SET_GPR_U32(ctx, 31, 0x219884u);
    ctx->pc = 0x2197C0u;
    if (runtime->hasFunction(0x2197C0u)) {
        auto targetFn = runtime->lookupFunction(0x2197C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219884u; }
        if (ctx->pc != 0x219884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGyoRaceFish__Fv_0x2197c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219884u; }
        if (ctx->pc != 0x219884u) { return; }
    }
    ctx->pc = 0x219884u;
label_219884:
    // 0x219884: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x219884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x219888: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x219888u;
    {
        const bool branch_taken_0x219888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x219888) {
            ctx->pc = 0x21989Cu;
            goto label_21989c;
        }
    }
    ctx->pc = 0x219890u;
    // 0x219890: 0x9043004d  lbu         $v1, 0x4D($v0)
    ctx->pc = 0x219890u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 77)));
    // 0x219894: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x219894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x219898: 0xa043004d  sb          $v1, 0x4D($v0)
    ctx->pc = 0x219898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 77), (uint8_t)GPR_U32(ctx, 3));
label_21989c:
    // 0x21989c: 0x1640002b  bnez        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x21989Cu;
    {
        const bool branch_taken_0x21989c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21989c) {
            ctx->pc = 0x21994Cu;
            goto label_21994c;
        }
    }
    ctx->pc = 0x2198A4u;
    // 0x2198a4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2198A4u;
    {
        const bool branch_taken_0x2198a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2198A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198A4u;
            // 0x2198a8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198a4) {
            ctx->pc = 0x21994Cu;
            goto label_21994c;
        }
    }
    ctx->pc = 0x2198ACu;
    // 0x2198ac: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2198ACu;
    {
        const bool branch_taken_0x2198ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2198B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198ACu;
            // 0x2198b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198ac) {
            ctx->pc = 0x2198C4u;
            goto label_2198c4;
        }
    }
    ctx->pc = 0x2198B4u;
    // 0x2198b4: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x2198b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2198b8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2198b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2198bc: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x2198bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x2198c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2198c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2198c4:
    // 0x2198c4: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2198C4u;
    {
        const bool branch_taken_0x2198c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2198C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198C4u;
            // 0x2198c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198c4) {
            ctx->pc = 0x2198E0u;
            goto label_2198e0;
        }
    }
    ctx->pc = 0x2198CCu;
    // 0x2198cc: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x2198ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2198d0: 0x24120017  addiu       $s2, $zero, 0x17
    ctx->pc = 0x2198d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2198d4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2198d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2198d8: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x2198d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x2198dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2198e0:
    // 0x2198e0: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2198E0u;
    {
        const bool branch_taken_0x2198e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x2198E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198E0u;
            // 0x2198e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198e0) {
            ctx->pc = 0x2198FCu;
            goto label_2198fc;
        }
    }
    ctx->pc = 0x2198E8u;
    // 0x2198e8: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x2198e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2198ec: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x2198ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2198f0: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2198f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2198f4: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x2198f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x2198f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2198f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2198fc:
    // 0x2198fc: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2198FCu;
    {
        const bool branch_taken_0x2198fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x219900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2198FCu;
            // 0x219900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2198fc) {
            ctx->pc = 0x219914u;
            goto label_219914;
        }
    }
    ctx->pc = 0x219904u;
    // 0x219904: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x219904u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x219908: 0x24120019  addiu       $s2, $zero, 0x19
    ctx->pc = 0x219908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21990c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x21990cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x219910: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x219910u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
label_219914:
    // 0x219914: 0xc0bd950  jal         func_2F6540
    ctx->pc = 0x219914u;
    SET_GPR_U32(ctx, 31, 0x21991Cu);
    ctx->pc = 0x219918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219914u;
            // 0x219918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6540u;
    if (runtime->hasFunction(0x2F6540u)) {
        auto targetFn = runtime->lookupFunction(0x2F6540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21991Cu; }
        if (ctx->pc != 0x21991Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShortFlag__9CSaveDataFi_0x2f6540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21991Cu; }
        if (ctx->pc != 0x21991Cu) { return; }
    }
    ctx->pc = 0x21991Cu;
label_21991c:
    // 0x21991c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x21991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x219920: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x219920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x219924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x219924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x219928: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x219928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x21992c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x21992Cu;
    {
        const bool branch_taken_0x21992c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21992Cu;
            // 0x219930: 0x2343c  dsll32      $a2, $v0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21992c) {
            ctx->pc = 0x21993Cu;
            goto label_21993c;
        }
    }
    ctx->pc = 0x219934u;
    // 0x219934: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219938: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x219938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_21993c:
    // 0x21993c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219940: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x219940u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x219944: 0xc0bd940  jal         func_2F6500
    ctx->pc = 0x219944u;
    SET_GPR_U32(ctx, 31, 0x21994Cu);
    ctx->pc = 0x219948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219944u;
            // 0x219948: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6500u;
    if (runtime->hasFunction(0x2F6500u)) {
        auto targetFn = runtime->lookupFunction(0x2F6500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21994Cu; }
        if (ctx->pc != 0x21994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetShortFlag__9CSaveDataFis_0x2f6500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21994Cu; }
        if (ctx->pc != 0x21994Cu) { return; }
    }
    ctx->pc = 0x21994Cu;
label_21994c:
    // 0x21994c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x219950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x219950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21995c: 0x3e00008  jr          $ra
    ctx->pc = 0x21995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21995Cu;
            // 0x219960: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219964u;
}
