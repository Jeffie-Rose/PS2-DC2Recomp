#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetHpRate__16CBattleCharaInfoFf
// Address: 0x1a0370 - 0x1a0398
void SetHpRate__16CBattleCharaInfoFf_0x1a0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetHpRate__16CBattleCharaInfoFf_0x1a0370");
#endif

    switch (ctx->pc) {
        case 0x1a038cu: goto label_1a038c;
        default: break;
    }

    ctx->pc = 0x1a0370u;

    // 0x1a0370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a0374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0378: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x1a0378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1a037c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A037Cu;
    {
        const bool branch_taken_0x1a037c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a037c) {
            ctx->pc = 0x1A038Cu;
            goto label_1a038c;
        }
    }
    ctx->pc = 0x1A0384u;
    // 0x1a0384: 0xc065b40  jal         func_196D00
    ctx->pc = 0x1A0384u;
    SET_GPR_U32(ctx, 31, 0x1A038Cu);
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A038Cu; }
        if (ctx->pc != 0x1A038Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A038Cu; }
        if (ctx->pc != 0x1A038Cu) { return; }
    }
    ctx->pc = 0x1A038Cu;
label_1a038c:
    // 0x1a038c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a038cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0390: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0390u;
            // 0x1a0394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0398u;
}
