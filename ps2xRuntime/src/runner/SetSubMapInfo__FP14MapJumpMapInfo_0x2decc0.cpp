#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetSubMapInfo__FP14MapJumpMapInfo
// Address: 0x2decc0 - 0x2ded0c
void SetSubMapInfo__FP14MapJumpMapInfo_0x2decc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetSubMapInfo__FP14MapJumpMapInfo_0x2decc0");
#endif

    ctx->pc = 0x2decc0u;

    // 0x2decc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2decc4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2decc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2decc8: 0xac238d70  sw          $v1, -0x7290($at)
    ctx->pc = 0x2decc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937968), GPR_U32(ctx, 3));
    // 0x2deccc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2decccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2decd0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2decd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2decd4: 0xac238d74  sw          $v1, -0x728C($at)
    ctx->pc = 0x2decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937972), GPR_U32(ctx, 3));
    // 0x2decd8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2decd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2decdc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2decdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2dece0: 0xac238d78  sw          $v1, -0x7288($at)
    ctx->pc = 0x2dece0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937976), GPR_U32(ctx, 3));
    // 0x2dece4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2dece4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2dece8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dece8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2decec: 0xac238d7c  sw          $v1, -0x7284($at)
    ctx->pc = 0x2dececu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937980), GPR_U32(ctx, 3));
    // 0x2decf0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2decf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2decf4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2decf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2decf8: 0xac238d80  sw          $v1, -0x7280($at)
    ctx->pc = 0x2decf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937984), GPR_U32(ctx, 3));
    // 0x2decfc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2decfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2ded00: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ded00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2ded04: 0x3e00008  jr          $ra
    ctx->pc = 0x2DED04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DED04u;
            // 0x2ded08: 0xac238d84  sw          $v1, -0x727C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937988), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DED0Cu;
}
