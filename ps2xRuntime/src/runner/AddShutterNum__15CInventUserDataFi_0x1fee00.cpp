#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddShutterNum__15CInventUserDataFi
// Address: 0x1fee00 - 0x1fee40
void AddShutterNum__15CInventUserDataFi_0x1fee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddShutterNum__15CInventUserDataFi_0x1fee00");
#endif

    ctx->pc = 0x1fee00u;

    // 0x1fee00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1fee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1fee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1fee08: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x1fee08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x1fee0c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fee10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fee10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fee14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee18: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x1fee18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fee1c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEE1Cu;
    {
        const bool branch_taken_0x1fee1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee1c) {
            ctx->pc = 0x1FEE28u;
            goto label_1fee28;
        }
    }
    ctx->pc = 0x1FEE24u;
    // 0x1fee24: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1fee24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1fee28:
    // 0x1fee28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fee2c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FEE2Cu;
    {
        const bool branch_taken_0x1fee2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fee2c) {
            ctx->pc = 0x1FEE38u;
            goto label_1fee38;
        }
    }
    ctx->pc = 0x1FEE34u;
    // 0x1fee34: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1fee34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1fee38:
    // 0x1fee38: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEE38u;
            // 0x1fee3c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEE40u;
}
