#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignFuncAnime__9CMapPartsFP9mgCMemory
// Address: 0x168150 - 0x168288
void AssignFuncAnime__9CMapPartsFP9mgCMemory_0x168150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignFuncAnime__9CMapPartsFP9mgCMemory_0x168150");
#endif

    switch (ctx->pc) {
        case 0x168150u: goto label_168150;
        case 0x168154u: goto label_168154;
        case 0x168158u: goto label_168158;
        case 0x16815cu: goto label_16815c;
        case 0x168160u: goto label_168160;
        case 0x168164u: goto label_168164;
        case 0x168168u: goto label_168168;
        case 0x16816cu: goto label_16816c;
        case 0x168170u: goto label_168170;
        case 0x168174u: goto label_168174;
        case 0x168178u: goto label_168178;
        case 0x16817cu: goto label_16817c;
        case 0x168180u: goto label_168180;
        case 0x168184u: goto label_168184;
        case 0x168188u: goto label_168188;
        case 0x16818cu: goto label_16818c;
        case 0x168190u: goto label_168190;
        case 0x168194u: goto label_168194;
        case 0x168198u: goto label_168198;
        case 0x16819cu: goto label_16819c;
        case 0x1681a0u: goto label_1681a0;
        case 0x1681a4u: goto label_1681a4;
        case 0x1681a8u: goto label_1681a8;
        case 0x1681acu: goto label_1681ac;
        case 0x1681b0u: goto label_1681b0;
        case 0x1681b4u: goto label_1681b4;
        case 0x1681b8u: goto label_1681b8;
        case 0x1681bcu: goto label_1681bc;
        case 0x1681c0u: goto label_1681c0;
        case 0x1681c4u: goto label_1681c4;
        case 0x1681c8u: goto label_1681c8;
        case 0x1681ccu: goto label_1681cc;
        case 0x1681d0u: goto label_1681d0;
        case 0x1681d4u: goto label_1681d4;
        case 0x1681d8u: goto label_1681d8;
        case 0x1681dcu: goto label_1681dc;
        case 0x1681e0u: goto label_1681e0;
        case 0x1681e4u: goto label_1681e4;
        case 0x1681e8u: goto label_1681e8;
        case 0x1681ecu: goto label_1681ec;
        case 0x1681f0u: goto label_1681f0;
        case 0x1681f4u: goto label_1681f4;
        case 0x1681f8u: goto label_1681f8;
        case 0x1681fcu: goto label_1681fc;
        case 0x168200u: goto label_168200;
        case 0x168204u: goto label_168204;
        case 0x168208u: goto label_168208;
        case 0x16820cu: goto label_16820c;
        case 0x168210u: goto label_168210;
        case 0x168214u: goto label_168214;
        case 0x168218u: goto label_168218;
        case 0x16821cu: goto label_16821c;
        case 0x168220u: goto label_168220;
        case 0x168224u: goto label_168224;
        case 0x168228u: goto label_168228;
        case 0x16822cu: goto label_16822c;
        case 0x168230u: goto label_168230;
        case 0x168234u: goto label_168234;
        case 0x168238u: goto label_168238;
        case 0x16823cu: goto label_16823c;
        case 0x168240u: goto label_168240;
        case 0x168244u: goto label_168244;
        case 0x168248u: goto label_168248;
        case 0x16824cu: goto label_16824c;
        case 0x168250u: goto label_168250;
        case 0x168254u: goto label_168254;
        case 0x168258u: goto label_168258;
        case 0x16825cu: goto label_16825c;
        case 0x168260u: goto label_168260;
        case 0x168264u: goto label_168264;
        case 0x168268u: goto label_168268;
        case 0x16826cu: goto label_16826c;
        case 0x168270u: goto label_168270;
        case 0x168274u: goto label_168274;
        case 0x168278u: goto label_168278;
        case 0x16827cu: goto label_16827c;
        case 0x168280u: goto label_168280;
        case 0x168284u: goto label_168284;
        default: break;
    }

    ctx->pc = 0x168150u;

label_168150:
    // 0x168150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_168154:
    // 0x168154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x168154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_168158:
    // 0x168158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_16815c:
    // 0x16815c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16815cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_168160:
    // 0x168160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_168164:
    // 0x168164: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_168168:
    // 0x168168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16816c:
    // 0x16816c: 0x266402b0  addiu       $a0, $s3, 0x2B0
    ctx->pc = 0x16816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
label_168170:
    // 0x168170: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x168170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_168174:
    // 0x168174: 0xc0a761c  jal         func_29D870
label_168178:
    if (ctx->pc == 0x168178u) {
        ctx->pc = 0x168178u;
            // 0x168178: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x16817Cu;
        goto label_16817c;
    }
    ctx->pc = 0x168174u;
    SET_GPR_U32(ctx, 31, 0x16817Cu);
    ctx->pc = 0x168178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168174u;
            // 0x168178: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16817Cu; }
        if (ctx->pc != 0x16817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16817Cu; }
        if (ctx->pc != 0x16817Cu) { return; }
    }
    ctx->pc = 0x16817Cu;
label_16817c:
    // 0x16817c: 0xc0a762c  jal         func_29D8B0
label_168180:
    if (ctx->pc == 0x168180u) {
        ctx->pc = 0x168180u;
            // 0x168180: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->pc = 0x168184u;
        goto label_168184;
    }
    ctx->pc = 0x16817Cu;
    SET_GPR_U32(ctx, 31, 0x168184u);
    ctx->pc = 0x168180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16817Cu;
            // 0x168180: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168184u; }
        if (ctx->pc != 0x168184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168184u; }
        if (ctx->pc != 0x168184u) { return; }
    }
    ctx->pc = 0x168184u;
label_168184:
    // 0x168184: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_168188:
    if (ctx->pc == 0x168188u) {
        ctx->pc = 0x168188u;
            // 0x168188: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16818Cu;
        goto label_16818c;
    }
    ctx->pc = 0x168184u;
    {
        const bool branch_taken_0x168184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168184u;
            // 0x168188: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168184) {
            ctx->pc = 0x168268u;
            goto label_168268;
        }
    }
    ctx->pc = 0x16818Cu;
label_16818c:
    // 0x16818c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168190:
    // 0x168190: 0xc04e748  jal         func_139D20
label_168194:
    if (ctx->pc == 0x168194u) {
        ctx->pc = 0x168194u;
            // 0x168194: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x168198u;
        goto label_168198;
    }
    ctx->pc = 0x168190u;
    SET_GPR_U32(ctx, 31, 0x168198u);
    ctx->pc = 0x168194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168190u;
            // 0x168194: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168198u; }
        if (ctx->pc != 0x168198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168198u; }
        if (ctx->pc != 0x168198u) { return; }
    }
    ctx->pc = 0x168198u;
label_168198:
    // 0x168198: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x168198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_16819c:
    // 0x16819c: 0xc04e638  jal         func_1398E0
label_1681a0:
    if (ctx->pc == 0x1681A0u) {
        ctx->pc = 0x1681A0u;
            // 0x1681a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1681A4u;
        goto label_1681a4;
    }
    ctx->pc = 0x16819Cu;
    SET_GPR_U32(ctx, 31, 0x1681A4u);
    ctx->pc = 0x1681A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16819Cu;
            // 0x1681a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681A4u; }
        if (ctx->pc != 0x1681A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1681A4u; }
        if (ctx->pc != 0x1681A4u) { return; }
    }
    ctx->pc = 0x1681A4u;
label_1681a4:
    // 0x1681a4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1681a8:
    if (ctx->pc == 0x1681A8u) {
        ctx->pc = 0x1681A8u;
            // 0x1681a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1681ACu;
        goto label_1681ac;
    }
    ctx->pc = 0x1681A4u;
    {
        const bool branch_taken_0x1681a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681A4u;
            // 0x1681a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681a4) {
            ctx->pc = 0x1681E0u;
            goto label_1681e0;
        }
    }
    ctx->pc = 0x1681ACu;
label_1681ac:
    // 0x1681ac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1681acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1681b0:
    // 0x1681b0: 0x244254b8  addiu       $v0, $v0, 0x54B8
    ctx->pc = 0x1681b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21688));
label_1681b4:
    // 0x1681b4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1681b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_1681b8:
    // 0x1681b8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1681b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1681bc:
    // 0x1681bc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x1681bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_1681c0:
    // 0x1681c0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1681c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1681c4:
    // 0x1681c4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1681c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1681c8:
    // 0x1681c8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1681c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_1681cc:
    // 0x1681cc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x1681ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_1681d0:
    // 0x1681d0: 0x8e390040  lw          $t9, 0x40($s1)
    ctx->pc = 0x1681d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1681d4:
    // 0x1681d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1681d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1681d8:
    // 0x1681d8: 0x320f809  jalr        $t9
label_1681dc:
    if (ctx->pc == 0x1681DCu) {
        ctx->pc = 0x1681DCu;
            // 0x1681dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1681E0u;
        goto label_1681e0;
    }
    ctx->pc = 0x1681D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1681E0u);
        ctx->pc = 0x1681DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681D8u;
            // 0x1681dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1681E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1681E0u; }
            if (ctx->pc != 0x1681E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1681E0u;
label_1681e0:
    // 0x1681e0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_1681e4:
    if (ctx->pc == 0x1681E4u) {
        ctx->pc = 0x1681E4u;
            // 0x1681e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1681E8u;
        goto label_1681e8;
    }
    ctx->pc = 0x1681E0u;
    {
        const bool branch_taken_0x1681e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1681E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681E0u;
            // 0x1681e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681e0) {
            ctx->pc = 0x1681F0u;
            goto label_1681f0;
        }
    }
    ctx->pc = 0x1681E8u;
label_1681e8:
    // 0x1681e8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1681ec:
    if (ctx->pc == 0x1681ECu) {
        ctx->pc = 0x1681ECu;
            // 0x1681ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1681F0u;
        goto label_1681f0;
    }
    ctx->pc = 0x1681E8u;
    {
        const bool branch_taken_0x1681e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1681ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681E8u;
            // 0x1681ec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681e8) {
            ctx->pc = 0x168270u;
            goto label_168270;
        }
    }
    ctx->pc = 0x1681F0u;
label_1681f0:
    // 0x1681f0: 0x8e390040  lw          $t9, 0x40($s1)
    ctx->pc = 0x1681f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1681f4:
    // 0x1681f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1681f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1681f8:
    // 0x1681f8: 0x320f809  jalr        $t9
label_1681fc:
    if (ctx->pc == 0x1681FCu) {
        ctx->pc = 0x1681FCu;
            // 0x1681fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168200u;
        goto label_168200;
    }
    ctx->pc = 0x1681F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x168200u);
        ctx->pc = 0x1681FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1681F8u;
            // 0x1681fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x168200u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x168200u; }
            if (ctx->pc != 0x168200u) { return; }
        }
        }
    }
    ctx->pc = 0x168200u;
label_168200:
    // 0x168200: 0x8e6202f0  lw          $v0, 0x2F0($s3)
    ctx->pc = 0x168200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 752)));
label_168204:
    // 0x168204: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_168208:
    if (ctx->pc == 0x168208u) {
        ctx->pc = 0x16820Cu;
        goto label_16820c;
    }
    ctx->pc = 0x168204u;
    {
        const bool branch_taken_0x168204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168204) {
            ctx->pc = 0x168214u;
            goto label_168214;
        }
    }
    ctx->pc = 0x16820Cu;
label_16820c:
    // 0x16820c: 0x1000000d  b           . + 4 + (0xD << 2)
label_168210:
    if (ctx->pc == 0x168210u) {
        ctx->pc = 0x168210u;
            // 0x168210: 0xae7102f0  sw          $s1, 0x2F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 17));
        ctx->pc = 0x168214u;
        goto label_168214;
    }
    ctx->pc = 0x16820Cu;
    {
        const bool branch_taken_0x16820c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16820Cu;
            // 0x168210: 0xae7102f0  sw          $s1, 0x2F0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 752), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16820c) {
            ctx->pc = 0x168244u;
            goto label_168244;
        }
    }
    ctx->pc = 0x168214u;
label_168214:
    // 0x168214: 0x0  nop
    ctx->pc = 0x168214u;
    // NOP
label_168218:
    // 0x168218: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16821c:
    if (ctx->pc == 0x16821Cu) {
        ctx->pc = 0x168220u;
        goto label_168220;
    }
    ctx->pc = 0x168218u;
    {
        const bool branch_taken_0x168218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168218) {
            ctx->pc = 0x168234u;
            goto label_168234;
        }
    }
    ctx->pc = 0x168220u;
label_168220:
    // 0x168220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_168224:
    // 0x168224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_168228:
    if (ctx->pc == 0x168228u) {
        ctx->pc = 0x16822Cu;
        goto label_16822c;
    }
    ctx->pc = 0x168224u;
    {
        const bool branch_taken_0x168224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168224) {
            ctx->pc = 0x168234u;
            goto label_168234;
        }
    }
    ctx->pc = 0x16822Cu;
label_16822c:
    // 0x16822c: 0x1460fffc  bnez        $v1, . + 4 + (-0x4 << 2)
label_168230:
    if (ctx->pc == 0x168230u) {
        ctx->pc = 0x168230u;
            // 0x168230: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168234u;
        goto label_168234;
    }
    ctx->pc = 0x16822Cu;
    {
        const bool branch_taken_0x16822c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x168230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16822Cu;
            // 0x168230: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16822c) {
            ctx->pc = 0x168220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_168220;
        }
    }
    ctx->pc = 0x168234u;
label_168234:
    // 0x168234: 0x0  nop
    ctx->pc = 0x168234u;
    // NOP
label_168238:
    // 0x168238: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_16823c:
    if (ctx->pc == 0x16823Cu) {
        ctx->pc = 0x16823Cu;
            // 0x16823c: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x168240u;
        goto label_168240;
    }
    ctx->pc = 0x168238u;
    {
        const bool branch_taken_0x168238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168238u;
            // 0x16823c: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168238) {
            ctx->pc = 0x168244u;
            goto label_168244;
        }
    }
    ctx->pc = 0x168240u;
label_168240:
    // 0x168240: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x168240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_168244:
    // 0x168244: 0x0  nop
    ctx->pc = 0x168244u;
    // NOP
label_168248:
    // 0x168248: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x168248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_16824c:
    // 0x16824c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16824cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_168250:
    // 0x168250: 0xc0a74a4  jal         func_29D290
label_168254:
    if (ctx->pc == 0x168254u) {
        ctx->pc = 0x168254u;
            // 0x168254: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168258u;
        goto label_168258;
    }
    ctx->pc = 0x168250u;
    SET_GPR_U32(ctx, 31, 0x168258u);
    ctx->pc = 0x168254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168250u;
            // 0x168254: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D290u;
    if (runtime->hasFunction(0x29D290u)) {
        auto targetFn = runtime->lookupFunction(0x29D290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168258u; }
        if (ctx->pc != 0x168258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignFuncAnime__9CObjAnimeFP10CFuncPointP9CMapParts_0x29d290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168258u; }
        if (ctx->pc != 0x168258u) { return; }
    }
    ctx->pc = 0x168258u;
label_168258:
    // 0x168258: 0xc0a762c  jal         func_29D8B0
label_16825c:
    if (ctx->pc == 0x16825Cu) {
        ctx->pc = 0x16825Cu;
            // 0x16825c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->pc = 0x168260u;
        goto label_168260;
    }
    ctx->pc = 0x168258u;
    SET_GPR_U32(ctx, 31, 0x168260u);
    ctx->pc = 0x16825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168258u;
            // 0x16825c: 0x266402b0  addiu       $a0, $s3, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168260u; }
        if (ctx->pc != 0x168260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168260u; }
        if (ctx->pc != 0x168260u) { return; }
    }
    ctx->pc = 0x168260u;
label_168260:
    // 0x168260: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
label_168264:
    if (ctx->pc == 0x168264u) {
        ctx->pc = 0x168264u;
            // 0x168264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x168268u;
        goto label_168268;
    }
    ctx->pc = 0x168260u;
    {
        const bool branch_taken_0x168260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168260u;
            // 0x168264: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168260) {
            ctx->pc = 0x16818Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16818c;
        }
    }
    ctx->pc = 0x168268u;
label_168268:
    // 0x168268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16826c:
    // 0x16826c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x16826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_168270:
    // 0x168270: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x168270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_168274:
    // 0x168274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168278:
    // 0x168278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16827c:
    // 0x16827c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16827cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168280:
    // 0x168280: 0x3e00008  jr          $ra
label_168284:
    if (ctx->pc == 0x168284u) {
        ctx->pc = 0x168284u;
            // 0x168284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x168288u;
        goto label_fallthrough_0x168280;
    }
    ctx->pc = 0x168280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168280u;
            // 0x168284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x168280:
    ctx->pc = 0x168288u;
}
