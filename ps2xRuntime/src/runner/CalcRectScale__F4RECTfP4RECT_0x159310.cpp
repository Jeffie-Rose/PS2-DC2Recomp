#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcRectScale__F4RECTfP4RECT
// Address: 0x159310 - 0x159410
void CalcRectScale__F4RECTfP4RECT_0x159310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcRectScale__F4RECTfP4RECT_0x159310");
#endif

    switch (ctx->pc) {
        case 0x15936cu: goto label_15936c;
        case 0x159388u: goto label_159388;
        default: break;
    }

    ctx->pc = 0x159310u;

    // 0x159310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159314: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x159318: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x159318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15931c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x159320: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x159320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x159324: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x159324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x159328: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x159328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15932c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x15932cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x159330: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x159330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x159334: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x159334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159338: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x159338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15933c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x15933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159340: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x159340u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x159344: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x159344u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x159348: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x159348u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15934c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x15934cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x159350: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x159350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x159354: 0x8fb20058  lw          $s2, 0x58($sp)
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x159358: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x159358u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15935c: 0x0  nop
    ctx->pc = 0x15935cu;
    // NOP
    // 0x159360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159364: 0xc0a248c  jal         func_289230
    ctx->pc = 0x159364u;
    SET_GPR_U32(ctx, 31, 0x15936Cu);
    ctx->pc = 0x159368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159364u;
            // 0x159368: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15936Cu; }
        if (ctx->pc != 0x15936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15936Cu; }
        if (ctx->pc != 0x15936Cu) { return; }
    }
    ctx->pc = 0x15936Cu;
label_15936c:
    // 0x15936c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x15936cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x159370: 0x8fb0005c  lw          $s0, 0x5C($sp)
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x159374: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x159374u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159378: 0x0  nop
    ctx->pc = 0x159378u;
    // NOP
    // 0x15937c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15937cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159380: 0xc0a248c  jal         func_289230
    ctx->pc = 0x159380u;
    SET_GPR_U32(ctx, 31, 0x159388u);
    ctx->pc = 0x159384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159380u;
            // 0x159384: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159388u; }
        if (ctx->pc != 0x159388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159388u; }
        if (ctx->pc != 0x159388u) { return; }
    }
    ctx->pc = 0x159388u;
label_159388:
    // 0x159388: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x159388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x15938c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15938Cu;
    {
        const bool branch_taken_0x15938c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x159390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15938Cu;
            // 0x159390: 0x122843  sra         $a1, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15938c) {
            ctx->pc = 0x15939Cu;
            goto label_15939c;
        }
    }
    ctx->pc = 0x159394u;
    // 0x159394: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x159394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x159398: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x159398u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_15939c:
    // 0x15939c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1593a0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1593a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1593a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1593a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1593A8u;
    {
        const bool branch_taken_0x1593a8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1593ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593A8u;
            // 0x1593ac: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593a8) {
            ctx->pc = 0x1593B8u;
            goto label_1593b8;
        }
    }
    ctx->pc = 0x1593B0u;
    // 0x1593b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1593b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1593b4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1593b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1593b8:
    // 0x1593b8: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1593b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1593bc: 0x102843  sra         $a1, $s0, 1
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1593c0: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1593C0u;
    {
        const bool branch_taken_0x1593c0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1593C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593C0u;
            // 0x1593c4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593c0) {
            ctx->pc = 0x1593D0u;
            goto label_1593d0;
        }
    }
    ctx->pc = 0x1593C8u;
    // 0x1593c8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1593c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1593cc: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_1593d0:
    // 0x1593d0: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1593d4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1593d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1593d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1593dc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1593DCu;
    {
        const bool branch_taken_0x1593dc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1593E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1593DCu;
            // 0x1593e0: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593dc) {
            ctx->pc = 0x1593ECu;
            goto label_1593ec;
        }
    }
    ctx->pc = 0x1593E4u;
    // 0x1593e4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1593e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1593e8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1593e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_1593ec:
    // 0x1593ec: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1593ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1593f0: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1593f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1593f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1593f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1593f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1593f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1593fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1593fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159400: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x159400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x159404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159408: 0x3e00008  jr          $ra
    ctx->pc = 0x159408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159408u;
            // 0x15940c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159410u;
}
