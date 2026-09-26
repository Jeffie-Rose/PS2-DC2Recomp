#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ScanEyePoint__FPf
// Address: 0x28e2a0 - 0x28e47c
void ScanEyePoint__FPf_0x28e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScanEyePoint__FPf_0x28e2a0");
#endif

    switch (ctx->pc) {
        case 0x28e2a0u: goto label_28e2a0;
        case 0x28e2a4u: goto label_28e2a4;
        case 0x28e2a8u: goto label_28e2a8;
        case 0x28e2acu: goto label_28e2ac;
        case 0x28e2b0u: goto label_28e2b0;
        case 0x28e2b4u: goto label_28e2b4;
        case 0x28e2b8u: goto label_28e2b8;
        case 0x28e2bcu: goto label_28e2bc;
        case 0x28e2c0u: goto label_28e2c0;
        case 0x28e2c4u: goto label_28e2c4;
        case 0x28e2c8u: goto label_28e2c8;
        case 0x28e2ccu: goto label_28e2cc;
        case 0x28e2d0u: goto label_28e2d0;
        case 0x28e2d4u: goto label_28e2d4;
        case 0x28e2d8u: goto label_28e2d8;
        case 0x28e2dcu: goto label_28e2dc;
        case 0x28e2e0u: goto label_28e2e0;
        case 0x28e2e4u: goto label_28e2e4;
        case 0x28e2e8u: goto label_28e2e8;
        case 0x28e2ecu: goto label_28e2ec;
        case 0x28e2f0u: goto label_28e2f0;
        case 0x28e2f4u: goto label_28e2f4;
        case 0x28e2f8u: goto label_28e2f8;
        case 0x28e2fcu: goto label_28e2fc;
        case 0x28e300u: goto label_28e300;
        case 0x28e304u: goto label_28e304;
        case 0x28e308u: goto label_28e308;
        case 0x28e30cu: goto label_28e30c;
        case 0x28e310u: goto label_28e310;
        case 0x28e314u: goto label_28e314;
        case 0x28e318u: goto label_28e318;
        case 0x28e31cu: goto label_28e31c;
        case 0x28e320u: goto label_28e320;
        case 0x28e324u: goto label_28e324;
        case 0x28e328u: goto label_28e328;
        case 0x28e32cu: goto label_28e32c;
        case 0x28e330u: goto label_28e330;
        case 0x28e334u: goto label_28e334;
        case 0x28e338u: goto label_28e338;
        case 0x28e33cu: goto label_28e33c;
        case 0x28e340u: goto label_28e340;
        case 0x28e344u: goto label_28e344;
        case 0x28e348u: goto label_28e348;
        case 0x28e34cu: goto label_28e34c;
        case 0x28e350u: goto label_28e350;
        case 0x28e354u: goto label_28e354;
        case 0x28e358u: goto label_28e358;
        case 0x28e35cu: goto label_28e35c;
        case 0x28e360u: goto label_28e360;
        case 0x28e364u: goto label_28e364;
        case 0x28e368u: goto label_28e368;
        case 0x28e36cu: goto label_28e36c;
        case 0x28e370u: goto label_28e370;
        case 0x28e374u: goto label_28e374;
        case 0x28e378u: goto label_28e378;
        case 0x28e37cu: goto label_28e37c;
        case 0x28e380u: goto label_28e380;
        case 0x28e384u: goto label_28e384;
        case 0x28e388u: goto label_28e388;
        case 0x28e38cu: goto label_28e38c;
        case 0x28e390u: goto label_28e390;
        case 0x28e394u: goto label_28e394;
        case 0x28e398u: goto label_28e398;
        case 0x28e39cu: goto label_28e39c;
        case 0x28e3a0u: goto label_28e3a0;
        case 0x28e3a4u: goto label_28e3a4;
        case 0x28e3a8u: goto label_28e3a8;
        case 0x28e3acu: goto label_28e3ac;
        case 0x28e3b0u: goto label_28e3b0;
        case 0x28e3b4u: goto label_28e3b4;
        case 0x28e3b8u: goto label_28e3b8;
        case 0x28e3bcu: goto label_28e3bc;
        case 0x28e3c0u: goto label_28e3c0;
        case 0x28e3c4u: goto label_28e3c4;
        case 0x28e3c8u: goto label_28e3c8;
        case 0x28e3ccu: goto label_28e3cc;
        case 0x28e3d0u: goto label_28e3d0;
        case 0x28e3d4u: goto label_28e3d4;
        case 0x28e3d8u: goto label_28e3d8;
        case 0x28e3dcu: goto label_28e3dc;
        case 0x28e3e0u: goto label_28e3e0;
        case 0x28e3e4u: goto label_28e3e4;
        case 0x28e3e8u: goto label_28e3e8;
        case 0x28e3ecu: goto label_28e3ec;
        case 0x28e3f0u: goto label_28e3f0;
        case 0x28e3f4u: goto label_28e3f4;
        case 0x28e3f8u: goto label_28e3f8;
        case 0x28e3fcu: goto label_28e3fc;
        case 0x28e400u: goto label_28e400;
        case 0x28e404u: goto label_28e404;
        case 0x28e408u: goto label_28e408;
        case 0x28e40cu: goto label_28e40c;
        case 0x28e410u: goto label_28e410;
        case 0x28e414u: goto label_28e414;
        case 0x28e418u: goto label_28e418;
        case 0x28e41cu: goto label_28e41c;
        case 0x28e420u: goto label_28e420;
        case 0x28e424u: goto label_28e424;
        case 0x28e428u: goto label_28e428;
        case 0x28e42cu: goto label_28e42c;
        case 0x28e430u: goto label_28e430;
        case 0x28e434u: goto label_28e434;
        case 0x28e438u: goto label_28e438;
        case 0x28e43cu: goto label_28e43c;
        case 0x28e440u: goto label_28e440;
        case 0x28e444u: goto label_28e444;
        case 0x28e448u: goto label_28e448;
        case 0x28e44cu: goto label_28e44c;
        case 0x28e450u: goto label_28e450;
        case 0x28e454u: goto label_28e454;
        case 0x28e458u: goto label_28e458;
        case 0x28e45cu: goto label_28e45c;
        case 0x28e460u: goto label_28e460;
        case 0x28e464u: goto label_28e464;
        case 0x28e468u: goto label_28e468;
        case 0x28e46cu: goto label_28e46c;
        case 0x28e470u: goto label_28e470;
        case 0x28e474u: goto label_28e474;
        case 0x28e478u: goto label_28e478;
        default: break;
    }

    ctx->pc = 0x28e2a0u;

label_28e2a0:
    // 0x28e2a0: 0x27bdd6c0  addiu       $sp, $sp, -0x2940
    ctx->pc = 0x28e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956736));
label_28e2a4:
    // 0x28e2a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28e2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e2a8:
    // 0x28e2a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28e2ac:
    // 0x28e2ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28e2b0:
    // 0x28e2b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28e2b4:
    // 0x28e2b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28e2b8:
    // 0x28e2b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28e2bc:
    // 0x28e2bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28e2bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28e2c0:
    // 0x28e2c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28e2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28e2c4:
    // 0x28e2c4: 0xc041c5c  jal         func_107170
label_28e2c8:
    if (ctx->pc == 0x28E2C8u) {
        ctx->pc = 0x28E2C8u;
            // 0x28e2c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28E2CCu;
        goto label_28e2cc;
    }
    ctx->pc = 0x28E2C4u;
    SET_GPR_U32(ctx, 31, 0x28E2CCu);
    ctx->pc = 0x28E2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2C4u;
            // 0x28e2c8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2CCu; }
        if (ctx->pc != 0x28E2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2CCu; }
        if (ctx->pc != 0x28E2CCu) { return; }
    }
    ctx->pc = 0x28E2CCu;
label_28e2cc:
    // 0x28e2cc: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x28e2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_28e2d0:
    // 0x28e2d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x28e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_28e2d4:
    // 0x28e2d4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28e2d8:
    // 0x28e2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e2dc:
    // 0x28e2dc: 0x0  nop
    ctx->pc = 0x28e2dcu;
    // NOP
label_28e2e0:
    // 0x28e2e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28e2e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28e2e4:
    // 0x28e2e4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28e2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_28e2e8:
    // 0x28e2e8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28e2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28e2ec:
    // 0x28e2ec: 0xc0a0f58  jal         func_283D60
label_28e2f0:
    if (ctx->pc == 0x28E2F0u) {
        ctx->pc = 0x28E2F0u;
            // 0x28e2f0: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28E2F4u;
        goto label_28e2f4;
    }
    ctx->pc = 0x28E2ECu;
    SET_GPR_U32(ctx, 31, 0x28E2F4u);
    ctx->pc = 0x28E2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2ECu;
            // 0x28e2f0: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2F4u; }
        if (ctx->pc != 0x28E2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2F4u; }
        if (ctx->pc != 0x28E2F4u) { return; }
    }
    ctx->pc = 0x28E2F4u;
label_28e2f4:
    // 0x28e2f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28e2f8:
    if (ctx->pc == 0x28E2F8u) {
        ctx->pc = 0x28E2F8u;
            // 0x28e2f8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x28E2FCu;
        goto label_28e2fc;
    }
    ctx->pc = 0x28E2F4u;
    {
        const bool branch_taken_0x28e2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2F4u;
            // 0x28e2f8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2f4) {
            ctx->pc = 0x28E304u;
            goto label_28e304;
        }
    }
    ctx->pc = 0x28E2FCu;
label_28e2fc:
    // 0x28e2fc: 0x10000058  b           . + 4 + (0x58 << 2)
label_28e300:
    if (ctx->pc == 0x28E300u) {
        ctx->pc = 0x28E300u;
            // 0x28e300: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x28E304u;
        goto label_28e304;
    }
    ctx->pc = 0x28E2FCu;
    {
        const bool branch_taken_0x28e2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2FCu;
            // 0x28e300: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2fc) {
            ctx->pc = 0x28E460u;
            goto label_28e460;
        }
    }
    ctx->pc = 0x28E304u;
label_28e304:
    // 0x28e304: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x28e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28e308:
    // 0x28e308: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x28e308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_28e30c:
    // 0x28e30c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28e30cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28e310:
    // 0x28e310: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x28e310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_28e314:
    // 0x28e314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28e314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e318:
    // 0x28e318: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x28e318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_28e31c:
    // 0x28e31c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_28e320:
    // 0x28e320: 0x27a62880  addiu       $a2, $sp, 0x2880
    ctx->pc = 0x28e320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
label_28e324:
    // 0x28e324: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x28e324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28e328:
    // 0x28e328: 0xe7a02880  swc1        $f0, 0x2880($sp)
    ctx->pc = 0x28e328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10368), bits); }
label_28e32c:
    // 0x28e32c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x28e32cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_28e330:
    // 0x28e330: 0xe7a02890  swc1        $f0, 0x2890($sp)
    ctx->pc = 0x28e330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10384), bits); }
label_28e334:
    // 0x28e334: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x28e334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28e338:
    // 0x28e338: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x28e338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_28e33c:
    // 0x28e33c: 0xe7a02884  swc1        $f0, 0x2884($sp)
    ctx->pc = 0x28e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10372), bits); }
label_28e340:
    // 0x28e340: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x28e340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_28e344:
    // 0x28e344: 0xe7a02894  swc1        $f0, 0x2894($sp)
    ctx->pc = 0x28e344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10388), bits); }
label_28e348:
    // 0x28e348: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28e34c:
    // 0x28e34c: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x28e34cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28e350:
    // 0x28e350: 0xafa3288c  sw          $v1, 0x288C($sp)
    ctx->pc = 0x28e350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10380), GPR_U32(ctx, 3));
label_28e354:
    // 0x28e354: 0xafa3289c  sw          $v1, 0x289C($sp)
    ctx->pc = 0x28e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10396), GPR_U32(ctx, 3));
label_28e358:
    // 0x28e358: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x28e358u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_28e35c:
    // 0x28e35c: 0xe7a12888  swc1        $f1, 0x2888($sp)
    ctx->pc = 0x28e35cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10376), bits); }
label_28e360:
    // 0x28e360: 0xe7a02898  swc1        $f0, 0x2898($sp)
    ctx->pc = 0x28e360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10392), bits); }
label_28e364:
    // 0x28e364: 0x8c590d00  lw          $t9, 0xD00($v0)
    ctx->pc = 0x28e364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3328)));
label_28e368:
    // 0x28e368: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x28e368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_28e36c:
    // 0x28e36c: 0x320f809  jalr        $t9
label_28e370:
    if (ctx->pc == 0x28E370u) {
        ctx->pc = 0x28E370u;
            // 0x28e370: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x28E374u;
        goto label_28e374;
    }
    ctx->pc = 0x28E36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28E374u);
        ctx->pc = 0x28E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E36Cu;
            // 0x28e370: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28E374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28E374u; }
            if (ctx->pc != 0x28E374u) { return; }
        }
        }
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e378:
    // 0x28e378: 0x27a328a0  addiu       $v1, $sp, 0x28A0
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
label_28e37c:
    // 0x28e37c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_28e380:
    // 0x28e380: 0x27a42900  addiu       $a0, $sp, 0x2900
    ctx->pc = 0x28e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
label_28e384:
    // 0x28e384: 0x24423fc0  addiu       $v0, $v0, 0x3FC0
    ctx->pc = 0x28e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16320));
label_28e388:
    // 0x28e388: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x28e388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28e38c:
    // 0x28e38c: 0xc041c7a  jal         func_1071E8
label_28e390:
    if (ctx->pc == 0x28E390u) {
        ctx->pc = 0x28E390u;
            // 0x28e390: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x28E394u;
        goto label_28e394;
    }
    ctx->pc = 0x28E38Cu;
    SET_GPR_U32(ctx, 31, 0x28E394u);
    ctx->pc = 0x28E390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E38Cu;
            // 0x28e390: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E394u; }
        if (ctx->pc != 0x28E394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E394u; }
        if (ctx->pc != 0x28E394u) { return; }
    }
    ctx->pc = 0x28E394u;
label_28e394:
    // 0x28e394: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e398:
    // 0x28e398: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x28e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_28e39c:
    // 0x28e39c: 0x27a52900  addiu       $a1, $sp, 0x2900
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10496));
label_28e3a0:
    // 0x28e3a0: 0xc041cf6  jal         func_1073D8
label_28e3a4:
    if (ctx->pc == 0x28E3A4u) {
        ctx->pc = 0x28E3A4u;
            // 0x28e3a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x28E3A8u;
        goto label_28e3a8;
    }
    ctx->pc = 0x28E3A0u;
    SET_GPR_U32(ctx, 31, 0x28E3A8u);
    ctx->pc = 0x28E3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3A0u;
            // 0x28e3a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3A8u; }
        if (ctx->pc != 0x28E3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3A8u; }
        if (ctx->pc != 0x28E3A8u) { return; }
    }
    ctx->pc = 0x28E3A8u;
label_28e3a8:
    // 0x28e3a8: 0x27a428b0  addiu       $a0, $sp, 0x28B0
    ctx->pc = 0x28e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_28e3ac:
    // 0x28e3ac: 0x27a528c0  addiu       $a1, $sp, 0x28C0
    ctx->pc = 0x28e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_28e3b0:
    // 0x28e3b0: 0xc041bb0  jal         func_106EC0
label_28e3b4:
    if (ctx->pc == 0x28E3B4u) {
        ctx->pc = 0x28E3B4u;
            // 0x28e3b4: 0x27a628a0  addiu       $a2, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->pc = 0x28E3B8u;
        goto label_28e3b8;
    }
    ctx->pc = 0x28E3B0u;
    SET_GPR_U32(ctx, 31, 0x28E3B8u);
    ctx->pc = 0x28E3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3B0u;
            // 0x28e3b4: 0x27a628a0  addiu       $a2, $sp, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3B8u; }
        if (ctx->pc != 0x28E3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3B8u; }
        if (ctx->pc != 0x28E3B8u) { return; }
    }
    ctx->pc = 0x28E3B8u;
label_28e3b8:
    // 0x28e3b8: 0xc7a228b0  lwc1        $f2, 0x28B0($sp)
    ctx->pc = 0x28e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28e3bc:
    // 0x28e3bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_28e3c0:
    // 0x28e3c0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x28e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28e3c4:
    // 0x28e3c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e3c8:
    // 0x28e3c8: 0xc7a128b8  lwc1        $f1, 0x28B8($sp)
    ctx->pc = 0x28e3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28e3cc:
    // 0x28e3cc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x28e3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28e3d0:
    // 0x28e3d0: 0x27a728b0  addiu       $a3, $sp, 0x28B0
    ctx->pc = 0x28e3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
label_28e3d4:
    // 0x28e3d4: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x28e3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28e3d8:
    // 0x28e3d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e3dc:
    // 0x28e3dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28e3dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e3e0:
    // 0x28e3e0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x28e3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_28e3e4:
    // 0x28e3e4: 0xe7a028b0  swc1        $f0, 0x28B0($sp)
    ctx->pc = 0x28e3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10416), bits); }
label_28e3e8:
    // 0x28e3e8: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x28e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28e3ec:
    // 0x28e3ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28e3ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28e3f0:
    // 0x28e3f0: 0xc053794  jal         func_14DE50
label_28e3f4:
    if (ctx->pc == 0x28E3F4u) {
        ctx->pc = 0x28E3F4u;
            // 0x28e3f4: 0xe7a028b8  swc1        $f0, 0x28B8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10424), bits); }
        ctx->pc = 0x28E3F8u;
        goto label_28e3f8;
    }
    ctx->pc = 0x28E3F0u;
    SET_GPR_U32(ctx, 31, 0x28E3F8u);
    ctx->pc = 0x28E3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3F0u;
            // 0x28e3f4: 0xe7a028b8  swc1        $f0, 0x28B8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10424), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3F8u; }
        if (ctx->pc != 0x28E3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3F8u; }
        if (ctx->pc != 0x28E3F8u) { return; }
    }
    ctx->pc = 0x28E3F8u;
label_28e3f8:
    // 0x28e3f8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_28e3fc:
    if (ctx->pc == 0x28E3FCu) {
        ctx->pc = 0x28E3FCu;
            // 0x28e3fc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x28E400u;
        goto label_28e400;
    }
    ctx->pc = 0x28E3F8u;
    {
        const bool branch_taken_0x28e3f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3F8u;
            // 0x28e3fc: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3f8) {
            ctx->pc = 0x28E408u;
            goto label_28e408;
        }
    }
    ctx->pc = 0x28E400u;
label_28e400:
    // 0x28e400: 0x10000016  b           . + 4 + (0x16 << 2)
label_28e404:
    if (ctx->pc == 0x28E404u) {
        ctx->pc = 0x28E408u;
        goto label_28e408;
    }
    ctx->pc = 0x28E400u;
    {
        const bool branch_taken_0x28e400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e400) {
            ctx->pc = 0x28E45Cu;
            goto label_28e45c;
        }
    }
    ctx->pc = 0x28E408u;
label_28e408:
    // 0x28e408: 0xc0a24f0  jal         func_2893C0
label_28e40c:
    if (ctx->pc == 0x28E40Cu) {
        ctx->pc = 0x28E40Cu;
            // 0x28e40c: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28E410u;
        goto label_28e410;
    }
    ctx->pc = 0x28E408u;
    SET_GPR_U32(ctx, 31, 0x28E410u);
    ctx->pc = 0x28E40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E408u;
            // 0x28e40c: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E410u; }
        if (ctx->pc != 0x28E410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E410u; }
        if (ctx->pc != 0x28E410u) { return; }
    }
    ctx->pc = 0x28E410u;
label_28e410:
    // 0x28e410: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x28e410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28e414:
    // 0x28e414: 0xc0a24f0  jal         func_2893C0
label_28e418:
    if (ctx->pc == 0x28E418u) {
        ctx->pc = 0x28E418u;
            // 0x28e418: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E41Cu;
        goto label_28e41c;
    }
    ctx->pc = 0x28E414u;
    SET_GPR_U32(ctx, 31, 0x28E41Cu);
    ctx->pc = 0x28E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E414u;
            // 0x28e418: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E41Cu; }
        if (ctx->pc != 0x28E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E41Cu; }
        if (ctx->pc != 0x28E41Cu) { return; }
    }
    ctx->pc = 0x28E41Cu;
label_28e41c:
    // 0x28e41c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28e41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_28e420:
    // 0x28e420: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28e420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e424:
    // 0x28e424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28e424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e428:
    // 0x28e428: 0xc04a0d2  jal         func_128348
label_28e42c:
    if (ctx->pc == 0x28E42Cu) {
        ctx->pc = 0x28E42Cu;
            // 0x28e42c: 0x2484d770  addiu       $a0, $a0, -0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956912));
        ctx->pc = 0x28E430u;
        goto label_28e430;
    }
    ctx->pc = 0x28E428u;
    SET_GPR_U32(ctx, 31, 0x28E430u);
    ctx->pc = 0x28E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E428u;
            // 0x28e42c: 0x2484d770  addiu       $a0, $a0, -0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E430u; }
        if (ctx->pc != 0x28E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E430u; }
        if (ctx->pc != 0x28E430u) { return; }
    }
    ctx->pc = 0x28E430u;
label_28e430:
    // 0x28e430: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x28e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
label_28e434:
    // 0x28e434: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x28e434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_28e438:
    // 0x28e438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e43c:
    // 0x28e43c: 0x0  nop
    ctx->pc = 0x28e43cu;
    // NOP
label_28e440:
    // 0x28e440: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x28e440u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_28e444:
    // 0x28e444: 0xc04c374  jal         func_130DD0
label_28e448:
    if (ctx->pc == 0x28E448u) {
        ctx->pc = 0x28E448u;
            // 0x28e448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x28E44Cu;
        goto label_28e44c;
    }
    ctx->pc = 0x28E444u;
    SET_GPR_U32(ctx, 31, 0x28E44Cu);
    ctx->pc = 0x28E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E444u;
            // 0x28e448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E44Cu; }
        if (ctx->pc != 0x28E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E44Cu; }
        if (ctx->pc != 0x28E44Cu) { return; }
    }
    ctx->pc = 0x28E44Cu;
label_28e44c:
    // 0x28e44c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28e44cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28e450:
    // 0x28e450: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x28e450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_28e454:
    // 0x28e454: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_28e458:
    if (ctx->pc == 0x28E458u) {
        ctx->pc = 0x28E458u;
            // 0x28e458: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x28E45Cu;
        goto label_28e45c;
    }
    ctx->pc = 0x28E454u;
    {
        const bool branch_taken_0x28e454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E454u;
            // 0x28e458: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e454) {
            ctx->pc = 0x28E398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e398;
        }
    }
    ctx->pc = 0x28E45Cu;
label_28e45c:
    // 0x28e45c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28e45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28e460:
    // 0x28e460: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28e460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28e464:
    // 0x28e464: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28e464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e468:
    // 0x28e468: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28e468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e46c:
    // 0x28e46c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28e46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e470:
    // 0x28e470: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28e470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28e474:
    // 0x28e474: 0x3e00008  jr          $ra
label_28e478:
    if (ctx->pc == 0x28E478u) {
        ctx->pc = 0x28E478u;
            // 0x28e478: 0x27bd2940  addiu       $sp, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->pc = 0x28E47Cu;
        goto label_fallthrough_0x28e474;
    }
    ctx->pc = 0x28E474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E474u;
            // 0x28e478: 0x27bd2940  addiu       $sp, $sp, 0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28e474:
    ctx->pc = 0x28E47Cu;
}
