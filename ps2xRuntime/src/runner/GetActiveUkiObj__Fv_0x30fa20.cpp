#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveUkiObj__Fv
// Address: 0x30fa20 - 0x30fa44
void GetActiveUkiObj__Fv_0x30fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveUkiObj__Fv_0x30fa20");
#endif

    ctx->pc = 0x30fa20u;

    // 0x30fa20: 0x8f83a26c  lw          $v1, -0x5D94($gp)
    ctx->pc = 0x30fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
    // 0x30fa24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30fa28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30FA28u;
    {
        const bool branch_taken_0x30fa28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA28u;
            // 0x30fa2c: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa28) {
            ctx->pc = 0x30FA38u;
            goto label_30fa38;
        }
    }
    ctx->pc = 0x30FA30u;
    // 0x30fa30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FA30u;
    {
        const bool branch_taken_0x30fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA30u;
            // 0x30fa34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa30) {
            ctx->pc = 0x30FA3Cu;
            goto label_30fa3c;
        }
    }
    ctx->pc = 0x30FA38u;
label_30fa38:
    // 0x30fa38: 0x2442f190  addiu       $v0, $v0, -0xE70
    ctx->pc = 0x30fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963600));
label_30fa3c:
    // 0x30fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x30FA3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FA44u;
}
