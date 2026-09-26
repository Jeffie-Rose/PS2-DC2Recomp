#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_AHDDELAY__FP12RS_STACKDATAi
// Address: 0x26f460 - 0x26f490
void ps2__CMRS_AHDDELAY__FP12RS_STACKDATAi_0x26f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_AHDDELAY__FP12RS_STACKDATAi_0x26f460");
#endif

    switch (ctx->pc) {
        case 0x26f470u: goto label_26f470;
        case 0x26f480u: goto label_26f480;
        default: break;
    }

    ctx->pc = 0x26f460u;

    // 0x26f460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f468: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F468u;
    SET_GPR_U32(ctx, 31, 0x26F470u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F470u; }
        if (ctx->pc != 0x26F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F470u; }
        if (ctx->pc != 0x26F470u) { return; }
    }
    ctx->pc = 0x26F470u;
label_26f470:
    // 0x26f470: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f474: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f478: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x26F478u;
    SET_GPR_U32(ctx, 31, 0x26F480u);
    ctx->pc = 0x26F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F478u;
            // 0x26f47c: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (runtime->hasFunction(0x25A0E0u)) {
        auto targetFn = runtime->lookupFunction(0x25A0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F480u; }
        if (ctx->pc != 0x26F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AHDDelay__12CSceneCmrSeqFi_0x25a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F480u; }
        if (ctx->pc != 0x26F480u) { return; }
    }
    ctx->pc = 0x26F480u;
label_26f480:
    // 0x26f480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f488: 0x3e00008  jr          $ra
    ctx->pc = 0x26F488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F488u;
            // 0x26f48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F490u;
}
