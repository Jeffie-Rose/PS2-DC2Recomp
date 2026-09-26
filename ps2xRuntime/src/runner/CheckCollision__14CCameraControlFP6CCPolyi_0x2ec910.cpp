#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckCollision__14CCameraControlFP6CCPolyi
// Address: 0x2ec910 - 0x2ecb58
void CheckCollision__14CCameraControlFP6CCPolyi_0x2ec910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckCollision__14CCameraControlFP6CCPolyi_0x2ec910");
#endif

    switch (ctx->pc) {
        case 0x2ec938u: goto label_2ec938;
        case 0x2ec980u: goto label_2ec980;
        case 0x2ec98cu: goto label_2ec98c;
        case 0x2ec99cu: goto label_2ec99c;
        case 0x2ec9b0u: goto label_2ec9b0;
        case 0x2ec9bcu: goto label_2ec9bc;
        case 0x2ec9c4u: goto label_2ec9c4;
        case 0x2ec9d8u: goto label_2ec9d8;
        case 0x2ec9e8u: goto label_2ec9e8;
        case 0x2ec9fcu: goto label_2ec9fc;
        case 0x2eca0cu: goto label_2eca0c;
        case 0x2eca30u: goto label_2eca30;
        case 0x2eca74u: goto label_2eca74;
        case 0x2eca80u: goto label_2eca80;
        case 0x2eca94u: goto label_2eca94;
        case 0x2ecaa0u: goto label_2ecaa0;
        case 0x2ecab4u: goto label_2ecab4;
        case 0x2ecac4u: goto label_2ecac4;
        case 0x2ecb04u: goto label_2ecb04;
        case 0x2ecb14u: goto label_2ecb14;
        default: break;
    }

    ctx->pc = 0x2ec910u;

    // 0x2ec910: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ec910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ec914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ec914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ec918: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ec918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2ec91c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ec91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ec920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ec920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ec924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ec928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ec928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec92c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ec92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec930: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2EC930u;
    SET_GPR_U32(ctx, 31, 0x2EC938u);
    ctx->pc = 0x2EC934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC930u;
            // 0x2ec934: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC938u; }
        if (ctx->pc != 0x2EC938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC938u; }
        if (ctx->pc != 0x2EC938u) { return; }
    }
    ctx->pc = 0x2EC938u;
label_2ec938:
    // 0x2ec938: 0x8e4201e0  lw          $v0, 0x1E0($s2)
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 480)));
    // 0x2ec93c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC93Cu;
    {
        const bool branch_taken_0x2ec93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec93c) {
            ctx->pc = 0x2EC964u;
            goto label_2ec964;
        }
    }
    ctx->pc = 0x2EC944u;
    // 0x2ec944: 0x7a4301d0  lq          $v1, 0x1D0($s2)
    ctx->pc = 0x2ec944u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x2ec948: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2ec948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec94c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ec94cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2ec950: 0xc6410084  lwc1        $f1, 0x84($s2)
    ctx->pc = 0x2ec950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec954: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ec954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec958: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ec958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ec95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC95Cu;
    {
        const bool branch_taken_0x2ec95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC95Cu;
            // 0x2ec960: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec95c) {
            ctx->pc = 0x2EC970u;
            goto label_2ec970;
        }
    }
    ctx->pc = 0x2EC964u;
label_2ec964:
    // 0x2ec964: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x2ec964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2ec968: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2ec968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec96c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ec96cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ec970:
    // 0x2ec970: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ec974: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec978: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC978u;
    SET_GPR_U32(ctx, 31, 0x2EC980u);
    ctx->pc = 0x2EC97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC978u;
            // 0x2ec97c: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC980u; }
        if (ctx->pc != 0x2EC980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC980u; }
        if (ctx->pc != 0x2EC980u) { return; }
    }
    ctx->pc = 0x2EC980u;
label_2ec980:
    // 0x2ec980: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ec980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ec984: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2EC984u;
    SET_GPR_U32(ctx, 31, 0x2EC98Cu);
    ctx->pc = 0x2EC988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC984u;
            // 0x2ec988: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC98Cu; }
        if (ctx->pc != 0x2EC98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC98Cu; }
        if (ctx->pc != 0x2EC98Cu) { return; }
    }
    ctx->pc = 0x2EC98Cu;
label_2ec98c:
    // 0x2ec98c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ec98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec990: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2ec990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec994: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC994u;
    SET_GPR_U32(ctx, 31, 0x2EC99Cu);
    ctx->pc = 0x2EC998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC994u;
            // 0x2ec998: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC99Cu; }
        if (ctx->pc != 0x2EC99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC99Cu; }
        if (ctx->pc != 0x2EC99Cu) { return; }
    }
    ctx->pc = 0x2EC99Cu;
label_2ec99c:
    // 0x2ec99c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ec99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ec9a0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ec9a4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ec9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ec9a8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC9A8u;
    SET_GPR_U32(ctx, 31, 0x2EC9B0u);
    ctx->pc = 0x2EC9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9A8u;
            // 0x2ec9ac: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9B0u; }
        if (ctx->pc != 0x2EC9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9B0u; }
        if (ctx->pc != 0x2EC9B0u) { return; }
    }
    ctx->pc = 0x2EC9B0u;
label_2ec9b0:
    // 0x2ec9b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ec9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ec9b4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2EC9B4u;
    SET_GPR_U32(ctx, 31, 0x2EC9BCu);
    ctx->pc = 0x2EC9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9B4u;
            // 0x2ec9b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9BCu; }
        if (ctx->pc != 0x2EC9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9BCu; }
        if (ctx->pc != 0x2EC9BCu) { return; }
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2EC9BCu;
    SET_GPR_U32(ctx, 31, 0x2EC9C4u);
    ctx->pc = 0x2EC9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9BCu;
            // 0x2ec9c0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9C4u; }
        if (ctx->pc != 0x2EC9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9C4u; }
        if (ctx->pc != 0x2EC9C4u) { return; }
    }
    ctx->pc = 0x2EC9C4u;
label_2ec9c4:
    // 0x2ec9c4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ec9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ec9c8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2ec9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ec9cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ec9ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec9d0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2EC9D0u;
    SET_GPR_U32(ctx, 31, 0x2EC9D8u);
    ctx->pc = 0x2EC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9D0u;
            // 0x2ec9d4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9D8u; }
        if (ctx->pc != 0x2EC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9D8u; }
        if (ctx->pc != 0x2EC9D8u) { return; }
    }
    ctx->pc = 0x2EC9D8u;
label_2ec9d8:
    // 0x2ec9d8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ec9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ec9dc: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2ec9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ec9e0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC9E0u;
    SET_GPR_U32(ctx, 31, 0x2EC9E8u);
    ctx->pc = 0x2EC9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9E0u;
            // 0x2ec9e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9E8u; }
        if (ctx->pc != 0x2EC9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9E8u; }
        if (ctx->pc != 0x2EC9E8u) { return; }
    }
    ctx->pc = 0x2EC9E8u;
label_2ec9e8:
    // 0x2ec9e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ec9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2ec9ec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2ec9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ec9f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ec9f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ec9f4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2EC9F4u;
    SET_GPR_U32(ctx, 31, 0x2EC9FCu);
    ctx->pc = 0x2EC9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC9F4u;
            // 0x2ec9f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9FCu; }
        if (ctx->pc != 0x2EC9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC9FCu; }
        if (ctx->pc != 0x2EC9FCu) { return; }
    }
    ctx->pc = 0x2EC9FCu;
label_2ec9fc:
    // 0x2ec9fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2ec9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eca00: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2eca00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2eca04: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECA04u;
    SET_GPR_U32(ctx, 31, 0x2ECA0Cu);
    ctx->pc = 0x2ECA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA04u;
            // 0x2eca08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA0Cu; }
        if (ctx->pc != 0x2ECA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA0Cu; }
        if (ctx->pc != 0x2ECA0Cu) { return; }
    }
    ctx->pc = 0x2ECA0Cu;
label_2eca0c:
    // 0x2eca0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eca0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2eca10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca14: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2eca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eca18: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x2eca18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eca1c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2eca1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eca20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2eca20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eca24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2eca24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca28: 0xc053794  jal         func_14DE50
    ctx->pc = 0x2ECA28u;
    SET_GPR_U32(ctx, 31, 0x2ECA30u);
    ctx->pc = 0x2ECA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA28u;
            // 0x2eca2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA30u; }
        if (ctx->pc != 0x2ECA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA30u; }
        if (ctx->pc != 0x2ECA30u) { return; }
    }
    ctx->pc = 0x2ECA30u;
label_2eca30:
    // 0x2eca30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2eca30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca34: 0x4e1000a  bgez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2ECA34u;
    {
        const bool branch_taken_0x2eca34 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2ECA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA34u;
            // 0x2eca38: 0x27a30090  addiu       $v1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca34) {
            ctx->pc = 0x2ECA60u;
            goto label_2eca60;
        }
    }
    ctx->pc = 0x2ECA3Cu;
    // 0x2eca3c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2eca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eca40: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x2eca40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eca44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2eca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2eca48: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2eca48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eca4c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eca4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eca50: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2eca50u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2eca54: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2eca54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2eca58: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x2eca58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2eca5c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2eca5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2eca60:
    // 0x2eca60: 0x4e00036  bltz        $a3, . + 4 + (0x36 << 2)
    ctx->pc = 0x2ECA60u;
    {
        const bool branch_taken_0x2eca60 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2ECA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA60u;
            // 0x2eca64: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca60) {
            ctx->pc = 0x2ECB3Cu;
            goto label_2ecb3c;
        }
    }
    ctx->pc = 0x2ECA68u;
    // 0x2eca68: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2eca68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eca6c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2ECA6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECA74u);
    ctx->pc = 0x2ECA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA6Cu;
            // 0x2eca70: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA74u; }
        if (ctx->pc != 0x2ECA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA74u; }
        if (ctx->pc != 0x2ECA74u) { return; }
    }
    ctx->pc = 0x2ECA74u;
label_2eca74:
    // 0x2eca74: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2eca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2eca78: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2ECA78u;
    SET_GPR_U32(ctx, 31, 0x2ECA80u);
    ctx->pc = 0x2ECA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA78u;
            // 0x2eca7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA80u; }
        if (ctx->pc != 0x2ECA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA80u; }
        if (ctx->pc != 0x2ECA80u) { return; }
    }
    ctx->pc = 0x2ECA80u;
label_2eca80:
    // 0x2eca80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2eca80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2eca84: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2eca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2eca88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eca88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eca8c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2ECA8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECA94u);
    ctx->pc = 0x2ECA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA8Cu;
            // 0x2eca90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA94u; }
        if (ctx->pc != 0x2ECA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECA94u; }
        if (ctx->pc != 0x2ECA94u) { return; }
    }
    ctx->pc = 0x2ECA94u;
label_2eca94:
    // 0x2eca94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eca98: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x2ECA98u;
    SET_GPR_U32(ctx, 31, 0x2ECAA0u);
    ctx->pc = 0x2ECA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECA98u;
            // 0x2eca9c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAA0u; }
        if (ctx->pc != 0x2ECAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAA0u; }
        if (ctx->pc != 0x2ECAA0u) { return; }
    }
    ctx->pc = 0x2ECAA0u;
label_2ecaa0:
    // 0x2ecaa0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECAA0u;
    {
        const bool branch_taken_0x2ecaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAA0u;
            // 0x2ecaa4: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecaa0) {
            ctx->pc = 0x2ECAF0u;
            goto label_2ecaf0;
        }
    }
    ctx->pc = 0x2ECAA8u;
    // 0x2ecaa8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2ecaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2ecaac: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x2ECAACu;
    SET_GPR_U32(ctx, 31, 0x2ECAB4u);
    ctx->pc = 0x2ECAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAACu;
            // 0x2ecab0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAB4u; }
        if (ctx->pc != 0x2ECAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAB4u; }
        if (ctx->pc != 0x2ECAB4u) { return; }
    }
    ctx->pc = 0x2ECAB4u;
label_2ecab4:
    // 0x2ecab4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ecab4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ecab8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ecab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ecabc: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x2ECABCu;
    SET_GPR_U32(ctx, 31, 0x2ECAC4u);
    ctx->pc = 0x2ECAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECABCu;
            // 0x2ecac0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAC4u; }
        if (ctx->pc != 0x2ECAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECAC4u; }
        if (ctx->pc != 0x2ECAC4u) { return; }
    }
    ctx->pc = 0x2ECAC4u;
label_2ecac4:
    // 0x2ecac4: 0x0  nop
    ctx->pc = 0x2ecac4u;
    // NOP
    // 0x2ecac8: 0x0  nop
    ctx->pc = 0x2ecac8u;
    // NOP
    // 0x2ecacc: 0x461400c3  div.s       $f3, $f0, $f20
    ctx->pc = 0x2ecaccu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x2ecad0: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x2ecad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecad4: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x2ecad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecad8: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2ecad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecadc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2ecadcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2ecae0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ecae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ecae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecae8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2ecae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ecaec: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2ecaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ecaf0:
    // 0x2ecaf0: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2ecaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2ecaf4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ecaf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecaf8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ecafc: 0xc04c018  jal         func_130060
    ctx->pc = 0x2ECAFCu;
    SET_GPR_U32(ctx, 31, 0x2ECB04u);
    ctx->pc = 0x2ECB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECAFCu;
            // 0x2ecb00: 0x7e420020  sq          $v0, 0x20($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB04u; }
        if (ctx->pc != 0x2ECB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB04u; }
        if (ctx->pc != 0x2ECB04u) { return; }
    }
    ctx->pc = 0x2ECB04u;
label_2ecb04:
    // 0x2ecb04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ecb04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ecb08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ecb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ecb0c: 0xc04c018  jal         func_130060
    ctx->pc = 0x2ECB0Cu;
    SET_GPR_U32(ctx, 31, 0x2ECB14u);
    ctx->pc = 0x2ECB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB0Cu;
            // 0x2ecb10: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB14u; }
        if (ctx->pc != 0x2ECB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ECB14u; }
        if (ctx->pc != 0x2ECB14u) { return; }
    }
    ctx->pc = 0x2ECB14u;
label_2ecb14:
    // 0x2ecb14: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x2ecb14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2ecb18: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2ecb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2ecb1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ecb1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb20: 0x0  nop
    ctx->pc = 0x2ecb20u;
    // NOP
    // 0x2ecb24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ecb24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecb28: 0x0  nop
    ctx->pc = 0x2ecb28u;
    // NOP
    // 0x2ecb2c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECB2Cu;
    {
        const bool branch_taken_0x2ecb2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB2Cu;
            // 0x2ecb30: 0x27a30080  addiu       $v1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb2c) {
            ctx->pc = 0x2ECB3Cu;
            goto label_2ecb3c;
        }
    }
    ctx->pc = 0x2ECB34u;
    // 0x2ecb34: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2ecb34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecb38: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x2ecb38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
label_2ecb3c:
    // 0x2ecb3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ecb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ecb40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ecb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ecb44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ecb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ecb48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ecb48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ecb4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ecb4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecb50: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ECB50u;
            // 0x2ecb54: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ECB58u;
}
