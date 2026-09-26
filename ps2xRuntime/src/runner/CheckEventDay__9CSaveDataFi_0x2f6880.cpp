#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEventDay__9CSaveDataFi
// Address: 0x2f6880 - 0x2f68a8
void CheckEventDay__9CSaveDataFi_0x2f6880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEventDay__9CSaveDataFi_0x2f6880");
#endif

    ctx->pc = 0x2f6880u;

    // 0x2f6880: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6884: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6888: 0x8c2243dc  lw          $v0, 0x43DC($at)
    ctx->pc = 0x2f6888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17372)));
    // 0x2f688c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F688Cu;
    {
        const bool branch_taken_0x2f688c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f688c) {
            ctx->pc = 0x2F689Cu;
            goto label_2f689c;
        }
    }
    ctx->pc = 0x2F6894u;
    // 0x2f6894: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6894u;
    {
        const bool branch_taken_0x2f6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6894u;
            // 0x2f6898: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6894) {
            ctx->pc = 0x2F68A0u;
            goto label_2f68a0;
        }
    }
    ctx->pc = 0x2F689Cu;
label_2f689c:
    // 0x2f689c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2f689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f68a0:
    // 0x2f68a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F68A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F68A8u;
}
