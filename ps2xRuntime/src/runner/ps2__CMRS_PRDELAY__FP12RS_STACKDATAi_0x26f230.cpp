#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_PRDELAY__FP12RS_STACKDATAi
// Address: 0x26f230 - 0x26f260
void ps2__CMRS_PRDELAY__FP12RS_STACKDATAi_0x26f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_PRDELAY__FP12RS_STACKDATAi_0x26f230");
#endif

    switch (ctx->pc) {
        case 0x26f240u: goto label_26f240;
        case 0x26f250u: goto label_26f250;
        default: break;
    }

    ctx->pc = 0x26f230u;

    // 0x26f230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26f234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f238: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F238u;
    SET_GPR_U32(ctx, 31, 0x26F240u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F240u; }
        if (ctx->pc != 0x26F240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F240u; }
        if (ctx->pc != 0x26F240u) { return; }
    }
    ctx->pc = 0x26F240u;
label_26f240:
    // 0x26f240: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f248: 0xc096720  jal         func_259C80
    ctx->pc = 0x26F248u;
    SET_GPR_U32(ctx, 31, 0x26F250u);
    ctx->pc = 0x26F24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F248u;
            // 0x26f24c: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259C80u;
    if (runtime->hasFunction(0x259C80u)) {
        auto targetFn = runtime->lookupFunction(0x259C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F250u; }
        if (ctx->pc != 0x26F250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PRDelay__12CSceneCmrSeqFi_0x259c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F250u; }
        if (ctx->pc != 0x26F250u) { return; }
    }
    ctx->pc = 0x26F250u;
label_26f250:
    // 0x26f250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f258: 0x3e00008  jr          $ra
    ctx->pc = 0x26F258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F258u;
            // 0x26f25c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F260u;
}
