#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CActionCharaFv
// Address: 0x16b850 - 0x16b940
void Draw__12CActionCharaFv_0x16b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CActionCharaFv_0x16b850");
#endif

    switch (ctx->pc) {
        case 0x16b850u: goto label_16b850;
        case 0x16b854u: goto label_16b854;
        case 0x16b858u: goto label_16b858;
        case 0x16b85cu: goto label_16b85c;
        case 0x16b860u: goto label_16b860;
        case 0x16b864u: goto label_16b864;
        case 0x16b868u: goto label_16b868;
        case 0x16b86cu: goto label_16b86c;
        case 0x16b870u: goto label_16b870;
        case 0x16b874u: goto label_16b874;
        case 0x16b878u: goto label_16b878;
        case 0x16b87cu: goto label_16b87c;
        case 0x16b880u: goto label_16b880;
        case 0x16b884u: goto label_16b884;
        case 0x16b888u: goto label_16b888;
        case 0x16b88cu: goto label_16b88c;
        case 0x16b890u: goto label_16b890;
        case 0x16b894u: goto label_16b894;
        case 0x16b898u: goto label_16b898;
        case 0x16b89cu: goto label_16b89c;
        case 0x16b8a0u: goto label_16b8a0;
        case 0x16b8a4u: goto label_16b8a4;
        case 0x16b8a8u: goto label_16b8a8;
        case 0x16b8acu: goto label_16b8ac;
        case 0x16b8b0u: goto label_16b8b0;
        case 0x16b8b4u: goto label_16b8b4;
        case 0x16b8b8u: goto label_16b8b8;
        case 0x16b8bcu: goto label_16b8bc;
        case 0x16b8c0u: goto label_16b8c0;
        case 0x16b8c4u: goto label_16b8c4;
        case 0x16b8c8u: goto label_16b8c8;
        case 0x16b8ccu: goto label_16b8cc;
        case 0x16b8d0u: goto label_16b8d0;
        case 0x16b8d4u: goto label_16b8d4;
        case 0x16b8d8u: goto label_16b8d8;
        case 0x16b8dcu: goto label_16b8dc;
        case 0x16b8e0u: goto label_16b8e0;
        case 0x16b8e4u: goto label_16b8e4;
        case 0x16b8e8u: goto label_16b8e8;
        case 0x16b8ecu: goto label_16b8ec;
        case 0x16b8f0u: goto label_16b8f0;
        case 0x16b8f4u: goto label_16b8f4;
        case 0x16b8f8u: goto label_16b8f8;
        case 0x16b8fcu: goto label_16b8fc;
        case 0x16b900u: goto label_16b900;
        case 0x16b904u: goto label_16b904;
        case 0x16b908u: goto label_16b908;
        case 0x16b90cu: goto label_16b90c;
        case 0x16b910u: goto label_16b910;
        case 0x16b914u: goto label_16b914;
        case 0x16b918u: goto label_16b918;
        case 0x16b91cu: goto label_16b91c;
        case 0x16b920u: goto label_16b920;
        case 0x16b924u: goto label_16b924;
        case 0x16b928u: goto label_16b928;
        case 0x16b92cu: goto label_16b92c;
        case 0x16b930u: goto label_16b930;
        case 0x16b934u: goto label_16b934;
        case 0x16b938u: goto label_16b938;
        case 0x16b93cu: goto label_16b93c;
        default: break;
    }

    ctx->pc = 0x16b850u;

label_16b850:
    // 0x16b850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16b850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16b854:
    // 0x16b854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16b858:
    // 0x16b858: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16b85c:
    // 0x16b85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16b860:
    // 0x16b860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16b860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16b864:
    // 0x16b864: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b868:
    // 0x16b868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16b86c:
    // 0x16b86c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16b86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16b870:
    // 0x16b870: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16b870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16b874:
    // 0x16b874: 0x320f809  jalr        $t9
label_16b878:
    if (ctx->pc == 0x16B878u) {
        ctx->pc = 0x16B878u;
            // 0x16b878: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B87Cu;
        goto label_16b87c;
    }
    ctx->pc = 0x16B874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B87Cu);
        ctx->pc = 0x16B878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B874u;
            // 0x16b878: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B87Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B87Cu; }
            if (ctx->pc != 0x16B87Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16B87Cu;
label_16b87c:
    // 0x16b87c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16b880:
    // 0x16b880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b884:
    // 0x16b884: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16b884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16b888:
    // 0x16b888: 0x320f809  jalr        $t9
label_16b88c:
    if (ctx->pc == 0x16B88Cu) {
        ctx->pc = 0x16B88Cu;
            // 0x16b88c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16B890u;
        goto label_16b890;
    }
    ctx->pc = 0x16B888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B890u);
        ctx->pc = 0x16B88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B888u;
            // 0x16b88c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B890u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B890u; }
            if (ctx->pc != 0x16B890u) { return; }
        }
        }
    }
    ctx->pc = 0x16B890u;
label_16b890:
    // 0x16b890: 0x8e420be8  lw          $v0, 0xBE8($s2)
    ctx->pc = 0x16b890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3048)));
label_16b894:
    // 0x16b894: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x16b894u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_16b898:
    // 0x16b898: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_16b89c:
    if (ctx->pc == 0x16B89Cu) {
        ctx->pc = 0x16B8A0u;
        goto label_16b8a0;
    }
    ctx->pc = 0x16B898u;
    {
        const bool branch_taken_0x16b898 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b898) {
            ctx->pc = 0x16B8C0u;
            goto label_16b8c0;
        }
    }
    ctx->pc = 0x16B8A0u;
label_16b8a0:
    // 0x16b8a0: 0xc04c3b8  jal         func_130EE0
label_16b8a4:
    if (ctx->pc == 0x16B8A4u) {
        ctx->pc = 0x16B8A8u;
        goto label_16b8a8;
    }
    ctx->pc = 0x16B8A0u;
    SET_GPR_U32(ctx, 31, 0x16B8A8u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8A8u; }
        if (ctx->pc != 0x16B8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8A8u; }
        if (ctx->pc != 0x16B8A8u) { return; }
    }
    ctx->pc = 0x16B8A8u;
label_16b8a8:
    // 0x16b8a8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x16b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_16b8ac:
    // 0x16b8ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16b8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16b8b0:
    // 0x16b8b0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x16b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16b8b4:
    // 0x16b8b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_16b8b8:
    // 0x16b8b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16b8b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16b8bc:
    // 0x16b8bc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x16b8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_16b8c0:
    // 0x16b8c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16b8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16b8c4:
    // 0x16b8c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b8c8:
    // 0x16b8c8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16b8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16b8cc:
    // 0x16b8cc: 0x320f809  jalr        $t9
label_16b8d0:
    if (ctx->pc == 0x16B8D0u) {
        ctx->pc = 0x16B8D0u;
            // 0x16b8d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16B8D4u;
        goto label_16b8d4;
    }
    ctx->pc = 0x16B8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B8D4u);
        ctx->pc = 0x16B8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8CCu;
            // 0x16b8d0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B8D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B8D4u; }
            if (ctx->pc != 0x16B8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x16B8D4u;
label_16b8d4:
    // 0x16b8d4: 0xc050df4  jal         func_1437D0
label_16b8d8:
    if (ctx->pc == 0x16B8D8u) {
        ctx->pc = 0x16B8D8u;
            // 0x16b8d8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16B8DCu;
        goto label_16b8dc;
    }
    ctx->pc = 0x16B8D4u;
    SET_GPR_U32(ctx, 31, 0x16B8DCu);
    ctx->pc = 0x16B8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8D4u;
            // 0x16b8d8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8DCu; }
        if (ctx->pc != 0x16B8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8DCu; }
        if (ctx->pc != 0x16B8DCu) { return; }
    }
    ctx->pc = 0x16B8DCu;
label_16b8dc:
    // 0x16b8dc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_16b8e0:
    if (ctx->pc == 0x16B8E0u) {
        ctx->pc = 0x16B8E4u;
        goto label_16b8e4;
    }
    ctx->pc = 0x16B8DCu;
    {
        const bool branch_taken_0x16b8dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b8dc) {
            ctx->pc = 0x16B904u;
            goto label_16b904;
        }
    }
    ctx->pc = 0x16B8E4u;
label_16b8e4:
    // 0x16b8e4: 0xc05cbd8  jal         func_172F60
label_16b8e8:
    if (ctx->pc == 0x16B8E8u) {
        ctx->pc = 0x16B8E8u;
            // 0x16b8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B8ECu;
        goto label_16b8ec;
    }
    ctx->pc = 0x16B8E4u;
    SET_GPR_U32(ctx, 31, 0x16B8ECu);
    ctx->pc = 0x16B8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8E4u;
            // 0x16b8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172F60u;
    if (runtime->hasFunction(0x172F60u)) {
        auto targetFn = runtime->lookupFunction(0x172F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8ECu; }
        if (ctx->pc != 0x16B8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CCharacter2Fv_0x172f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8ECu; }
        if (ctx->pc != 0x16B8ECu) { return; }
    }
    ctx->pc = 0x16B8ECu;
label_16b8ec:
    // 0x16b8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b8f0:
    // 0x16b8f0: 0xc05a970  jal         func_16A5C0
label_16b8f4:
    if (ctx->pc == 0x16B8F4u) {
        ctx->pc = 0x16B8F4u;
            // 0x16b8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B8F8u;
        goto label_16b8f8;
    }
    ctx->pc = 0x16B8F0u;
    SET_GPR_U32(ctx, 31, 0x16B8F8u);
    ctx->pc = 0x16B8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B8F0u;
            // 0x16b8f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A5C0u;
    if (runtime->hasFunction(0x16A5C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F8u; }
        if (ctx->pc != 0x16B8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCollision__12CActionCharaFv_0x16a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B8F8u; }
        if (ctx->pc != 0x16B8F8u) { return; }
    }
    ctx->pc = 0x16B8F8u;
label_16b8f8:
    // 0x16b8f8: 0x8e310678  lw          $s1, 0x678($s1)
    ctx->pc = 0x16b8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_16b8fc:
    // 0x16b8fc: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_16b900:
    if (ctx->pc == 0x16B900u) {
        ctx->pc = 0x16B904u;
        goto label_16b904;
    }
    ctx->pc = 0x16B8FCu;
    {
        const bool branch_taken_0x16b8fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b8fc) {
            ctx->pc = 0x16B8E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b8e4;
        }
    }
    ctx->pc = 0x16B904u;
label_16b904:
    // 0x16b904: 0x0  nop
    ctx->pc = 0x16b904u;
    // NOP
label_16b908:
    // 0x16b908: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16b908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16b90c:
    // 0x16b90c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16b90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b910:
    // 0x16b910: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x16b910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_16b914:
    // 0x16b914: 0x320f809  jalr        $t9
label_16b918:
    if (ctx->pc == 0x16B918u) {
        ctx->pc = 0x16B918u;
            // 0x16b918: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16B91Cu;
        goto label_16b91c;
    }
    ctx->pc = 0x16B914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16B91Cu);
        ctx->pc = 0x16B918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B914u;
            // 0x16b918: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16B91Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B91Cu; }
            if (ctx->pc != 0x16B91Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16B91Cu;
label_16b91c:
    // 0x16b91c: 0xc050dec  jal         func_1437B0
label_16b920:
    if (ctx->pc == 0x16B920u) {
        ctx->pc = 0x16B920u;
            // 0x16b920: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16B924u;
        goto label_16b924;
    }
    ctx->pc = 0x16B91Cu;
    SET_GPR_U32(ctx, 31, 0x16B924u);
    ctx->pc = 0x16B920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B91Cu;
            // 0x16b920: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B924u; }
        if (ctx->pc != 0x16B924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B924u; }
        if (ctx->pc != 0x16B924u) { return; }
    }
    ctx->pc = 0x16B924u;
label_16b924:
    // 0x16b924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16b928:
    // 0x16b928: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16b928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16b92c:
    // 0x16b92c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b92cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16b930:
    // 0x16b930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b934:
    // 0x16b934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16b938:
    // 0x16b938: 0x3e00008  jr          $ra
label_16b93c:
    if (ctx->pc == 0x16B93Cu) {
        ctx->pc = 0x16B93Cu;
            // 0x16b93c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16B940u;
        goto label_fallthrough_0x16b938;
    }
    ctx->pc = 0x16B938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B938u;
            // 0x16b93c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16b938:
    ctx->pc = 0x16B940u;
}
