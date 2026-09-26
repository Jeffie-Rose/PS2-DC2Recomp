#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuDrawParamStep__Fv
// Address: 0x22b3b0 - 0x22b424
void MenuDrawParamStep__Fv_0x22b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuDrawParamStep__Fv_0x22b3b0");
#endif

    switch (ctx->pc) {
        case 0x22b3c0u: goto label_22b3c0;
        case 0x22b3c8u: goto label_22b3c8;
        default: break;
    }

    ctx->pc = 0x22b3b0u;

    // 0x22b3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b3b8: 0xc0893d0  jal         func_224F40
    ctx->pc = 0x22B3B8u;
    SET_GPR_U32(ctx, 31, 0x22B3C0u);
    ctx->pc = 0x224F40u;
    if (runtime->hasFunction(0x224F40u)) {
        auto targetFn = runtime->lookupFunction(0x224F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3C0u; }
        if (ctx->pc != 0x22B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuWakuStep__Fv_0x224f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3C0u; }
        if (ctx->pc != 0x22B3C0u) { return; }
    }
    ctx->pc = 0x22B3C0u;
label_22b3c0:
    // 0x22b3c0: 0xc08819c  jal         func_220670
    ctx->pc = 0x22B3C0u;
    SET_GPR_U32(ctx, 31, 0x22B3C8u);
    ctx->pc = 0x220670u;
    if (runtime->hasFunction(0x220670u)) {
        auto targetFn = runtime->lookupFunction(0x220670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3C8u; }
        if (ctx->pc != 0x22B3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableUseItemAlphaStep__Fv_0x220670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B3C8u; }
        if (ctx->pc != 0x22B3C8u) { return; }
    }
    ctx->pc = 0x22B3C8u;
label_22b3c8:
    // 0x22b3c8: 0xc7829358  lwc1        $f2, -0x6CA8($gp)
    ctx->pc = 0x22b3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22b3cc: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x22b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x22b3d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22b3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22b3d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22b3d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22b3d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b3dc: 0x0  nop
    ctx->pc = 0x22b3dcu;
    // NOP
    // 0x22b3e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x22b3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22b3e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b3e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b3e8: 0x0  nop
    ctx->pc = 0x22b3e8u;
    // NOP
    // 0x22b3ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B3ECu;
    {
        const bool branch_taken_0x22b3ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22B3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B3ECu;
            // 0x22b3f0: 0xe7819358  swc1        $f1, -0x6CA8($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b3ec) {
            ctx->pc = 0x22B3F8u;
            goto label_22b3f8;
        }
    }
    ctx->pc = 0x22B3F4u;
    // 0x22b3f4: 0xaf809358  sw          $zero, -0x6CA8($gp)
    ctx->pc = 0x22b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939480), GPR_U32(ctx, 0));
label_22b3f8:
    // 0x22b3f8: 0x8383935c  lb          $v1, -0x6CA4($gp)
    ctx->pc = 0x22b3f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x22b3fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b400: 0xa383935c  sb          $v1, -0x6CA4($gp)
    ctx->pc = 0x22b400u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939484), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b404: 0x8383935c  lb          $v1, -0x6CA4($gp)
    ctx->pc = 0x22b404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939484)));
    // 0x22b408: 0x28630050  slti        $v1, $v1, 0x50
    ctx->pc = 0x22b408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x22b40c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B40Cu;
    {
        const bool branch_taken_0x22b40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b40c) {
            ctx->pc = 0x22B418u;
            goto label_22b418;
        }
    }
    ctx->pc = 0x22B414u;
    // 0x22b414: 0xa380935c  sb          $zero, -0x6CA4($gp)
    ctx->pc = 0x22b414u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939484), (uint8_t)GPR_U32(ctx, 0));
label_22b418:
    // 0x22b418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b41c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B41Cu;
            // 0x22b420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B424u;
}
