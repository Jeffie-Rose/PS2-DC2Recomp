#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_CAMERA_CTRL_PARAM__FP12RS_STACKDATAi
// Address: 0x1e2b50 - 0x1e2bc4
void ps2__RESET_CAMERA_CTRL_PARAM__FP12RS_STACKDATAi_0x1e2b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_CAMERA_CTRL_PARAM__FP12RS_STACKDATAi_0x1e2b50");
#endif

    switch (ctx->pc) {
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b6cu: goto label_1e2b6c;
        default: break;
    }

    ctx->pc = 0x1e2b50u;

    // 0x1e2b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2b58: 0x8f848e6c  lw          $a0, -0x7194($gp)
    ctx->pc = 0x1e2b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e2b5c: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x1E2B5Cu;
    SET_GPR_U32(ctx, 31, 0x1E2B64u);
    ctx->pc = 0x1E2B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B5Cu;
            // 0x1e2b60: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B64u; }
        if (ctx->pc != 0x1E2B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B64u; }
        if (ctx->pc != 0x1E2B64u) { return; }
    }
    ctx->pc = 0x1E2B64u;
label_1e2b64:
    // 0x1e2b64: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x1E2B64u;
    SET_GPR_U32(ctx, 31, 0x1E2B6Cu);
    ctx->pc = 0x1E2B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2B64u;
            // 0x1e2b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B6Cu; }
        if (ctx->pc != 0x1E2B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2B6Cu; }
        if (ctx->pc != 0x1E2B6Cu) { return; }
    }
    ctx->pc = 0x1E2B6Cu;
label_1e2b6c:
    // 0x1e2b6c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1e2b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1e2b70: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
    // 0x1e2b74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e2b78: 0x3c05c170  lui         $a1, 0xC170
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49520 << 16));
    // 0x1e2b7c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e2b80: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x1e2b84: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1e2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1e2b88: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1e2b8c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1e2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1e2b90: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1e2b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1e2b94: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1e2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1e2b98: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x1e2b9c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1e2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x1e2ba0: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1e2ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1e2ba4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1e2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x1e2ba8: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x1e2ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x1e2bac: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1e2bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x1e2bb0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1e2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1e2bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2bb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BBCu;
            // 0x1e2bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2BC4u;
}
