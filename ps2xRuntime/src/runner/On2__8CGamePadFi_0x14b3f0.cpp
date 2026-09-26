#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: On2__8CGamePadFi
// Address: 0x14b3f0 - 0x14b42c
void On2__8CGamePadFi_0x14b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("On2__8CGamePadFi_0x14b3f0");
#endif

    ctx->pc = 0x14b3f0u;

    // 0x14b3f0: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b3f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B3F4u;
    {
        const bool branch_taken_0x14b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B3F4u;
            // 0x14b3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b3f4) {
            ctx->pc = 0x14B404u;
            goto label_14b404;
        }
    }
    ctx->pc = 0x14B3FCu;
    // 0x14b3fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14B3FCu;
    {
        const bool branch_taken_0x14b3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b3fc) {
            ctx->pc = 0x14B424u;
            goto label_14b424;
        }
    }
    ctx->pc = 0x14B404u;
label_14b404:
    // 0x14b404: 0x8c820460  lw          $v0, 0x460($a0)
    ctx->pc = 0x14b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x14b408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B408u;
    {
        const bool branch_taken_0x14b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B408u;
            // 0x14b40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b408) {
            ctx->pc = 0x14B418u;
            goto label_14b418;
        }
    }
    ctx->pc = 0x14B410u;
    // 0x14b410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B410u;
    {
        const bool branch_taken_0x14b410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b410) {
            ctx->pc = 0x14B424u;
            goto label_14b424;
        }
    }
    ctx->pc = 0x14B418u;
label_14b418:
    // 0x14b418: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x14b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x14b41c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14b420: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14b424:
    // 0x14b424: 0x3e00008  jr          $ra
    ctx->pc = 0x14B424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B42Cu;
}
