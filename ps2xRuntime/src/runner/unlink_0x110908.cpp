#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: unlink
// Address: 0x110908 - 0x110930
void unlink_0x110908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("unlink_0x110908");
#endif

    switch (ctx->pc) {
        case 0x110918u: goto label_110918;
        default: break;
    }

    ctx->pc = 0x110908u;

    // 0x110908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11090c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110910: 0xc04950a  jal         func_125428
    ctx->pc = 0x110910u;
    SET_GPR_U32(ctx, 31, 0x110918u);
    ctx->pc = 0x125428u;
    if (runtime->hasFunction(0x125428u)) {
        auto targetFn = runtime->lookupFunction(0x125428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110918u; }
        if (ctx->pc != 0x110918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x125428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110918u; }
        if (ctx->pc != 0x110918u) { return; }
    }
    ctx->pc = 0x110918u;
label_110918:
    // 0x110918: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x110918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11091c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11091cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110920: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x110920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x110924: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x110924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x110928: 0x3e00008  jr          $ra
    ctx->pc = 0x110928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11092Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110928u;
            // 0x11092c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110930u;
}
