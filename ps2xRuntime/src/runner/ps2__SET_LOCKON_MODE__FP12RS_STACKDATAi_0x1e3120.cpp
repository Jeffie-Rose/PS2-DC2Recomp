#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_LOCKON_MODE__FP12RS_STACKDATAi
// Address: 0x1e3120 - 0x1e3158
void ps2__SET_LOCKON_MODE__FP12RS_STACKDATAi_0x1e3120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_LOCKON_MODE__FP12RS_STACKDATAi_0x1e3120");
#endif

    switch (ctx->pc) {
        case 0x1e3140u: goto label_1e3140;
        default: break;
    }

    ctx->pc = 0x1e3120u;

    // 0x1e3120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e3120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3128: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3128u;
    {
        const bool branch_taken_0x1e3128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3128u;
            // 0x1e312c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3128) {
            ctx->pc = 0x1E3138u;
            goto label_1e3138;
        }
    }
    ctx->pc = 0x1E3130u;
    // 0x1e3130: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3130u;
    {
        const bool branch_taken_0x1e3130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3130u;
            // 0x1e3134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3130) {
            ctx->pc = 0x1E314Cu;
            goto label_1e314c;
        }
    }
    ctx->pc = 0x1E3138u;
label_1e3138:
    // 0x1e3138: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E3138u;
    SET_GPR_U32(ctx, 31, 0x1E3140u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3140u; }
        if (ctx->pc != 0x1E3140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3140u; }
        if (ctx->pc != 0x1E3140u) { return; }
    }
    ctx->pc = 0x1E3140u;
label_1e3140:
    // 0x1e3140: 0x8f838e6c  lw          $v1, -0x7194($gp)
    ctx->pc = 0x1e3140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e3144: 0xa462302e  sh          $v0, 0x302E($v1)
    ctx->pc = 0x1e3144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12334), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e314c:
    // 0x1e314c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e314cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3150: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3150u;
            // 0x1e3154: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3158u;
}
