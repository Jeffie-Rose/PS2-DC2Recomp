#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NormalGetNextRot__9CAquaFishFv
// Address: 0x20d860 - 0x20d954
void NormalGetNextRot__9CAquaFishFv_0x20d860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NormalGetNextRot__9CAquaFishFv_0x20d860");
#endif

    switch (ctx->pc) {
        case 0x20d860u: goto label_20d860;
        case 0x20d864u: goto label_20d864;
        case 0x20d868u: goto label_20d868;
        case 0x20d86cu: goto label_20d86c;
        case 0x20d870u: goto label_20d870;
        case 0x20d874u: goto label_20d874;
        case 0x20d878u: goto label_20d878;
        case 0x20d87cu: goto label_20d87c;
        case 0x20d880u: goto label_20d880;
        case 0x20d884u: goto label_20d884;
        case 0x20d888u: goto label_20d888;
        case 0x20d88cu: goto label_20d88c;
        case 0x20d890u: goto label_20d890;
        case 0x20d894u: goto label_20d894;
        case 0x20d898u: goto label_20d898;
        case 0x20d89cu: goto label_20d89c;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8a4u: goto label_20d8a4;
        case 0x20d8a8u: goto label_20d8a8;
        case 0x20d8acu: goto label_20d8ac;
        case 0x20d8b0u: goto label_20d8b0;
        case 0x20d8b4u: goto label_20d8b4;
        case 0x20d8b8u: goto label_20d8b8;
        case 0x20d8bcu: goto label_20d8bc;
        case 0x20d8c0u: goto label_20d8c0;
        case 0x20d8c4u: goto label_20d8c4;
        case 0x20d8c8u: goto label_20d8c8;
        case 0x20d8ccu: goto label_20d8cc;
        case 0x20d8d0u: goto label_20d8d0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d8d8u: goto label_20d8d8;
        case 0x20d8dcu: goto label_20d8dc;
        case 0x20d8e0u: goto label_20d8e0;
        case 0x20d8e4u: goto label_20d8e4;
        case 0x20d8e8u: goto label_20d8e8;
        case 0x20d8ecu: goto label_20d8ec;
        case 0x20d8f0u: goto label_20d8f0;
        case 0x20d8f4u: goto label_20d8f4;
        case 0x20d8f8u: goto label_20d8f8;
        case 0x20d8fcu: goto label_20d8fc;
        case 0x20d900u: goto label_20d900;
        case 0x20d904u: goto label_20d904;
        case 0x20d908u: goto label_20d908;
        case 0x20d90cu: goto label_20d90c;
        case 0x20d910u: goto label_20d910;
        case 0x20d914u: goto label_20d914;
        case 0x20d918u: goto label_20d918;
        case 0x20d91cu: goto label_20d91c;
        case 0x20d920u: goto label_20d920;
        case 0x20d924u: goto label_20d924;
        case 0x20d928u: goto label_20d928;
        case 0x20d92cu: goto label_20d92c;
        case 0x20d930u: goto label_20d930;
        case 0x20d934u: goto label_20d934;
        case 0x20d938u: goto label_20d938;
        case 0x20d93cu: goto label_20d93c;
        case 0x20d940u: goto label_20d940;
        case 0x20d944u: goto label_20d944;
        case 0x20d948u: goto label_20d948;
        case 0x20d94cu: goto label_20d94c;
        case 0x20d950u: goto label_20d950;
        default: break;
    }

    ctx->pc = 0x20d860u;

label_20d860:
    // 0x20d860: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20d860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20d864:
    // 0x20d864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20d864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_20d868:
    // 0x20d868: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20d86c:
    // 0x20d86c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20d86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20d870:
    // 0x20d870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20d874:
    // 0x20d874: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20d878:
    // 0x20d878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20d878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20d87c:
    // 0x20d87c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20d87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20d880:
    // 0x20d880: 0x320f809  jalr        $t9
label_20d884:
    if (ctx->pc == 0x20D884u) {
        ctx->pc = 0x20D884u;
            // 0x20d884: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D888u;
        goto label_20d888;
    }
    ctx->pc = 0x20D880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D888u);
        ctx->pc = 0x20D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D880u;
            // 0x20d884: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D888u; }
            if (ctx->pc != 0x20D888u) { return; }
        }
        }
    }
    ctx->pc = 0x20D888u;
label_20d888:
    // 0x20d888: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20d888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20d88c:
    // 0x20d88c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20d890:
    // 0x20d890: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20d890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20d894:
    // 0x20d894: 0x320f809  jalr        $t9
label_20d898:
    if (ctx->pc == 0x20D898u) {
        ctx->pc = 0x20D898u;
            // 0x20d898: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20D89Cu;
        goto label_20d89c;
    }
    ctx->pc = 0x20D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20D89Cu);
        ctx->pc = 0x20D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D894u;
            // 0x20d898: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20D89Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20D89Cu; }
            if (ctx->pc != 0x20D89Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20D89Cu;
label_20d89c:
    // 0x20d89c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d8a0:
    // 0x20d8a0: 0x26450660  addiu       $a1, $s2, 0x660
    ctx->pc = 0x20d8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
label_20d8a4:
    // 0x20d8a4: 0xc041c3e  jal         func_1070F8
label_20d8a8:
    if (ctx->pc == 0x20D8A8u) {
        ctx->pc = 0x20D8A8u;
            // 0x20d8a8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20D8ACu;
        goto label_20d8ac;
    }
    ctx->pc = 0x20D8A4u;
    SET_GPR_U32(ctx, 31, 0x20D8ACu);
    ctx->pc = 0x20D8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8A4u;
            // 0x20d8a8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8ACu; }
        if (ctx->pc != 0x20D8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8ACu; }
        if (ctx->pc != 0x20D8ACu) { return; }
    }
    ctx->pc = 0x20D8ACu;
label_20d8ac:
    // 0x20d8ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20d8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_20d8b0:
    // 0x20d8b0: 0xc041be0  jal         func_106F80
label_20d8b4:
    if (ctx->pc == 0x20D8B4u) {
        ctx->pc = 0x20D8B4u;
            // 0x20d8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D8B8u;
        goto label_20d8b8;
    }
    ctx->pc = 0x20D8B0u;
    SET_GPR_U32(ctx, 31, 0x20D8B8u);
    ctx->pc = 0x20D8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8B0u;
            // 0x20d8b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8B8u; }
        if (ctx->pc != 0x20D8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8B8u; }
        if (ctx->pc != 0x20D8B8u) { return; }
    }
    ctx->pc = 0x20D8B8u;
label_20d8b8:
    // 0x20d8b8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x20d8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20d8bc:
    // 0x20d8bc: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x20d8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_20d8c0:
    // 0x20d8c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d8c4:
    // 0x20d8c4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x20d8c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_20d8c8:
    // 0x20d8c8: 0xc0a24f0  jal         func_2893C0
label_20d8cc:
    if (ctx->pc == 0x20D8CCu) {
        ctx->pc = 0x20D8CCu;
            // 0x20d8cc: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x20D8D0u;
        goto label_20d8d0;
    }
    ctx->pc = 0x20D8C8u;
    SET_GPR_U32(ctx, 31, 0x20D8D0u);
    ctx->pc = 0x20D8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8C8u;
            // 0x20d8cc: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8D0u; }
        if (ctx->pc != 0x20D8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8D0u; }
        if (ctx->pc != 0x20D8D0u) { return; }
    }
    ctx->pc = 0x20D8D0u;
label_20d8d0:
    // 0x20d8d0: 0xc047bf2  jal         func_11EFC8
label_20d8d4:
    if (ctx->pc == 0x20D8D4u) {
        ctx->pc = 0x20D8D4u;
            // 0x20d8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D8D8u;
        goto label_20d8d8;
    }
    ctx->pc = 0x20D8D0u;
    SET_GPR_U32(ctx, 31, 0x20D8D8u);
    ctx->pc = 0x20D8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8D0u;
            // 0x20d8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8D8u; }
        if (ctx->pc != 0x20D8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8D8u; }
        if (ctx->pc != 0x20D8D8u) { return; }
    }
    ctx->pc = 0x20D8D8u;
label_20d8d8:
    // 0x20d8d8: 0xc0a21f2  jal         func_2887C8
label_20d8dc:
    if (ctx->pc == 0x20D8DCu) {
        ctx->pc = 0x20D8DCu;
            // 0x20d8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20D8E0u;
        goto label_20d8e0;
    }
    ctx->pc = 0x20D8D8u;
    SET_GPR_U32(ctx, 31, 0x20D8E0u);
    ctx->pc = 0x20D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8D8u;
            // 0x20d8dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8E0u; }
        if (ctx->pc != 0x20D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8E0u; }
        if (ctx->pc != 0x20D8E0u) { return; }
    }
    ctx->pc = 0x20D8E0u;
label_20d8e0:
    // 0x20d8e0: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x20d8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_20d8e4:
    // 0x20d8e4: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x20d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_20d8e8:
    // 0x20d8e8: 0xc047c76  jal         func_11F1D8
label_20d8ec:
    if (ctx->pc == 0x20D8ECu) {
        ctx->pc = 0x20D8ECu;
            // 0x20d8ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20D8F0u;
        goto label_20d8f0;
    }
    ctx->pc = 0x20D8E8u;
    SET_GPR_U32(ctx, 31, 0x20D8F0u);
    ctx->pc = 0x20D8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8E8u;
            // 0x20d8ec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8F0u; }
        if (ctx->pc != 0x20D8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8F0u; }
        if (ctx->pc != 0x20D8F0u) { return; }
    }
    ctx->pc = 0x20D8F0u;
label_20d8f0:
    // 0x20d8f0: 0xc04c374  jal         func_130DD0
label_20d8f4:
    if (ctx->pc == 0x20D8F4u) {
        ctx->pc = 0x20D8F4u;
            // 0x20d8f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20D8F8u;
        goto label_20d8f8;
    }
    ctx->pc = 0x20D8F0u;
    SET_GPR_U32(ctx, 31, 0x20D8F8u);
    ctx->pc = 0x20D8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D8F0u;
            // 0x20d8f4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8F8u; }
        if (ctx->pc != 0x20D8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D8F8u; }
        if (ctx->pc != 0x20D8F8u) { return; }
    }
    ctx->pc = 0x20D8F8u;
label_20d8f8:
    // 0x20d8f8: 0xe6400680  swc1        $f0, 0x680($s2)
    ctx->pc = 0x20d8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1664), bits); }
label_20d8fc:
    // 0x20d8fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d900:
    // 0x20d900: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20d900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20d904:
    // 0x20d904: 0x0  nop
    ctx->pc = 0x20d904u;
    // NOP
label_20d908:
    // 0x20d908: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20d908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20d90c:
    // 0x20d90c: 0x0  nop
    ctx->pc = 0x20d90cu;
    // NOP
label_20d910:
    // 0x20d910: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_20d914:
    if (ctx->pc == 0x20D914u) {
        ctx->pc = 0x20D918u;
        goto label_20d918;
    }
    ctx->pc = 0x20D910u;
    {
        const bool branch_taken_0x20d910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d910) {
            ctx->pc = 0x20D924u;
            goto label_20d924;
        }
    }
    ctx->pc = 0x20D918u;
label_20d918:
    // 0x20d918: 0xc6400680  lwc1        $f0, 0x680($s2)
    ctx->pc = 0x20d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d91c:
    // 0x20d91c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x20d91cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_20d920:
    // 0x20d920: 0xe6400680  swc1        $f0, 0x680($s2)
    ctx->pc = 0x20d920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1664), bits); }
label_20d924:
    // 0x20d924: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x20d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20d928:
    // 0x20d928: 0xc047c76  jal         func_11F1D8
label_20d92c:
    if (ctx->pc == 0x20D92Cu) {
        ctx->pc = 0x20D92Cu;
            // 0x20d92c: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x20D930u;
        goto label_20d930;
    }
    ctx->pc = 0x20D928u;
    SET_GPR_U32(ctx, 31, 0x20D930u);
    ctx->pc = 0x20D92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D928u;
            // 0x20d92c: 0xc62d0000  lwc1        $f13, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D930u; }
        if (ctx->pc != 0x20D930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D930u; }
        if (ctx->pc != 0x20D930u) { return; }
    }
    ctx->pc = 0x20D930u;
label_20d930:
    // 0x20d930: 0xc04c374  jal         func_130DD0
label_20d934:
    if (ctx->pc == 0x20D934u) {
        ctx->pc = 0x20D934u;
            // 0x20d934: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20D938u;
        goto label_20d938;
    }
    ctx->pc = 0x20D930u;
    SET_GPR_U32(ctx, 31, 0x20D938u);
    ctx->pc = 0x20D934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D930u;
            // 0x20d934: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D938u; }
        if (ctx->pc != 0x20D938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D938u; }
        if (ctx->pc != 0x20D938u) { return; }
    }
    ctx->pc = 0x20D938u;
label_20d938:
    // 0x20d938: 0xe6400684  swc1        $f0, 0x684($s2)
    ctx->pc = 0x20d938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1668), bits); }
label_20d93c:
    // 0x20d93c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20d93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20d940:
    // 0x20d940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20d940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d944:
    // 0x20d944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d948:
    // 0x20d948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20d94c:
    // 0x20d94c: 0x3e00008  jr          $ra
label_20d950:
    if (ctx->pc == 0x20D950u) {
        ctx->pc = 0x20D950u;
            // 0x20d950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20D954u;
        goto label_fallthrough_0x20d94c;
    }
    ctx->pc = 0x20D94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D94Cu;
            // 0x20d950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20d94c:
    ctx->pc = 0x20D954u;
}
