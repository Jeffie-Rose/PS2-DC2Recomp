#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MonsterScaleCheck__FP11CCharacter2
// Address: 0x2b62d0 - 0x2b6334
void MonsterScaleCheck__FP11CCharacter2_0x2b62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MonsterScaleCheck__FP11CCharacter2_0x2b62d0");
#endif

    switch (ctx->pc) {
        case 0x2b62d0u: goto label_2b62d0;
        case 0x2b62d4u: goto label_2b62d4;
        case 0x2b62d8u: goto label_2b62d8;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62e0u: goto label_2b62e0;
        case 0x2b62e4u: goto label_2b62e4;
        case 0x2b62e8u: goto label_2b62e8;
        case 0x2b62ecu: goto label_2b62ec;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b62f4u: goto label_2b62f4;
        case 0x2b62f8u: goto label_2b62f8;
        case 0x2b62fcu: goto label_2b62fc;
        case 0x2b6300u: goto label_2b6300;
        case 0x2b6304u: goto label_2b6304;
        case 0x2b6308u: goto label_2b6308;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6310u: goto label_2b6310;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b6318u: goto label_2b6318;
        case 0x2b631cu: goto label_2b631c;
        case 0x2b6320u: goto label_2b6320;
        case 0x2b6324u: goto label_2b6324;
        case 0x2b6328u: goto label_2b6328;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6330u: goto label_2b6330;
        default: break;
    }

    ctx->pc = 0x2b62d0u;

label_2b62d0:
    // 0x2b62d0: 0xc4820110  lwc1        $f2, 0x110($a0)
    ctx->pc = 0x2b62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b62d4:
    // 0x2b62d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b62d8:
    // 0x2b62d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b62d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b62dc:
    // 0x2b62dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b62dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b62e0:
    // 0x2b62e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b62e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b62e4:
    // 0x2b62e4: 0x0  nop
    ctx->pc = 0x2b62e4u;
    // NOP
label_2b62e8:
    // 0x2b62e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2b62ec:
    if (ctx->pc == 0x2B62ECu) {
        ctx->pc = 0x2B62ECu;
            // 0x2b62ec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x2B62F0u;
        goto label_2b62f0;
    }
    ctx->pc = 0x2B62E8u;
    {
        const bool branch_taken_0x2b62e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B62E8u;
            // 0x2b62ec: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62e8) {
            ctx->pc = 0x2B62F4u;
            goto label_2b62f4;
        }
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2b62f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_2b62f4:
    // 0x2b62f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2b62f8:
    // 0x2b62f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b62f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b62fc:
    // 0x2b62fc: 0x0  nop
    ctx->pc = 0x2b62fcu;
    // NOP
label_2b6300:
    // 0x2b6300: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b6300u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b6304:
    // 0x2b6304: 0x0  nop
    ctx->pc = 0x2b6304u;
    // NOP
label_2b6308:
    // 0x2b6308: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2b630c:
    if (ctx->pc == 0x2B630Cu) {
        ctx->pc = 0x2B630Cu;
            // 0x2b630c: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->pc = 0x2B6310u;
        goto label_2b6310;
    }
    ctx->pc = 0x2B6308u;
    {
        const bool branch_taken_0x2b6308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6308u;
            // 0x2b630c: 0x3c0240e0  lui         $v0, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6308) {
            ctx->pc = 0x2B631Cu;
            goto label_2b631c;
        }
    }
    ctx->pc = 0x2B6310u;
label_2b6310:
    // 0x2b6310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b6314:
    // 0x2b6314: 0x0  nop
    ctx->pc = 0x2b6314u;
    // NOP
label_2b6318:
    // 0x2b6318: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x2b6318u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_2b631c:
    // 0x2b631c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b631cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b6320:
    // 0x2b6320: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6320u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2b6324:
    // 0x2b6324: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b6324u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_2b6328:
    // 0x2b6328: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2b632c:
    // 0x2b632c: 0x3200008  jr          $t9
label_2b6330:
    if (ctx->pc == 0x2B6330u) {
        ctx->pc = 0x2B6334u;
        goto label_fallthrough_0x2b632c;
    }
    ctx->pc = 0x2B632Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b632c:
    ctx->pc = 0x2B6334u;
}
