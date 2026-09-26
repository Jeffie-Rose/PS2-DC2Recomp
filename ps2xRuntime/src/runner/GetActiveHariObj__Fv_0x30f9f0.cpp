#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveHariObj__Fv
// Address: 0x30f9f0 - 0x30fa18
void GetActiveHariObj__Fv_0x30f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveHariObj__Fv_0x30f9f0");
#endif

    ctx->pc = 0x30f9f0u;

    // 0x30f9f0: 0x8f83a26c  lw          $v1, -0x5D94($gp)
    ctx->pc = 0x30f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943340)));
    // 0x30f9f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f9f8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F9F8u;
    {
        const bool branch_taken_0x30f9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F9F8u;
            // 0x30f9fc: 0x3c0201f6  lui         $v0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9f8) {
            ctx->pc = 0x30FA0Cu;
            goto label_30fa0c;
        }
    }
    ctx->pc = 0x30FA00u;
    // 0x30fa00: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x30fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x30fa04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FA04u;
    {
        const bool branch_taken_0x30fa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30FA04u;
            // 0x30fa08: 0x2442edc0  addiu       $v0, $v0, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa04) {
            ctx->pc = 0x30FA10u;
            goto label_30fa10;
        }
    }
    ctx->pc = 0x30FA0Cu;
label_30fa0c:
    // 0x30fa0c: 0x2442f560  addiu       $v0, $v0, -0xAA0
    ctx->pc = 0x30fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964576));
label_30fa10:
    // 0x30fa10: 0x3e00008  jr          $ra
    ctx->pc = 0x30FA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FA18u;
}
