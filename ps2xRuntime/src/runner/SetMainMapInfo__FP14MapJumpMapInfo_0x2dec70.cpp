#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMainMapInfo__FP14MapJumpMapInfo
// Address: 0x2dec70 - 0x2decbc
void SetMainMapInfo__FP14MapJumpMapInfo_0x2dec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMainMapInfo__FP14MapJumpMapInfo_0x2dec70");
#endif

    ctx->pc = 0x2dec70u;

    // 0x2dec70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dec74: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dec78: 0xac238d50  sw          $v1, -0x72B0($at)
    ctx->pc = 0x2dec78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937936), GPR_U32(ctx, 3));
    // 0x2dec7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2dec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dec80: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dec80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dec84: 0xac238d54  sw          $v1, -0x72AC($at)
    ctx->pc = 0x2dec84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937940), GPR_U32(ctx, 3));
    // 0x2dec88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dec8c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dec8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dec90: 0xac238d58  sw          $v1, -0x72A8($at)
    ctx->pc = 0x2dec90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937944), GPR_U32(ctx, 3));
    // 0x2dec94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2dec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2dec98: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dec9c: 0xac238d5c  sw          $v1, -0x72A4($at)
    ctx->pc = 0x2dec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937948), GPR_U32(ctx, 3));
    // 0x2deca0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2deca4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2deca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2deca8: 0xac238d60  sw          $v1, -0x72A0($at)
    ctx->pc = 0x2deca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937952), GPR_U32(ctx, 3));
    // 0x2decac: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2decacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2decb0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2decb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2decb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DECB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DECB4u;
            // 0x2decb8: 0xac238d64  sw          $v1, -0x729C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DECBCu;
}
