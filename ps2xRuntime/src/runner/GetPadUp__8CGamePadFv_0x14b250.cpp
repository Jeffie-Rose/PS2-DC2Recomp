#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPadUp__8CGamePadFv
// Address: 0x14b250 - 0x14b27c
void GetPadUp__8CGamePadFv_0x14b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPadUp__8CGamePadFv_0x14b250");
#endif

    ctx->pc = 0x14b250u;

    // 0x14b250: 0x8c82045c  lw          $v0, 0x45C($a0)
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1116)));
    // 0x14b254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B254u;
    {
        const bool branch_taken_0x14b254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B254u;
            // 0x14b258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b254) {
            ctx->pc = 0x14B264u;
            goto label_14b264;
        }
    }
    ctx->pc = 0x14B25Cu;
    // 0x14b25c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14B25Cu;
    {
        const bool branch_taken_0x14b25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b25c) {
            ctx->pc = 0x14B274u;
            goto label_14b274;
        }
    }
    ctx->pc = 0x14B264u;
label_14b264:
    // 0x14b264: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x14b264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b268: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x14b26c: 0x601827  not         $v1, $v1
    ctx->pc = 0x14b26cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x14b270: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14b270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_14b274:
    // 0x14b274: 0x3e00008  jr          $ra
    ctx->pc = 0x14B274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B27Cu;
}
