#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAddMapPath__Fi
// Address: 0x2d28b0 - 0x2d28e0
void GetAddMapPath__Fi_0x2d28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAddMapPath__Fi_0x2d28b0");
#endif

    switch (ctx->pc) {
        case 0x2d28c0u: goto label_2d28c0;
        default: break;
    }

    ctx->pc = 0x2d28b0u;

    // 0x2d28b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d28b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d28b8: 0xc0b496c  jal         func_2D25B0
    ctx->pc = 0x2D28B8u;
    SET_GPR_U32(ctx, 31, 0x2D28C0u);
    ctx->pc = 0x2D25B0u;
    if (runtime->hasFunction(0x2D25B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D25B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28C0u; }
        if (ctx->pc != 0x2D28C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapNameInfo__Fi_0x2d25b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28C0u; }
        if (ctx->pc != 0x2D28C0u) { return; }
    }
    ctx->pc = 0x2D28C0u;
label_2d28c0:
    // 0x2d28c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D28C0u;
    {
        const bool branch_taken_0x2d28c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28c0) {
            ctx->pc = 0x2D28D0u;
            goto label_2d28d0;
        }
    }
    ctx->pc = 0x2D28C8u;
    // 0x2d28c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D28C8u;
    {
        const bool branch_taken_0x2d28c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D28CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28C8u;
            // 0x2d28cc: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28c8) {
            ctx->pc = 0x2D28D4u;
            goto label_2d28d4;
        }
    }
    ctx->pc = 0x2D28D0u;
label_2d28d0:
    // 0x2d28d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d28d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d28d4:
    // 0x2d28d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d28d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d28d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D28D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D28DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28D8u;
            // 0x2d28dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D28E0u;
}
