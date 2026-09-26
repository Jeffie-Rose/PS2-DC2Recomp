#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ActivePrimNum__11CColPrimManFv
// Address: 0x1ba790 - 0x1ba7c8
void ActivePrimNum__11CColPrimManFv_0x1ba790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActivePrimNum__11CColPrimManFv_0x1ba790");
#endif

    switch (ctx->pc) {
        case 0x1ba79cu: goto label_1ba79c;
        default: break;
    }

    ctx->pc = 0x1ba790u;

    // 0x1ba790: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ba794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba798: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba79c:
    // 0x1ba79c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1ba79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ba7a0: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1ba7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1ba7a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA7A4u;
    {
        const bool branch_taken_0x1ba7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7a4) {
            ctx->pc = 0x1BA7B0u;
            goto label_1ba7b0;
        }
    }
    ctx->pc = 0x1BA7ACu;
    // 0x1ba7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ba7b0:
    // 0x1ba7b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ba7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ba7b4: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x1ba7b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1ba7b8: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BA7B8u;
    {
        const bool branch_taken_0x1ba7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA7B8u;
            // 0x1ba7bc: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7b8) {
            ctx->pc = 0x1BA79Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba79c;
        }
    }
    ctx->pc = 0x1BA7C0u;
    // 0x1ba7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA7C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA7C8u;
}
