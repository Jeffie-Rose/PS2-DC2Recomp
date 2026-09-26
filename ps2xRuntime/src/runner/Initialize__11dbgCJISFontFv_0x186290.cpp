#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__11dbgCJISFontFv
// Address: 0x186290 - 0x1862fc
void Initialize__11dbgCJISFontFv_0x186290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__11dbgCJISFontFv_0x186290");
#endif

    ctx->pc = 0x186290u;

    // 0x186290: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x186290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x186294: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x186294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x186298: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x186298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x18629c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x18629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1862a0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1862a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x1862a4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1862a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1862a8: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1862a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1862ac: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x1862acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x1862b0: 0xa0800050  sb          $zero, 0x50($a0)
    ctx->pc = 0x1862b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1862b4: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x1862b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1862b8: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x1862b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1862bc: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x1862bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x1862c0: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1862c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1862c4: 0xac86007c  sw          $a2, 0x7C($a0)
    ctx->pc = 0x1862c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 6));
    // 0x1862c8: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x1862c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x1862cc: 0xa0800088  sb          $zero, 0x88($a0)
    ctx->pc = 0x1862ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x1862d0: 0xac850894  sw          $a1, 0x894($a0)
    ctx->pc = 0x1862d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 5));
    // 0x1862d4: 0xac850890  sw          $a1, 0x890($a0)
    ctx->pc = 0x1862d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2192), GPR_U32(ctx, 5));
    // 0x1862d8: 0xac85088c  sw          $a1, 0x88C($a0)
    ctx->pc = 0x1862d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2188), GPR_U32(ctx, 5));
    // 0x1862dc: 0xac850888  sw          $a1, 0x888($a0)
    ctx->pc = 0x1862dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2184), GPR_U32(ctx, 5));
    // 0x1862e0: 0xac800898  sw          $zero, 0x898($a0)
    ctx->pc = 0x1862e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2200), GPR_U32(ctx, 0));
    // 0x1862e4: 0xac8008a4  sw          $zero, 0x8A4($a0)
    ctx->pc = 0x1862e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2212), GPR_U32(ctx, 0));
    // 0x1862e8: 0xac8008a0  sw          $zero, 0x8A0($a0)
    ctx->pc = 0x1862e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2208), GPR_U32(ctx, 0));
    // 0x1862ec: 0xac80089c  sw          $zero, 0x89C($a0)
    ctx->pc = 0x1862ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2204), GPR_U32(ctx, 0));
    // 0x1862f0: 0xac8308a8  sw          $v1, 0x8A8($a0)
    ctx->pc = 0x1862f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2216), GPR_U32(ctx, 3));
    // 0x1862f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1862F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1862F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1862F4u;
            // 0x1862f8: 0xac8008ac  sw          $zero, 0x8AC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1862FCu;
}
