#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AddFatigue__9CAquaFishFi
// Address: 0x20d610 - 0x20d650
void AddFatigue__9CAquaFishFi_0x20d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddFatigue__9CAquaFishFi_0x20d610");
#endif

    ctx->pc = 0x20d610u;

    // 0x20d610: 0x8c82092c  lw          $v0, 0x92C($a0)
    ctx->pc = 0x20d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2348)));
    // 0x20d614: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20d618: 0xac82092c  sw          $v0, 0x92C($a0)
    ctx->pc = 0x20d618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2348), GPR_U32(ctx, 2));
    // 0x20d61c: 0x8c82092c  lw          $v0, 0x92C($a0)
    ctx->pc = 0x20d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2348)));
    // 0x20d620: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D620u;
    {
        const bool branch_taken_0x20d620 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20d620) {
            ctx->pc = 0x20D62Cu;
            goto label_20d62c;
        }
    }
    ctx->pc = 0x20D628u;
    // 0x20d628: 0xac80092c  sw          $zero, 0x92C($a0)
    ctx->pc = 0x20d628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2348), GPR_U32(ctx, 0));
label_20d62c:
    // 0x20d62c: 0x8c82092c  lw          $v0, 0x92C($a0)
    ctx->pc = 0x20d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2348)));
    // 0x20d630: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x20d630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
    // 0x20d634: 0x34639680  ori         $v1, $v1, 0x9680
    ctx->pc = 0x20d634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38528);
    // 0x20d638: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x20d638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d63c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D63Cu;
    {
        const bool branch_taken_0x20d63c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d63c) {
            ctx->pc = 0x20D648u;
            goto label_20d648;
        }
    }
    ctx->pc = 0x20D644u;
    // 0x20d644: 0xac83092c  sw          $v1, 0x92C($a0)
    ctx->pc = 0x20d644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2348), GPR_U32(ctx, 3));
label_20d648:
    // 0x20d648: 0x3e00008  jr          $ra
    ctx->pc = 0x20D648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20D648u;
            // 0x20d64c: 0x8c82092c  lw          $v0, 0x92C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20D650u;
}
