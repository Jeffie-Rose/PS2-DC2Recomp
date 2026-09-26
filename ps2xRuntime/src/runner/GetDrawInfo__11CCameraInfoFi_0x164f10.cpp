#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDrawInfo__11CCameraInfoFi
// Address: 0x164f10 - 0x164f44
void GetDrawInfo__11CCameraInfoFi_0x164f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawInfo__11CCameraInfoFi_0x164f10");
#endif

    ctx->pc = 0x164f10u;

    // 0x164f10: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164F10u;
    {
        const bool branch_taken_0x164f10 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x164F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F10u;
            // 0x164f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f10) {
            ctx->pc = 0x164F2Cu;
            goto label_164f2c;
        }
    }
    ctx->pc = 0x164F18u;
    // 0x164f18: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x164f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x164f1c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x164f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164F20u;
    {
        const bool branch_taken_0x164f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164F20u;
            // 0x164f24: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f20) {
            ctx->pc = 0x164F34u;
            goto label_164f34;
        }
    }
    ctx->pc = 0x164F28u;
    // 0x164f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164f2c:
    // 0x164f2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164F2Cu;
    {
        const bool branch_taken_0x164f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164f2c) {
            ctx->pc = 0x164F3Cu;
            goto label_164f3c;
        }
    }
    ctx->pc = 0x164F34u;
label_164f34:
    // 0x164f34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x164f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x164f38: 0x244200a8  addiu       $v0, $v0, 0xA8
    ctx->pc = 0x164f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
label_164f3c:
    // 0x164f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x164F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164F44u;
}
