#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__9CMapWaterFv
// Address: 0x15c590 - 0x15c5ac
void Initialize__9CMapWaterFv_0x15c590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__9CMapWaterFv_0x15c590");
#endif

    ctx->pc = 0x15c590u;

    // 0x15c590: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x15c590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x15c594: 0x7c800080  sq          $zero, 0x80($a0)
    ctx->pc = 0x15c594u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 0));
    // 0x15c598: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x15c598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x15c59c: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x15c59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x15c5a0: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x15c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x15c5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15C5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5A4u;
            // 0x15c5a8: 0xac800090  sw          $zero, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C5ACu;
}
