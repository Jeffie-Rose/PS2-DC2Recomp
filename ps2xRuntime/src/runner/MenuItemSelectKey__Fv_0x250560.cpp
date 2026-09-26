#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemSelectKey__Fv
// Address: 0x250560 - 0x250588
void MenuItemSelectKey__Fv_0x250560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemSelectKey__Fv_0x250560");
#endif

    switch (ctx->pc) {
        case 0x25057cu: goto label_25057c;
        default: break;
    }

    ctx->pc = 0x250560u;

    // 0x250560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250568: 0x8f849788  lw          $a0, -0x6878($gp)
    ctx->pc = 0x250568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940552)));
    // 0x25056c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25056Cu;
    {
        const bool branch_taken_0x25056c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25056Cu;
            // 0x250570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25056c) {
            ctx->pc = 0x25057Cu;
            goto label_25057c;
        }
    }
    ctx->pc = 0x250574u;
    // 0x250574: 0xc093d1c  jal         func_24F470
    ctx->pc = 0x250574u;
    SET_GPR_U32(ctx, 31, 0x25057Cu);
    ctx->pc = 0x24F470u;
    if (runtime->hasFunction(0x24F470u)) {
        auto targetFn = runtime->lookupFunction(0x24F470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25057Cu; }
        if (ctx->pc != 0x25057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyStep__11CItemSelectFv_0x24f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25057Cu; }
        if (ctx->pc != 0x25057Cu) { return; }
    }
    ctx->pc = 0x25057Cu;
label_25057c:
    // 0x25057c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25057cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250580: 0x3e00008  jr          $ra
    ctx->pc = 0x250580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250580u;
            // 0x250584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250588u;
}
