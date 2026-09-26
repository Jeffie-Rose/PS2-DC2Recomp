#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Up__8CGamePadFi
// Address: 0x14b4c0 - 0x14b4f4
void Up__8CGamePadFi_0x14b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Up__8CGamePadFi_0x14b4c0");
#endif

    ctx->pc = 0x14b4c0u;

    // 0x14b4c0: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b4c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B4C4u;
    {
        const bool branch_taken_0x14b4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B4C4u;
            // 0x14b4c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b4c4) {
            ctx->pc = 0x14B4D4u;
            goto label_14b4d4;
        }
    }
    ctx->pc = 0x14B4CCu;
    // 0x14b4cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B4CCu;
    {
        const bool branch_taken_0x14b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b4cc) {
            ctx->pc = 0x14B4ECu;
            goto label_14b4ec;
        }
    }
    ctx->pc = 0x14B4D4u;
label_14b4d4:
    // 0x14b4d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b4d8: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x14b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x14b4dc: 0x601827  not         $v1, $v1
    ctx->pc = 0x14b4dcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x14b4e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14b4e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14b4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14b4e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14b4ec:
    // 0x14b4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B4F4u;
}
