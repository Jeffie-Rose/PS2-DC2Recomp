#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CmpEditAlt__8CEditMapFff
// Address: 0x1b11d0 - 0x1b121c
void CmpEditAlt__8CEditMapFff_0x1b11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CmpEditAlt__8CEditMapFff_0x1b11d0");
#endif

    ctx->pc = 0x1b11d0u;

    // 0x1b11d0: 0x460d6041  sub.s       $f1, $f12, $f13
    ctx->pc = 0x1b11d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x1b11d4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b11d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b11d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b11dc: 0x0  nop
    ctx->pc = 0x1b11dcu;
    // NOP
    // 0x1b11e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b11e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b11e4: 0x0  nop
    ctx->pc = 0x1b11e4u;
    // NOP
    // 0x1b11e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11E8u;
            // 0x1b11ec: 0x3c03bf00  lui         $v1, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B11F8u;
            goto label_1b11f8;
        }
    }
    ctx->pc = 0x1B11F0u;
    // 0x1b11f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B11F0u;
    {
        const bool branch_taken_0x1b11f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11F0u;
            // 0x1b11f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f0) {
            ctx->pc = 0x1B1214u;
            goto label_1b1214;
        }
    }
    ctx->pc = 0x1B11F8u;
label_1b11f8:
    // 0x1b11f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b11f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b11fc: 0x0  nop
    ctx->pc = 0x1b11fcu;
    // NOP
    // 0x1b1200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b1200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1204: 0x0  nop
    ctx->pc = 0x1b1204u;
    // NOP
    // 0x1b1208: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1208u;
    {
        const bool branch_taken_0x1b1208 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B120Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1208u;
            // 0x1b120c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1208) {
            ctx->pc = 0x1B1214u;
            goto label_1b1214;
        }
    }
    ctx->pc = 0x1B1210u;
    // 0x1b1210: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b1210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1214:
    // 0x1b1214: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B121Cu;
}
