#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__11CStarEffectFv
// Address: 0x2fb270 - 0x2fb39c
void Step__11CStarEffectFv_0x2fb270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__11CStarEffectFv_0x2fb270");
#endif

    switch (ctx->pc) {
        case 0x2fb348u: goto label_2fb348;
        case 0x2fb364u: goto label_2fb364;
        default: break;
    }

    ctx->pc = 0x2fb270u;

    // 0x2fb270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fb274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fb278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fb278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fb27c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2fb27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2fb280: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2FB280u;
    {
        const bool branch_taken_0x2fb280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB280u;
            // 0x2fb284: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb280) {
            ctx->pc = 0x2FB38Cu;
            goto label_2fb38c;
        }
    }
    ctx->pc = 0x2FB288u;
    // 0x2fb288: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x2fb288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fb28c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2fb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2fb290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb294: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x2fb294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x2fb298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fb298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb29c: 0x0  nop
    ctx->pc = 0x2fb29cu;
    // NOP
    // 0x2fb2a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2fb2a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2fb2a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2fb2a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2fb2a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2fb2a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2fb2ac: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2fb2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2fb2b0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x2fb2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2fb2b4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2fb2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2fb2b8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2fb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2fb2bc: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x2fb2bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2fb2c0: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x2FB2C0u;
    {
        const bool branch_taken_0x2fb2c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB2C0u;
            // 0x2fb2c4: 0x2841001e  slti        $at, $v0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb2c0) {
            ctx->pc = 0x2FB338u;
            goto label_2fb338;
        }
    }
    ctx->pc = 0x2FB2C8u;
    // 0x2fb2c8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x2FB2C8u;
    {
        const bool branch_taken_0x2fb2c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb2c8) {
            ctx->pc = 0x2FB304u;
            goto label_2fb304;
        }
    }
    ctx->pc = 0x2FB2D0u;
    // 0x2fb2d0: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x2fb2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fb2d4: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x2fb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x2fb2d8: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x2fb2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x2fb2dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2fb2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb2e0: 0x3c023e57  lui         $v0, 0x3E57
    ctx->pc = 0x2fb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15959 << 16));
    // 0x2fb2e4: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x2fb2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2fb2e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fb2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb2ec: 0x0  nop
    ctx->pc = 0x2fb2ecu;
    // NOP
    // 0x2fb2f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2fb2f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fb2f4: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x2fb2f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2fb2f8: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x2fb2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb2fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fb2fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fb300: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2fb300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_2fb304:
    // 0x2fb304: 0xc601007c  lwc1        $f1, 0x7C($s0)
    ctx->pc = 0x2fb304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb308: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2fb308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2fb30c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fb30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2fb310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fb310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fb314: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fb314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fb318: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2fb318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2fb31c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fb31cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fb320: 0x0  nop
    ctx->pc = 0x2fb320u;
    // NOP
    // 0x2fb324: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB324u;
    {
        const bool branch_taken_0x2fb324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FB328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB324u;
            // 0x2fb328: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb324) {
            ctx->pc = 0x2FB338u;
            goto label_2fb338;
        }
    }
    ctx->pc = 0x2FB32Cu;
    // 0x2fb32c: 0xe602007c  swc1        $f2, 0x7C($s0)
    ctx->pc = 0x2fb32cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x2fb330: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2fb330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fb334: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x2fb334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_2fb338:
    // 0x2fb338: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2fb338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb33c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x2fb33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb340: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2FB340u;
    SET_GPR_U32(ctx, 31, 0x2FB348u);
    ctx->pc = 0x2FB344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB340u;
            // 0x2fb344: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB348u; }
        if (ctx->pc != 0x2FB348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB348u; }
        if (ctx->pc != 0x2FB348u) { return; }
    }
    ctx->pc = 0x2FB348u;
label_2fb348:
    // 0x2fb348: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2fb348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2fb34c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2fb34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2fb350: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fb350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fb354: 0x0  nop
    ctx->pc = 0x2fb354u;
    // NOP
    // 0x2fb358: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2fb358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2fb35c: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2FB35Cu;
    SET_GPR_U32(ctx, 31, 0x2FB364u);
    ctx->pc = 0x2FB360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB35Cu;
            // 0x2fb360: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB364u; }
        if (ctx->pc != 0x2FB364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB364u; }
        if (ctx->pc != 0x2FB364u) { return; }
    }
    ctx->pc = 0x2FB364u;
label_2fb364:
    // 0x2fb364: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2fb364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb368: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2fb368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fb36c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2fb36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2fb370: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x2fb370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb374: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2fb374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb378: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fb378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fb37c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2fb37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2fb380: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2fb380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2fb384: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2fb384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fb388: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x2fb388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_2fb38c:
    // 0x2fb38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fb38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fb390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb394: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB394u;
            // 0x2fb398: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB39Cu;
}
