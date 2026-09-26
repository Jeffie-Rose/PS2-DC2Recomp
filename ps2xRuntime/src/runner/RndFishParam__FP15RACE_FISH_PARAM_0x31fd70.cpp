#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RndFishParam__FP15RACE_FISH_PARAM
// Address: 0x31fd70 - 0x31fe3c
void RndFishParam__FP15RACE_FISH_PARAM_0x31fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RndFishParam__FP15RACE_FISH_PARAM_0x31fd70");
#endif

    switch (ctx->pc) {
        case 0x31fd94u: goto label_31fd94;
        case 0x31fdacu: goto label_31fdac;
        case 0x31fde8u: goto label_31fde8;
        default: break;
    }

    ctx->pc = 0x31fd70u;

    // 0x31fd70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31fd74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31fd78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31fd7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31fd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31fd80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fd84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31fd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31fd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31fd8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31fd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fd90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31fd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fd94:
    // 0x31fd94: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fd98: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31fd9c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31fd9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fda0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31fda0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fda4: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FDA4u;
    SET_GPR_U32(ctx, 31, 0x31FDACu);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDACu; }
        if (ctx->pc != 0x31FDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDACu; }
        if (ctx->pc != 0x31FDACu) { return; }
    }
    ctx->pc = 0x31FDACu;
label_31fdac:
    // 0x31fdac: 0x2519821  addu        $s3, $s2, $s1
    ctx->pc = 0x31fdacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x31fdb0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x31fdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fdb4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31fdb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31fdb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31fdb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31fdbc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x31fdbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fdc0: 0x0  nop
    ctx->pc = 0x31fdc0u;
    // NOP
    // 0x31fdc4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31FDC4u;
    {
        const bool branch_taken_0x31fdc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FDC4u;
            // 0x31fdc8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fdc4) {
            ctx->pc = 0x31FDD0u;
            goto label_31fdd0;
        }
    }
    ctx->pc = 0x31FDCCu;
    // 0x31fdcc: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x31fdccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_31fdd0:
    // 0x31fdd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31fdd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31fdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31fdd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x31fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x31fddc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x31fddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31fde0: 0xc0c8190  jal         func_320640
    ctx->pc = 0x31FDE0u;
    SET_GPR_U32(ctx, 31, 0x31FDE8u);
    ctx->pc = 0x320640u;
    if (runtime->hasFunction(0x320640u)) {
        auto targetFn = runtime->lookupFunction(0x320640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDE8u; }
        if (ctx->pc != 0x31FDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandomNumber__Fff_0x320640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31FDE8u; }
        if (ctx->pc != 0x31FDE8u) { return; }
    }
    ctx->pc = 0x31FDE8u;
label_31fde8:
    // 0x31fde8: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x31fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31fdec: 0x26630014  addiu       $v1, $s3, 0x14
    ctx->pc = 0x31fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x31fdf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31fdf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31fdf4: 0x0  nop
    ctx->pc = 0x31fdf4u;
    // NOP
    // 0x31fdf8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x31fdf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31fdfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31fdfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fe00: 0x0  nop
    ctx->pc = 0x31fe00u;
    // NOP
    // 0x31fe04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31FE04u;
    {
        const bool branch_taken_0x31fe04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE04u;
            // 0x31fe08: 0xe6600014  swc1        $f0, 0x14($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe04) {
            ctx->pc = 0x31FE10u;
            goto label_31fe10;
        }
    }
    ctx->pc = 0x31FE0Cu;
    // 0x31fe0c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x31fe0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_31fe10:
    // 0x31fe10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31fe14: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x31fe14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x31fe18: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x31FE18u;
    {
        const bool branch_taken_0x31fe18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE18u;
            // 0x31fe1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe18) {
            ctx->pc = 0x31FD94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fd94;
        }
    }
    ctx->pc = 0x31FE20u;
    // 0x31fe20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31fe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31fe24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31fe24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31fe28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31fe28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fe2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fe30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fe34: 0x3e00008  jr          $ra
    ctx->pc = 0x31FE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31FE34u;
            // 0x31fe38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31FE3Cu;
}
