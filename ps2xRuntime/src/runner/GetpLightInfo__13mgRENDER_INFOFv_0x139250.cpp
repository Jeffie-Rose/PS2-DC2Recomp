#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetpLightInfo__13mgRENDER_INFOFv
// Address: 0x139250 - 0x139274
void GetpLightInfo__13mgRENDER_INFOFv_0x139250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetpLightInfo__13mgRENDER_INFOFv_0x139250");
#endif

    ctx->pc = 0x139250u;

    // 0x139250: 0x8c8303f4  lw          $v1, 0x3F4($a0)
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1012)));
    // 0x139254: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x139258: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x139258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13925c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13925cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139260: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139264: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139268: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x139268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13926c: 0x3e00008  jr          $ra
    ctx->pc = 0x13926Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13926Cu;
            // 0x139270: 0x24420400  addiu       $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139274u;
}
