#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSkyID__Fi
// Address: 0x183ce0 - 0x183d00
void CheckSkyID__Fi_0x183ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSkyID__Fi_0x183ce0");
#endif

    ctx->pc = 0x183ce0u;

    // 0x183ce0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183CE0u;
    {
        const bool branch_taken_0x183ce0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x183CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CE0u;
            // 0x183ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ce0) {
            ctx->pc = 0x183CF8u;
            goto label_183cf8;
        }
    }
    ctx->pc = 0x183CE8u;
    // 0x183ce8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x183ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x183cec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x183CECu;
    {
        const bool branch_taken_0x183cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CECu;
            // 0x183cf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183cec) {
            ctx->pc = 0x183CF8u;
            goto label_183cf8;
        }
    }
    ctx->pc = 0x183CF4u;
    // 0x183cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183cf8:
    // 0x183cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x183CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183D00u;
}
