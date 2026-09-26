#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetShiledKitLimmit__Fi
// Address: 0x19a800 - 0x19a82c
void GetShiledKitLimmit__Fi_0x19a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetShiledKitLimmit__Fi_0x19a800");
#endif

    ctx->pc = 0x19a800u;

    // 0x19a800: 0x2483ff0a  addiu       $v1, $a0, -0xF6
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967050));
    // 0x19a804: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A804u;
    {
        const bool branch_taken_0x19a804 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x19A808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A804u;
            // 0x19a808: 0x28610007  slti        $at, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a804) {
            ctx->pc = 0x19A814u;
            goto label_19a814;
        }
    }
    ctx->pc = 0x19A80Cu;
    // 0x19a80c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19a80cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a810: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x19a810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_19a814:
    // 0x19a814: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A814u;
    {
        const bool branch_taken_0x19a814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A814u;
            // 0x19a818: 0x278280a0  addiu       $v0, $gp, -0x7F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a814) {
            ctx->pc = 0x19A820u;
            goto label_19a820;
        }
    }
    ctx->pc = 0x19A81Cu;
    // 0x19a81c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19a820:
    // 0x19a820: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a824: 0x3e00008  jr          $ra
    ctx->pc = 0x19A824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A824u;
            // 0x19a828: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A82Cu;
}
