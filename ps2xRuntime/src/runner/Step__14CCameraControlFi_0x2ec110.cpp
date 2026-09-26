#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CCameraControlFi
// Address: 0x2ec110 - 0x2ec1e8
void Step__14CCameraControlFi_0x2ec110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CCameraControlFi_0x2ec110");
#endif

    switch (ctx->pc) {
        case 0x2ec138u: goto label_2ec138;
        case 0x2ec15cu: goto label_2ec15c;
        case 0x2ec168u: goto label_2ec168;
        case 0x2ec178u: goto label_2ec178;
        case 0x2ec180u: goto label_2ec180;
        case 0x2ec1a8u: goto label_2ec1a8;
        case 0x2ec1bcu: goto label_2ec1bc;
        case 0x2ec1d0u: goto label_2ec1d0;
        default: break;
    }

    ctx->pc = 0x2ec110u;

    // 0x2ec110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ec110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ec114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ec114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ec118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ec118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ec11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec120: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ec120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec124: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2ec128: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC128u;
    {
        const bool branch_taken_0x2ec128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC128u;
            // 0x2ec12c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec128) {
            ctx->pc = 0x2EC140u;
            goto label_2ec140;
        }
    }
    ctx->pc = 0x2EC130u;
    // 0x2ec130: 0xc04c5d0  jal         func_131740
    ctx->pc = 0x2EC130u;
    SET_GPR_U32(ctx, 31, 0x2EC138u);
    ctx->pc = 0x131740u;
    if (runtime->hasFunction(0x131740u)) {
        auto targetFn = runtime->lookupFunction(0x131740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC138u; }
        if (ctx->pc != 0x2EC138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15mgCCameraFollowFi_0x131740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC138u; }
        if (ctx->pc != 0x2EC138u) { return; }
    }
    ctx->pc = 0x2EC138u;
label_2ec138:
    // 0x2ec138: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2EC138u;
    {
        const bool branch_taken_0x2ec138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC138u;
            // 0x2ec13c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec138) {
            ctx->pc = 0x2EC1D8u;
            goto label_2ec1d8;
        }
    }
    ctx->pc = 0x2EC140u;
label_2ec140:
    // 0x2ec140: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC140u;
    {
        const bool branch_taken_0x2ec140 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EC144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC140u;
            // 0x2ec144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec140) {
            ctx->pc = 0x2EC160u;
            goto label_2ec160;
        }
    }
    ctx->pc = 0x2EC148u;
    // 0x2ec148: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2ec148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2ec14c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC14Cu;
    {
        const bool branch_taken_0x2ec14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec14c) {
            ctx->pc = 0x2EC15Cu;
            goto label_2ec15c;
        }
    }
    ctx->pc = 0x2EC154u;
    // 0x2ec154: 0xc0bb1e4  jal         func_2EC790
    ctx->pc = 0x2EC154u;
    SET_GPR_U32(ctx, 31, 0x2EC15Cu);
    ctx->pc = 0x2EC158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC154u;
            // 0x2ec158: 0xc62c00cc  lwc1        $f12, 0xCC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC790u;
    if (runtime->hasFunction(0x2EC790u)) {
        auto targetFn = runtime->lookupFunction(0x2EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC15Cu; }
        if (ctx->pc != 0x2EC15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotate__14CCameraControlFf_0x2ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC15Cu; }
        if (ctx->pc != 0x2EC15Cu) { return; }
    }
    ctx->pc = 0x2EC15Cu;
label_2ec15c:
    // 0x2ec15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ec15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ec160:
    // 0x2ec160: 0xc04c444  jal         func_131110
    ctx->pc = 0x2EC160u;
    SET_GPR_U32(ctx, 31, 0x2EC168u);
    ctx->pc = 0x2EC164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC160u;
            // 0x2ec164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131110u;
    if (runtime->hasFunction(0x131110u)) {
        auto targetFn = runtime->lookupFunction(0x131110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC168u; }
        if (ctx->pc != 0x2EC168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9mgCCameraFi_0x131110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC168u; }
        if (ctx->pc != 0x2EC168u) { return; }
    }
    ctx->pc = 0x2EC168u;
label_2ec168:
    // 0x2ec168: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ec168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec16c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x2ec16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2ec170: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC170u;
    SET_GPR_U32(ctx, 31, 0x2EC178u);
    ctx->pc = 0x2EC174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC170u;
            // 0x2ec174: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC178u; }
        if (ctx->pc != 0x2EC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC178u; }
        if (ctx->pc != 0x2EC178u) { return; }
    }
    ctx->pc = 0x2EC178u;
label_2ec178:
    // 0x2ec178: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2EC178u;
    SET_GPR_U32(ctx, 31, 0x2EC180u);
    ctx->pc = 0x2EC17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC178u;
            // 0x2ec17c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC180u; }
        if (ctx->pc != 0x2EC180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC180u; }
        if (ctx->pc != 0x2EC180u) { return; }
    }
    ctx->pc = 0x2EC180u;
label_2ec180:
    // 0x2ec180: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x2ec180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x2ec184: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x2ec184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2ec188: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ec188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec18c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ec18cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ec190: 0xe6200094  swc1        $f0, 0x94($s1)
    ctx->pc = 0x2ec190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 148), bits); }
    // 0x2ec194: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2ec194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec198: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ec198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec19c: 0x46000b07  neg.s       $f12, $f1
    ctx->pc = 0x2ec19cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[1]);
    // 0x2ec1a0: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2EC1A0u;
    SET_GPR_U32(ctx, 31, 0x2EC1A8u);
    ctx->pc = 0x2EC1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC1A0u;
            // 0x2ec1a4: 0x46000347  neg.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1A8u; }
        if (ctx->pc != 0x2EC1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1A8u; }
        if (ctx->pc != 0x2EC1A8u) { return; }
    }
    ctx->pc = 0x2EC1A8u;
label_2ec1a8:
    // 0x2ec1a8: 0xe6200098  swc1        $f0, 0x98($s1)
    ctx->pc = 0x2ec1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 152), bits); }
    // 0x2ec1ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ec1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ec1b0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2ec1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ec1b4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2EC1B4u;
    SET_GPR_U32(ctx, 31, 0x2EC1BCu);
    ctx->pc = 0x2EC1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC1B4u;
            // 0x2ec1b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1BCu; }
        if (ctx->pc != 0x2EC1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1BCu; }
        if (ctx->pc != 0x2EC1BCu) { return; }
    }
    ctx->pc = 0x2EC1BCu;
label_2ec1bc:
    // 0x2ec1bc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ec1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec1c0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2ec1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec1c4: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x2ec1c4u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x2ec1c8: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2EC1C8u;
    SET_GPR_U32(ctx, 31, 0x2EC1D0u);
    ctx->pc = 0x2EC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC1C8u;
            // 0x2ec1cc: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1D0u; }
        if (ctx->pc != 0x2EC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC1D0u; }
        if (ctx->pc != 0x2EC1D0u) { return; }
    }
    ctx->pc = 0x2EC1D0u;
label_2ec1d0:
    // 0x2ec1d0: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x2ec1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x2ec1d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ec1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ec1d8:
    // 0x2ec1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ec1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec1dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec1dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC1E0u;
            // 0x2ec1e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC1E8u;
}
