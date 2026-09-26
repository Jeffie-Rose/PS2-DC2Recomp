#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFloor__13CDynamicAnimeFf
// Address: 0x179e90 - 0x179ea0
void SetFloor__13CDynamicAnimeFf_0x179e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFloor__13CDynamicAnimeFf_0x179e90");
#endif

    ctx->pc = 0x179e90u;

    // 0x179e90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179e94: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x179e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
    // 0x179e98: 0x3e00008  jr          $ra
    ctx->pc = 0x179E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179E98u;
            // 0x179e9c: 0xe48c008c  swc1        $f12, 0x8C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179EA0u;
}
