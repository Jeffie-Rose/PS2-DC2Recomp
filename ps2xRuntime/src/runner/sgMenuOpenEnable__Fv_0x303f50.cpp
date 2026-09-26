#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgMenuOpenEnable__Fv
// Address: 0x303f50 - 0x303f7c
void sgMenuOpenEnable__Fv_0x303f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgMenuOpenEnable__Fv_0x303f50");
#endif

    switch (ctx->pc) {
        case 0x303f60u: goto label_303f60;
        default: break;
    }

    ctx->pc = 0x303f50u;

    // 0x303f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x303f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x303f58: 0xc0c0fc8  jal         func_303F20
    ctx->pc = 0x303F58u;
    SET_GPR_U32(ctx, 31, 0x303F60u);
    ctx->pc = 0x303F20u;
    if (runtime->hasFunction(0x303F20u)) {
        auto targetFn = runtime->lookupFunction(0x303F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F60u; }
        if (ctx->pc != 0x303F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameRunning__Fv_0x303f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303F60u; }
        if (ctx->pc != 0x303F60u) { return; }
    }
    ctx->pc = 0x303F60u;
label_303f60:
    // 0x303f60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x303F60u;
    {
        const bool branch_taken_0x303f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x303F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F60u;
            // 0x303f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303f60) {
            ctx->pc = 0x303F70u;
            goto label_303f70;
        }
    }
    ctx->pc = 0x303F68u;
    // 0x303f68: 0x8f82a108  lw          $v0, -0x5EF8($gp)
    ctx->pc = 0x303f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942984)));
    // 0x303f6c: 0x0  nop
    ctx->pc = 0x303f6cu;
    // NOP
label_303f70:
    // 0x303f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x303f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303f74: 0x3e00008  jr          $ra
    ctx->pc = 0x303F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303F74u;
            // 0x303f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303F7Cu;
}
