#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlaceParts__8CEditMapFPf
// Address: 0x1b2670 - 0x1b2738
void GetePlaceParts__8CEditMapFPf_0x1b2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlaceParts__8CEditMapFPf_0x1b2670");
#endif

    switch (ctx->pc) {
        case 0x1b2710u: goto label_1b2710;
        case 0x1b2724u: goto label_1b2724;
        default: break;
    }

    ctx->pc = 0x1b2670u;

    // 0x1b2670: 0x27bdf7b0  addiu       $sp, $sp, -0x850
    ctx->pc = 0x1b2670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965168));
    // 0x1b2674: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1b2674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1b2678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b267c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1b267cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b2680: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b2680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b2684: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b2684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b2688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b2688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b268c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b268cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2690: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1b2690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b2694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b2694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2698: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1b2698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b269c: 0x7d030000  sq          $v1, 0x0($t0)
    ctx->pc = 0x1b269cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 3));
    // 0x1b26a0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1b26a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b26a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1b26a8: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x1b26a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b26ac: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x1b26acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b26b0: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x1b26b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b26b4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1b26b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b26b8: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1b26b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b26bc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1b26bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b26c0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1b26c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b26c4: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x1b26c4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1b26c8: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x1b26c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b26cc: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x1b26ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b26d0: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1b26d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1b26d4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x1b26d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b26d8: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x1b26d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b26dc: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1b26dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1b26e0: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1b26e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b26e4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x1b26e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b26e8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b26e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1b26ec: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1b26ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1b26f0: 0xc4a2000c  lwc1        $f2, 0xC($a1)
    ctx->pc = 0x1b26f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b26f4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b26f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1b26f8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1b26f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1b26fc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1b26fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2700: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b2704: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1b2704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2708: 0xc06c934  jal         func_1B24D0
    ctx->pc = 0x1B2708u;
    SET_GPR_U32(ctx, 31, 0x1B2710u);
    ctx->pc = 0x1B270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2708u;
            // 0x1b270c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B24D0u;
    if (runtime->hasFunction(0x1B24D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B24D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2710u; }
        if (ctx->pc != 0x1B2710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNearParts__8CEditMapFR9mgVu0FBOXPP10CEditPartsi_0x1b24d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2710u; }
        if (ctx->pc != 0x1B2710u) { return; }
    }
    ctx->pc = 0x1B2710u;
label_1b2710:
    // 0x1b2710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2714: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2718: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b271c: 0xc06c9d0  jal         func_1B2740
    ctx->pc = 0x1B271Cu;
    SET_GPR_U32(ctx, 31, 0x1B2724u);
    ctx->pc = 0x1B2720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B271Cu;
            // 0x1b2720: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2740u;
    if (runtime->hasFunction(0x1B2740u)) {
        auto targetFn = runtime->lookupFunction(0x1B2740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2724u; }
        if (ctx->pc != 0x1B2724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFPfPP10CEditPartsi_0x1b2740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2724u; }
        if (ctx->pc != 0x1B2724u) { return; }
    }
    ctx->pc = 0x1B2724u;
label_1b2724:
    // 0x1b2724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b2728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b272c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b272cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2730: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2730u;
            // 0x1b2734: 0x27bd0850  addiu       $sp, $sp, 0x850 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2738u;
}
