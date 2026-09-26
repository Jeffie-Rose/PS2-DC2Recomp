#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: readBufCreate__FP7ReadBuf
// Address: 0x29aec0 - 0x29aeec
void readBufCreate__FP7ReadBuf_0x29aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufCreate__FP7ReadBuf_0x29aec0");
#endif

    ctx->pc = 0x29aec0u;

    // 0x29aec0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29aec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29aec4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x29aec8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29aec8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29aecc: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x29aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 0));
    // 0x29aed0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29aed4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29aed4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29aed8: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x29aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 0));
    // 0x29aedc: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29aedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29aee0: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29aee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29aee4: 0x3e00008  jr          $ra
    ctx->pc = 0x29AEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AEE4u;
            // 0x29aee8: 0xac230008  sw          $v1, 0x8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AEECu;
}
