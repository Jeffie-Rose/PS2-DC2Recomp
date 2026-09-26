#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowHavePictureNum__15CInventUserDataFv
// Address: 0x1fee40 - 0x1fee78
void GetNowHavePictureNum__15CInventUserDataFv_0x1fee40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowHavePictureNum__15CInventUserDataFv_0x1fee40");
#endif

    switch (ctx->pc) {
        case 0x1fee4cu: goto label_1fee4c;
        default: break;
    }

    ctx->pc = 0x1fee40u;

    // 0x1fee40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fee40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fee44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fee48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fee48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fee4c:
    // 0x1fee4c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1fee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1fee50: 0x80630408  lb          $v1, 0x408($v1)
    ctx->pc = 0x1fee50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1032)));
    // 0x1fee54: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEE54u;
    {
        const bool branch_taken_0x1fee54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee54) {
            ctx->pc = 0x1FEE60u;
            goto label_1fee60;
        }
    }
    ctx->pc = 0x1FEE5Cu;
    // 0x1fee5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fee60:
    // 0x1fee60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fee60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fee64: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x1fee64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1fee68: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FEE68u;
    {
        const bool branch_taken_0x1fee68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE68u;
            // 0x1fee6c: 0x24c60018  addiu       $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fee68) {
            ctx->pc = 0x1FEE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fee4c;
        }
    }
    ctx->pc = 0x1FEE70u;
    // 0x1fee70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEE78u;
}
