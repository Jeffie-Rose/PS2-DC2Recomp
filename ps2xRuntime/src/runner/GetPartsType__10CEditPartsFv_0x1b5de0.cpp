#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsType__10CEditPartsFv
// Address: 0x1b5de0 - 0x1b5e08
void GetPartsType__10CEditPartsFv_0x1b5de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsType__10CEditPartsFv_0x1b5de0");
#endif

    switch (ctx->pc) {
        case 0x1b5dfcu: goto label_1b5dfc;
        default: break;
    }

    ctx->pc = 0x1b5de0u;

    // 0x1b5de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b5de8: 0x8c840324  lw          $a0, 0x324($a0)
    ctx->pc = 0x1b5de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5dec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5DECu;
    {
        const bool branch_taken_0x1b5dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DECu;
            // 0x1b5df0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5dec) {
            ctx->pc = 0x1B5DFCu;
            goto label_1b5dfc;
        }
    }
    ctx->pc = 0x1B5DF4u;
    // 0x1b5df4: 0xc06d58c  jal         func_1B5630
    ctx->pc = 0x1B5DF4u;
    SET_GPR_U32(ctx, 31, 0x1B5DFCu);
    ctx->pc = 0x1B5630u;
    if (runtime->hasFunction(0x1B5630u)) {
        auto targetFn = runtime->lookupFunction(0x1B5630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DFCu; }
        if (ctx->pc != 0x1B5DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsType__14CEditPartsInfoFv_0x1b5630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DFCu; }
        if (ctx->pc != 0x1B5DFCu) { return; }
    }
    ctx->pc = 0x1B5DFCu;
label_1b5dfc:
    // 0x1b5dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5e00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E00u;
            // 0x1b5e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5E08u;
}
