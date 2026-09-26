#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCamera__6CSceneFi
// Address: 0x2838c0 - 0x283910
void GetCamera__6CSceneFi_0x2838c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCamera__6CSceneFi_0x2838c0");
#endif

    switch (ctx->pc) {
        case 0x2838d0u: goto label_2838d0;
        default: break;
    }

    ctx->pc = 0x2838c0u;

    // 0x2838c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2838c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2838c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2838c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2838c8: 0xc0a0d00  jal         func_283400
    ctx->pc = 0x2838C8u;
    SET_GPR_U32(ctx, 31, 0x2838D0u);
    ctx->pc = 0x283400u;
    if (runtime->hasFunction(0x283400u)) {
        auto targetFn = runtime->lookupFunction(0x283400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838D0u; }
        if (ctx->pc != 0x2838D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCamera__6CSceneFi_0x283400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2838D0u; }
        if (ctx->pc != 0x2838D0u) { return; }
    }
    ctx->pc = 0x2838D0u;
label_2838d0:
    // 0x2838d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2838D0u;
    {
        const bool branch_taken_0x2838d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2838d0) {
            ctx->pc = 0x2838E0u;
            goto label_2838e0;
        }
    }
    ctx->pc = 0x2838D8u;
    // 0x2838d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2838D8u;
    {
        const bool branch_taken_0x2838d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2838D8u;
            // 0x2838dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d8) {
            ctx->pc = 0x283904u;
            goto label_283904;
        }
    }
    ctx->pc = 0x2838E0u;
label_2838e0:
    // 0x2838e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2838e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2838e4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x2838e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x2838e8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2838e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2838ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2838ECu;
    {
        const bool branch_taken_0x2838ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838ec) {
            ctx->pc = 0x2838FCu;
            goto label_2838fc;
        }
    }
    ctx->pc = 0x2838F4u;
    // 0x2838f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2838F4u;
    {
        const bool branch_taken_0x2838f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2838F4u;
            // 0x2838f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838f4) {
            ctx->pc = 0x283904u;
            goto label_283904;
        }
    }
    ctx->pc = 0x2838FCu;
label_2838fc:
    // 0x2838fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2838fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x283900: 0x0  nop
    ctx->pc = 0x283900u;
    // NOP
label_283904:
    // 0x283904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283908: 0x3e00008  jr          $ra
    ctx->pc = 0x283908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283908u;
            // 0x28390c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283910u;
}
