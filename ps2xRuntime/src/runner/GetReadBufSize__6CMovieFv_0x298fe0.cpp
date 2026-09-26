#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetReadBufSize__6CMovieFv
// Address: 0x298fe0 - 0x298fec
void GetReadBufSize__6CMovieFv_0x298fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetReadBufSize__6CMovieFv_0x298fe0");
#endif

    ctx->pc = 0x298fe0u;

    // 0x298fe0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x298fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x298fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x298FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298FE4u;
            // 0x298fe8: 0x34420050  ori         $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298FECu;
}
