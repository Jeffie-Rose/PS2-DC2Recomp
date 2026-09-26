#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneMessage__6CSceneFi
// Address: 0x2833c0 - 0x2833fc
void GetSceneMessage__6CSceneFi_0x2833c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneMessage__6CSceneFi_0x2833c0");
#endif

    ctx->pc = 0x2833c0u;

    // 0x2833c0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2833C0u;
    {
        const bool branch_taken_0x2833c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2833C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2833C0u;
            // 0x2833c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833c0) {
            ctx->pc = 0x2833DCu;
            goto label_2833dc;
        }
    }
    ctx->pc = 0x2833C8u;
    // 0x2833c8: 0x8c822208  lw          $v0, 0x2208($a0)
    ctx->pc = 0x2833c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8712)));
    // 0x2833cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2833ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2833d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833D0u;
    {
        const bool branch_taken_0x2833d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2833D0u;
            // 0x2833d4: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833d0) {
            ctx->pc = 0x2833E4u;
            goto label_2833e4;
        }
    }
    ctx->pc = 0x2833D8u;
    // 0x2833d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2833d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2833dc:
    // 0x2833dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2833DCu;
    {
        const bool branch_taken_0x2833dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2833dc) {
            ctx->pc = 0x2833F4u;
            goto label_2833f4;
        }
    }
    ctx->pc = 0x2833E4u;
label_2833e4:
    // 0x2833e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2833e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2833e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2833ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2833ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2833f0: 0x2442220c  addiu       $v0, $v0, 0x220C
    ctx->pc = 0x2833f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8716));
label_2833f4:
    // 0x2833f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2833F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2833FCu;
}
