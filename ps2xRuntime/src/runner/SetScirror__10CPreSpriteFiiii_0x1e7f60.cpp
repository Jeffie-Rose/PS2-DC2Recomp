#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetScirror__10CPreSpriteFiiii
// Address: 0x1e7f60 - 0x1e7fc0
void SetScirror__10CPreSpriteFiiii_0x1e7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetScirror__10CPreSpriteFiiii_0x1e7f60");
#endif

    ctx->pc = 0x1e7f60u;

    // 0x1e7f60: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1e7f64: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e7f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e7f68: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e7f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e7f6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e7f6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e7f70: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e7f70u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e7f74: 0x33c38  dsll        $a3, $v1, 16
    ctx->pc = 0x1e7f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 16);
    // 0x1e7f78: 0xa73825  or          $a3, $a1, $a3
    ctx->pc = 0x1e7f78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e7f7c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1e7f80: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x1e7f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1e7f84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1e7f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1e7f88: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e7f8c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1e7f8cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1e7f90: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1e7f90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1e7f94: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e7f94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1e7f98: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1e7f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1e7f9c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1e7f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1e7fa0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e7fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e7fa4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1e7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e7fa8: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x1e7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1e7fac: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1e7facu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x1e7fb0: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1e7fb4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e7fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e7fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FB8u;
            // 0x1e7fbc: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7FC0u;
}
