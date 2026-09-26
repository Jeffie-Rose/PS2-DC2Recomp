#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetData__13CVillagerMngrFi
// Address: 0x2cd290 - 0x2cd2cc
void GetData__13CVillagerMngrFi_0x2cd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetData__13CVillagerMngrFi_0x2cd290");
#endif

    ctx->pc = 0x2cd290u;

    // 0x2cd290: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD290u;
    {
        const bool branch_taken_0x2cd290 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2CD294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD290u;
            // 0x2cd294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd290) {
            ctx->pc = 0x2CD2ACu;
            goto label_2cd2ac;
        }
    }
    ctx->pc = 0x2CD298u;
    // 0x2cd298: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2cd298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cd29c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2cd29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2cd2a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2A0u;
    {
        const bool branch_taken_0x2cd2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD2A0u;
            // 0x2cd2a4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2a0) {
            ctx->pc = 0x2CD2B4u;
            goto label_2cd2b4;
        }
    }
    ctx->pc = 0x2CD2A8u;
    // 0x2cd2a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd2ac:
    // 0x2cd2ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD2ACu;
    {
        const bool branch_taken_0x2cd2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2ac) {
            ctx->pc = 0x2CD2C4u;
            goto label_2cd2c4;
        }
    }
    ctx->pc = 0x2CD2B4u;
label_2cd2b4:
    // 0x2cd2b4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cd2b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cd2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cd2bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2cd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd2c0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2cd2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2cd2c4:
    // 0x2cd2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD2C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD2CCu;
}
