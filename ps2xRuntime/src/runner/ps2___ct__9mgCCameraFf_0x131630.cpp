#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9mgCCameraFf
// Address: 0x131630 - 0x13167c
void ps2___ct__9mgCCameraFf_0x131630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9mgCCameraFf_0x131630");
#endif

    ctx->pc = 0x131630u;

    // 0x131630: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131630u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131634: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x131634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x131638: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x131638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x13163c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x13163cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131640: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x131640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x131644: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x131644u;
    {
        const bool branch_taken_0x131644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x131648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131644u;
            // 0x131648: 0xe48c0048  swc1        $f12, 0x48($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131644) {
            ctx->pc = 0x131654u;
            goto label_131654;
        }
    }
    ctx->pc = 0x13164Cu;
    // 0x13164c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13164cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x131650: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x131650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_131654:
    // 0x131654: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x131654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131658: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x13165c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x13165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x131660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x131660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131664: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x131664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x131668: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x131668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x13166c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x13166cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x131670: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x131670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
    // 0x131674: 0x3e00008  jr          $ra
    ctx->pc = 0x131674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131674u;
            // 0x131678: 0xac80005c  sw          $zero, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13167Cu;
}
