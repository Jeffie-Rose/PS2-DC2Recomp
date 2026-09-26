#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMainMapNo__6CSceneFv
// Address: 0x283e00 - 0x283e24
void GetMainMapNo__6CSceneFv_0x283e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMainMapNo__6CSceneFv_0x283e00");
#endif

    ctx->pc = 0x283e00u;

    // 0x283e00: 0x8c822e5c  lw          $v0, 0x2E5C($a0)
    ctx->pc = 0x283e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x283e04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283E04u;
    {
        const bool branch_taken_0x283e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283e04) {
            ctx->pc = 0x283E14u;
            goto label_283e14;
        }
    }
    ctx->pc = 0x283E0Cu;
    // 0x283e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x283E0Cu;
    {
        const bool branch_taken_0x283e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283E0Cu;
            // 0x283e10: 0x8c822e60  lw          $v0, 0x2E60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e0c) {
            ctx->pc = 0x283E1Cu;
            goto label_283e1c;
        }
    }
    ctx->pc = 0x283E14u;
label_283e14:
    // 0x283e14: 0x8c822e64  lw          $v0, 0x2E64($a0)
    ctx->pc = 0x283e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11876)));
    // 0x283e18: 0x0  nop
    ctx->pc = 0x283e18u;
    // NOP
label_283e1c:
    // 0x283e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x283E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283E24u;
}
