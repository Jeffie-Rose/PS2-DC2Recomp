#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CREATE_DAMAGE__FP12RS_STACKDATAi
// Address: 0x2e8120 - 0x2e8144
void ps2__CREATE_DAMAGE__FP12RS_STACKDATAi_0x2e8120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CREATE_DAMAGE__FP12RS_STACKDATAi_0x2e8120");
#endif

    switch (ctx->pc) {
        case 0x2e8134u: goto label_2e8134;
        default: break;
    }

    ctx->pc = 0x2e8120u;

    // 0x2e8120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e8124: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e8124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2e8128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e8128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e812c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E812Cu;
    SET_GPR_U32(ctx, 31, 0x2E8134u);
    ctx->pc = 0x2E8130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E812Cu;
            // 0x2e8130: 0x24841390  addiu       $a0, $a0, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8134u; }
        if (ctx->pc != 0x2E8134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8134u; }
        if (ctx->pc != 0x2E8134u) { return; }
    }
    ctx->pc = 0x2E8134u;
label_2e8134:
    // 0x2e8134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e8138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e8138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e813c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E813Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E813Cu;
            // 0x2e8140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8144u;
}
