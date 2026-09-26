#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditModeChgStep__FP6CScene
// Address: 0x1a9c20 - 0x1a9c84
void EditModeChgStep__FP6CScene_0x1a9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditModeChgStep__FP6CScene_0x1a9c20");
#endif

    switch (ctx->pc) {
        case 0x1a9c58u: goto label_1a9c58;
        case 0x1a9c78u: goto label_1a9c78;
        default: break;
    }

    ctx->pc = 0x1a9c20u;

    // 0x1a9c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a9c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9c28: 0x8f838ca4  lw          $v1, -0x735C($gp)
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937764)));
    // 0x1a9c2c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A9C2Cu;
    {
        const bool branch_taken_0x1a9c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c2c) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C34u;
    // 0x1a9c34: 0x8f838ca8  lw          $v1, -0x7358($gp)
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x1a9c38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a9c3c: 0xaf838ca8  sw          $v1, -0x7358($gp)
    ctx->pc = 0x1a9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 3));
    // 0x1a9c40: 0x8f838ca8  lw          $v1, -0x7358($gp)
    ctx->pc = 0x1a9c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937768)));
    // 0x1a9c44: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9C44u;
    {
        const bool branch_taken_0x1a9c44 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1a9c44) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C4Cu;
    // 0x1a9c4c: 0xaf808ca4  sw          $zero, -0x735C($gp)
    ctx->pc = 0x1a9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937764), GPR_U32(ctx, 0));
    // 0x1a9c50: 0xc06a6dc  jal         func_1A9B70
    ctx->pc = 0x1A9C50u;
    SET_GPR_U32(ctx, 31, 0x1A9C58u);
    ctx->pc = 0x1A9C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C50u;
            // 0x1a9c54: 0xaf808ca8  sw          $zero, -0x7358($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B70u;
    if (runtime->hasFunction(0x1A9B70u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C58u; }
        if (ctx->pc != 0x1A9C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UnLockCharaCtrl__Fv_0x1a9b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C58u; }
        if (ctx->pc != 0x1A9C58u) { return; }
    }
    ctx->pc = 0x1A9C58u;
label_1a9c58:
    // 0x1a9c58: 0x8c832e88  lw          $v1, 0x2E88($a0)
    ctx->pc = 0x1a9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11912)));
    // 0x1a9c5c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A9C5Cu;
    {
        const bool branch_taken_0x1a9c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c5c) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C64u;
    // 0x1a9c64: 0x8f858cac  lw          $a1, -0x7354($gp)
    ctx->pc = 0x1a9c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937772)));
    // 0x1a9c68: 0x18a00003  blez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9C68u;
    {
        const bool branch_taken_0x1a9c68 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A9C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C68u;
            // 0x1a9c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c68) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C70u;
    // 0x1a9c70: 0xc0b1f3c  jal         func_2C7CF0
    ctx->pc = 0x1A9C70u;
    SET_GPR_U32(ctx, 31, 0x1A9C78u);
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C78u; }
        if (ctx->pc != 0x1A9C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C78u; }
        if (ctx->pc != 0x1A9C78u) { return; }
    }
    ctx->pc = 0x1A9C78u;
label_1a9c78:
    // 0x1a9c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C7Cu;
            // 0x1a9c80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9C84u;
}
