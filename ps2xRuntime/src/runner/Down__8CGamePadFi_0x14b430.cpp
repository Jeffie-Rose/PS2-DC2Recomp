#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Down__8CGamePadFi
// Address: 0x14b430 - 0x14b464
void Down__8CGamePadFi_0x14b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Down__8CGamePadFi_0x14b430");
#endif

    ctx->pc = 0x14b430u;

    // 0x14b430: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b434: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B434u;
    {
        const bool branch_taken_0x14b434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B434u;
            // 0x14b438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b434) {
            ctx->pc = 0x14B444u;
            goto label_14b444;
        }
    }
    ctx->pc = 0x14B43Cu;
    // 0x14b43c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14B43Cu;
    {
        const bool branch_taken_0x14b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b43c) {
            ctx->pc = 0x14B45Cu;
            goto label_14b45c;
        }
    }
    ctx->pc = 0x14B444u;
label_14b444:
    // 0x14b444: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x14b444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x14b448: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b44c: 0x601827  not         $v1, $v1
    ctx->pc = 0x14b44cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x14b450: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14b454: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x14b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x14b458: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x14b458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_14b45c:
    // 0x14b45c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B464u;
}
