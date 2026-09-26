#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BODY__FP12RS_STACKDATAi
// Address: 0x1e3290 - 0x1e32b4
void ps2__SET_BODY__FP12RS_STACKDATAi_0x1e3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BODY__FP12RS_STACKDATAi_0x1e3290");
#endif

    switch (ctx->pc) {
        case 0x1e32a4u: goto label_1e32a4;
        default: break;
    }

    ctx->pc = 0x1e3290u;

    // 0x1e3290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3294: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e3294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e3298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e329c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E329Cu;
    SET_GPR_U32(ctx, 31, 0x1E32A4u);
    ctx->pc = 0x1E32A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E329Cu;
            // 0x1e32a0: 0x24848000  addiu       $a0, $a0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32A4u; }
        if (ctx->pc != 0x1E32A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32A4u; }
        if (ctx->pc != 0x1E32A4u) { return; }
    }
    ctx->pc = 0x1E32A4u;
label_1e32a4:
    // 0x1e32a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e32a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e32ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32ACu;
            // 0x1e32b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E32B4u;
}
