#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsUsed__12GYORACE_DATAFv
// Address: 0x2f6ff0 - 0x2f7000
void IsUsed__12GYORACE_DATAFv_0x2f6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsUsed__12GYORACE_DATAFv_0x2f6ff0");
#endif

    ctx->pc = 0x2f6ff0u;

    // 0x2f6ff0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x2f6ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2f6ff4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f6ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f6ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6FF8u;
            // 0x2f6ffc: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7000u;
}
