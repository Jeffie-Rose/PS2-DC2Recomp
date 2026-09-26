#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Down2__8CGamePadFi
// Address: 0x14b470 - 0x14b4b8
void Down2__8CGamePadFi_0x14b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Down2__8CGamePadFi_0x14b470");
#endif

    ctx->pc = 0x14b470u;

    // 0x14b470: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b474: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B474u;
    {
        const bool branch_taken_0x14b474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B474u;
            // 0x14b478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b474) {
            ctx->pc = 0x14B484u;
            goto label_14b484;
        }
    }
    ctx->pc = 0x14B47Cu;
    // 0x14b47c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14B47Cu;
    {
        const bool branch_taken_0x14b47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b47c) {
            ctx->pc = 0x14B4B0u;
            goto label_14b4b0;
        }
    }
    ctx->pc = 0x14B484u;
label_14b484:
    // 0x14b484: 0x8c820460  lw          $v0, 0x460($a0)
    ctx->pc = 0x14b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1120)));
    // 0x14b488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B488u;
    {
        const bool branch_taken_0x14b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B488u;
            // 0x14b48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b488) {
            ctx->pc = 0x14B498u;
            goto label_14b498;
        }
    }
    ctx->pc = 0x14B490u;
    // 0x14b490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B490u;
    {
        const bool branch_taken_0x14b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b490) {
            ctx->pc = 0x14B4B0u;
            goto label_14b4b0;
        }
    }
    ctx->pc = 0x14B498u;
label_14b498:
    // 0x14b498: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x14b498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x14b49c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x14b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x14b4a0: 0x601827  not         $v1, $v1
    ctx->pc = 0x14b4a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x14b4a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b4a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14b4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14b4ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b4acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14b4b0:
    // 0x14b4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B4B8u;
}
