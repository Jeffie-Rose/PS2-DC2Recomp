#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAdjustPolygonScale__FP11CCharacter2f
// Address: 0x2508d0 - 0x250948
void MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAdjustPolygonScale__FP11CCharacter2f_0x2508d0");
#endif

    switch (ctx->pc) {
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        case 0x25092cu: goto label_25092c;
        case 0x250930u: goto label_250930;
        case 0x250934u: goto label_250934;
        case 0x250938u: goto label_250938;
        case 0x25093cu: goto label_25093c;
        case 0x250940u: goto label_250940;
        case 0x250944u: goto label_250944;
        default: break;
    }

    ctx->pc = 0x2508d0u;

label_2508d0:
    // 0x2508d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2508d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2508d4:
    // 0x2508d4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_2508d8:
    if (ctx->pc == 0x2508D8u) {
        ctx->pc = 0x2508D8u;
            // 0x2508d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2508DCu;
        goto label_2508dc;
    }
    ctx->pc = 0x2508D4u;
    {
        const bool branch_taken_0x2508d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2508D4u;
            // 0x2508d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508d4) {
            ctx->pc = 0x25093Cu;
            goto label_25093c;
        }
    }
    ctx->pc = 0x2508DCu;
label_2508dc:
    // 0x2508dc: 0xc4820110  lwc1        $f2, 0x110($a0)
    ctx->pc = 0x2508dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2508e0:
    // 0x2508e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2508e4:
    // 0x2508e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2508e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2508e8:
    // 0x2508e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2508e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2508ec:
    // 0x2508ec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2508ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2508f0:
    // 0x2508f0: 0x0  nop
    ctx->pc = 0x2508f0u;
    // NOP
label_2508f4:
    // 0x2508f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2508f8:
    if (ctx->pc == 0x2508F8u) {
        ctx->pc = 0x2508F8u;
            // 0x2508f8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x2508FCu;
        goto label_2508fc;
    }
    ctx->pc = 0x2508F4u;
    {
        const bool branch_taken_0x2508f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2508F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2508F4u;
            // 0x2508f8: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508f4) {
            ctx->pc = 0x250900u;
            goto label_250900;
        }
    }
    ctx->pc = 0x2508FCu;
label_2508fc:
    // 0x2508fc: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2508fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_250900:
    // 0x250900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x250900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_250904:
    // 0x250904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250908:
    // 0x250908: 0x0  nop
    ctx->pc = 0x250908u;
    // NOP
label_25090c:
    // 0x25090c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x25090cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_250910:
    // 0x250910: 0x0  nop
    ctx->pc = 0x250910u;
    // NOP
label_250914:
    // 0x250914: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_250918:
    if (ctx->pc == 0x250918u) {
        ctx->pc = 0x25091Cu;
        goto label_25091c;
    }
    ctx->pc = 0x250914u;
    {
        const bool branch_taken_0x250914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x250914) {
            ctx->pc = 0x250928u;
            goto label_250928;
        }
    }
    ctx->pc = 0x25091Cu;
label_25091c:
    // 0x25091c: 0x0  nop
    ctx->pc = 0x25091cu;
    // NOP
label_250920:
    // 0x250920: 0x0  nop
    ctx->pc = 0x250920u;
    // NOP
label_250924:
    // 0x250924: 0x46026343  div.s       $f13, $f12, $f2
    ctx->pc = 0x250924u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
label_250928:
    // 0x250928: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x250928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25092c:
    // 0x25092c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x25092cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_250930:
    // 0x250930: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x250930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_250934:
    // 0x250934: 0x320f809  jalr        $t9
label_250938:
    if (ctx->pc == 0x250938u) {
        ctx->pc = 0x250938u;
            // 0x250938: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x25093Cu;
        goto label_25093c;
    }
    ctx->pc = 0x250934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25093Cu);
        ctx->pc = 0x250938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250934u;
            // 0x250938: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25093Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25093Cu; }
            if (ctx->pc != 0x25093Cu) { return; }
        }
        }
    }
    ctx->pc = 0x25093Cu;
label_25093c:
    // 0x25093c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25093cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250940:
    // 0x250940: 0x3e00008  jr          $ra
label_250944:
    if (ctx->pc == 0x250944u) {
        ctx->pc = 0x250944u;
            // 0x250944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x250948u;
        goto label_fallthrough_0x250940;
    }
    ctx->pc = 0x250940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250940u;
            // 0x250944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x250940:
    ctx->pc = 0x250948u;
}
