#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndVolLimit__Fi
// Address: 0x18f140 - 0x18f168
void sndVolLimit__Fi_0x18f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndVolLimit__Fi_0x18f140");
#endif

    ctx->pc = 0x18f140u;

    // 0x18f140: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F140u;
    {
        const bool branch_taken_0x18f140 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18F144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F140u;
            // 0x18f144: 0x28810080  slti        $at, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f140) {
            ctx->pc = 0x18F150u;
            goto label_18f150;
        }
    }
    ctx->pc = 0x18F148u;
    // 0x18f148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18F148u;
    {
        const bool branch_taken_0x18f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18F148u;
            // 0x18f14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f148) {
            ctx->pc = 0x18F160u;
            goto label_18f160;
        }
    }
    ctx->pc = 0x18F150u;
label_18f150:
    // 0x18f150: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18F150u;
    {
        const bool branch_taken_0x18f150 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f150) {
            ctx->pc = 0x18F15Cu;
            goto label_18f15c;
        }
    }
    ctx->pc = 0x18F158u;
    // 0x18f158: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x18f158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_18f15c:
    // 0x18f15c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18f15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f160:
    // 0x18f160: 0x3e00008  jr          $ra
    ctx->pc = 0x18F160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F168u;
}
