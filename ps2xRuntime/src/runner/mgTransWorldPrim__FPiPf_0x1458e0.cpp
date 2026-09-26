#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransWorldPrim__FPiPf
// Address: 0x1458e0 - 0x1459ac
void mgTransWorldPrim__FPiPf_0x1458e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransWorldPrim__FPiPf_0x1458e0");
#endif

    switch (ctx->pc) {
        case 0x14590cu: goto label_14590c;
        case 0x145960u: goto label_145960;
        case 0x145978u: goto label_145978;
        case 0x145984u: goto label_145984;
        case 0x145994u: goto label_145994;
        default: break;
    }

    ctx->pc = 0x1458e0u;

    // 0x1458e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1458e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1458e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1458e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1458e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1458ec: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1458ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1458f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1458f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1458f4: 0x24a50ed0  addiu       $a1, $a1, 0xED0
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3792));
    // 0x1458f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1458f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1458fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1458fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145900: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145904: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x145904u;
    SET_GPR_U32(ctx, 31, 0x14590Cu);
    ctx->pc = 0x145908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145904u;
            // 0x145908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14590Cu; }
        if (ctx->pc != 0x14590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14590Cu; }
        if (ctx->pc != 0x14590Cu) { return; }
    }
    ctx->pc = 0x14590Cu;
label_14590c:
    // 0x14590c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x14590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145910: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145914: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x145914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145918: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x145918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14591c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x14591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145920: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x145920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x145924: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145928: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x145928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14592c: 0x0  nop
    ctx->pc = 0x14592cu;
    // NOP
    // 0x145930: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x145930u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x145934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145938: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x145938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14593c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145944: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x145944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x145948: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x145948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14594c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14594cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145950: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x145950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x145954: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x145954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145958: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145958u;
    SET_GPR_U32(ctx, 31, 0x145960u);
    ctx->pc = 0x14595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145958u;
            // 0x14595c: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145960u; }
        if (ctx->pc != 0x145960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145960u; }
        if (ctx->pc != 0x145960u) { return; }
    }
    ctx->pc = 0x145960u;
label_145960:
    // 0x145960: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x145960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x145964: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145968: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x14596c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14596cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145970: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145970u;
    SET_GPR_U32(ctx, 31, 0x145978u);
    ctx->pc = 0x145974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145970u;
            // 0x145974: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145978u; }
        if (ctx->pc != 0x145978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145978u; }
        if (ctx->pc != 0x145978u) { return; }
    }
    ctx->pc = 0x145978u;
label_145978:
    // 0x145978: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x145978u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x14597c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x14597Cu;
    SET_GPR_U32(ctx, 31, 0x145984u);
    ctx->pc = 0x145980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14597Cu;
            // 0x145980: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145984u; }
        if (ctx->pc != 0x145984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145984u; }
        if (ctx->pc != 0x145984u) { return; }
    }
    ctx->pc = 0x145984u;
label_145984:
    // 0x145984: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x145984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x145988: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14598c: 0xc05160c  jal         func_145830
    ctx->pc = 0x14598Cu;
    SET_GPR_U32(ctx, 31, 0x145994u);
    ctx->pc = 0x145990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14598Cu;
            // 0x145990: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145830u;
    if (runtime->hasFunction(0x145830u)) {
        auto targetFn = runtime->lookupFunction(0x145830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145994u; }
        if (ctx->pc != 0x145994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        prim_clip_check__FPf_0x145830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145994u; }
        if (ctx->pc != 0x145994u) { return; }
    }
    ctx->pc = 0x145994u;
label_145994:
    // 0x145994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145998: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14599c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14599cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1459a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1459a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1459a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1459A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1459A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1459A4u;
            // 0x1459a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1459ACu;
}
