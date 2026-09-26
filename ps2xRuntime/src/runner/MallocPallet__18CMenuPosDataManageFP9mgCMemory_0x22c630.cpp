#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MallocPallet__18CMenuPosDataManageFP9mgCMemory
// Address: 0x22c630 - 0x22ca94
void MallocPallet__18CMenuPosDataManageFP9mgCMemory_0x22c630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MallocPallet__18CMenuPosDataManageFP9mgCMemory_0x22c630");
#endif

    switch (ctx->pc) {
        case 0x22c66cu: goto label_22c66c;
        case 0x22c68cu: goto label_22c68c;
        case 0x22c6a0u: goto label_22c6a0;
        case 0x22c6c8u: goto label_22c6c8;
        case 0x22c6d4u: goto label_22c6d4;
        case 0x22c6f0u: goto label_22c6f0;
        case 0x22c704u: goto label_22c704;
        case 0x22c728u: goto label_22c728;
        case 0x22c738u: goto label_22c738;
        case 0x22c748u: goto label_22c748;
        case 0x22c754u: goto label_22c754;
        case 0x22c760u: goto label_22c760;
        case 0x22c770u: goto label_22c770;
        case 0x22c784u: goto label_22c784;
        case 0x22c790u: goto label_22c790;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c810u: goto label_22c810;
        case 0x22c824u: goto label_22c824;
        case 0x22c898u: goto label_22c898;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c930u: goto label_22c930;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c9b8u: goto label_22c9b8;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22ca10u: goto label_22ca10;
        default: break;
    }

    ctx->pc = 0x22c630u;

    // 0x22c630: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22c634: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22c638: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x22c638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x22c63c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22c63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x22c640: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22c640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22c644: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22c644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22c648: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22c648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22c64c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22c64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22c650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22c650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22c654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c65c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22c65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c660: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x22c660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x22c664: 0xc04e780  jal         func_139E00
    ctx->pc = 0x22C664u;
    SET_GPR_U32(ctx, 31, 0x22C66Cu);
    ctx->pc = 0x22C668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C664u;
            // 0x22c668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C66Cu; }
        if (ctx->pc != 0x22C66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C66Cu; }
        if (ctx->pc != 0x22C66Cu) { return; }
    }
    ctx->pc = 0x22C66Cu;
label_22c66c:
    // 0x22c66c: 0xdf829460  ld          $v0, -0x6BA0($gp)
    ctx->pc = 0x22c66cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939744)));
    // 0x22c670: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x22c670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x22c674: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22c678: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c67c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22c680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c684: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x22C684u;
    SET_GPR_U32(ctx, 31, 0x22C68Cu);
    ctx->pc = 0x22C688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C684u;
            // 0x22c688: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C68Cu; }
        if (ctx->pc != 0x22C68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C68Cu; }
        if (ctx->pc != 0x22C68Cu) { return; }
    }
    ctx->pc = 0x22C68Cu;
label_22c68c:
    // 0x22c68c: 0x8f858308  lw          $a1, -0x7CF8($gp)
    ctx->pc = 0x22c68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935304)));
    // 0x22c690: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22c690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x22c694: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x22c694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x22c698: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x22C698u;
    SET_GPR_U32(ctx, 31, 0x22C6A0u);
    ctx->pc = 0x22C69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C698u;
            // 0x22c69c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6A0u; }
        if (ctx->pc != 0x22C6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6A0u; }
        if (ctx->pc != 0x22C6A0u) { return; }
    }
    ctx->pc = 0x22C6A0u;
label_22c6a0:
    // 0x22c6a0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x22c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22c6a4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x22c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x22c6a8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x22c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x22c6ac: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x22c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22c6b0: 0x8c640058  lw          $a0, 0x58($v1)
    ctx->pc = 0x22c6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22c6b4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x22c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x22c6b8: 0x106000ea  beqz        $v1, . + 4 + (0xEA << 2)
    ctx->pc = 0x22C6B8u;
    {
        const bool branch_taken_0x22c6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6B8u;
            // 0x22c6bc: 0xafa400cc  sw          $a0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c6b8) {
            ctx->pc = 0x22CA64u;
            goto label_22ca64;
        }
    }
    ctx->pc = 0x22C6C0u;
    // 0x22c6c0: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x22c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x22c6c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22c6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22c6c8:
    // 0x22c6c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6cc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C6CCu;
    SET_GPR_U32(ctx, 31, 0x22C6D4u);
    ctx->pc = 0x22C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6CCu;
            // 0x22c6d0: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6D4u; }
        if (ctx->pc != 0x22C6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6D4u; }
        if (ctx->pc != 0x22C6D4u) { return; }
    }
    ctx->pc = 0x22C6D4u;
label_22c6d4:
    // 0x22c6d4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x22c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x22c6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6dc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x22c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22c6e0: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x22c6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22c6e4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x22c6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x22c6e8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C6E8u;
    SET_GPR_U32(ctx, 31, 0x22C6F0u);
    ctx->pc = 0x22C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6E8u;
            // 0x22c6ec: 0x26560020  addiu       $s6, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6F0u; }
        if (ctx->pc != 0x22C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6F0u; }
        if (ctx->pc != 0x22C6F0u) { return; }
    }
    ctx->pc = 0x22C6F0u;
label_22c6f0:
    // 0x22c6f0: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x22c6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x22c6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x22c6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x22c6fc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C6FCu;
    SET_GPR_U32(ctx, 31, 0x22C704u);
    ctx->pc = 0x22C700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C6FCu;
            // 0x22c700: 0x26530028  addiu       $s3, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C704u; }
        if (ctx->pc != 0x22C704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C704u; }
        if (ctx->pc != 0x22C704u) { return; }
    }
    ctx->pc = 0x22C704u;
label_22c704:
    // 0x22c704: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x22c704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x22c708: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x22c708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x22c70c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x22c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x22c710: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x22c710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22c714: 0x8c5500c8  lw          $s5, 0xC8($v0)
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x22c718: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x22c71c: 0x8ea50060  lw          $a1, 0x60($s5)
    ctx->pc = 0x22c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x22c720: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C720u;
    SET_GPR_U32(ctx, 31, 0x22C728u);
    ctx->pc = 0x22C724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C720u;
            // 0x22c724: 0x26b70060  addiu       $s7, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C728u; }
        if (ctx->pc != 0x22C728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C728u; }
        if (ctx->pc != 0x22C728u) { return; }
    }
    ctx->pc = 0x22C728u;
label_22c728:
    // 0x22c728: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x22c728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c72c: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x22c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22c730: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C730u;
    SET_GPR_U32(ctx, 31, 0x22C738u);
    ctx->pc = 0x22C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C730u;
            // 0x22c734: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C738u; }
        if (ctx->pc != 0x22C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C738u; }
        if (ctx->pc != 0x22C738u) { return; }
    }
    ctx->pc = 0x22C738u;
label_22c738:
    // 0x22c738: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22c73c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c740: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C740u;
    SET_GPR_U32(ctx, 31, 0x22C748u);
    ctx->pc = 0x22C744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C740u;
            // 0x22c744: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C748u; }
        if (ctx->pc != 0x22C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C748u; }
        if (ctx->pc != 0x22C748u) { return; }
    }
    ctx->pc = 0x22C748u;
label_22c748:
    // 0x22c748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c74c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C74Cu;
    SET_GPR_U32(ctx, 31, 0x22C754u);
    ctx->pc = 0x22C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C74Cu;
            // 0x22c750: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C754u; }
        if (ctx->pc != 0x22C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C754u; }
        if (ctx->pc != 0x22C754u) { return; }
    }
    ctx->pc = 0x22C754u;
label_22c754:
    // 0x22c754: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x22c754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x22c758: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x22C758u;
    SET_GPR_U32(ctx, 31, 0x22C760u);
    ctx->pc = 0x22C75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C758u;
            // 0x22c75c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C760u; }
        if (ctx->pc != 0x22C760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C760u; }
        if (ctx->pc != 0x22C760u) { return; }
    }
    ctx->pc = 0x22C760u;
label_22c760:
    // 0x22c760: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C760u;
    {
        const bool branch_taken_0x22c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C760u;
            // 0x22c764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c760) {
            ctx->pc = 0x22C770u;
            goto label_22c770;
        }
    }
    ctx->pc = 0x22C768u;
    // 0x22c768: 0xc04b120  jal         func_12C480
    ctx->pc = 0x22C768u;
    SET_GPR_U32(ctx, 31, 0x22C770u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C770u; }
        if (ctx->pc != 0x22C770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C770u; }
        if (ctx->pc != 0x22C770u) { return; }
    }
    ctx->pc = 0x22C770u;
label_22c770:
    // 0x22c770: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x22c770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x22c774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c778: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x22c778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22c77c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C77Cu;
    SET_GPR_U32(ctx, 31, 0x22C784u);
    ctx->pc = 0x22C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C77Cu;
            // 0x22c780: 0x265e005c  addiu       $fp, $s2, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C784u; }
        if (ctx->pc != 0x22C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C784u; }
        if (ctx->pc != 0x22C784u) { return; }
    }
    ctx->pc = 0x22C784u;
label_22c784:
    // 0x22c784: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x22c788: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x22C788u;
    SET_GPR_U32(ctx, 31, 0x22C790u);
    ctx->pc = 0x22C78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C788u;
            // 0x22c78c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C790u; }
        if (ctx->pc != 0x22C790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C790u; }
        if (ctx->pc != 0x22C790u) { return; }
    }
    ctx->pc = 0x22C790u;
label_22c790:
    // 0x22c790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C790u;
    {
        const bool branch_taken_0x22c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C790u;
            // 0x22c794: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c790) {
            ctx->pc = 0x22C7A0u;
            goto label_22c7a0;
        }
    }
    ctx->pc = 0x22C798u;
    // 0x22c798: 0xc04b120  jal         func_12C480
    ctx->pc = 0x22C798u;
    SET_GPR_U32(ctx, 31, 0x22C7A0u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7A0u; }
        if (ctx->pc != 0x22C7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7A0u; }
        if (ctx->pc != 0x22C7A0u) { return; }
    }
    ctx->pc = 0x22C7A0u;
label_22c7a0:
    // 0x22c7a0: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x22c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x22c7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x22c7ac: 0xc04e748  jal         func_139D20
    ctx->pc = 0x22C7ACu;
    SET_GPR_U32(ctx, 31, 0x22C7B4u);
    ctx->pc = 0x22C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7ACu;
            // 0x22c7b0: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7B4u; }
        if (ctx->pc != 0x22C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7B4u; }
        if (ctx->pc != 0x22C7B4u) { return; }
    }
    ctx->pc = 0x22C7B4u;
label_22c7b4:
    // 0x22c7b4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x22c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x22c7b8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x22C7B8u;
    SET_GPR_U32(ctx, 31, 0x22C7C0u);
    ctx->pc = 0x22C7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7B8u;
            // 0x22c7bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7C0u; }
        if (ctx->pc != 0x22C7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7C0u; }
        if (ctx->pc != 0x22C7C0u) { return; }
    }
    ctx->pc = 0x22C7C0u;
label_22c7c0:
    // 0x22c7c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C7C0u;
    {
        const bool branch_taken_0x22c7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7C0u;
            // 0x22c7c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7c0) {
            ctx->pc = 0x22C7D0u;
            goto label_22c7d0;
        }
    }
    ctx->pc = 0x22C7C8u;
    // 0x22c7c8: 0xc04b120  jal         func_12C480
    ctx->pc = 0x22C7C8u;
    SET_GPR_U32(ctx, 31, 0x22C7D0u);
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7D0u; }
        if (ctx->pc != 0x22C7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7D0u; }
        if (ctx->pc != 0x22C7D0u) { return; }
    }
    ctx->pc = 0x22C7D0u;
label_22c7d0:
    // 0x22c7d0: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x22c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x22c7d4: 0x2642006c  addiu       $v0, $s2, 0x6C
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x22c7d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7dc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x22c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x22c7e0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x22c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x22c7e4: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C7E4u;
    SET_GPR_U32(ctx, 31, 0x22C7ECu);
    ctx->pc = 0x22C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7E4u;
            // 0x22c7e8: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7ECu; }
        if (ctx->pc != 0x22C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7ECu; }
        if (ctx->pc != 0x22C7ECu) { return; }
    }
    ctx->pc = 0x22C7ECu;
label_22c7ec:
    // 0x22c7ec: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x22c7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22c7f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c7f4: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C7F4u;
    SET_GPR_U32(ctx, 31, 0x22C7FCu);
    ctx->pc = 0x22C7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C7F4u;
            // 0x22c7f8: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7FCu; }
        if (ctx->pc != 0x22C7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C7FCu; }
        if (ctx->pc != 0x22C7FCu) { return; }
    }
    ctx->pc = 0x22C7FCu;
label_22c7fc:
    // 0x22c7fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22c800: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c804: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22c804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22c808: 0xc049c18  jal         func_127060
    ctx->pc = 0x22C808u;
    SET_GPR_U32(ctx, 31, 0x22C810u);
    ctx->pc = 0x22C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C808u;
            // 0x22c80c: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C810u; }
        if (ctx->pc != 0x22C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C810u; }
        if (ctx->pc != 0x22C810u) { return; }
    }
    ctx->pc = 0x22C810u;
label_22c810:
    // 0x22c810: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22c814: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x22c814u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c818: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x22c818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x22c81c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x22c81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22c820: 0x34c95556  ori         $t1, $a2, 0x5556
    ctx->pc = 0x22c820u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
label_22c824:
    // 0x22c824: 0x0  nop
    ctx->pc = 0x22c824u;
    // NOP
    // 0x22c828: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x22c828u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c82c: 0x90660001  lbu         $a2, 0x1($v1)
    ctx->pc = 0x22c82cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x22c830: 0x906a0002  lbu         $t2, 0x2($v1)
    ctx->pc = 0x22c830u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22c834: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x22c834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x22c838: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x22c83c: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x22c83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22c840: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x22c840u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x22c844: 0x0  nop
    ctx->pc = 0x22c844u;
    // NOP
    // 0x22c848: 0x3010  mfhi        $a2
    ctx->pc = 0x22c848u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x22c84c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x22c84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x22c850: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x22c850u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22c854: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x22C854u;
    {
        const bool branch_taken_0x22c854 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c854) {
            ctx->pc = 0x22C868u;
            goto label_22c868;
        }
    }
    ctx->pc = 0x22C85Cu;
    // 0x22c85c: 0x11400002  beqz        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x22C85Cu;
    {
        const bool branch_taken_0x22c85c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c85c) {
            ctx->pc = 0x22C868u;
            goto label_22c868;
        }
    }
    ctx->pc = 0x22C864u;
    // 0x22c864: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x22c864u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
label_22c868:
    // 0x22c868: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x22c86c: 0x29660100  slti        $a2, $t3, 0x100
    ctx->pc = 0x22c86cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22c870: 0x14c0ffec  bnez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22C870u;
    {
        const bool branch_taken_0x22c870 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C870u;
            // 0x22c874: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c870) {
            ctx->pc = 0x22C824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c824;
        }
    }
    ctx->pc = 0x22C878u;
    // 0x22c878: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x22c87c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c880: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x22c880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x22c884: 0xac670060  sw          $a3, 0x60($v1)
    ctx->pc = 0x22c884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 7));
    // 0x22c888: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x22c888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c88c: 0x0  nop
    ctx->pc = 0x22c88cu;
    // NOP
    // 0x22c890: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x22c890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x22c894: 0x34e95556  ori         $t1, $a3, 0x5556
    ctx->pc = 0x22c894u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
label_22c898:
    // 0x22c898: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x22c898u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c89c: 0x90680001  lbu         $t0, 0x1($v1)
    ctx->pc = 0x22c89cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x22c8a0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x22c8a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c8a4: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x22c8a4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22c8a8: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22c8ac: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x22c8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x22c8b0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x22c8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x22c8b4: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x22c8b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22c8b8: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x22c8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x22c8bc: 0x0  nop
    ctx->pc = 0x22c8bcu;
    // NOP
    // 0x22c8c0: 0x3810  mfhi        $a3
    ctx->pc = 0x22c8c0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x22c8c4: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x22c8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_22c8c8:
    // 0x22c8c8: 0x2567ffff  addiu       $a3, $t3, -0x1
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x22c8cc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x22c8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x22c8d0: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x22c8d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x22c8d4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C8D4u;
    {
        const bool branch_taken_0x22c8d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8D4u;
            // 0x22c8d8: 0x10c082a  slt         $at, $t0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8d4) {
            ctx->pc = 0x22C8F4u;
            goto label_22c8f4;
        }
    }
    ctx->pc = 0x22C8DCu;
    // 0x22c8dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x22C8DCu;
    {
        const bool branch_taken_0x22c8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8dc) {
            ctx->pc = 0x22C8F4u;
            goto label_22c8f4;
        }
    }
    ctx->pc = 0x22C8E4u;
    // 0x22c8e4: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x22c8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x22c8e8: 0xa0670001  sb          $a3, 0x1($v1)
    ctx->pc = 0x22c8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x22c8ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22C8ECu;
    {
        const bool branch_taken_0x22c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C8ECu;
            // 0x22c8f0: 0xa0670002  sb          $a3, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8ec) {
            ctx->pc = 0x22C908u;
            goto label_22c908;
        }
    }
    ctx->pc = 0x22C8F4u;
label_22c8f4:
    // 0x22c8f4: 0x0  nop
    ctx->pc = 0x22c8f4u;
    // NOP
    // 0x22c8f8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x22c8f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x22c8fc: 0x29670011  slti        $a3, $t3, 0x11
    ctx->pc = 0x22c8fcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x22c900: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x22C900u;
    {
        const bool branch_taken_0x22c900 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C900u;
            // 0x22c904: 0x258c0010  addiu       $t4, $t4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c900) {
            ctx->pc = 0x22C8C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c8c8;
        }
    }
    ctx->pc = 0x22C908u;
label_22c908:
    // 0x22c908: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x22c908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x22c90c: 0x28c70100  slti        $a3, $a2, 0x100
    ctx->pc = 0x22c90cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22c910: 0x14e0ffe1  bnez        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x22C910u;
    {
        const bool branch_taken_0x22c910 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C910u;
            // 0x22c914: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c910) {
            ctx->pc = 0x22C898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c898;
        }
    }
    ctx->pc = 0x22C918u;
    // 0x22c918: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x22c918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22c91c: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x22c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x22c920: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22c920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c924: 0xac660060  sw          $a2, 0x60($v1)
    ctx->pc = 0x22c924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
    // 0x22c928: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x22c928u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22c92c: 0x0  nop
    ctx->pc = 0x22c92cu;
    // NOP
label_22c930:
    // 0x22c930: 0x92470000  lbu         $a3, 0x0($s2)
    ctx->pc = 0x22c930u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c934: 0x92460001  lbu         $a2, 0x1($s2)
    ctx->pc = 0x22c934u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x22c938: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x22c938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c93c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x22c93cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x22c940: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x22c940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22c944: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x22c944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x22c948: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x22c948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22c94c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x22c950: 0x737c2  srl         $a2, $a3, 31
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x22c954: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x22c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x22c958: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x22c958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x22c95c: 0x0  nop
    ctx->pc = 0x22c95cu;
    // NOP
    // 0x22c960: 0x0  nop
    ctx->pc = 0x22c960u;
    // NOP
    // 0x22c964: 0x1810  mfhi        $v1
    ctx->pc = 0x22c964u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22c968: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x22c968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22c96c:
    // 0x22c96c: 0x0  nop
    ctx->pc = 0x22c96cu;
    // NOP
    // 0x22c970: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x22c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x22c974: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x22c974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22c978: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22c97c: 0x14200026  bnez        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x22C97Cu;
    {
        const bool branch_taken_0x22c97c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C97Cu;
            // 0x22c980: 0xc8082a  slt         $at, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c97c) {
            ctx->pc = 0x22CA18u;
            goto label_22ca18;
        }
    }
    ctx->pc = 0x22C984u;
    // 0x22c984: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x22C984u;
    {
        const bool branch_taken_0x22c984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c984) {
            ctx->pc = 0x22CA18u;
            goto label_22ca18;
        }
    }
    ctx->pc = 0x22C98Cu;
    // 0x22c98c: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x22c98cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c990: 0x3c034143  lui         $v1, 0x4143
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16707 << 16));
    // 0x22c994: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x22c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x22c998: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x22c99c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22c99cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22c9a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22c9a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22c9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9a8: 0x0  nop
    ctx->pc = 0x22c9a8u;
    // NOP
    // 0x22c9ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x22c9acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x22c9b0: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x22C9B0u;
    SET_GPR_U32(ctx, 31, 0x22C9B8u);
    ctx->pc = 0x22C9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9B0u;
            // 0x22c9b4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9B8u; }
        if (ctx->pc != 0x22C9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9B8u; }
        if (ctx->pc != 0x22C9B8u) { return; }
    }
    ctx->pc = 0x22C9B8u;
label_22c9b8:
    // 0x22c9b8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x22c9b8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9bc: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x22c9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c9c0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22c9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22c9c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22c9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22c9cc: 0x3c02410c  lui         $v0, 0x410C
    ctx->pc = 0x22c9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16652 << 16));
    // 0x22c9d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22c9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c9d4: 0x0  nop
    ctx->pc = 0x22c9d4u;
    // NOP
    // 0x22c9d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22c9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22c9dc: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x22C9DCu;
    SET_GPR_U32(ctx, 31, 0x22C9E4u);
    ctx->pc = 0x22C9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C9DCu;
            // 0x22c9e0: 0x46001300  add.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9E4u; }
        if (ctx->pc != 0x22C9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C9E4u; }
        if (ctx->pc != 0x22C9E4u) { return; }
    }
    ctx->pc = 0x22C9E4u;
label_22c9e4:
    // 0x22c9e4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x22c9e4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9e8: 0x3c0340d8  lui         $v1, 0x40D8
    ctx->pc = 0x22c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16600 << 16));
    // 0x22c9ec: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x22c9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c9f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22c9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22c9f4: 0x0  nop
    ctx->pc = 0x22c9f4u;
    // NOP
    // 0x22c9f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22c9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22c9fc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22ca00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22ca00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22ca04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ca04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca08: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x22CA08u;
    SET_GPR_U32(ctx, 31, 0x22CA10u);
    ctx->pc = 0x22CA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA08u;
            // 0x22ca0c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA10u; }
        if (ctx->pc != 0x22CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22CA10u; }
        if (ctx->pc != 0x22CA10u) { return; }
    }
    ctx->pc = 0x22CA10u;
label_22ca10:
    // 0x22ca10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22CA10u;
    {
        const bool branch_taken_0x22ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA10u;
            // 0x22ca14: 0xa2420002  sb          $v0, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca10) {
            ctx->pc = 0x22CA28u;
            goto label_22ca28;
        }
    }
    ctx->pc = 0x22CA18u;
label_22ca18:
    // 0x22ca18: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22ca18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22ca1c: 0x2aa30011  slti        $v1, $s5, 0x11
    ctx->pc = 0x22ca1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x22ca20: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x22CA20u;
    {
        const bool branch_taken_0x22ca20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA20u;
            // 0x22ca24: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca20) {
            ctx->pc = 0x22C96Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c96c;
        }
    }
    ctx->pc = 0x22CA28u;
label_22ca28:
    // 0x22ca28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x22ca2c: 0x2a630100  slti        $v1, $s3, 0x100
    ctx->pc = 0x22ca2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x22ca30: 0x1460ffbf  bnez        $v1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x22CA30u;
    {
        const bool branch_taken_0x22ca30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA30u;
            // 0x22ca34: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca30) {
            ctx->pc = 0x22C930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c930;
        }
    }
    ctx->pc = 0x22CA38u;
    // 0x22ca38: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22ca3c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22ca40: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x22ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x22ca44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22ca48: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ca4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ca50: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x22ca50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x22ca54: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x22ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ca58: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x22ca58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22ca5c: 0x1460ff1a  bnez        $v1, . + 4 + (-0xE6 << 2)
    ctx->pc = 0x22CA5Cu;
    {
        const bool branch_taken_0x22ca5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA5Cu;
            // 0x22ca60: 0xac850060  sw          $a1, 0x60($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca5c) {
            ctx->pc = 0x22C6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22c6c8;
        }
    }
    ctx->pc = 0x22CA64u;
label_22ca64:
    // 0x22ca64: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22ca64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ca68: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x22ca68u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ca6c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x22ca6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ca70: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22ca70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ca74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ca74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ca78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ca78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ca7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ca7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ca80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ca80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ca84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ca84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ca88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ca88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22CA8Cu;
            // 0x22ca90: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22CA94u;
}
