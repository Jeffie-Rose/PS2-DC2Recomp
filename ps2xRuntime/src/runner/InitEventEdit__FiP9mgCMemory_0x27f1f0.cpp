#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEventEdit__FiP9mgCMemory
// Address: 0x27f1f0 - 0x27f230
void InitEventEdit__FiP9mgCMemory_0x27f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEventEdit__FiP9mgCMemory_0x27f1f0");
#endif

    ctx->pc = 0x27f1f0u;

    // 0x27f1f0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f1f8: 0xac25500c  sw          $a1, 0x500C($at)
    ctx->pc = 0x27f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20492), GPR_U32(ctx, 5));
    // 0x27f1fc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f200: 0xac245010  sw          $a0, 0x5010($at)
    ctx->pc = 0x27f200u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20496), GPR_U32(ctx, 4));
    // 0x27f204: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f208: 0xac235008  sw          $v1, 0x5008($at)
    ctx->pc = 0x27f208u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20488), GPR_U32(ctx, 3));
    // 0x27f20c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f210: 0xac205000  sw          $zero, 0x5000($at)
    ctx->pc = 0x27f210u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20480), GPR_U32(ctx, 0));
    // 0x27f214: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f218: 0xac205004  sw          $zero, 0x5004($at)
    ctx->pc = 0x27f218u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20484), GPR_U32(ctx, 0));
    // 0x27f21c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f220: 0xac205014  sw          $zero, 0x5014($at)
    ctx->pc = 0x27f220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20500), GPR_U32(ctx, 0));
    // 0x27f224: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x27f228: 0x3e00008  jr          $ra
    ctx->pc = 0x27F228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F228u;
            // 0x27f22c: 0xac205018  sw          $zero, 0x5018($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F230u;
}
