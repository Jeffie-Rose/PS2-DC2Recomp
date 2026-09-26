#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsRepair__13CGameDataUsedFv
// Address: 0x198180 - 0x198268
void IsRepair__13CGameDataUsedFv_0x198180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsRepair__13CGameDataUsedFv_0x198180");
#endif

    switch (ctx->pc) {
        case 0x1981b8u: goto label_1981b8;
        case 0x1981f4u: goto label_1981f4;
        case 0x198230u: goto label_198230;
        default: break;
    }

    ctx->pc = 0x198180u;

    // 0x198180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198184: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x198184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19818c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x198190: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198194: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x198194u;
    {
        const bool branch_taken_0x198194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x198198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198194u;
            // 0x198198: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198194) {
            ctx->pc = 0x1981DCu;
            goto label_1981dc;
        }
    }
    ctx->pc = 0x19819Cu;
    // 0x19819c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1981a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1981A0u;
    {
        const bool branch_taken_0x1981a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1981a0) {
            ctx->pc = 0x1981B0u;
            goto label_1981b0;
        }
    }
    ctx->pc = 0x1981A8u;
    // 0x1981a8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1981A8u;
    {
        const bool branch_taken_0x1981a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981A8u;
            // 0x1981ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981a8) {
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x1981B0u;
label_1981b0:
    // 0x1981b0: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1981B0u;
    SET_GPR_U32(ctx, 31, 0x1981B8u);
    ctx->pc = 0x1981B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1981B0u;
            // 0x1981b4: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981B8u; }
        if (ctx->pc != 0x1981B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981B8u; }
        if (ctx->pc != 0x1981B8u) { return; }
    }
    ctx->pc = 0x1981B8u;
label_1981b8:
    // 0x1981b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1981b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1981bc: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1981bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1981c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1981c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1981c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1981c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1981c8: 0x0  nop
    ctx->pc = 0x1981c8u;
    // NOP
    // 0x1981cc: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1981CCu;
    {
        const bool branch_taken_0x1981cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1981D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981CCu;
            // 0x1981d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981cc) {
            ctx->pc = 0x198254u;
            goto label_198254;
        }
    }
    ctx->pc = 0x1981D4u;
    // 0x1981d4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1981D4u;
    {
        const bool branch_taken_0x1981d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981D4u;
            // 0x1981d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d4) {
            ctx->pc = 0x19825Cu;
            goto label_19825c;
        }
    }
    ctx->pc = 0x1981DCu;
label_1981dc:
    // 0x1981dc: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x1981dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1981e0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1981e4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1981E4u;
    {
        const bool branch_taken_0x1981e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1981e4) {
            ctx->pc = 0x198218u;
            goto label_198218;
        }
    }
    ctx->pc = 0x1981ECu;
    // 0x1981ec: 0xc0945c8  jal         func_251720
    ctx->pc = 0x1981ECu;
    SET_GPR_U32(ctx, 31, 0x1981F4u);
    ctx->pc = 0x1981F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1981ECu;
            // 0x1981f0: 0xc60c001c  lwc1        $f12, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981F4u; }
        if (ctx->pc != 0x1981F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981F4u; }
        if (ctx->pc != 0x1981F4u) { return; }
    }
    ctx->pc = 0x1981F4u;
label_1981f4:
    // 0x1981f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1981f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1981f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1981f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1981fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1981fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198204: 0x0  nop
    ctx->pc = 0x198204u;
    // NOP
    // 0x198208: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x198208u;
    {
        const bool branch_taken_0x198208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198208u;
            // 0x19820c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198208) {
            ctx->pc = 0x198218u;
            goto label_198218;
        }
    }
    ctx->pc = 0x198210u;
    // 0x198210: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x198210u;
    {
        const bool branch_taken_0x198210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198210) {
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x198218u;
label_198218:
    // 0x198218: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x198218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19821c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x19821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x198220: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x198220u;
    {
        const bool branch_taken_0x198220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x198220) {
            ctx->pc = 0x198254u;
            goto label_198254;
        }
    }
    ctx->pc = 0x198228u;
    // 0x198228: 0xc0945c8  jal         func_251720
    ctx->pc = 0x198228u;
    SET_GPR_U32(ctx, 31, 0x198230u);
    ctx->pc = 0x19822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198228u;
            // 0x19822c: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198230u; }
        if (ctx->pc != 0x198230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198230u; }
        if (ctx->pc != 0x198230u) { return; }
    }
    ctx->pc = 0x198230u;
label_198230:
    // 0x198230: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x198230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198234: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x198234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198238: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x198238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19823c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19823cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198240: 0x0  nop
    ctx->pc = 0x198240u;
    // NOP
    // 0x198244: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x198244u;
    {
        const bool branch_taken_0x198244 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x198248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198244u;
            // 0x198248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198244) {
            ctx->pc = 0x198254u;
            goto label_198254;
        }
    }
    ctx->pc = 0x19824Cu;
    // 0x19824c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19824Cu;
    {
        const bool branch_taken_0x19824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19824c) {
            ctx->pc = 0x198258u;
            goto label_198258;
        }
    }
    ctx->pc = 0x198254u;
label_198254:
    // 0x198254: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198258:
    // 0x198258: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x198258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19825c:
    // 0x19825c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19825cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198260: 0x3e00008  jr          $ra
    ctx->pc = 0x198260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198260u;
            // 0x198264: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198268u;
}
