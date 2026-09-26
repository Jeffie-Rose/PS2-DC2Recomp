#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSpritePtr__FP11_EFF_SCRIPTi
// Address: 0x2e3240 - 0x2e3280
void GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240");
#endif

    ctx->pc = 0x2e3240u;

    // 0x2e3240: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3240u;
    {
        const bool branch_taken_0x2e3240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3240u;
            // 0x2e3244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3240) {
            ctx->pc = 0x2E325Cu;
            goto label_2e325c;
        }
    }
    ctx->pc = 0x2E3248u;
    // 0x2e3248: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2e3248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2e324c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e324cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e3250: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3250u;
    {
        const bool branch_taken_0x2e3250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3250) {
            ctx->pc = 0x2E3264u;
            goto label_2e3264;
        }
    }
    ctx->pc = 0x2E3258u;
    // 0x2e3258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e3258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e325c:
    // 0x2e325c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E325Cu;
    {
        const bool branch_taken_0x2e325c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e325c) {
            ctx->pc = 0x2E3278u;
            goto label_2e3278;
        }
    }
    ctx->pc = 0x2E3264u;
label_2e3264:
    // 0x2e3264: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2e3264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2e3268: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2e3268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e326c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e326cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e3270: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e3270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e3274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e3278:
    // 0x2e3278: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3280u;
}
