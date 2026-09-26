#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearEditFlag__Fv
// Address: 0x2d91e0 - 0x2d9238
void ClearEditFlag__Fv_0x2d91e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearEditFlag__Fv_0x2d91e0");
#endif

    switch (ctx->pc) {
        case 0x2d9220u: goto label_2d9220;
        case 0x2d922cu: goto label_2d922c;
        default: break;
    }

    ctx->pc = 0x2d91e0u;

    // 0x2d91e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d91e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d91e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d91e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d91ec: 0xaf829e20  sw          $v0, -0x61E0($gp)
    ctx->pc = 0x2d91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942240), GPR_U32(ctx, 2));
    // 0x2d91f0: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2d91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
    // 0x2d91f4: 0xaf829e4c  sw          $v0, -0x61B4($gp)
    ctx->pc = 0x2d91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942284), GPR_U32(ctx, 2));
    // 0x2d91f8: 0xaf829e50  sw          $v0, -0x61B0($gp)
    ctx->pc = 0x2d91f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942288), GPR_U32(ctx, 2));
    // 0x2d91fc: 0xaf809e28  sw          $zero, -0x61D8($gp)
    ctx->pc = 0x2d91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
    // 0x2d9200: 0xaf809e18  sw          $zero, -0x61E8($gp)
    ctx->pc = 0x2d9200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942232), GPR_U32(ctx, 0));
    // 0x2d9204: 0xaf809e1c  sw          $zero, -0x61E4($gp)
    ctx->pc = 0x2d9204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942236), GPR_U32(ctx, 0));
    // 0x2d9208: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2d9208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
    // 0x2d920c: 0xaf809e30  sw          $zero, -0x61D0($gp)
    ctx->pc = 0x2d920cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942256), GPR_U32(ctx, 0));
    // 0x2d9210: 0xaf809e34  sw          $zero, -0x61CC($gp)
    ctx->pc = 0x2d9210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942260), GPR_U32(ctx, 0));
    // 0x2d9214: 0xaf809e54  sw          $zero, -0x61AC($gp)
    ctx->pc = 0x2d9214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942292), GPR_U32(ctx, 0));
    // 0x2d9218: 0xc0b6470  jal         func_2D91C0
    ctx->pc = 0x2D9218u;
    SET_GPR_U32(ctx, 31, 0x2D9220u);
    ctx->pc = 0x2D921Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9218u;
            // 0x2d921c: 0xaf809e58  sw          $zero, -0x61A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D91C0u;
    if (runtime->hasFunction(0x2D91C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9220u; }
        if (ctx->pc != 0x2D9220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearUndoFlag__Fv_0x2d91c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9220u; }
        if (ctx->pc != 0x2D9220u) { return; }
    }
    ctx->pc = 0x2D9220u;
label_2d9220:
    // 0x2d9220: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d9220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d9224: 0xc0b646c  jal         func_2D91B0
    ctx->pc = 0x2D9224u;
    SET_GPR_U32(ctx, 31, 0x2D922Cu);
    ctx->pc = 0x2D9228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9224u;
            // 0x2d9228: 0xaf839e8c  sw          $v1, -0x6174($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942348), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D91B0u;
    if (runtime->hasFunction(0x2D91B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D922Cu; }
        if (ctx->pc != 0x2D922Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEditStepCnt__Fv_0x2d91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D922Cu; }
        if (ctx->pc != 0x2D922Cu) { return; }
    }
    ctx->pc = 0x2D922Cu;
label_2d922c:
    // 0x2d922c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9230: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9230u;
            // 0x2d9234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9238u;
}
