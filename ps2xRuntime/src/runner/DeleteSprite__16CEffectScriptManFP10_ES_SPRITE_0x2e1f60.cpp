#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteSprite__16CEffectScriptManFP10_ES_SPRITE
// Address: 0x2e1f60 - 0x2e1f98
void DeleteSprite__16CEffectScriptManFP10_ES_SPRITE_0x2e1f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteSprite__16CEffectScriptManFP10_ES_SPRITE_0x2e1f60");
#endif

    switch (ctx->pc) {
        case 0x2e1f8cu: goto label_2e1f8c;
        default: break;
    }

    ctx->pc = 0x2e1f60u;

    // 0x2e1f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e1f68: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2e1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e1f6c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1F6Cu;
    {
        const bool branch_taken_0x2e1f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f6c) {
            ctx->pc = 0x2E1F8Cu;
            goto label_2e1f8c;
        }
    }
    ctx->pc = 0x2E1F74u;
    // 0x2e1f74: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1F74u;
    {
        const bool branch_taken_0x2e1f74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f74) {
            ctx->pc = 0x2E1F84u;
            goto label_2e1f84;
        }
    }
    ctx->pc = 0x2E1F7Cu;
    // 0x2e1f7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1F7Cu;
    {
        const bool branch_taken_0x2e1f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F7Cu;
            // 0x2e1f80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f7c) {
            ctx->pc = 0x2E1F90u;
            goto label_2e1f90;
        }
    }
    ctx->pc = 0x2E1F84u;
label_2e1f84:
    // 0x2e1f84: 0xc04e688  jal         func_139A20
    ctx->pc = 0x2E1F84u;
    SET_GPR_U32(ctx, 31, 0x2E1F8Cu);
    ctx->pc = 0x139A20u;
    if (runtime->hasFunction(0x139A20u)) {
        auto targetFn = runtime->lookupFunction(0x139A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F8Cu; }
        if (ctx->pc != 0x2E1F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Free__9mgCMemoryFP1_0x139a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1F8Cu; }
        if (ctx->pc != 0x2E1F8Cu) { return; }
    }
    ctx->pc = 0x2E1F8Cu;
label_2e1f8c:
    // 0x2e1f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1f90:
    // 0x2e1f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1F90u;
            // 0x2e1f94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1F98u;
}
