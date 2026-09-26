#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stay__13CVillagerMngrFi
// Address: 0x2cd2d0 - 0x2cd300
void Stay__13CVillagerMngrFi_0x2cd2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stay__13CVillagerMngrFi_0x2cd2d0");
#endif

    switch (ctx->pc) {
        case 0x2cd2e0u: goto label_2cd2e0;
        default: break;
    }

    ctx->pc = 0x2cd2d0u;

    // 0x2cd2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd2d8: 0xc0b34a4  jal         func_2CD290
    ctx->pc = 0x2CD2D8u;
    SET_GPR_U32(ctx, 31, 0x2CD2E0u);
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD2E0u; }
        if (ctx->pc != 0x2CD2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD2E0u; }
        if (ctx->pc != 0x2CD2E0u) { return; }
    }
    ctx->pc = 0x2CD2E0u;
label_2cd2e0:
    // 0x2cd2e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2E0u;
    {
        const bool branch_taken_0x2cd2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2e0) {
            ctx->pc = 0x2CD2F4u;
            goto label_2cd2f4;
        }
    }
    ctx->pc = 0x2CD2E8u;
    // 0x2cd2e8: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2cd2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cd2ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2cd2f0: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x2cd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_2cd2f4:
    // 0x2cd2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD2F8u;
            // 0x2cd2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD300u;
}
