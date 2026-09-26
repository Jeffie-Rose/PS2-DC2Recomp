#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INIT_SE_BAS__FP12RS_STACKDATAi
// Address: 0x273710 - 0x273730
void ps2__INIT_SE_BAS__FP12RS_STACKDATAi_0x273710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INIT_SE_BAS__FP12RS_STACKDATAi_0x273710");
#endif

    switch (ctx->pc) {
        case 0x273720u: goto label_273720;
        default: break;
    }

    ctx->pc = 0x273710u;

    // 0x273710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273718: 0xc0a97d8  jal         func_2A5F60
    ctx->pc = 0x273718u;
    SET_GPR_U32(ctx, 31, 0x273720u);
    ctx->pc = 0x27371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273718u;
            // 0x27371c: 0x8f8497dc  lw          $a0, -0x6824($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F60u;
    if (runtime->hasFunction(0x2A5F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273720u; }
        if (ctx->pc != 0x273720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBas__6CSceneFv_0x2a5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273720u; }
        if (ctx->pc != 0x273720u) { return; }
    }
    ctx->pc = 0x273720u;
label_273720:
    // 0x273720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273724: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273728: 0x3e00008  jr          $ra
    ctx->pc = 0x273728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273728u;
            // 0x27372c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273730u;
}
