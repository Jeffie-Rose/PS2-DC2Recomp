#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAlreadyCreatedItem__15CInventUserDataFi
// Address: 0x1ff120 - 0x1ff168
void IsAlreadyCreatedItem__15CInventUserDataFi_0x1ff120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAlreadyCreatedItem__15CInventUserDataFi_0x1ff120");
#endif

    switch (ctx->pc) {
        case 0x1ff134u: goto label_1ff134;
        default: break;
    }

    ctx->pc = 0x1ff120u;

    // 0x1ff120: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF120u;
    {
        const bool branch_taken_0x1ff120 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1FF124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF120u;
            // 0x1ff124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff120) {
            ctx->pc = 0x1FF130u;
            goto label_1ff130;
        }
    }
    ctx->pc = 0x1FF128u;
    // 0x1ff128: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FF128u;
    {
        const bool branch_taken_0x1ff128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF128u;
            // 0x1ff12c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff128) {
            ctx->pc = 0x1FF160u;
            goto label_1ff160;
        }
    }
    ctx->pc = 0x1FF130u;
label_1ff130:
    // 0x1ff130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff134:
    // 0x1ff134: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1ff134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ff138: 0x846306d8  lh          $v1, 0x6D8($v1)
    ctx->pc = 0x1ff138u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1752)));
    // 0x1ff13c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF13Cu;
    {
        const bool branch_taken_0x1ff13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1ff13c) {
            ctx->pc = 0x1FF14Cu;
            goto label_1ff14c;
        }
    }
    ctx->pc = 0x1FF144u;
    // 0x1ff144: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF144u;
    {
        const bool branch_taken_0x1ff144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff144) {
            ctx->pc = 0x1FF160u;
            goto label_1ff160;
        }
    }
    ctx->pc = 0x1FF14Cu;
label_1ff14c:
    // 0x1ff14c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ff14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ff150: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x1ff150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ff154: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FF154u;
    {
        const bool branch_taken_0x1ff154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF154u;
            // 0x1ff158: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff154) {
            ctx->pc = 0x1FF134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff134;
        }
    }
    ctx->pc = 0x1FF15Cu;
    // 0x1ff15c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ff15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ff160:
    // 0x1ff160: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF168u;
}
