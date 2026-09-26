#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEnd__10CCameraPasFv
// Address: 0x256af0 - 0x256b04
void CheckEnd__10CCameraPasFv_0x256af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEnd__10CCameraPasFv_0x256af0");
#endif

    ctx->pc = 0x256af0u;

    // 0x256af0: 0x8c820940  lw          $v0, 0x940($a0)
    ctx->pc = 0x256af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2368)));
    // 0x256af4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x256af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x256af8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x256af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x256afc: 0x3e00008  jr          $ra
    ctx->pc = 0x256AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256AFCu;
            // 0x256b00: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256B04u;
}
