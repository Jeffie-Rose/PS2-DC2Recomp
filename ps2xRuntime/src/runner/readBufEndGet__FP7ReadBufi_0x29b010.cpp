#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: readBufEndGet__FP7ReadBufi
// Address: 0x29b010 - 0x29b04c
void readBufEndGet__FP7ReadBufi_0x29b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufEndGet__FP7ReadBufi_0x29b010");
#endif

    ctx->pc = 0x29b010u;

    // 0x29b010: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29b014: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x29b014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x29b018: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29b018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b01c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b020: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x29b020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b024: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x29b024u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    // 0x29b028: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29b028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29b02c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x29b02cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b030: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29b030u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29b034: 0x8c230004  lw          $v1, 0x4($at)
    ctx->pc = 0x29b034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4)));
    // 0x29b038: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x29b03c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x29b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b040: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x29b044: 0x3e00008  jr          $ra
    ctx->pc = 0x29B044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B044u;
            // 0x29b048: 0xac230004  sw          $v1, 0x4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B04Cu;
}
