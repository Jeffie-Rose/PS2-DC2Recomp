#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Color__11mgCDrawPrimFiiii
// Address: 0x134c80 - 0x134ce4
void Color__11mgCDrawPrimFiiii_0x134c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Color__11mgCDrawPrimFiiii_0x134c80");
#endif

    ctx->pc = 0x134c80u;

    // 0x134c80: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x134c80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x134c84: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x134c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x134c88: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x134c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x134c8c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x134c8cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x134c90: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x134c90u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x134c94: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x134c94u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x134c98: 0x53238  dsll        $a2, $a1, 8
    ctx->pc = 0x134c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 8);
    // 0x134c9c: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x134c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134ca0: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x134ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x134ca4: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x134ca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x134ca8: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x134ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x134cac: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x134cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x134cb0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x134cb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x134cb4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x134cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x134cb8: 0x653025  or          $a2, $v1, $a1
    ctx->pc = 0x134cb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134cbc: 0x9c8500f8  lwu         $a1, 0xF8($a0)
    ctx->pc = 0x134cbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x134cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134cc4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x134cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x134cc8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x134cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x134ccc: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x134cccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x134cd0: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x134cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x134cd4: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134cd8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x134CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134CDCu;
            // 0x134ce0: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134CE4u;
}
