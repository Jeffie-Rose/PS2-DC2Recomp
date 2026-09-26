#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TextureCrd4__11mgCDrawPrimFii
// Address: 0x134d30 - 0x134d68
void TextureCrd4__11mgCDrawPrimFii_0x134d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TextureCrd4__11mgCDrawPrimFii_0x134d30");
#endif

    ctx->pc = 0x134d30u;

    // 0x134d30: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x134d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x134d34: 0x5383c  dsll32      $a3, $a1, 0
    ctx->pc = 0x134d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 0));
    // 0x134d38: 0x8c8600dc  lw          $a2, 0xDC($a0)
    ctx->pc = 0x134d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134d3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x134d3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x134d40: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x134d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x134d44: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x134d44u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x134d48: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x134d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x134d4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x134d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134d50: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x134d50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x134d54: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x134d54u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x134d58: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x134d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x134d5c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134d60: 0x3e00008  jr          $ra
    ctx->pc = 0x134D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D60u;
            // 0x134d64: 0xac8300dc  sw          $v1, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134D68u;
}
