#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRoboVoiceFlag__16CUserDataManagerFv
// Address: 0x19c4e0 - 0x19c500
void CheckRoboVoiceFlag__16CUserDataManagerFv_0x19c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRoboVoiceFlag__16CUserDataManagerFv_0x19c4e0");
#endif

    ctx->pc = 0x19c4e0u;

    // 0x19c4e0: 0x8082467c  lb          $v0, 0x467C($a0)
    ctx->pc = 0x19c4e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18044)));
    // 0x19c4e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19c4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19c4e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C4E8u;
    {
        const bool branch_taken_0x19c4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c4e8) {
            ctx->pc = 0x19C4F8u;
            goto label_19c4f8;
        }
    }
    ctx->pc = 0x19C4F0u;
    // 0x19c4f0: 0x8082467d  lb          $v0, 0x467D($a0)
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 18045)));
    // 0x19c4f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19c4f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19c4f8:
    // 0x19c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4F8u;
            // 0x19c4fc: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C500u;
}
