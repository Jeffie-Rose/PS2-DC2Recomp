#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__17CMapEffect_SpriteFP9mgCCamera
// Address: 0x1c4190 - 0x1c443c
void Step__17CMapEffect_SpriteFP9mgCCamera_0x1c4190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__17CMapEffect_SpriteFP9mgCCamera_0x1c4190");
#endif

    switch (ctx->pc) {
        case 0x1c41bcu: goto label_1c41bc;
        case 0x1c4208u: goto label_1c4208;
        case 0x1c4268u: goto label_1c4268;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4360u: goto label_1c4360;
        case 0x1c43acu: goto label_1c43ac;
        case 0x1c43f8u: goto label_1c43f8;
        default: break;
    }

    ctx->pc = 0x1c4190u;

    // 0x1c4190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c4190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c4194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c419c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c41a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c41a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c41a4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1c41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1c41a8: 0x1860009e  blez        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x1C41A8u;
    {
        const bool branch_taken_0x1c41a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C41ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41A8u;
            // 0x1c41ac: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41a8) {
            ctx->pc = 0x1C4424u;
            goto label_1c4424;
        }
    }
    ctx->pc = 0x1C41B0u;
    // 0x1c41b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c41b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41b4: 0xc04c574  jal         func_1315D0
    ctx->pc = 0x1C41B4u;
    SET_GPR_U32(ctx, 31, 0x1C41BCu);
    ctx->pc = 0x1C41B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41B4u;
            // 0x1c41b8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41BCu; }
        if (ctx->pc != 0x1C41BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41BCu; }
        if (ctx->pc != 0x1C41BCu) { return; }
    }
    ctx->pc = 0x1C41BCu;
label_1c41bc:
    // 0x1c41bc: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x1c41bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c41c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c41c4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c41c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c41c8: 0x27b00054  addiu       $s0, $sp, 0x54
    ctx->pc = 0x1c41c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1c41cc: 0x27b10058  addiu       $s1, $sp, 0x58
    ctx->pc = 0x1c41ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1c41d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c41d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c41d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c41d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c41dc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c41dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c41e0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x1c41e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c41e4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1c41e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c41e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c41e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c41ec: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c41ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c41f0: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1c41f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c41f4: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1c41f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c41f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c41f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c41fc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c41fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c4200: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1C4200u;
    SET_GPR_U32(ctx, 31, 0x1C4208u);
    ctx->pc = 0x1C4204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4200u;
            // 0x1c4204: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4208u; }
        if (ctx->pc != 0x1C4208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4208u; }
        if (ctx->pc != 0x1C4208u) { return; }
    }
    ctx->pc = 0x1C4208u;
label_1c4208:
    // 0x1c4208: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1c4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c420c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1c420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1c4210: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1c4210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4214: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1c4214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c4218: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c4218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c421c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c421cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4220: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c4220u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c4224: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4228: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1c4228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c422c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1c422cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4230: 0xc6400024  lwc1        $f0, 0x24($s2)
    ctx->pc = 0x1c4230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4238: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c4238u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c423c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c423cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4240: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1c4240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1c4244: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1c4244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4248: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x1c4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c424c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c424cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4250: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1c4250u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1c4254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c4254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c4258: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1c4258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1c425c: 0xc64c0040  lwc1        $f12, 0x40($s2)
    ctx->pc = 0x1c425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c4260: 0xc041e96  jal         func_107A58
    ctx->pc = 0x1C4260u;
    SET_GPR_U32(ctx, 31, 0x1C4268u);
    ctx->pc = 0x1C4264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4260u;
            // 0x1c4264: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4268u; }
        if (ctx->pc != 0x1C4268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4268u; }
        if (ctx->pc != 0x1C4268u) { return; }
    }
    ctx->pc = 0x1C4268u;
label_1c4268:
    // 0x1c4268: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1c4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c426c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x1c426cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x1c4270: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x1c4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4274: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x1c4274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x1c4278: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c427c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c4280: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c4280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c4284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4288: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c4288u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1c428c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x1c428cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1c4290: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1c4290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4294: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1c4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4298: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c4298u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1c429c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x1c429cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1c42a0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1c42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c42a4: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1c42a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c42a8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1c42a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1c42ac: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1c42acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1c42b0: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x1c42b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c42b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1c42b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1c42b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c42b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c42bc: 0x0  nop
    ctx->pc = 0x1c42bcu;
    // NOP
    // 0x1c42c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C42C0u;
    {
        const bool branch_taken_0x1c42c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C42C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42C0u;
            // 0x1c42c4: 0xe6410030  swc1        $f1, 0x30($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42c0) {
            ctx->pc = 0x1C42E0u;
            goto label_1c42e0;
        }
    }
    ctx->pc = 0x1C42C8u;
    // 0x1c42c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c42cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c42ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c42d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c42d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c42d4: 0x0  nop
    ctx->pc = 0x1c42d4u;
    // NOP
    // 0x1c42d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c42d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c42dc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1c42dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_1c42e0:
    // 0x1c42e0: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1c42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c42e4: 0xc04c018  jal         func_130060
    ctx->pc = 0x1C42E4u;
    SET_GPR_U32(ctx, 31, 0x1C42ECu);
    ctx->pc = 0x1C42E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42E4u;
            // 0x1c42e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42ECu; }
        if (ctx->pc != 0x1C42ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42ECu; }
        if (ctx->pc != 0x1C42ECu) { return; }
    }
    ctx->pc = 0x1C42ECu;
label_1c42ec:
    // 0x1c42ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c42f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c42f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c42f4: 0x0  nop
    ctx->pc = 0x1c42f4u;
    // NOP
    // 0x1c42f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c42f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c42fc: 0x0  nop
    ctx->pc = 0x1c42fcu;
    // NOP
    // 0x1c4300: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x1C4300u;
    {
        const bool branch_taken_0x1c4300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4300u;
            // 0x1c4304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4300) {
            ctx->pc = 0x1C43F0u;
            goto label_1c43f0;
        }
    }
    ctx->pc = 0x1C4308u;
    // 0x1c4308: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4308u;
    SET_GPR_U32(ctx, 31, 0x1C4310u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4310u; }
        if (ctx->pc != 0x1C4310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4310u; }
        if (ctx->pc != 0x1C4310u) { return; }
    }
    ctx->pc = 0x1C4310u;
label_1c4310:
    // 0x1c4310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4314: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1c4314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1c4318: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c431c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1c431cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c4320: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1c4324: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c4324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4328: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c4328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c432c: 0x0  nop
    ctx->pc = 0x1c432cu;
    // NOP
    // 0x1c4330: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c4330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1c4334: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c4334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4338: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c4338u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c433c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1c433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4340: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1c4340u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1c4344: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x1c4344u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1c4348: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c434c: 0x0  nop
    ctx->pc = 0x1c434cu;
    // NOP
    // 0x1c4350: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c4350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4354: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c4354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c4358: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C4358u;
    SET_GPR_U32(ctx, 31, 0x1C4360u);
    ctx->pc = 0x1C435Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4358u;
            // 0x1c435c: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4360u; }
        if (ctx->pc != 0x1C4360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4360u; }
        if (ctx->pc != 0x1C4360u) { return; }
    }
    ctx->pc = 0x1C4360u;
label_1c4360:
    // 0x1c4360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c4360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4364: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x1c4364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x1c4368: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1c4368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1c436c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c436cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c4370: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1c4370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1c4374: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4378: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1c4378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c437c: 0x460208c2  mul.s       $f3, $f1, $f2
    ctx->pc = 0x1c437cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c4380: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c4380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c4384: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c4384u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4388: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c4388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c438c: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x1c438cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x1c4390: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1c4390u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1c4394: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c4394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4398: 0x0  nop
    ctx->pc = 0x1c4398u;
    // NOP
    // 0x1c439c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c439cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c43a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c43a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c43a4: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x1C43A4u;
    SET_GPR_U32(ctx, 31, 0x1C43ACu);
    ctx->pc = 0x1C43A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43A4u;
            // 0x1c43a8: 0xe6400018  swc1        $f0, 0x18($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43ACu; }
        if (ctx->pc != 0x1C43ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43ACu; }
        if (ctx->pc != 0x1C43ACu) { return; }
    }
    ctx->pc = 0x1C43ACu;
label_1c43ac:
    // 0x1c43ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c43acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c43b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1c43b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1c43b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c43b8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1c43bc: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1c43bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c43c0: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1c43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1c43c4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c43c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c43c8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c43c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c43cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c43ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c43d0: 0x0  nop
    ctx->pc = 0x1c43d0u;
    // NOP
    // 0x1c43d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c43d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c43d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1c43d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1c43dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c43dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c43e0: 0x0  nop
    ctx->pc = 0x1c43e0u;
    // NOP
    // 0x1c43e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c43e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c43e8: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1c43e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1c43ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c43ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c43f0:
    // 0x1c43f0: 0xc04c018  jal         func_130060
    ctx->pc = 0x1C43F0u;
    SET_GPR_U32(ctx, 31, 0x1C43F8u);
    ctx->pc = 0x1C43F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43F0u;
            // 0x1c43f4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43F8u; }
        if (ctx->pc != 0x1C43F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43F8u; }
        if (ctx->pc != 0x1C43F8u) { return; }
    }
    ctx->pc = 0x1C43F8u;
label_1c43f8:
    // 0x1c43f8: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1c43f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1c43fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c43fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4400: 0x0  nop
    ctx->pc = 0x1c4400u;
    // NOP
    // 0x1c4404: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c4404u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4408: 0x0  nop
    ctx->pc = 0x1c4408u;
    // NOP
    // 0x1c440c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C440Cu;
    {
        const bool branch_taken_0x1c440c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c440c) {
            ctx->pc = 0x1C4418u;
            goto label_1c4418;
        }
    }
    ctx->pc = 0x1C4414u;
    // 0x1c4414: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x1c4414u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_1c4418:
    // 0x1c4418: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x1c4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c441c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c4420: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x1c4420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
label_1c4424:
    // 0x1c4424: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c442c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c442cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4434: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4434u;
            // 0x1c4438: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C443Cu;
}
