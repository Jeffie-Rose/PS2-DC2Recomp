#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPadOn__8CGamePadFv
// Address: 0x14b1f0 - 0x14b214
void GetPadOn__8CGamePadFv_0x14b1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPadOn__8CGamePadFv_0x14b1f0");
#endif

    ctx->pc = 0x14b1f0u;

    // 0x14b1f0: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B1F4u;
    {
        const bool branch_taken_0x14b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B1F4u;
            // 0x14b1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1f4) {
            ctx->pc = 0x14B204u;
            goto label_14b204;
        }
    }
    ctx->pc = 0x14B1FCu;
    // 0x14b1fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B1FCu;
    {
        const bool branch_taken_0x14b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1fc) {
            ctx->pc = 0x14B20Cu;
            goto label_14b20c;
        }
    }
    ctx->pc = 0x14B204u;
label_14b204:
    // 0x14b204: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b208: 0x0  nop
    ctx->pc = 0x14b208u;
    // NOP
label_14b20c:
    // 0x14b20c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B214u;
}
