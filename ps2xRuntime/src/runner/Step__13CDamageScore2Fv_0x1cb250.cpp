#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CDamageScore2Fv
// Address: 0x1cb250 - 0x1cb3dc
void Step__13CDamageScore2Fv_0x1cb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CDamageScore2Fv_0x1cb250");
#endif

    switch (ctx->pc) {
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2c4u: goto label_1cb2c4;
        case 0x1cb390u: goto label_1cb390;
        default: break;
    }

    ctx->pc = 0x1cb250u;

    // 0x1cb250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cb258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cb25c: 0x8c86001c  lw          $a2, 0x1C($a0)
    ctx->pc = 0x1cb25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1cb260: 0x10c0005a  beqz        $a2, . + 4 + (0x5A << 2)
    ctx->pc = 0x1CB260u;
    {
        const bool branch_taken_0x1cb260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB260u;
            // 0x1cb264: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb260) {
            ctx->pc = 0x1CB3CCu;
            goto label_1cb3cc;
        }
    }
    ctx->pc = 0x1CB268u;
    // 0x1cb268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb26c: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB26Cu;
    {
        const bool branch_taken_0x1cb26c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb26c) {
            ctx->pc = 0x1CB2FCu;
            goto label_1cb2fc;
        }
    }
    ctx->pc = 0x1CB274u;
    // 0x1cb274: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb278: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1cb278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1cb27c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1cb27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1cb280: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cb280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb284: 0x3c02c016  lui         $v0, 0xC016
    ctx->pc = 0x1cb284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49174 << 16));
    // 0x1cb288: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1cb288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1cb28c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb290: 0x0  nop
    ctx->pc = 0x1cb290u;
    // NOP
    // 0x1cb294: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cb294u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cb298: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cb29c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1cb29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb2a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cb2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cb2a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1cb2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1cb2a8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb2ac: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1CB2ACu;
    SET_GPR_U32(ctx, 31, 0x1CB2B4u);
    ctx->pc = 0x1CB2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2ACu;
            // 0x1cb2b0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2B4u; }
        if (ctx->pc != 0x1CB2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2B4u; }
        if (ctx->pc != 0x1CB2B4u) { return; }
    }
    ctx->pc = 0x1CB2B4u;
label_1cb2b4:
    // 0x1cb2b4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1cb2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1cb2b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb2bc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CB2BCu;
    SET_GPR_U32(ctx, 31, 0x1CB2C4u);
    ctx->pc = 0x1CB2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2BCu;
            // 0x1cb2c0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2C4u; }
        if (ctx->pc != 0x1CB2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB2C4u; }
        if (ctx->pc != 0x1CB2C4u) { return; }
    }
    ctx->pc = 0x1CB2C4u;
label_1cb2c4:
    // 0x1cb2c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb2c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cb2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb2cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb2d0: 0x0  nop
    ctx->pc = 0x1cb2d0u;
    // NOP
    // 0x1cb2d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cb2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1cb2d8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb2dc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb2e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cb2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb2e4: 0x0  nop
    ctx->pc = 0x1cb2e4u;
    // NOP
    // 0x1cb2e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB2E8u;
    {
        const bool branch_taken_0x1cb2e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB2E8u;
            // 0x1cb2ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb2e8) {
            ctx->pc = 0x1CB2FCu;
            goto label_1cb2fc;
        }
    }
    ctx->pc = 0x1CB2F0u;
    // 0x1cb2f0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1cb2f4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cb2f8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1cb2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1cb2fc:
    // 0x1cb2fc: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1cb2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cb300: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cb300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb304: 0x14c30010  bne         $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB304u;
    {
        const bool branch_taken_0x1cb304 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb304) {
            ctx->pc = 0x1CB348u;
            goto label_1cb348;
        }
    }
    ctx->pc = 0x1CB30Cu;
    // 0x1cb30c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1cb30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cb310: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1cb310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1cb314: 0x3466cccd  ori         $a2, $v1, 0xCCCD
    ctx->pc = 0x1cb314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1cb318: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1cb318u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb31c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb324: 0x0  nop
    ctx->pc = 0x1cb324u;
    // NOP
    // 0x1cb328: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1cb328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1cb32c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb330: 0x0  nop
    ctx->pc = 0x1cb330u;
    // NOP
    // 0x1cb334: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB334u;
    {
        const bool branch_taken_0x1cb334 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB334u;
            // 0x1cb338: 0xe6010024  swc1        $f1, 0x24($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb334) {
            ctx->pc = 0x1CB348u;
            goto label_1cb348;
        }
    }
    ctx->pc = 0x1CB33Cu;
    // 0x1cb33c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb340: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1cb340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1cb344: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1cb348:
    // 0x1cb348: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1cb348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cb34c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb350: 0x14c3001e  bne         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CB350u;
    {
        const bool branch_taken_0x1cb350 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cb350) {
            ctx->pc = 0x1CB3CCu;
            goto label_1cb3cc;
        }
    }
    ctx->pc = 0x1CB358u;
    // 0x1cb358: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb35c: 0x3c023e00  lui         $v0, 0x3E00
    ctx->pc = 0x1cb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15872 << 16));
    // 0x1cb360: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cb360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb364: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1cb364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1cb368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb36c: 0x0  nop
    ctx->pc = 0x1cb36cu;
    // NOP
    // 0x1cb370: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1cb370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1cb374: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cb378: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1cb378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb37c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1cb37cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1cb380: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1cb380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1cb384: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb388: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1CB388u;
    SET_GPR_U32(ctx, 31, 0x1CB390u);
    ctx->pc = 0x1CB38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB388u;
            // 0x1cb38c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB390u; }
        if (ctx->pc != 0x1CB390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CB390u; }
        if (ctx->pc != 0x1CB390u) { return; }
    }
    ctx->pc = 0x1CB390u;
label_1cb390:
    // 0x1cb390: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb394: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cb394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb398: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cb398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb39c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cb39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cb3a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb3a4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cb3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb3a8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1cb3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb3ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb3acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb3b0: 0x0  nop
    ctx->pc = 0x1cb3b0u;
    // NOP
    // 0x1cb3b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb3b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb3b8: 0x0  nop
    ctx->pc = 0x1cb3b8u;
    // NOP
    // 0x1cb3bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB3BCu;
    {
        const bool branch_taken_0x1cb3bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb3bc) {
            ctx->pc = 0x1CB3CCu;
            goto label_1cb3cc;
        }
    }
    ctx->pc = 0x1CB3C4u;
    // 0x1cb3c4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cb3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cb3c8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1cb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1cb3cc:
    // 0x1cb3cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb3d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cb3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CB3D4u;
            // 0x1cb3d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CB3DCu;
}
