#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFishAdjustScale__Fiiff
// Address: 0x20d2d0 - 0x20d344
void SetFishAdjustScale__Fiiff_0x20d2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFishAdjustScale__Fiiff_0x20d2d0");
#endif

    switch (ctx->pc) {
        case 0x20d2f8u: goto label_20d2f8;
        default: break;
    }

    ctx->pc = 0x20d2d0u;

    // 0x20d2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d2d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d2d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20d2dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20d2dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20d2e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20d2e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20d2e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x20d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2ec: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x20d2ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x20d2f0: 0xc065718  jal         func_195C60
    ctx->pc = 0x20D2F0u;
    SET_GPR_U32(ctx, 31, 0x20D2F8u);
    ctx->pc = 0x20D2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20D2F0u;
            // 0x20d2f4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C60u;
    if (runtime->hasFunction(0x195C60u)) {
        auto targetFn = runtime->lookupFunction(0x195C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2F8u; }
        if (ctx->pc != 0x20D2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBreedFishInfoData__Fi_0x195c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2F8u; }
        if (ctx->pc != 0x20D2F8u) { return; }
    }
    ctx->pc = 0x20D2F8u;
label_20d2f8:
    // 0x20d2f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D2F8u;
    {
        const bool branch_taken_0x20d2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d2f8) {
            ctx->pc = 0x20D314u;
            goto label_20d314;
        }
    }
    ctx->pc = 0x20D300u;
    // 0x20d300: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x20d300u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d304: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x20d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d308: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20d308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20d30c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x20d30cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20d310: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x20d310u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_20d314:
    // 0x20d314: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x20d314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d318: 0x0  nop
    ctx->pc = 0x20d318u;
    // NOP
    // 0x20d31c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20D31Cu;
    {
        const bool branch_taken_0x20d31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D31Cu;
            // 0x20d320: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d31c) {
            ctx->pc = 0x20D32Cu;
            goto label_20d32c;
        }
    }
    ctx->pc = 0x20D324u;
    // 0x20d324: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x20d324u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x20d328: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x20d328u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_20d32c:
    // 0x20d32c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d330: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d334: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20d334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d338: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20d338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d33c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D33Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D33Cu;
            // 0x20d340: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D344u;
}
