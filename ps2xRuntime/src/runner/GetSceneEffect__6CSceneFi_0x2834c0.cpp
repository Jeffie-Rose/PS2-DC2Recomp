#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneEffect__6CSceneFi
// Address: 0x2834c0 - 0x2834fc
void GetSceneEffect__6CSceneFi_0x2834c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneEffect__6CSceneFi_0x2834c0");
#endif

    ctx->pc = 0x2834c0u;

    // 0x2834c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2834C0u;
    {
        const bool branch_taken_0x2834c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2834C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834C0u;
            // 0x2834c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c0) {
            ctx->pc = 0x2834DCu;
            goto label_2834dc;
        }
    }
    ctx->pc = 0x2834C8u;
    // 0x2834c8: 0x8c822aac  lw          $v0, 0x2AAC($a0)
    ctx->pc = 0x2834c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10924)));
    // 0x2834cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2834ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2834d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2834D0u;
    {
        const bool branch_taken_0x2834d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2834D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2834D0u;
            // 0x2834d4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834d0) {
            ctx->pc = 0x2834E4u;
            goto label_2834e4;
        }
    }
    ctx->pc = 0x2834D8u;
    // 0x2834d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2834d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2834dc:
    // 0x2834dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2834DCu;
    {
        const bool branch_taken_0x2834dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834dc) {
            ctx->pc = 0x2834F4u;
            goto label_2834f4;
        }
    }
    ctx->pc = 0x2834E4u;
label_2834e4:
    // 0x2834e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2834e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2834e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2834e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2834ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2834ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2834f0: 0x24422ab0  addiu       $v0, $v0, 0x2AB0
    ctx->pc = 0x2834f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10928));
label_2834f4:
    // 0x2834f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2834F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2834FCu;
}
