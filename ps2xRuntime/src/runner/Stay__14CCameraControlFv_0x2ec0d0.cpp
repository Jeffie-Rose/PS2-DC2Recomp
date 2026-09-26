#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stay__14CCameraControlFv
// Address: 0x2ec0d0 - 0x2ec108
void Stay__14CCameraControlFv_0x2ec0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stay__14CCameraControlFv_0x2ec0d0");
#endif

    switch (ctx->pc) {
        case 0x2ec0ecu: goto label_2ec0ec;
        case 0x2ec0fcu: goto label_2ec0fc;
        default: break;
    }

    ctx->pc = 0x2ec0d0u;

    // 0x2ec0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ec0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ec0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ec0d8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2ec0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2ec0dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC0DCu;
    {
        const bool branch_taken_0x2ec0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec0dc) {
            ctx->pc = 0x2EC0F4u;
            goto label_2ec0f4;
        }
    }
    ctx->pc = 0x2EC0E4u;
    // 0x2ec0e4: 0xc04c654  jal         func_131950
    ctx->pc = 0x2EC0E4u;
    SET_GPR_U32(ctx, 31, 0x2EC0ECu);
    ctx->pc = 0x131950u;
    if (runtime->hasFunction(0x131950u)) {
        auto targetFn = runtime->lookupFunction(0x131950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC0ECu; }
        if (ctx->pc != 0x2EC0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stay__15mgCCameraFollowFv_0x131950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC0ECu; }
        if (ctx->pc != 0x2EC0ECu) { return; }
    }
    ctx->pc = 0x2EC0ECu;
label_2ec0ec:
    // 0x2ec0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC0ECu;
    {
        const bool branch_taken_0x2ec0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC0ECu;
            // 0x2ec0f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec0ec) {
            ctx->pc = 0x2EC100u;
            goto label_2ec100;
        }
    }
    ctx->pc = 0x2EC0F4u;
label_2ec0f4:
    // 0x2ec0f4: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x2EC0F4u;
    SET_GPR_U32(ctx, 31, 0x2EC0FCu);
    ctx->pc = 0x1313A0u;
    if (runtime->hasFunction(0x1313A0u)) {
        auto targetFn = runtime->lookupFunction(0x1313A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC0FCu; }
        if (ctx->pc != 0x2EC0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stay__9mgCCameraFv_0x1313a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EC0FCu; }
        if (ctx->pc != 0x2EC0FCu) { return; }
    }
    ctx->pc = 0x2EC0FCu;
label_2ec0fc:
    // 0x2ec0fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ec0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec100:
    // 0x2ec100: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EC100u;
            // 0x2ec104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EC108u;
}
