#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DMG_SET_DAMAGE__FP12RS_STACKDATAi
// Address: 0x2e8180 - 0x2e81a4
void ps2__DMG_SET_DAMAGE__FP12RS_STACKDATAi_0x2e8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DMG_SET_DAMAGE__FP12RS_STACKDATAi_0x2e8180");
#endif

    switch (ctx->pc) {
        case 0x2e8194u: goto label_2e8194;
        default: break;
    }

    ctx->pc = 0x2e8180u;

    // 0x2e8180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8184: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e8184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e818c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E818Cu;
    SET_GPR_U32(ctx, 31, 0x2E8194u);
    ctx->pc = 0x2E8190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E818Cu;
            // 0x2e8190: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8194u; }
        if (ctx->pc != 0x2E8194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8194u; }
        if (ctx->pc != 0x2E8194u) { return; }
    }
    ctx->pc = 0x2E8194u;
label_2e8194:
    // 0x2e8194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e819c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E819Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E81A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E819Cu;
            // 0x2e81a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E81A4u;
}
