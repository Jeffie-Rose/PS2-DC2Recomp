#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi
// Address: 0x2d7430 - 0x2d7820
void DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawVersatileWin_1__FP11mgCDrawPrim4RECTP10RGBAQ_TYPEi_0x2d7430");
#endif

    switch (ctx->pc) {
        case 0x2d7498u: goto label_2d7498;
        case 0x2d74f0u: goto label_2d74f0;
        case 0x2d7508u: goto label_2d7508;
        case 0x2d7524u: goto label_2d7524;
        case 0x2d754cu: goto label_2d754c;
        case 0x2d7564u: goto label_2d7564;
        case 0x2d7580u: goto label_2d7580;
        case 0x2d75a8u: goto label_2d75a8;
        case 0x2d75c0u: goto label_2d75c0;
        case 0x2d75dcu: goto label_2d75dc;
        case 0x2d7604u: goto label_2d7604;
        case 0x2d761cu: goto label_2d761c;
        case 0x2d7638u: goto label_2d7638;
        case 0x2d7680u: goto label_2d7680;
        case 0x2d76a8u: goto label_2d76a8;
        case 0x2d76c0u: goto label_2d76c0;
        case 0x2d76dcu: goto label_2d76dc;
        case 0x2d7704u: goto label_2d7704;
        case 0x2d771cu: goto label_2d771c;
        case 0x2d7738u: goto label_2d7738;
        case 0x2d7760u: goto label_2d7760;
        case 0x2d7778u: goto label_2d7778;
        case 0x2d7794u: goto label_2d7794;
        case 0x2d77bcu: goto label_2d77bc;
        case 0x2d77d4u: goto label_2d77d4;
        case 0x2d77f0u: goto label_2d77f0;
        default: break;
    }

    ctx->pc = 0x2d7430u;

    // 0x2d7430: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x2d7430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x2d7434: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2d7434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2d7438: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2d7438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d743c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2d743cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2d7440: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d7440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d7444: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d7444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d7448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d7448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d744c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d7450: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d7450u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d7454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d7458: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d7458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d745c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7460: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d7460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7464: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d7464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d7468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d746c: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x2d746cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
    // 0x2d7470: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2d7470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d7474: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2d7474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d7478: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2d7478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d747c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2d747cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7480: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2d7480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d7484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d7484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7488: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2d7488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d748c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d748cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7490: 0xc054514  jal         func_151450
    ctx->pc = 0x2D7490u;
    SET_GPR_U32(ctx, 31, 0x2D7498u);
    ctx->pc = 0x2D7494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7490u;
            // 0x2d7494: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x151450u;
    if (runtime->hasFunction(0x151450u)) {
        auto targetFn = runtime->lookupFunction(0x151450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7498u; }
        if (ctx->pc != 0x2D7498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MySetPrim__FP11mgCDrawPrimii_0x151450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7498u; }
        if (ctx->pc != 0x2D7498u) { return; }
    }
    ctx->pc = 0x2D7498u;
label_2d7498:
    // 0x2d7498: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d749c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2d749cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d74a0: 0x8c256fd0  lw          $a1, 0x6FD0($at)
    ctx->pc = 0x2d74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28624)));
    // 0x2d74a4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2d74a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d74a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2d74a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d74ac: 0x8fb300b4  lw          $s3, 0xB4($sp)
    ctx->pc = 0x2d74acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2d74b0: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x2d74b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2d74b4: 0x245e0017  addiu       $fp, $v0, 0x17
    ctx->pc = 0x2d74b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    // 0x2d74b8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d74bc: 0x8c266fd4  lw          $a2, 0x6FD4($at)
    ctx->pc = 0x2d74bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28628)));
    // 0x2d74c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d74c4: 0x2457ffe9  addiu       $s7, $v0, -0x17
    ctx->pc = 0x2d74c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x2d74c8: 0x2476ffd2  addiu       $s6, $v1, -0x2E
    ctx->pc = 0x2d74c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967250));
    // 0x2d74cc: 0x2681021  addu        $v0, $s3, $t0
    ctx->pc = 0x2d74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x2d74d0: 0x2511ffce  addiu       $s1, $t0, -0x32
    ctx->pc = 0x2d74d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967246));
    // 0x2d74d4: 0x2452ffe7  addiu       $s2, $v0, -0x19
    ctx->pc = 0x2d74d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x2d74d8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d74d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d74dc: 0x8c276fd8  lw          $a3, 0x6FD8($at)
    ctx->pc = 0x2d74dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28632)));
    // 0x2d74e0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d74e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d74e4: 0x8c286fdc  lw          $t0, 0x6FDC($at)
    ctx->pc = 0x2d74e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28636)));
    // 0x2d74e8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D74E8u;
    SET_GPR_U32(ctx, 31, 0x2D74F0u);
    ctx->pc = 0x2D74ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D74E8u;
            // 0x2d74ec: 0x26700019  addiu       $s0, $s3, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D74F0u; }
        if (ctx->pc != 0x2D74F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D74F0u; }
        if (ctx->pc != 0x2D74F0u) { return; }
    }
    ctx->pc = 0x2D74F0u;
label_2d74f0:
    // 0x2d74f0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d74f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d74f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2d74f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d74f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d74f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74fc: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d74fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7500: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7500u;
    SET_GPR_U32(ctx, 31, 0x2D7508u);
    ctx->pc = 0x2D7504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7500u;
            // 0x2d7504: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7508u; }
        if (ctx->pc != 0x2D7508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7508u; }
        if (ctx->pc != 0x2D7508u) { return; }
    }
    ctx->pc = 0x2D7508u;
label_2d7508:
    // 0x2d7508: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d750c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d750cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7510: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7514: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d7518: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d751c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D751Cu;
    SET_GPR_U32(ctx, 31, 0x2D7524u);
    ctx->pc = 0x2D7520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D751Cu;
            // 0x2d7520: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7524u; }
        if (ctx->pc != 0x2D7524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7524u; }
        if (ctx->pc != 0x2D7524u) { return; }
    }
    ctx->pc = 0x2D7524u;
label_2d7524:
    // 0x2d7524: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7528: 0x8c256fe0  lw          $a1, 0x6FE0($at)
    ctx->pc = 0x2d7528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28640)));
    // 0x2d752c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d752cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7530: 0x8c266fe4  lw          $a2, 0x6FE4($at)
    ctx->pc = 0x2d7530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28644)));
    // 0x2d7534: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7538: 0x8c276fe8  lw          $a3, 0x6FE8($at)
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28648)));
    // 0x2d753c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7540: 0x8c286fec  lw          $t0, 0x6FEC($at)
    ctx->pc = 0x2d7540u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28652)));
    // 0x2d7544: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7544u;
    SET_GPR_U32(ctx, 31, 0x2D754Cu);
    ctx->pc = 0x2D7548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7544u;
            // 0x2d7548: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D754Cu; }
        if (ctx->pc != 0x2D754Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D754Cu; }
        if (ctx->pc != 0x2D754Cu) { return; }
    }
    ctx->pc = 0x2D754Cu;
label_2d754c:
    // 0x2d754c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2d754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d7550: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d7550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7554: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d7554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7558: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2d7558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d755c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D755Cu;
    SET_GPR_U32(ctx, 31, 0x2D7564u);
    ctx->pc = 0x2D7560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D755Cu;
            // 0x2d7560: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7564u; }
        if (ctx->pc != 0x2D7564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7564u; }
        if (ctx->pc != 0x2D7564u) { return; }
    }
    ctx->pc = 0x2D7564u;
label_2d7564:
    // 0x2d7564: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7568: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d756c: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d756cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7570: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2d7570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2d7574: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2d7574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2d7578: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7578u;
    SET_GPR_U32(ctx, 31, 0x2D7580u);
    ctx->pc = 0x2D757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7578u;
            // 0x2d757c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7580u; }
        if (ctx->pc != 0x2D7580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7580u; }
        if (ctx->pc != 0x2D7580u) { return; }
    }
    ctx->pc = 0x2D7580u;
label_2d7580:
    // 0x2d7580: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7584: 0x8c256ff0  lw          $a1, 0x6FF0($at)
    ctx->pc = 0x2d7584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28656)));
    // 0x2d7588: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d758c: 0x8c266ff4  lw          $a2, 0x6FF4($at)
    ctx->pc = 0x2d758cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28660)));
    // 0x2d7590: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7594: 0x8c276ff8  lw          $a3, 0x6FF8($at)
    ctx->pc = 0x2d7594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28664)));
    // 0x2d7598: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d759c: 0x8c286ffc  lw          $t0, 0x6FFC($at)
    ctx->pc = 0x2d759cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28668)));
    // 0x2d75a0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D75A0u;
    SET_GPR_U32(ctx, 31, 0x2D75A8u);
    ctx->pc = 0x2D75A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D75A0u;
            // 0x2d75a4: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75A8u; }
        if (ctx->pc != 0x2D75A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75A8u; }
        if (ctx->pc != 0x2D75A8u) { return; }
    }
    ctx->pc = 0x2D75A8u;
label_2d75a8:
    // 0x2d75a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d75a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75ac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2d75acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d75b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d75b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75b4: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d75b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d75b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D75B8u;
    SET_GPR_U32(ctx, 31, 0x2D75C0u);
    ctx->pc = 0x2D75BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D75B8u;
            // 0x2d75bc: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75C0u; }
        if (ctx->pc != 0x2D75C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75C0u; }
        if (ctx->pc != 0x2D75C0u) { return; }
    }
    ctx->pc = 0x2D75C0u;
label_2d75c0:
    // 0x2d75c0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d75c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d75c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d75c8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d75cc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2d75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2d75d0: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2d75d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2d75d4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D75D4u;
    SET_GPR_U32(ctx, 31, 0x2D75DCu);
    ctx->pc = 0x2D75D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D75D4u;
            // 0x2d75d8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75DCu; }
        if (ctx->pc != 0x2D75DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D75DCu; }
        if (ctx->pc != 0x2D75DCu) { return; }
    }
    ctx->pc = 0x2D75DCu;
label_2d75dc:
    // 0x2d75dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d75dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d75e0: 0x8c257000  lw          $a1, 0x7000($at)
    ctx->pc = 0x2d75e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28672)));
    // 0x2d75e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d75e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d75e8: 0x8c267004  lw          $a2, 0x7004($at)
    ctx->pc = 0x2d75e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28676)));
    // 0x2d75ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d75ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d75f0: 0x8c277008  lw          $a3, 0x7008($at)
    ctx->pc = 0x2d75f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28680)));
    // 0x2d75f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d75f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d75f8: 0x8c28700c  lw          $t0, 0x700C($at)
    ctx->pc = 0x2d75f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28684)));
    // 0x2d75fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D75FCu;
    SET_GPR_U32(ctx, 31, 0x2D7604u);
    ctx->pc = 0x2D7600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D75FCu;
            // 0x2d7600: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7604u; }
        if (ctx->pc != 0x2D7604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7604u; }
        if (ctx->pc != 0x2D7604u) { return; }
    }
    ctx->pc = 0x2D7604u;
label_2d7604:
    // 0x2d7604: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d7604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7608: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2d7608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d760c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7610: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7614: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7614u;
    SET_GPR_U32(ctx, 31, 0x2D761Cu);
    ctx->pc = 0x2D7618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7614u;
            // 0x2d7618: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D761Cu; }
        if (ctx->pc != 0x2D761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D761Cu; }
        if (ctx->pc != 0x2D761Cu) { return; }
    }
    ctx->pc = 0x2D761Cu;
label_2d761c:
    // 0x2d761c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d761cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7620: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7624: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7628: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2d7628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2d762c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x2d762cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2d7630: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7630u;
    SET_GPR_U32(ctx, 31, 0x2D7638u);
    ctx->pc = 0x2D7634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7630u;
            // 0x2d7634: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7638u; }
        if (ctx->pc != 0x2D7638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7638u; }
        if (ctx->pc != 0x2D7638u) { return; }
    }
    ctx->pc = 0x2D7638u;
label_2d7638:
    // 0x2d7638: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2d7638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2d763c: 0x27c4fff6  addiu       $a0, $fp, -0xA
    ctx->pc = 0x2d763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967286));
    // 0x2d7640: 0x2605fff7  addiu       $a1, $s0, -0x9
    ctx->pc = 0x2d7640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967287));
    // 0x2d7644: 0x26c60016  addiu       $a2, $s6, 0x16
    ctx->pc = 0x2d7644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 22));
    // 0x2d7648: 0x26270018  addiu       $a3, $s1, 0x18
    ctx->pc = 0x2d7648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x2d764c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d764cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d7650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d7654: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d7654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d7658: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d7658u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d765c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2d7660: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D7660u;
    {
        const bool branch_taken_0x2d7660 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D7664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7660u;
            // 0x2d7664: 0x259c3  sra         $t3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7660) {
            ctx->pc = 0x2D7670u;
            goto label_2d7670;
        }
    }
    ctx->pc = 0x2D7668u;
    // 0x2d7668: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x2d7668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x2d766c: 0x259c3  sra         $t3, $v0, 7
    ctx->pc = 0x2d766cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 7));
label_2d7670:
    // 0x2d7670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d7674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7678: 0xc0545fc  jal         func_1517F0
    ctx->pc = 0x2D7678u;
    SET_GPR_U32(ctx, 31, 0x2D7680u);
    ctx->pc = 0x2D767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7678u;
            // 0x2d767c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1517F0u;
    if (runtime->hasFunction(0x1517F0u)) {
        auto targetFn = runtime->lookupFunction(0x1517F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7680u; }
        if (ctx->pc != 0x2D7680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FillRect__Fiiiiiiii_0x1517f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7680u; }
        if (ctx->pc != 0x2D7680u) { return; }
    }
    ctx->pc = 0x2D7680u;
label_2d7680:
    // 0x2d7680: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7684: 0x8c257020  lw          $a1, 0x7020($at)
    ctx->pc = 0x2d7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28704)));
    // 0x2d7688: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d768c: 0x8c267024  lw          $a2, 0x7024($at)
    ctx->pc = 0x2d768cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28708)));
    // 0x2d7690: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7694: 0x8c277028  lw          $a3, 0x7028($at)
    ctx->pc = 0x2d7694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28712)));
    // 0x2d7698: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d769c: 0x8c28702c  lw          $t0, 0x702C($at)
    ctx->pc = 0x2d769cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28716)));
    // 0x2d76a0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D76A0u;
    SET_GPR_U32(ctx, 31, 0x2D76A8u);
    ctx->pc = 0x2D76A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76A0u;
            // 0x2d76a4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76A8u; }
        if (ctx->pc != 0x2D76A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76A8u; }
        if (ctx->pc != 0x2D76A8u) { return; }
    }
    ctx->pc = 0x2D76A8u;
label_2d76a8:
    // 0x2d76a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d76a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76ac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d76acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2d76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d76b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d76b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76b8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D76B8u;
    SET_GPR_U32(ctx, 31, 0x2D76C0u);
    ctx->pc = 0x2D76BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76B8u;
            // 0x2d76bc: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76C0u; }
        if (ctx->pc != 0x2D76C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76C0u; }
        if (ctx->pc != 0x2D76C0u) { return; }
    }
    ctx->pc = 0x2D76C0u;
label_2d76c0:
    // 0x2d76c0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d76c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d76c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d76c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d76c8: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d76c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d76cc: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2d76ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d76d0: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x2d76d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2d76d4: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D76D4u;
    SET_GPR_U32(ctx, 31, 0x2D76DCu);
    ctx->pc = 0x2D76D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76D4u;
            // 0x2d76d8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76DCu; }
        if (ctx->pc != 0x2D76DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D76DCu; }
        if (ctx->pc != 0x2D76DCu) { return; }
    }
    ctx->pc = 0x2D76DCu;
label_2d76dc:
    // 0x2d76dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d76dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d76e0: 0x8c2570c0  lw          $a1, 0x70C0($at)
    ctx->pc = 0x2d76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28864)));
    // 0x2d76e4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d76e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d76e8: 0x8c2670c4  lw          $a2, 0x70C4($at)
    ctx->pc = 0x2d76e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28868)));
    // 0x2d76ec: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d76ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d76f0: 0x8c2770c8  lw          $a3, 0x70C8($at)
    ctx->pc = 0x2d76f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28872)));
    // 0x2d76f4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d76f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d76f8: 0x8c2870cc  lw          $t0, 0x70CC($at)
    ctx->pc = 0x2d76f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28876)));
    // 0x2d76fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D76FCu;
    SET_GPR_U32(ctx, 31, 0x2D7704u);
    ctx->pc = 0x2D7700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D76FCu;
            // 0x2d7700: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7704u; }
        if (ctx->pc != 0x2D7704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7704u; }
        if (ctx->pc != 0x2D7704u) { return; }
    }
    ctx->pc = 0x2D7704u;
label_2d7704:
    // 0x2d7704: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2d7704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d7708: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2d7708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d770c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d770cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7710: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d7710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7714: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7714u;
    SET_GPR_U32(ctx, 31, 0x2D771Cu);
    ctx->pc = 0x2D7718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7714u;
            // 0x2d7718: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D771Cu; }
        if (ctx->pc != 0x2D771Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D771Cu; }
        if (ctx->pc != 0x2D771Cu) { return; }
    }
    ctx->pc = 0x2D771Cu;
label_2d771c:
    // 0x2d771c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d771cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d7720: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d7720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7724: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7728: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2d7728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2d772c: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x2d772cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2d7730: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D7730u;
    SET_GPR_U32(ctx, 31, 0x2D7738u);
    ctx->pc = 0x2D7734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7730u;
            // 0x2d7734: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7738u; }
        if (ctx->pc != 0x2D7738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7738u; }
        if (ctx->pc != 0x2D7738u) { return; }
    }
    ctx->pc = 0x2D7738u;
label_2d7738:
    // 0x2d7738: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d773c: 0x8c2570d0  lw          $a1, 0x70D0($at)
    ctx->pc = 0x2d773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28880)));
    // 0x2d7740: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7744: 0x8c2670d4  lw          $a2, 0x70D4($at)
    ctx->pc = 0x2d7744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28884)));
    // 0x2d7748: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d774c: 0x8c2770d8  lw          $a3, 0x70D8($at)
    ctx->pc = 0x2d774cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28888)));
    // 0x2d7750: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7754: 0x8c2870dc  lw          $t0, 0x70DC($at)
    ctx->pc = 0x2d7754u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28892)));
    // 0x2d7758: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7758u;
    SET_GPR_U32(ctx, 31, 0x2D7760u);
    ctx->pc = 0x2D775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7758u;
            // 0x2d775c: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7760u; }
        if (ctx->pc != 0x2D7760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7760u; }
        if (ctx->pc != 0x2D7760u) { return; }
    }
    ctx->pc = 0x2D7760u;
label_2d7760:
    // 0x2d7760: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2d7760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7764: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2d7764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7768: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2d7768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d776c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d776cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7770: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D7770u;
    SET_GPR_U32(ctx, 31, 0x2D7778u);
    ctx->pc = 0x2D7774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7770u;
            // 0x2d7774: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7778u; }
        if (ctx->pc != 0x2D7778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7778u; }
        if (ctx->pc != 0x2D7778u) { return; }
    }
    ctx->pc = 0x2D7778u;
label_2d7778:
    // 0x2d7778: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d7778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d777c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d777cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7780: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d7780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d7784: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2d7784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2d7788: 0x27a70190  addiu       $a3, $sp, 0x190
    ctx->pc = 0x2d7788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2d778c: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D778Cu;
    SET_GPR_U32(ctx, 31, 0x2D7794u);
    ctx->pc = 0x2D7790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D778Cu;
            // 0x2d7790: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7794u; }
        if (ctx->pc != 0x2D7794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D7794u; }
        if (ctx->pc != 0x2D7794u) { return; }
    }
    ctx->pc = 0x2D7794u;
label_2d7794:
    // 0x2d7794: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d7794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d7798: 0x8c2570e0  lw          $a1, 0x70E0($at)
    ctx->pc = 0x2d7798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28896)));
    // 0x2d779c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d779cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d77a0: 0x8c2670e4  lw          $a2, 0x70E4($at)
    ctx->pc = 0x2d77a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28900)));
    // 0x2d77a4: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d77a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d77a8: 0x8c2770e8  lw          $a3, 0x70E8($at)
    ctx->pc = 0x2d77a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28904)));
    // 0x2d77ac: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x2d77acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
    // 0x2d77b0: 0x8c2870ec  lw          $t0, 0x70EC($at)
    ctx->pc = 0x2d77b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 28908)));
    // 0x2d77b4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D77B4u;
    SET_GPR_U32(ctx, 31, 0x2D77BCu);
    ctx->pc = 0x2D77B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77B4u;
            // 0x2d77b8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77BCu; }
        if (ctx->pc != 0x2D77BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77BCu; }
        if (ctx->pc != 0x2D77BCu) { return; }
    }
    ctx->pc = 0x2D77BCu;
label_2d77bc:
    // 0x2d77bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d77bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d77c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77c4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2d77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d77c8: 0x24070017  addiu       $a3, $zero, 0x17
    ctx->pc = 0x2d77c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d77cc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2D77CCu;
    SET_GPR_U32(ctx, 31, 0x2D77D4u);
    ctx->pc = 0x2D77D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77CCu;
            // 0x2d77d0: 0x24080019  addiu       $t0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77D4u; }
        if (ctx->pc != 0x2D77D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77D4u; }
        if (ctx->pc != 0x2D77D4u) { return; }
    }
    ctx->pc = 0x2D77D4u;
label_2d77d4:
    // 0x2d77d4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2d77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2d77d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d77d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77dc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d77dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d77e0: 0x248409d0  addiu       $a0, $a0, 0x9D0
    ctx->pc = 0x2d77e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2512));
    // 0x2d77e4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2d77e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2d77e8: 0xc0545d8  jal         func_151760
    ctx->pc = 0x2D77E8u;
    SET_GPR_U32(ctx, 31, 0x2D77F0u);
    ctx->pc = 0x2D77ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D77E8u;
            // 0x2d77ec: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151760u;
    if (runtime->hasFunction(0x151760u)) {
        auto targetFn = runtime->lookupFunction(0x151760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77F0u; }
        if (ctx->pc != 0x2D77F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        set2DSprite__FPcP11mgCDrawPrim9mgRect_i_9mgRect_i_P10RGBAQ_TYPE_0x151760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D77F0u; }
        if (ctx->pc != 0x2D77F0u) { return; }
    }
    ctx->pc = 0x2D77F0u;
label_2d77f0:
    // 0x2d77f0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2d77f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d77f4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2d77f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d77f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d77f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d77fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d77fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7800: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d7800u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d7804: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d7804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7808: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d7808u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d780c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d780cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7810: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d7810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7814: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7818: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D781Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D7818u;
            // 0x2d781c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D7820u;
}
