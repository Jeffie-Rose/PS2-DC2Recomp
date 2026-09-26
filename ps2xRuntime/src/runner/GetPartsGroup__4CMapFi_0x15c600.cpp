#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsGroup__4CMapFi
// Address: 0x15c600 - 0x15c634
void GetPartsGroup__4CMapFi_0x15c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsGroup__4CMapFi_0x15c600");
#endif

    ctx->pc = 0x15c600u;

    // 0x15c600: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C600u;
    {
        const bool branch_taken_0x15c600 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15C604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C600u;
            // 0x15c604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c600) {
            ctx->pc = 0x15C61Cu;
            goto label_15c61c;
        }
    }
    ctx->pc = 0x15C608u;
    // 0x15c608: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x15c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x15c60c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15c60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15c610: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C610u;
    {
        const bool branch_taken_0x15c610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C610u;
            // 0x15c614: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c610) {
            ctx->pc = 0x15C624u;
            goto label_15c624;
        }
    }
    ctx->pc = 0x15C618u;
    // 0x15c618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c61c:
    // 0x15c61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C61Cu;
    {
        const bool branch_taken_0x15c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c61c) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C624u;
label_15c624:
    // 0x15c624: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c628: 0x2442010c  addiu       $v0, $v0, 0x10C
    ctx->pc = 0x15c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
label_15c62c:
    // 0x15c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C634u;
}
