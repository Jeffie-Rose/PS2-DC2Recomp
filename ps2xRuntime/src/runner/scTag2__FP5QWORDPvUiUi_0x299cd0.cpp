#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scTag2__FP5QWORDPvUiUi
// Address: 0x299cd0 - 0x299d00
void scTag2__FP5QWORDPvUiUi_0x299cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scTag2__FP5QWORDPvUiUi_0x299cd0");
#endif

    ctx->pc = 0x299cd0u;

    // 0x299cd0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x299cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x299cd4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x299cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x299cd8: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x299cd8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x299cdc: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x299cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x299ce0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x299ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x299ce4: 0x32f38  dsll        $a1, $v1, 28
    ctx->pc = 0x299ce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 28);
    // 0x299ce8: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x299cec: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x299cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x299cf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x299cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x299cf4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x299cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x299cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x299CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CF8u;
            // 0x299cfc: 0xfc830000  sd          $v1, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299D00u;
}
