#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Generate__14CLevelUpEffectFP10mgCTextureiP11CCharacter2
// Address: 0x22e280 - 0x22e418
void Generate__14CLevelUpEffectFP10mgCTextureiP11CCharacter2_0x22e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Generate__14CLevelUpEffectFP10mgCTextureiP11CCharacter2_0x22e280");
#endif

    switch (ctx->pc) {
        case 0x22e280u: goto label_22e280;
        case 0x22e284u: goto label_22e284;
        case 0x22e288u: goto label_22e288;
        case 0x22e28cu: goto label_22e28c;
        case 0x22e290u: goto label_22e290;
        case 0x22e294u: goto label_22e294;
        case 0x22e298u: goto label_22e298;
        case 0x22e29cu: goto label_22e29c;
        case 0x22e2a0u: goto label_22e2a0;
        case 0x22e2a4u: goto label_22e2a4;
        case 0x22e2a8u: goto label_22e2a8;
        case 0x22e2acu: goto label_22e2ac;
        case 0x22e2b0u: goto label_22e2b0;
        case 0x22e2b4u: goto label_22e2b4;
        case 0x22e2b8u: goto label_22e2b8;
        case 0x22e2bcu: goto label_22e2bc;
        case 0x22e2c0u: goto label_22e2c0;
        case 0x22e2c4u: goto label_22e2c4;
        case 0x22e2c8u: goto label_22e2c8;
        case 0x22e2ccu: goto label_22e2cc;
        case 0x22e2d0u: goto label_22e2d0;
        case 0x22e2d4u: goto label_22e2d4;
        case 0x22e2d8u: goto label_22e2d8;
        case 0x22e2dcu: goto label_22e2dc;
        case 0x22e2e0u: goto label_22e2e0;
        case 0x22e2e4u: goto label_22e2e4;
        case 0x22e2e8u: goto label_22e2e8;
        case 0x22e2ecu: goto label_22e2ec;
        case 0x22e2f0u: goto label_22e2f0;
        case 0x22e2f4u: goto label_22e2f4;
        case 0x22e2f8u: goto label_22e2f8;
        case 0x22e2fcu: goto label_22e2fc;
        case 0x22e300u: goto label_22e300;
        case 0x22e304u: goto label_22e304;
        case 0x22e308u: goto label_22e308;
        case 0x22e30cu: goto label_22e30c;
        case 0x22e310u: goto label_22e310;
        case 0x22e314u: goto label_22e314;
        case 0x22e318u: goto label_22e318;
        case 0x22e31cu: goto label_22e31c;
        case 0x22e320u: goto label_22e320;
        case 0x22e324u: goto label_22e324;
        case 0x22e328u: goto label_22e328;
        case 0x22e32cu: goto label_22e32c;
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        case 0x22e400u: goto label_22e400;
        case 0x22e404u: goto label_22e404;
        case 0x22e408u: goto label_22e408;
        case 0x22e40cu: goto label_22e40c;
        case 0x22e410u: goto label_22e410;
        case 0x22e414u: goto label_22e414;
        default: break;
    }

    ctx->pc = 0x22e280u;

label_22e280:
    // 0x22e280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22e280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22e284:
    // 0x22e284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e288:
    // 0x22e288: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22e288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22e28c:
    // 0x22e28c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22e290:
    // 0x22e290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22e290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22e294:
    // 0x22e294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22e294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e298:
    // 0x22e298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e29c:
    // 0x22e29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22e2a0:
    // 0x22e2a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22e2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_22e2a4:
    // 0x22e2a4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x22e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_22e2a8:
    // 0x22e2a8: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x22e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
label_22e2ac:
    // 0x22e2ac: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x22e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
label_22e2b0:
    // 0x22e2b0: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x22e2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_22e2b4:
    // 0x22e2b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e2b8:
    // 0x22e2b8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x22e2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_22e2bc:
    // 0x22e2bc: 0x320f809  jalr        $t9
label_22e2c0:
    if (ctx->pc == 0x22E2C0u) {
        ctx->pc = 0x22E2C0u;
            // 0x22e2c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x22E2C4u;
        goto label_22e2c4;
    }
    ctx->pc = 0x22E2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E2C4u);
        ctx->pc = 0x22E2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E2BCu;
            // 0x22e2c0: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E2C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E2C4u; }
            if (ctx->pc != 0x22E2C4u) { return; }
        }
        }
    }
    ctx->pc = 0x22E2C4u;
label_22e2c4:
    // 0x22e2c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22e2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e2c8:
    // 0x22e2c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e2cc:
    // 0x22e2cc: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x22e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_22e2d0:
    // 0x22e2d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e2d4:
    // 0x22e2d4: 0xc0941c0  jal         func_250700
label_22e2d8:
    if (ctx->pc == 0x22E2D8u) {
        ctx->pc = 0x22E2DCu;
        goto label_22e2dc;
    }
    ctx->pc = 0x22E2D4u;
    SET_GPR_U32(ctx, 31, 0x22E2DCu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2DCu; }
        if (ctx->pc != 0x22E2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E2DCu; }
        if (ctx->pc != 0x22E2DCu) { return; }
    }
    ctx->pc = 0x22E2DCu;
label_22e2dc:
    // 0x22e2dc: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x22e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e2e0:
    // 0x22e2e0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_22e2e4:
    // 0x22e2e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22e2e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22e2e8:
    // 0x22e2e8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_22e2ec:
    // 0x22e2ec: 0x2442cff0  addiu       $v0, $v0, -0x3010
    ctx->pc = 0x22e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954992));
label_22e2f0:
    // 0x22e2f0: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x22e2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22e2f4:
    // 0x22e2f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e2f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22e2f8:
    // 0x22e2f8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_22e2fc:
    // 0x22e2fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x22e2fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_22e300:
    // 0x22e300: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e304:
    // 0x22e304: 0xc0941c0  jal         func_250700
label_22e308:
    if (ctx->pc == 0x22E308u) {
        ctx->pc = 0x22E308u;
            // 0x22e308: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x22E30Cu;
        goto label_22e30c;
    }
    ctx->pc = 0x22E304u;
    SET_GPR_U32(ctx, 31, 0x22E30Cu);
    ctx->pc = 0x22E308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E304u;
            // 0x22e308: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E30Cu; }
        if (ctx->pc != 0x22E30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E30Cu; }
        if (ctx->pc != 0x22E30Cu) { return; }
    }
    ctx->pc = 0x22E30Cu;
label_22e30c:
    // 0x22e30c: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x22e30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e310:
    // 0x22e310: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x22e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_22e314:
    // 0x22e314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e318:
    // 0x22e318: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x22e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
label_22e31c:
    // 0x22e31c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e320:
    // 0x22e320: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22e320u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_22e324:
    // 0x22e324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22e328:
    // 0x22e328: 0xc0941c0  jal         func_250700
label_22e32c:
    if (ctx->pc == 0x22E32Cu) {
        ctx->pc = 0x22E32Cu;
            // 0x22e32c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x22E330u;
        goto label_22e330;
    }
    ctx->pc = 0x22E328u;
    SET_GPR_U32(ctx, 31, 0x22E330u);
    ctx->pc = 0x22E32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E328u;
            // 0x22e32c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E330u; }
        if (ctx->pc != 0x22E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E330u; }
        if (ctx->pc != 0x22E330u) { return; }
    }
    ctx->pc = 0x22E330u;
label_22e330:
    // 0x22e330: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x22e330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22e334:
    // 0x22e334: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22e334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_22e338:
    // 0x22e338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e33c:
    // 0x22e33c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x22e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_22e340:
    // 0x22e340: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_22e344:
    // 0x22e344: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_22e348:
    // 0x22e348: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e34c:
    // 0x22e34c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x22e34cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_22e350:
    // 0x22e350: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e350u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22e354:
    // 0x22e354: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x22e354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_22e358:
    // 0x22e358: 0xc0941c0  jal         func_250700
label_22e35c:
    if (ctx->pc == 0x22E35Cu) {
        ctx->pc = 0x22E35Cu;
            // 0x22e35c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x22E360u;
        goto label_22e360;
    }
    ctx->pc = 0x22E358u;
    SET_GPR_U32(ctx, 31, 0x22E360u);
    ctx->pc = 0x22E35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E358u;
            // 0x22e35c: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E360u; }
        if (ctx->pc != 0x22E360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E360u; }
        if (ctx->pc != 0x22E360u) { return; }
    }
    ctx->pc = 0x22E360u;
label_22e360:
    // 0x22e360: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x22e360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
label_22e364:
    // 0x22e364: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x22e364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_22e368:
    // 0x22e368: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22e368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_22e36c:
    // 0x22e36c: 0x2442d1f0  addiu       $v0, $v0, -0x2E10
    ctx->pc = 0x22e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955504));
label_22e370:
    // 0x22e370: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22e370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e374:
    // 0x22e374: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x22e374u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_22e378:
    // 0x22e378: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_22e37c:
    // 0x22e37c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22e380:
    // 0x22e380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e384:
    // 0x22e384: 0xc0941c0  jal         func_250700
label_22e388:
    if (ctx->pc == 0x22E388u) {
        ctx->pc = 0x22E388u;
            // 0x22e388: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x22E38Cu;
        goto label_22e38c;
    }
    ctx->pc = 0x22E384u;
    SET_GPR_U32(ctx, 31, 0x22E38Cu);
    ctx->pc = 0x22E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E384u;
            // 0x22e388: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E38Cu; }
        if (ctx->pc != 0x22E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E38Cu; }
        if (ctx->pc != 0x22E38Cu) { return; }
    }
    ctx->pc = 0x22E38Cu;
label_22e38c:
    // 0x22e38c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x22e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_22e390:
    // 0x22e390: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_22e394:
    // 0x22e394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22e394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e398:
    // 0x22e398: 0xc0941c0  jal         func_250700
label_22e39c:
    if (ctx->pc == 0x22E39Cu) {
        ctx->pc = 0x22E39Cu;
            // 0x22e39c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x22E3A0u;
        goto label_22e3a0;
    }
    ctx->pc = 0x22E398u;
    SET_GPR_U32(ctx, 31, 0x22E3A0u);
    ctx->pc = 0x22E39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E398u;
            // 0x22e39c: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3A0u; }
        if (ctx->pc != 0x22E3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3A0u; }
        if (ctx->pc != 0x22E3A0u) { return; }
    }
    ctx->pc = 0x22E3A0u;
label_22e3a0:
    // 0x22e3a0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x22e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
label_22e3a4:
    // 0x22e3a4: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x22e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22e3a8:
    // 0x22e3a8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22e3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_22e3ac:
    // 0x22e3ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22e3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22e3b0:
    // 0x22e3b0: 0x0  nop
    ctx->pc = 0x22e3b0u;
    // NOP
label_22e3b4:
    // 0x22e3b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22e3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_22e3b8:
    // 0x22e3b8: 0xc0941b0  jal         func_2506C0
label_22e3bc:
    if (ctx->pc == 0x22E3BCu) {
        ctx->pc = 0x22E3BCu;
            // 0x22e3bc: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x22E3C0u;
        goto label_22e3c0;
    }
    ctx->pc = 0x22E3B8u;
    SET_GPR_U32(ctx, 31, 0x22E3C0u);
    ctx->pc = 0x22E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3B8u;
            // 0x22e3bc: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3C0u; }
        if (ctx->pc != 0x22E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3C0u; }
        if (ctx->pc != 0x22E3C0u) { return; }
    }
    ctx->pc = 0x22E3C0u;
label_22e3c0:
    // 0x22e3c0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_22e3c4:
    // 0x22e3c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x22e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22e3c8:
    // 0x22e3c8: 0x2463d3f0  addiu       $v1, $v1, -0x2C10
    ctx->pc = 0x22e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956016));
label_22e3cc:
    // 0x22e3cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22e3d0:
    // 0x22e3d0: 0xc0941b0  jal         func_2506C0
label_22e3d4:
    if (ctx->pc == 0x22E3D4u) {
        ctx->pc = 0x22E3D4u;
            // 0x22e3d4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x22E3D8u;
        goto label_22e3d8;
    }
    ctx->pc = 0x22E3D0u;
    SET_GPR_U32(ctx, 31, 0x22E3D8u);
    ctx->pc = 0x22E3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3D0u;
            // 0x22e3d4: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3D8u; }
        if (ctx->pc != 0x22E3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E3D8u; }
        if (ctx->pc != 0x22E3D8u) { return; }
    }
    ctx->pc = 0x22E3D8u;
label_22e3d8:
    // 0x22e3d8: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x22e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_22e3dc:
    // 0x22e3dc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x22e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_22e3e0:
    // 0x22e3e0: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
label_22e3e4:
    // 0x22e3e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22e3e8:
    // 0x22e3e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22e3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_22e3ec:
    // 0x22e3ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22e3f0:
    // 0x22e3f0: 0x2a030020  slti        $v1, $s0, 0x20
    ctx->pc = 0x22e3f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_22e3f4:
    // 0x22e3f4: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_22e3f8:
    if (ctx->pc == 0x22E3F8u) {
        ctx->pc = 0x22E3F8u;
            // 0x22e3f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x22E3FCu;
        goto label_22e3fc;
    }
    ctx->pc = 0x22E3F4u;
    {
        const bool branch_taken_0x22e3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E3F4u;
            // 0x22e3f8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3f4) {
            ctx->pc = 0x22E2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e2cc;
        }
    }
    ctx->pc = 0x22E3FCu;
label_22e3fc:
    // 0x22e3fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22e3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22e400:
    // 0x22e400: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22e400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e404:
    // 0x22e404: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22e404u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e408:
    // 0x22e408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e40c:
    // 0x22e40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22e40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22e410:
    // 0x22e410: 0x3e00008  jr          $ra
label_22e414:
    if (ctx->pc == 0x22E414u) {
        ctx->pc = 0x22E414u;
            // 0x22e414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x22E418u;
        goto label_fallthrough_0x22e410;
    }
    ctx->pc = 0x22E410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E410u;
            // 0x22e414: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22e410:
    ctx->pc = 0x22E418u;
}
