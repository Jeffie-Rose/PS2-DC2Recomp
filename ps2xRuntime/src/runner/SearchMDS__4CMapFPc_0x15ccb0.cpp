#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchMDS__4CMapFPc
// Address: 0x15ccb0 - 0x15ccd8
void SearchMDS__4CMapFPc_0x15ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchMDS__4CMapFPc_0x15ccb0");
#endif

    switch (ctx->pc) {
        case 0x15ccccu: goto label_15cccc;
        default: break;
    }

    ctx->pc = 0x15ccb0u;

    // 0x15ccb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15ccb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ccb8: 0x8c840100  lw          $a0, 0x100($a0)
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x15ccbc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CCBCu;
    {
        const bool branch_taken_0x15ccbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCBCu;
            // 0x15ccc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccbc) {
            ctx->pc = 0x15CCCCu;
            goto label_15cccc;
        }
    }
    ctx->pc = 0x15CCC4u;
    // 0x15ccc4: 0xc05a318  jal         func_168C60
    ctx->pc = 0x15CCC4u;
    SET_GPR_U32(ctx, 31, 0x15CCCCu);
    ctx->pc = 0x168C60u;
    if (runtime->hasFunction(0x168C60u)) {
        auto targetFn = runtime->lookupFunction(0x168C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCCCu; }
        if (ctx->pc != 0x15CCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMDS__11CMdsListSetFPc_0x168c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CCCCu; }
        if (ctx->pc != 0x15CCCCu) { return; }
    }
    ctx->pc = 0x15CCCCu;
label_15cccc:
    // 0x15cccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ccccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ccd0: 0x3e00008  jr          $ra
    ctx->pc = 0x15CCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCD0u;
            // 0x15ccd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CCD8u;
}
