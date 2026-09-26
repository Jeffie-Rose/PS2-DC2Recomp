#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFuncPLight__4CMapFPfP15CFuncPointCheck
// Address: 0x15e0b0 - 0x15e1b4
void SetFuncPLight__4CMapFPfP15CFuncPointCheck_0x15e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFuncPLight__4CMapFPfP15CFuncPointCheck_0x15e0b0");
#endif

    switch (ctx->pc) {
        case 0x15e100u: goto label_15e100;
        case 0x15e128u: goto label_15e128;
        case 0x15e13cu: goto label_15e13c;
        case 0x15e154u: goto label_15e154;
        case 0x15e164u: goto label_15e164;
        case 0x15e180u: goto label_15e180;
        default: break;
    }

    ctx->pc = 0x15e0b0u;

    // 0x15e0b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15e0b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x15e0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15e0b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15e0bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15e0c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e0c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e0d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15e0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0d4: 0x8382890c  lb          $v0, -0x76F4($gp)
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936844)));
    // 0x15e0d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E0D8u;
    {
        const bool branch_taken_0x15e0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0D8u;
            // 0x15e0dc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0d8) {
            ctx->pc = 0x15E108u;
            goto label_15e108;
        }
    }
    ctx->pc = 0x15E0E0u;
    // 0x15e0e0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x15e0e4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15e0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x15e0e8: 0x2484f310  addiu       $a0, $a0, -0xCF0
    ctx->pc = 0x15e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963984));
    // 0x15e0ec: 0x24a5e1c0  addiu       $a1, $a1, -0x1E40
    ctx->pc = 0x15e0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959552));
    // 0x15e0f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0f4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x15e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15e0f8: 0xc040070  jal         func_1001C0
    ctx->pc = 0x15E0F8u;
    SET_GPR_U32(ctx, 31, 0x15E100u);
    ctx->pc = 0x15E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0F8u;
            // 0x15e0fc: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001C0u;
    if (runtime->hasFunction(0x1001C0u)) {
        auto targetFn = runtime->lookupFunction(0x1001C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E100u; }
        if (ctx->pc != 0x15E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_array_0x1001c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E100u; }
        if (ctx->pc != 0x15E100u) { return; }
    }
    ctx->pc = 0x15E100u;
label_15e100:
    // 0x15e100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e104: 0xa382890c  sb          $v0, -0x76F4($gp)
    ctx->pc = 0x15e104u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936844), (uint8_t)GPR_U32(ctx, 2));
label_15e108:
    // 0x15e108: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x15e10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e110: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x15e110u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e114: 0x26640cb0  addiu       $a0, $s3, 0xCB0
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3248));
    // 0x15e118: 0x24c6f310  addiu       $a2, $a2, -0xCF0
    ctx->pc = 0x15e118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963984));
    // 0x15e11c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x15e11cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e120: 0xc0a7668  jal         func_29D9A0
    ctx->pc = 0x15E120u;
    SET_GPR_U32(ctx, 31, 0x15E128u);
    ctx->pc = 0x15E124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E120u;
            // 0x15e124: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D9A0u;
    if (runtime->hasFunction(0x29D9A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E128u; }
        if (ctx->pc != 0x15E128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLight__14CFuncPointMngrFPfP10CFuncPointiP15CFuncPointChecki_0x29d9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E128u; }
        if (ctx->pc != 0x15E128u) { return; }
    }
    ctx->pc = 0x15E128u;
label_15e128:
    // 0x15e128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15e128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e12c: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15e12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15e130: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x15E130u;
    {
        const bool branch_taken_0x15e130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E130u;
            // 0x15e134: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e130) {
            ctx->pc = 0x15E190u;
            goto label_15e190;
        }
    }
    ctx->pc = 0x15E138u;
    // 0x15e138: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e13c:
    // 0x15e13c: 0x8e650ce8  lw          $a1, 0xCE8($s3)
    ctx->pc = 0x15e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3304)));
    // 0x15e140: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x15e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x15e144: 0x2442f310  addiu       $v0, $v0, -0xCF0
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963984));
    // 0x15e148: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x15e148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x15e14c: 0xc0a7b8c  jal         func_29EE30
    ctx->pc = 0x15E14Cu;
    SET_GPR_U32(ctx, 31, 0x15E154u);
    ctx->pc = 0x15E150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E14Cu;
            // 0x15e150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EE30u;
    if (runtime->hasFunction(0x29EE30u)) {
        auto targetFn = runtime->lookupFunction(0x29EE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E154u; }
        if (ctx->pc != 0x15E154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightAnimeWeight__FP10CFuncPointi_0x29ee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E154u; }
        if (ctx->pc != 0x15E154u) { return; }
    }
    ctx->pc = 0x15E154u;
label_15e154:
    // 0x15e154: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x15e154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x15e158: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e15c: 0xc041c4a  jal         func_107128
    ctx->pc = 0x15E15Cu;
    SET_GPR_U32(ctx, 31, 0x15E164u);
    ctx->pc = 0x15E160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E15Cu;
            // 0x15e160: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E164u; }
        if (ctx->pc != 0x15E164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E164u; }
        if (ctx->pc != 0x15E164u) { return; }
    }
    ctx->pc = 0x15E164u;
label_15e164:
    // 0x15e164: 0xc68c0030  lwc1        $f12, 0x30($s4)
    ctx->pc = 0x15e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e168: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e16c: 0xc68d0034  lwc1        $f13, 0x34($s4)
    ctx->pc = 0x15e16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15e170: 0x26850180  addiu       $a1, $s4, 0x180
    ctx->pc = 0x15e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 384));
    // 0x15e174: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x15e174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15e178: 0xc050df8  jal         func_1437E0
    ctx->pc = 0x15E178u;
    SET_GPR_U32(ctx, 31, 0x15E180u);
    ctx->pc = 0x15E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E178u;
            // 0x15e17c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437E0u;
    if (runtime->hasFunction(0x1437E0u)) {
        auto targetFn = runtime->lookupFunction(0x1437E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E180u; }
        if (ctx->pc != 0x15E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiPfPfff_0x1437e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E180u; }
        if (ctx->pc != 0x15E180u) { return; }
    }
    ctx->pc = 0x15E180u;
label_15e180:
    // 0x15e180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15e184: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x15e184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15e188: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15E188u;
    {
        const bool branch_taken_0x15e188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E188u;
            // 0x15e18c: 0x265201c0  addiu       $s2, $s2, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e188) {
            ctx->pc = 0x15E13Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e13c;
        }
    }
    ctx->pc = 0x15E190u;
label_15e190:
    // 0x15e190: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15e190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e194: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15e194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e198: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e198u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e19c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e19cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e1a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e1a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e1a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e1a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e1a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e1a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x15E1ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1ACu;
            // 0x15e1b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E1B4u;
}
