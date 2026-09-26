#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsLocate
// Address: 0x1056a8 - 0x1056d4
void sceDevConsLocate_0x1056a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsLocate_0x1056a8");
#endif

    ctx->pc = 0x1056a8u;

    // 0x1056a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1056a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1056ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1056acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1056b0: 0xa3402b  sltu        $t0, $a1, $v1
    ctx->pc = 0x1056b0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1056b4: 0xc2382b  sltu        $a3, $a2, $v0
    ctx->pc = 0x1056b4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1056b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1056b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1056bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1056bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1056c0: 0xa8180b  movn        $v1, $a1, $t0
    ctx->pc = 0x1056c0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
    // 0x1056c4: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x1056c4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x1056c8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1056c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1056cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1056CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1056D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1056CCu;
            // 0x1056d0: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1056D4u;
}
