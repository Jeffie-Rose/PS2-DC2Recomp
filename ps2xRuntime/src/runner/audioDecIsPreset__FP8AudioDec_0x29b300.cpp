#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: audioDecIsPreset__FP8AudioDec
// Address: 0x29b300 - 0x29b314
void audioDecIsPreset__FP8AudioDec_0x29b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("audioDecIsPreset__FP8AudioDec_0x29b300");
#endif

    ctx->pc = 0x29b300u;

    // 0x29b300: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x29b300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x29b304: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x29b308: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29b308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b30c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B30Cu;
            // 0x29b310: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B314u;
}
