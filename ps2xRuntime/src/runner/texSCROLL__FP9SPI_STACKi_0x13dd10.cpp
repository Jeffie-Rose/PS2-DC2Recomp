#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: texSCROLL__FP9SPI_STACKi
// Address: 0x13dd10 - 0x13df74
void texSCROLL__FP9SPI_STACKi_0x13dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("texSCROLL__FP9SPI_STACKi_0x13dd10");
#endif

    switch (ctx->pc) {
        case 0x13dd48u: goto label_13dd48;
        case 0x13dd64u: goto label_13dd64;
        case 0x13dda4u: goto label_13dda4;
        case 0x13dddcu: goto label_13dddc;
        case 0x13de04u: goto label_13de04;
        case 0x13de14u: goto label_13de14;
        case 0x13de24u: goto label_13de24;
        case 0x13de3cu: goto label_13de3c;
        case 0x13de80u: goto label_13de80;
        case 0x13dea4u: goto label_13dea4;
        default: break;
    }

    ctx->pc = 0x13dd10u;

    // 0x13dd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13dd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13dd18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13dd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13dd1c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x13dd1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x13dd20: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x13dd20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x13dd24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13dd24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13dd28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dd2c: 0x80230e70  lb          $v1, 0xE70($at)
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 3696)));
    // 0x13dd30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13dd34: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13DD34u;
    {
        const bool branch_taken_0x13dd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13dd34) {
            ctx->pc = 0x13DDECu;
            goto label_13ddec;
        }
    }
    ctx->pc = 0x13DD3Cu;
    // 0x13dd3c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13dd3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13dd40: 0xc05190c  jal         func_146430
    ctx->pc = 0x13DD40u;
    SET_GPR_U32(ctx, 31, 0x13DD48u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DD48u; }
        if (ctx->pc != 0x13DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DD48u; }
        if (ctx->pc != 0x13DD48u) { return; }
    }
    ctx->pc = 0x13DD48u;
label_13dd48:
    // 0x13dd48: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x13dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x13dd4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13dd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dd50: 0x0  nop
    ctx->pc = 0x13dd50u;
    // NOP
    // 0x13dd54: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x13dd54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dd58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd5c: 0xc05190c  jal         func_146430
    ctx->pc = 0x13DD5Cu;
    SET_GPR_U32(ctx, 31, 0x13DD64u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DD64u; }
        if (ctx->pc != 0x13DD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DD64u; }
        if (ctx->pc != 0x13DD64u) { return; }
    }
    ctx->pc = 0x13DD64u;
label_13dd64:
    // 0x13dd64: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x13dd68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13dd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13dd6c: 0x0  nop
    ctx->pc = 0x13dd6cu;
    // NOP
    // 0x13dd70: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x13dd70u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dd74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dd78: 0x84220e88  lh          $v0, 0xE88($at)
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 3720)));
    // 0x13dd7c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13dd80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dd84: 0x0  nop
    ctx->pc = 0x13dd84u;
    // NOP
    // 0x13dd88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13dd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13dd8c: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x13dd8cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x13dd90: 0x0  nop
    ctx->pc = 0x13dd90u;
    // NOP
    // 0x13dd94: 0x0  nop
    ctx->pc = 0x13dd94u;
    // NOP
    // 0x13dd98: 0x0  nop
    ctx->pc = 0x13dd98u;
    // NOP
    // 0x13dd9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DD9Cu;
    SET_GPR_U32(ctx, 31, 0x13DDA4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DDA4u; }
        if (ctx->pc != 0x13DDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DDA4u; }
        if (ctx->pc != 0x13DDA4u) { return; }
    }
    ctx->pc = 0x13DDA4u;
label_13dda4:
    // 0x13dda4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dda8: 0xa4220e8c  sh          $v0, 0xE8C($at)
    ctx->pc = 0x13dda8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3724), (uint16_t)GPR_U32(ctx, 2));
    // 0x13ddac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13ddacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13ddb0: 0x84220e8a  lh          $v0, 0xE8A($at)
    ctx->pc = 0x13ddb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 3722)));
    // 0x13ddb4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x13ddb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ddb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ddbc: 0x0  nop
    ctx->pc = 0x13ddbcu;
    // NOP
    // 0x13ddc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13ddc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13ddc4: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x13ddc4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[21]); }
    // 0x13ddc8: 0x0  nop
    ctx->pc = 0x13ddc8u;
    // NOP
    // 0x13ddcc: 0x0  nop
    ctx->pc = 0x13ddccu;
    // NOP
    // 0x13ddd0: 0x0  nop
    ctx->pc = 0x13ddd0u;
    // NOP
    // 0x13ddd4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DDD4u;
    SET_GPR_U32(ctx, 31, 0x13DDDCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DDDCu; }
        if (ctx->pc != 0x13DDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DDDCu; }
        if (ctx->pc != 0x13DDDCu) { return; }
    }
    ctx->pc = 0x13DDDCu;
label_13dddc:
    // 0x13dddc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dde0: 0xa4220e8e  sh          $v0, 0xE8E($at)
    ctx->pc = 0x13dde0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3726), (uint16_t)GPR_U32(ctx, 2));
    // 0x13dde4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x13DDE4u;
    {
        const bool branch_taken_0x13dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dde4) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DDECu;
label_13ddec:
    // 0x13ddec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ddf0: 0x14620054  bne         $v1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x13DDF0u;
    {
        const bool branch_taken_0x13ddf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ddf0) {
            ctx->pc = 0x13DF44u;
            goto label_13df44;
        }
    }
    ctx->pc = 0x13DDF8u;
    // 0x13ddf8: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x13ddf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13ddfc: 0xc05190c  jal         func_146430
    ctx->pc = 0x13DDFCu;
    SET_GPR_U32(ctx, 31, 0x13DE04u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE04u; }
        if (ctx->pc != 0x13DE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE04u; }
        if (ctx->pc != 0x13DE04u) { return; }
    }
    ctx->pc = 0x13DE04u;
label_13de04:
    // 0x13de04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13de04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x13de08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13de08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de0c: 0xc05190c  jal         func_146430
    ctx->pc = 0x13DE0Cu;
    SET_GPR_U32(ctx, 31, 0x13DE14u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE14u; }
        if (ctx->pc != 0x13DE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE14u; }
        if (ctx->pc != 0x13DE14u) { return; }
    }
    ctx->pc = 0x13DE14u;
label_13de14:
    // 0x13de14: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x13de14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x13de18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13de18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13de1c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DE1Cu;
    SET_GPR_U32(ctx, 31, 0x13DE24u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE24u; }
        if (ctx->pc != 0x13DE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE24u; }
        if (ctx->pc != 0x13DE24u) { return; }
    }
    ctx->pc = 0x13DE24u;
label_13de24:
    // 0x13de24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13de24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13de28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13de2c: 0xa4220e8c  sh          $v0, 0xE8C($at)
    ctx->pc = 0x13de2cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3724), (uint16_t)GPR_U32(ctx, 2));
    // 0x13de30: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x13de30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x13de34: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DE34u;
    SET_GPR_U32(ctx, 31, 0x13DE3Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE3Cu; }
        if (ctx->pc != 0x13DE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE3Cu; }
        if (ctx->pc != 0x13DE3Cu) { return; }
    }
    ctx->pc = 0x13DE3Cu;
label_13de3c:
    // 0x13de3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13de3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13de40: 0xa4220e8e  sh          $v0, 0xE8E($at)
    ctx->pc = 0x13de40u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3726), (uint16_t)GPR_U32(ctx, 2));
    // 0x13de44: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x13de44u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13de48: 0x0  nop
    ctx->pc = 0x13de48u;
    // NOP
    // 0x13de4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13de4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13de50: 0x4600a581  sub.s       $f22, $f20, $f0
    ctx->pc = 0x13de50u;
    ctx->f[22] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x13de54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13de54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13de58: 0x0  nop
    ctx->pc = 0x13de58u;
    // NOP
    // 0x13de5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13de5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13de60: 0x4600ad01  sub.s       $f20, $f21, $f0
    ctx->pc = 0x13de60u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x13de64: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13de64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13de68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13de68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13de6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13de6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13de70: 0x0  nop
    ctx->pc = 0x13de70u;
    // NOP
    // 0x13de74: 0x46160302  mul.s       $f12, $f0, $f22
    ctx->pc = 0x13de74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x13de78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DE78u;
    SET_GPR_U32(ctx, 31, 0x13DE80u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE80u; }
        if (ctx->pc != 0x13DE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DE80u; }
        if (ctx->pc != 0x13DE80u) { return; }
    }
    ctx->pc = 0x13DE80u;
label_13de80:
    // 0x13de80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13de80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13de84: 0xa4220e94  sh          $v0, 0xE94($at)
    ctx->pc = 0x13de84u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3732), (uint16_t)GPR_U32(ctx, 2));
    // 0x13de88: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x13de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x13de8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13de8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x13de90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13de90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13de94: 0x0  nop
    ctx->pc = 0x13de94u;
    // NOP
    // 0x13de98: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x13de98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x13de9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x13DE9Cu;
    SET_GPR_U32(ctx, 31, 0x13DEA4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DEA4u; }
        if (ctx->pc != 0x13DEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DEA4u; }
        if (ctx->pc != 0x13DEA4u) { return; }
    }
    ctx->pc = 0x13DEA4u;
label_13dea4:
    // 0x13dea4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13dea8: 0xa4220e96  sh          $v0, 0xE96($at)
    ctx->pc = 0x13dea8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3734), (uint16_t)GPR_U32(ctx, 2));
    // 0x13deac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13deacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13deb0: 0x0  nop
    ctx->pc = 0x13deb0u;
    // NOP
    // 0x13deb4: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x13deb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13deb8: 0x0  nop
    ctx->pc = 0x13deb8u;
    // NOP
    // 0x13debc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13DEBCu;
    {
        const bool branch_taken_0x13debc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13debc) {
            ctx->pc = 0x13DEC8u;
            goto label_13dec8;
        }
    }
    ctx->pc = 0x13DEC4u;
    // 0x13dec4: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x13dec4u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_13dec8:
    // 0x13dec8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x13dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x13decc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x13deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x13ded0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13ded0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ded4: 0x0  nop
    ctx->pc = 0x13ded4u;
    // NOP
    // 0x13ded8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x13ded8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13dedc: 0x0  nop
    ctx->pc = 0x13dedcu;
    // NOP
    // 0x13dee0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x13DEE0u;
    {
        const bool branch_taken_0x13dee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13dee0) {
            ctx->pc = 0x13DEF4u;
            goto label_13def4;
        }
    }
    ctx->pc = 0x13DEE8u;
    // 0x13dee8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x13dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x13deec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13deecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13def0: 0xa4220e94  sh          $v0, 0xE94($at)
    ctx->pc = 0x13def0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3732), (uint16_t)GPR_U32(ctx, 2));
label_13def4:
    // 0x13def4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13def4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13def8: 0x0  nop
    ctx->pc = 0x13def8u;
    // NOP
    // 0x13defc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13defcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13df00: 0x0  nop
    ctx->pc = 0x13df00u;
    // NOP
    // 0x13df04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF04u;
    {
        const bool branch_taken_0x13df04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13df04) {
            ctx->pc = 0x13DF10u;
            goto label_13df10;
        }
    }
    ctx->pc = 0x13DF0Cu;
    // 0x13df0c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x13df0cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_13df10:
    // 0x13df10: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x13df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x13df14: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x13df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x13df18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13df1c: 0x0  nop
    ctx->pc = 0x13df1cu;
    // NOP
    // 0x13df20: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13df20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13df24: 0x0  nop
    ctx->pc = 0x13df24u;
    // NOP
    // 0x13df28: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x13DF28u;
    {
        const bool branch_taken_0x13df28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13df28) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF30u;
    // 0x13df30: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x13df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x13df34: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x13df34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x13df38: 0xa4220e96  sh          $v0, 0xE96($at)
    ctx->pc = 0x13df38u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 3734), (uint16_t)GPR_U32(ctx, 2));
    // 0x13df3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13DF3Cu;
    {
        const bool branch_taken_0x13df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df3c) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF44u;
label_13df44:
    // 0x13df44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13df44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13df48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DF50u;
label_13df50:
    // 0x13df50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13df54:
    // 0x13df54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13df58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13df5c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x13df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13df60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x13df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13df64: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x13df64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13df68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13df68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13df6c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DF74u;
}
