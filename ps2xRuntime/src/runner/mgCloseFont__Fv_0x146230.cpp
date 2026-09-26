#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCloseFont__Fv
// Address: 0x146230 - 0x14625c
void mgCloseFont__Fv_0x146230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCloseFont__Fv_0x146230");
#endif

    switch (ctx->pc) {
        case 0x14624cu: goto label_14624c;
        default: break;
    }

    ctx->pc = 0x146230u;

    // 0x146230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146238: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x146238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x14623c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14623Cu;
    {
        const bool branch_taken_0x14623c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x14623c) {
            ctx->pc = 0x14624Cu;
            goto label_14624c;
        }
    }
    ctx->pc = 0x146244u;
    // 0x146244: 0xc0413e4  jal         func_104F90
    ctx->pc = 0x146244u;
    SET_GPR_U32(ctx, 31, 0x14624Cu);
    ctx->pc = 0x104F90u;
    if (runtime->hasFunction(0x104F90u)) {
        auto targetFn = runtime->lookupFunction(0x104F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14624Cu; }
        if (ctx->pc != 0x14624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsClose_0x104f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14624Cu; }
        if (ctx->pc != 0x14624Cu) { return; }
    }
    ctx->pc = 0x14624Cu;
label_14624c:
    // 0x14624c: 0xaf80883c  sw          $zero, -0x77C4($gp)
    ctx->pc = 0x14624cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), GPR_U32(ctx, 0));
    // 0x146250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146254: 0x3e00008  jr          $ra
    ctx->pc = 0x146254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146254u;
            // 0x146258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14625Cu;
}
