#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateTexture__10CWaveTableFP10mgCTexture
// Address: 0x1a21f0 - 0x1a2608
void CreateTexture__10CWaveTableFP10mgCTexture_0x1a21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateTexture__10CWaveTableFP10mgCTexture_0x1a21f0");
#endif

    switch (ctx->pc) {
        case 0x1a2254u: goto label_1a2254;
        case 0x1a225cu: goto label_1a225c;
        case 0x1a226cu: goto label_1a226c;
        case 0x1a2278u: goto label_1a2278;
        case 0x1a2284u: goto label_1a2284;
        case 0x1a2290u: goto label_1a2290;
        case 0x1a229cu: goto label_1a229c;
        case 0x1a22f0u: goto label_1a22f0;
        case 0x1a22fcu: goto label_1a22fc;
        case 0x1a2314u: goto label_1a2314;
        case 0x1a231cu: goto label_1a231c;
        case 0x1a2410u: goto label_1a2410;
        case 0x1a241cu: goto label_1a241c;
        case 0x1a24ecu: goto label_1a24ec;
        case 0x1a24f8u: goto label_1a24f8;
        case 0x1a2518u: goto label_1a2518;
        case 0x1a253cu: goto label_1a253c;
        case 0x1a2548u: goto label_1a2548;
        case 0x1a2554u: goto label_1a2554;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2578u: goto label_1a2578;
        case 0x1a258cu: goto label_1a258c;
        case 0x1a25a8u: goto label_1a25a8;
        case 0x1a25b0u: goto label_1a25b0;
        case 0x1a25c4u: goto label_1a25c4;
        default: break;
    }

    ctx->pc = 0x1a21f0u;

    // 0x1a21f0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x1a21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x1a21f4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1a21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1a21f8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1a21f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1a21fc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1a21fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1a2200: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a2200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2204: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1a2204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1a2208: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a2208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1a220c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a2210: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a2210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a2214: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a2214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a2218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a2218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a221c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1a221cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a2220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2224: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1a2224u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a2228: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1a2228u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a222c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1a222cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1a2230: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1a2230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1a2234: 0x12e000e3  beqz        $s7, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1A2234u;
    {
        const bool branch_taken_0x1a2234 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2234u;
            // 0x1a2238: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2234) {
            ctx->pc = 0x1A25C4u;
            goto label_1a25c4;
        }
    }
    ctx->pc = 0x1A223Cu;
    // 0x1a223c: 0x86e30006  lh          $v1, 0x6($s7)
    ctx->pc = 0x1a223cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1a2240: 0x28630018  slti        $v1, $v1, 0x18
    ctx->pc = 0x1a2240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a2244: 0x146000df  bnez        $v1, . + 4 + (0xDF << 2)
    ctx->pc = 0x1A2244u;
    {
        const bool branch_taken_0x1a2244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2244u;
            // 0x1a2248: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2244) {
            ctx->pc = 0x1A25C4u;
            goto label_1a25c4;
        }
    }
    ctx->pc = 0x1A224Cu;
    // 0x1a224c: 0xc050ef8  jal         func_143BE0
    ctx->pc = 0x1A224Cu;
    SET_GPR_U32(ctx, 31, 0x1A2254u);
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2254u; }
        if (ctx->pc != 0x1A2254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2254u; }
        if (ctx->pc != 0x1A2254u) { return; }
    }
    ctx->pc = 0x1A2254u;
label_1a2254:
    // 0x1a2254: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1A2254u;
    SET_GPR_U32(ctx, 31, 0x1A225Cu);
    ctx->pc = 0x1A2258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2254u;
            // 0x1a2258: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A225Cu; }
        if (ctx->pc != 0x1A225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A225Cu; }
        if (ctx->pc != 0x1A225Cu) { return; }
    }
    ctx->pc = 0x1A225Cu;
label_1a225c:
    // 0x1a225c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a225cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2264: 0xc04d104  jal         func_134410
    ctx->pc = 0x1A2264u;
    SET_GPR_U32(ctx, 31, 0x1A226Cu);
    ctx->pc = 0x1A2268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2264u;
            // 0x1a2268: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A226Cu; }
        if (ctx->pc != 0x1A226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A226Cu; }
        if (ctx->pc != 0x1A226Cu) { return; }
    }
    ctx->pc = 0x1A226Cu;
label_1a226c:
    // 0x1a226c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2270: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x1A2270u;
    SET_GPR_U32(ctx, 31, 0x1A2278u);
    ctx->pc = 0x1A2274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2270u;
            // 0x1a2274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2278u; }
        if (ctx->pc != 0x1A2278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2278u; }
        if (ctx->pc != 0x1A2278u) { return; }
    }
    ctx->pc = 0x1A2278u;
label_1a2278:
    // 0x1a2278: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a227c: 0xc04d424  jal         func_135090
    ctx->pc = 0x1A227Cu;
    SET_GPR_U32(ctx, 31, 0x1A2284u);
    ctx->pc = 0x1A2280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A227Cu;
            // 0x1a2280: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2284u; }
        if (ctx->pc != 0x1A2284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2284u; }
        if (ctx->pc != 0x1A2284u) { return; }
    }
    ctx->pc = 0x1A2284u;
label_1a2284:
    // 0x1a2284: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2288: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1A2288u;
    SET_GPR_U32(ctx, 31, 0x1A2290u);
    ctx->pc = 0x1A228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2288u;
            // 0x1a228c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2290u; }
        if (ctx->pc != 0x1A2290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2290u; }
        if (ctx->pc != 0x1A2290u) { return; }
    }
    ctx->pc = 0x1A2290u;
label_1a2290:
    // 0x1a2290: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2294: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x1A2294u;
    SET_GPR_U32(ctx, 31, 0x1A229Cu);
    ctx->pc = 0x1A2298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2294u;
            // 0x1a2298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A229Cu; }
        if (ctx->pc != 0x1A229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A229Cu; }
        if (ctx->pc != 0x1A229Cu) { return; }
    }
    ctx->pc = 0x1A229Cu;
label_1a229c:
    // 0x1a229c: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1a229cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
    // 0x1a22a0: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x1a22a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x1a22a4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1a22a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a22a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a22ac: 0xc7818798  lwc1        $f1, -0x7868($gp)
    ctx->pc = 0x1a22acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a22b0: 0x86e20004  lh          $v0, 0x4($s7)
    ctx->pc = 0x1a22b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1a22b4: 0xc780879c  lwc1        $f0, -0x7864($gp)
    ctx->pc = 0x1a22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a22b8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1a22b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a22bc: 0x0  nop
    ctx->pc = 0x1a22bcu;
    // NOP
    // 0x1a22c0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1a22c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1a22c4: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x1a22c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x1a22c8: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x1a22c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x1a22cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a22ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a22d0: 0x0  nop
    ctx->pc = 0x1a22d0u;
    // NOP
    // 0x1a22d4: 0x46041d03  div.s       $f20, $f3, $f4
    ctx->pc = 0x1a22d4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x1a22d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a22d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a22dc: 0x46041543  div.s       $f21, $f2, $f4
    ctx->pc = 0x1a22dcu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x1a22e0: 0x0  nop
    ctx->pc = 0x1a22e0u;
    // NOP
    // 0x1a22e4: 0x46800da0  cvt.s.w     $f22, $f1
    ctx->pc = 0x1a22e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
    // 0x1a22e8: 0xc04d1b4  jal         func_1346D0
    ctx->pc = 0x1A22E8u;
    SET_GPR_U32(ctx, 31, 0x1A22F0u);
    ctx->pc = 0x1A22ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22E8u;
            // 0x1a22ec: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1346D0u;
    if (runtime->hasFunction(0x1346D0u)) {
        auto targetFn = runtime->lookupFunction(0x1346D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22F0u; }
        if (ctx->pc != 0x1A22F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin2__11mgCDrawPrimFv_0x1346d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22F0u; }
        if (ctx->pc != 0x1A22F0u) { return; }
    }
    ctx->pc = 0x1A22F0u;
label_1a22f0:
    // 0x1a22f0: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1a22f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1a22f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a22f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a22f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a22f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a22fc:
    // 0x1a22fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a2300: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2304: 0x24064141  addiu       $a2, $zero, 0x4141
    ctx->pc = 0x1a2304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16705));
    // 0x1a2308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a230c: 0xc04d224  jal         func_134890
    ctx->pc = 0x1A230Cu;
    SET_GPR_U32(ctx, 31, 0x1A2314u);
    ctx->pc = 0x1A2310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A230Cu;
            // 0x1a2310: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134890u;
    if (runtime->hasFunction(0x134890u)) {
        auto targetFn = runtime->lookupFunction(0x134890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2314u; }
        if (ctx->pc != 0x1A2314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim2__11mgCDrawPrimFiUiUii_0x134890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2314u; }
        if (ctx->pc != 0x1A2314u) { return; }
    }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x1a2314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1a2318: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a2318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a231c:
    // 0x1a231c: 0x0  nop
    ctx->pc = 0x1a231cu;
    // NOP
    // 0x1a2320: 0x27b601c4  addiu       $s6, $sp, 0x1C4
    ctx->pc = 0x1a2320u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x1a2324: 0x4614c802  mul.s       $f0, $f25, $f20
    ctx->pc = 0x1a2324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
    // 0x1a2328: 0x2a420017  slti        $v0, $s2, 0x17
    ctx->pc = 0x1a2328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a232c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a232cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2330: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x1a2330u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x1a2334: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x1a2334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x1a2338: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x1a2338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x1a233c: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x1a233cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x1a2340: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2340u;
    {
        const bool branch_taken_0x1a2340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2340u;
            // 0x1a2344: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2340) {
            ctx->pc = 0x1A234Cu;
            goto label_1a234c;
        }
    }
    ctx->pc = 0x1A2348u;
    // 0x1a2348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a234c:
    // 0x1a234c: 0x0  nop
    ctx->pc = 0x1a234cu;
    // NOP
    // 0x1a2350: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1a2350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a2354: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a2354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a2358: 0x8e051200  lw          $a1, 0x1200($s0)
    ctx->pc = 0x1a2358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
    // 0x1a235c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a235cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2360: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x1a2360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1a2364: 0x6a880  sll         $s5, $a2, 2
    ctx->pc = 0x1a2364u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a2368: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a2368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1a236c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1a236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a2370: 0x3c024407  lui         $v0, 0x4407
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17415 << 16));
    // 0x1a2374: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a2374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2378: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1a2378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1a237c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a237cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2380: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a2380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1a2384: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a2384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a2388: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a238c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a2390: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1a2394: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a2394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a2398: 0x1010  mfhi        $v0
    ctx->pc = 0x1a2398u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1a239c: 0x2a080  sll         $s4, $v0, 2
    ctx->pc = 0x1a239cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a23a0: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1a23a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1a23a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a23a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1a23a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1a23ac: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1a23acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1a23b0: 0x46002040  add.s       $f1, $f4, $f0
    ctx->pc = 0x1a23b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1a23b4: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1a23b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23b8: 0x0  nop
    ctx->pc = 0x1a23b8u;
    // NOP
    // 0x1a23bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A23BCu;
    {
        const bool branch_taken_0x1a23bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a23bc) {
            ctx->pc = 0x1A23C8u;
            goto label_1a23c8;
        }
    }
    ctx->pc = 0x1A23C4u;
    // 0x1a23c4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1a23c4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_1a23c8:
    // 0x1a23c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a23c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a23cc: 0x0  nop
    ctx->pc = 0x1a23ccu;
    // NOP
    // 0x1a23d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a23d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23d4: 0x0  nop
    ctx->pc = 0x1a23d4u;
    // NOP
    // 0x1a23d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A23D8u;
    {
        const bool branch_taken_0x1a23d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a23d8) {
            ctx->pc = 0x1A23E4u;
            goto label_1a23e4;
        }
    }
    ctx->pc = 0x1A23E0u;
    // 0x1a23e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a23e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a23e4:
    // 0x1a23e4: 0x0  nop
    ctx->pc = 0x1a23e4u;
    // NOP
    // 0x1a23e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a23ec: 0x24426650  addiu       $v0, $v0, 0x6650
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
    // 0x1a23f0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1a23f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1a23f4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a23f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a23f8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a23f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a23fc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1a23fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1a2400: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x1a2400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1a2404: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x1a2404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x1a2408: 0xc04d2a8  jal         func_134AA0
    ctx->pc = 0x1A2408u;
    SET_GPR_U32(ctx, 31, 0x1A2410u);
    ctx->pc = 0x1A240Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2408u;
            // 0x1a240c: 0xe7a101d8  swc1        $f1, 0x1D8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AA0u;
    if (runtime->hasFunction(0x134AA0u)) {
        auto targetFn = runtime->lookupFunction(0x134AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2410u; }
        if (ctx->pc != 0x1A2410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data0__11mgCDrawPrimFPf_0x134aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2410u; }
        if (ctx->pc != 0x1A2410u) { return; }
    }
    ctx->pc = 0x1A2410u;
label_1a2410:
    // 0x1a2410: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2414: 0xc04d2b0  jal         func_134AC0
    ctx->pc = 0x1A2414u;
    SET_GPR_U32(ctx, 31, 0x1A241Cu);
    ctx->pc = 0x1A2418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2414u;
            // 0x1a2418: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AC0u;
    if (runtime->hasFunction(0x134AC0u)) {
        auto targetFn = runtime->lookupFunction(0x134AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A241Cu; }
        if (ctx->pc != 0x1A241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data4__11mgCDrawPrimFPf_0x134ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A241Cu; }
        if (ctx->pc != 0x1A241Cu) { return; }
    }
    ctx->pc = 0x1A241Cu;
label_1a241c:
    // 0x1a241c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1a241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2420: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a2420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a2424: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a2424u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1a2428: 0x8e041200  lw          $a0, 0x1200($s0)
    ctx->pc = 0x1a2428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
    // 0x1a242c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a242cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2430: 0x3c024407  lui         $v0, 0x4407
    ctx->pc = 0x1a2430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17415 << 16));
    // 0x1a2434: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1a2434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1a2438: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a243c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1a243cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a2440: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1a2440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a2444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a2444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a2448: 0x2010  mfhi        $a0
    ctx->pc = 0x1a2448u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1a244c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1a2450: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a2454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2458: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a245c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1a245cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a2460: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a2464: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1a2468: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a2468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a246c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1a246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a2470: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a2470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a2474: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1a2474u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1a2478: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a2478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a247c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a247cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1a2480: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2484: 0x0  nop
    ctx->pc = 0x1a2484u;
    // NOP
    // 0x1a2488: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A2488u;
    {
        const bool branch_taken_0x1a2488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2488) {
            ctx->pc = 0x1A2494u;
            goto label_1a2494;
        }
    }
    ctx->pc = 0x1A2490u;
    // 0x1a2490: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a2490u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a2494:
    // 0x1a2494: 0x0  nop
    ctx->pc = 0x1a2494u;
    // NOP
    // 0x1a2498: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1a2498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1a249c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a249cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a24a0: 0x0  nop
    ctx->pc = 0x1a24a0u;
    // NOP
    // 0x1a24a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a24a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a24a8: 0x0  nop
    ctx->pc = 0x1a24a8u;
    // NOP
    // 0x1a24ac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1A24ACu;
    {
        const bool branch_taken_0x1a24ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a24ac) {
            ctx->pc = 0x1A24B8u;
            goto label_1a24b8;
        }
    }
    ctx->pc = 0x1A24B4u;
    // 0x1a24b4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a24b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1a24b8:
    // 0x1a24b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a24bc: 0x24426660  addiu       $v0, $v0, 0x6660
    ctx->pc = 0x1a24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26208));
    // 0x1a24c0: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1a24c4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1a24c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a24c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a24cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1a24ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1a24d0: 0xe7a101e0  swc1        $f1, 0x1E0($sp)
    ctx->pc = 0x1a24d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x1a24d4: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x1a24d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x1a24d8: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1a24d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1a24dc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1a24dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a24e0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1a24e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1a24e4: 0xc04d2a8  jal         func_134AA0
    ctx->pc = 0x1A24E4u;
    SET_GPR_U32(ctx, 31, 0x1A24ECu);
    ctx->pc = 0x1A24E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24E4u;
            // 0x1a24e8: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AA0u;
    if (runtime->hasFunction(0x134AA0u)) {
        auto targetFn = runtime->lookupFunction(0x134AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24ECu; }
        if (ctx->pc != 0x1A24ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data0__11mgCDrawPrimFPf_0x134aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24ECu; }
        if (ctx->pc != 0x1A24ECu) { return; }
    }
    ctx->pc = 0x1A24ECu;
label_1a24ec:
    // 0x1a24ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a24f0: 0xc04d2b0  jal         func_134AC0
    ctx->pc = 0x1A24F0u;
    SET_GPR_U32(ctx, 31, 0x1A24F8u);
    ctx->pc = 0x1A24F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A24F0u;
            // 0x1a24f4: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134AC0u;
    if (runtime->hasFunction(0x134AC0u)) {
        auto targetFn = runtime->lookupFunction(0x134AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24F8u; }
        if (ctx->pc != 0x1A24F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Data4__11mgCDrawPrimFPf_0x134ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A24F8u; }
        if (ctx->pc != 0x1A24F8u) { return; }
    }
    ctx->pc = 0x1A24F8u;
label_1a24f8:
    // 0x1a24f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a24fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a24fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a2500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a2500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2504: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x1a2504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1a2508: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x1A2508u;
    {
        const bool branch_taken_0x1a2508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A250Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2508u;
            // 0x1a250c: 0x4600ce40  add.s       $f25, $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2508) {
            ctx->pc = 0x1A231Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a231c;
        }
    }
    ctx->pc = 0x1A2510u;
    // 0x1a2510: 0xc04d250  jal         func_134940
    ctx->pc = 0x1A2510u;
    SET_GPR_U32(ctx, 31, 0x1A2518u);
    ctx->pc = 0x1A2514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2510u;
            // 0x1a2514: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134940u;
    if (runtime->hasFunction(0x134940u)) {
        auto targetFn = runtime->lookupFunction(0x134940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2518u; }
        if (ctx->pc != 0x1A2518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim2__11mgCDrawPrimFv_0x134940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2518u; }
        if (ctx->pc != 0x1A2518u) { return; }
    }
    ctx->pc = 0x1A2518u;
label_1a2518:
    // 0x1a2518: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a2518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a251c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a251cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a2520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a2520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a2524: 0x2a220017  slti        $v0, $s1, 0x17
    ctx->pc = 0x1a2524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a2528: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1a2528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1a252c: 0x1440ff73  bnez        $v0, . + 4 + (-0x8D << 2)
    ctx->pc = 0x1A252Cu;
    {
        const bool branch_taken_0x1a252c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A252Cu;
            // 0x1a2530: 0x4600c600  add.s       $f24, $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a252c) {
            ctx->pc = 0x1A22FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a22fc;
        }
    }
    ctx->pc = 0x1A2534u;
    // 0x1a2534: 0xc04d288  jal         func_134A20
    ctx->pc = 0x1A2534u;
    SET_GPR_U32(ctx, 31, 0x1A253Cu);
    ctx->pc = 0x1A2538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2534u;
            // 0x1a2538: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A20u;
    if (runtime->hasFunction(0x134A20u)) {
        auto targetFn = runtime->lookupFunction(0x134A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A253Cu; }
        if (ctx->pc != 0x1A253Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End2__11mgCDrawPrimFv_0x134a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A253Cu; }
        if (ctx->pc != 0x1A253Cu) { return; }
    }
    ctx->pc = 0x1A253Cu;
label_1a253c:
    // 0x1a253c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2540: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x1A2540u;
    SET_GPR_U32(ctx, 31, 0x1A2548u);
    ctx->pc = 0x1A2544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2540u;
            // 0x1a2544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2548u; }
        if (ctx->pc != 0x1A2548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2548u; }
        if (ctx->pc != 0x1A2548u) { return; }
    }
    ctx->pc = 0x1A2548u;
label_1a2548:
    // 0x1a2548: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a254c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x1A254Cu;
    SET_GPR_U32(ctx, 31, 0x1A2554u);
    ctx->pc = 0x1A2550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A254Cu;
            // 0x1a2550: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2554u; }
        if (ctx->pc != 0x1A2554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2554u; }
        if (ctx->pc != 0x1A2554u) { return; }
    }
    ctx->pc = 0x1A2554u;
label_1a2554:
    // 0x1a2554: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2558: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1A2558u;
    SET_GPR_U32(ctx, 31, 0x1A2560u);
    ctx->pc = 0x1A255Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2558u;
            // 0x1a255c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2560u; }
        if (ctx->pc != 0x1A2560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2560u; }
        if (ctx->pc != 0x1A2560u) { return; }
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a2564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a256c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a256cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2570: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1A2570u;
    SET_GPR_U32(ctx, 31, 0x1A2578u);
    ctx->pc = 0x1A2574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2570u;
            // 0x1a2574: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2578u; }
        if (ctx->pc != 0x1A2578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2578u; }
        if (ctx->pc != 0x1A2578u) { return; }
    }
    ctx->pc = 0x1A2578u;
label_1a2578:
    // 0x1a2578: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1a2578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a257c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2580: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a2580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2584: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A2584u;
    SET_GPR_U32(ctx, 31, 0x1A258Cu);
    ctx->pc = 0x1A2588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2584u;
            // 0x1a2588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A258Cu; }
        if (ctx->pc != 0x1A258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A258Cu; }
        if (ctx->pc != 0x1A258Cu) { return; }
    }
    ctx->pc = 0x1A258Cu;
label_1a258c:
    // 0x1a258c: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x1a258cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x1a2590: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1a2590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a2594: 0x86e20004  lh          $v0, 0x4($s7)
    ctx->pc = 0x1a2594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1a2598: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a259c: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1a259cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a25a0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1A25A0u;
    SET_GPR_U32(ctx, 31, 0x1A25A8u);
    ctx->pc = 0x1A25A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25A0u;
            // 0x1a25a4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25A8u; }
        if (ctx->pc != 0x1A25A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25A8u; }
        if (ctx->pc != 0x1A25A8u) { return; }
    }
    ctx->pc = 0x1A25A8u;
label_1a25a8:
    // 0x1a25a8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1A25A8u;
    SET_GPR_U32(ctx, 31, 0x1A25B0u);
    ctx->pc = 0x1A25ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25A8u;
            // 0x1a25ac: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B0u; }
        if (ctx->pc != 0x1A25B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25B0u; }
        if (ctx->pc != 0x1A25B0u) { return; }
    }
    ctx->pc = 0x1A25B0u;
label_1a25b0:
    // 0x1a25b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a25b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a25b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1a25b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a25bc: 0xc050f18  jal         func_143C60
    ctx->pc = 0x1A25BCu;
    SET_GPR_U32(ctx, 31, 0x1A25C4u);
    ctx->pc = 0x1A25C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A25BCu;
            // 0x1a25c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25C4u; }
        if (ctx->pc != 0x1A25C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A25C4u; }
        if (ctx->pc != 0x1A25C4u) { return; }
    }
    ctx->pc = 0x1A25C4u;
label_1a25c4:
    // 0x1a25c4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1a25c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a25c8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1a25c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1a25cc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1a25ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a25d0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1a25d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1a25d4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1a25d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1a25d8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1a25d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1a25dc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1a25dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a25e0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1a25e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a25e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1a25e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a25e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1a25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a25ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a25ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a25f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a25f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a25f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a25f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a25f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a25fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a25fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2600: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2600u;
            // 0x1a2604: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2608u;
}
