#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveFontMode__13CNameRegiMenuFv
// Address: 0x30a8d0 - 0x30a918
void GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveFontMode__13CNameRegiMenuFv_0x30a8d0");
#endif

    ctx->pc = 0x30a8d0u;

    // 0x30a8d0: 0x8f858ad0  lw          $a1, -0x7530($gp)
    ctx->pc = 0x30a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x30a8d4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A8D4u;
    {
        const bool branch_taken_0x30a8d4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30A8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A8D4u;
            // 0x30a8d8: 0x28a10002  slti        $at, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a8d4) {
            ctx->pc = 0x30A8E4u;
            goto label_30a8e4;
        }
    }
    ctx->pc = 0x30A8DCu;
    // 0x30a8dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8e0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x30a8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_30a8e4:
    // 0x30a8e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A8E4u;
    {
        const bool branch_taken_0x30a8e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a8e4) {
            ctx->pc = 0x30A8F0u;
            goto label_30a8f0;
        }
    }
    ctx->pc = 0x30A8ECu;
    // 0x30a8ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a8f0:
    // 0x30a8f0: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x30a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x30a8f4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x30a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30a8f8: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x30a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a8fc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x30a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x30a900: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x30a900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30a904: 0x2463dec0  addiu       $v1, $v1, -0x2140
    ctx->pc = 0x30a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958784));
    // 0x30a908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30a908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30a90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30a910: 0x3e00008  jr          $ra
    ctx->pc = 0x30A910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A910u;
            // 0x30a914: 0x80420000  lb          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A918u;
}
