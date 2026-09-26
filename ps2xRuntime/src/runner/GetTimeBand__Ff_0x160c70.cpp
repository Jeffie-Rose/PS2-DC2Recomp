#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTimeBand__Ff
// Address: 0x160c70 - 0x160d28
void GetTimeBand__Ff_0x160c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTimeBand__Ff_0x160c70");
#endif

    ctx->pc = 0x160c70u;

    // 0x160c70: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x160c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x160c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c78: 0x0  nop
    ctx->pc = 0x160c78u;
    // NOP
    // 0x160c7c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c80: 0x0  nop
    ctx->pc = 0x160c80u;
    // NOP
    // 0x160c84: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x160C84u;
    {
        const bool branch_taken_0x160c84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160C84u;
            // 0x160c88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160c84) {
            ctx->pc = 0x160CACu;
            goto label_160cac;
        }
    }
    ctx->pc = 0x160C8Cu;
    // 0x160c8c: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x160c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x160c90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160c94: 0x0  nop
    ctx->pc = 0x160c94u;
    // NOP
    // 0x160c98: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160c9c: 0x0  nop
    ctx->pc = 0x160c9cu;
    // NOP
    // 0x160ca0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x160CA0u;
    {
        const bool branch_taken_0x160ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x160CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CA0u;
            // 0x160ca4: 0x3c034110  lui         $v1, 0x4110 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ca0) {
            ctx->pc = 0x160CB0u;
            goto label_160cb0;
        }
    }
    ctx->pc = 0x160CA8u;
    // 0x160ca8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_160cac:
    // 0x160cac: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x160cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
label_160cb0:
    // 0x160cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160cb4: 0x0  nop
    ctx->pc = 0x160cb4u;
    // NOP
    // 0x160cb8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160cb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160cbc: 0x0  nop
    ctx->pc = 0x160cbcu;
    // NOP
    // 0x160cc0: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x160CC0u;
    {
        const bool branch_taken_0x160cc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CC0u;
            // 0x160cc4: 0x3c034188  lui         $v1, 0x4188 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cc0) {
            ctx->pc = 0x160CECu;
            goto label_160cec;
        }
    }
    ctx->pc = 0x160CC8u;
    // 0x160cc8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x160ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160cd0: 0x0  nop
    ctx->pc = 0x160cd0u;
    // NOP
    // 0x160cd4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160cd8: 0x0  nop
    ctx->pc = 0x160cd8u;
    // NOP
    // 0x160cdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x160CDCu;
    {
        const bool branch_taken_0x160cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160cdc) {
            ctx->pc = 0x160CE8u;
            goto label_160ce8;
        }
    }
    ctx->pc = 0x160CE4u;
    // 0x160ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x160ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160ce8:
    // 0x160ce8: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x160ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_160cec:
    // 0x160cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160cf0: 0x0  nop
    ctx->pc = 0x160cf0u;
    // NOP
    // 0x160cf4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160cf8: 0x0  nop
    ctx->pc = 0x160cf8u;
    // NOP
    // 0x160cfc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x160CFCu;
    {
        const bool branch_taken_0x160cfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160CFCu;
            // 0x160d00: 0x3c0341a8  lui         $v1, 0x41A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16808 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cfc) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160D04u;
    // 0x160d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160d08: 0x0  nop
    ctx->pc = 0x160d08u;
    // NOP
    // 0x160d0c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x160d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160d10: 0x0  nop
    ctx->pc = 0x160d10u;
    // NOP
    // 0x160d14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x160D14u;
    {
        const bool branch_taken_0x160d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160d14) {
            ctx->pc = 0x160D20u;
            goto label_160d20;
        }
    }
    ctx->pc = 0x160D1Cu;
    // 0x160d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160d20:
    // 0x160d20: 0x3e00008  jr          $ra
    ctx->pc = 0x160D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160D28u;
}
