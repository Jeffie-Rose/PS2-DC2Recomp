#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepMenuDl3__Fv
// Address: 0x1f6a70 - 0x1f6af0
void StepMenuDl3__Fv_0x1f6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepMenuDl3__Fv_0x1f6a70");
#endif

    switch (ctx->pc) {
        case 0x1f6ae4u: goto label_1f6ae4;
        default: break;
    }

    ctx->pc = 0x1f6a70u;

    // 0x1f6a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6a78: 0x8f828fe4  lw          $v0, -0x701C($gp)
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938596)));
    // 0x1f6a7c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6A7Cu;
    {
        const bool branch_taken_0x1f6a7c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F6A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A7Cu;
            // 0x1f6a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a7c) {
            ctx->pc = 0x1F6A8Cu;
            goto label_1f6a8c;
        }
    }
    ctx->pc = 0x1F6A84u;
    // 0x1f6a84: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F6A84u;
    {
        const bool branch_taken_0x1f6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A84u;
            // 0x1f6a88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a84) {
            ctx->pc = 0x1F6AE8u;
            goto label_1f6ae8;
        }
    }
    ctx->pc = 0x1F6A8Cu;
label_1f6a8c:
    // 0x1f6a8c: 0x8f838fec  lw          $v1, -0x7014($gp)
    ctx->pc = 0x1f6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938604)));
    // 0x1f6a90: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6A90u;
    {
        const bool branch_taken_0x1f6a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A90u;
            // 0x1f6a94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a90) {
            ctx->pc = 0x1F6ADCu;
            goto label_1f6adc;
        }
    }
    ctx->pc = 0x1F6A98u;
    // 0x1f6a98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f6a9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f6aa0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f6aa4: 0x8f838fec  lw          $v1, -0x7014($gp)
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938604)));
    // 0x1f6aa8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f6aac: 0x1c40000b  bgtz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6AACu;
    {
        const bool branch_taken_0x1f6aac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1f6aac) {
            ctx->pc = 0x1F6ADCu;
            goto label_1f6adc;
        }
    }
    ctx->pc = 0x1F6AB4u;
    // 0x1f6ab4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f6ab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f6abc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f6abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f6ac0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1f6ac4: 0x8f838fec  lw          $v1, -0x7014($gp)
    ctx->pc = 0x1f6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938604)));
    // 0x1f6ac8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f6acc: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6ACCu;
    {
        const bool branch_taken_0x1f6acc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1f6acc) {
            ctx->pc = 0x1F6ADCu;
            goto label_1f6adc;
        }
    }
    ctx->pc = 0x1F6AD4u;
    // 0x1f6ad4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1f6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f6ad8: 0xaf828fec  sw          $v0, -0x7014($gp)
    ctx->pc = 0x1f6ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 2));
label_1f6adc:
    // 0x1f6adc: 0xc088920  jal         func_222480
    ctx->pc = 0x1F6ADCu;
    SET_GPR_U32(ctx, 31, 0x1F6AE4u);
    ctx->pc = 0x222480u;
    if (runtime->hasFunction(0x222480u)) {
        auto targetFn = runtime->lookupFunction(0x222480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AE4u; }
        if (ctx->pc != 0x1F6AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl__Fi_0x222480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AE4u; }
        if (ctx->pc != 0x1F6AE4u) { return; }
    }
    ctx->pc = 0x1F6AE4u;
label_1f6ae4:
    // 0x1f6ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6ae8:
    // 0x1f6ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AE8u;
            // 0x1f6aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6AF0u;
}
