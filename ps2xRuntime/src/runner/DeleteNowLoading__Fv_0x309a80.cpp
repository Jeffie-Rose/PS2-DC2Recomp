#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteNowLoading__Fv
// Address: 0x309a80 - 0x309b08
void DeleteNowLoading__Fv_0x309a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteNowLoading__Fv_0x309a80");
#endif

    switch (ctx->pc) {
        case 0x309aa0u: goto label_309aa0;
        case 0x309aacu: goto label_309aac;
        case 0x309ab4u: goto label_309ab4;
        case 0x309abcu: goto label_309abc;
        case 0x309ae0u: goto label_309ae0;
        case 0x309ae8u: goto label_309ae8;
        case 0x309afcu: goto label_309afc;
        default: break;
    }

    ctx->pc = 0x309a80u;

    // 0x309a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x309a84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x309a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x309a8c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x309a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x309a90: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x309A90u;
    {
        const bool branch_taken_0x309a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x309a90) {
            ctx->pc = 0x309AFCu;
            goto label_309afc;
        }
    }
    ctx->pc = 0x309A98u;
    // 0x309a98: 0xc0c251c  jal         func_309470
    ctx->pc = 0x309A98u;
    SET_GPR_U32(ctx, 31, 0x309AA0u);
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AA0u; }
        if (ctx->pc != 0x309AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AA0u; }
        if (ctx->pc != 0x309AA0u) { return; }
    }
    ctx->pc = 0x309AA0u;
label_309aa0:
    // 0x309aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x309aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309aa4: 0xc0c251c  jal         func_309470
    ctx->pc = 0x309AA4u;
    SET_GPR_U32(ctx, 31, 0x309AACu);
    ctx->pc = 0x309AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309AA4u;
            // 0x309aa8: 0xaf82a19c  sw          $v0, -0x5E64($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AACu; }
        if (ctx->pc != 0x309AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AACu; }
        if (ctx->pc != 0x309AACu) { return; }
    }
    ctx->pc = 0x309AACu;
label_309aac:
    // 0x309aac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x309AACu;
    {
        const bool branch_taken_0x309aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x309aac) {
            ctx->pc = 0x309ABCu;
            goto label_309abc;
        }
    }
    ctx->pc = 0x309AB4u;
label_309ab4:
    // 0x309ab4: 0xc0c251c  jal         func_309470
    ctx->pc = 0x309AB4u;
    SET_GPR_U32(ctx, 31, 0x309ABCu);
    ctx->pc = 0x309470u;
    if (runtime->hasFunction(0x309470u)) {
        auto targetFn = runtime->lookupFunction(0x309470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309ABCu; }
        if (ctx->pc != 0x309ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SwitchNowLoadingThread__Fv_0x309470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309ABCu; }
        if (ctx->pc != 0x309ABCu) { return; }
    }
    ctx->pc = 0x309ABCu;
label_309abc:
    // 0x309abc: 0x0  nop
    ctx->pc = 0x309abcu;
    // NOP
    // 0x309ac0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x309ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x309ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x309ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x309ac8: 0x0  nop
    ctx->pc = 0x309ac8u;
    // NOP
    // 0x309acc: 0x0  nop
    ctx->pc = 0x309accu;
    // NOP
    // 0x309ad0: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x309AD0u;
    {
        const bool branch_taken_0x309ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309ad0) {
            ctx->pc = 0x309AB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_309ab4;
        }
    }
    ctx->pc = 0x309AD8u;
    // 0x309ad8: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x309AD8u;
    SET_GPR_U32(ctx, 31, 0x309AE0u);
    ctx->pc = 0x309ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309AD8u;
            // 0x309adc: 0x8f84a188  lw          $a0, -0x5E78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AE0u; }
        if (ctx->pc != 0x309AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AE0u; }
        if (ctx->pc != 0x309AE0u) { return; }
    }
    ctx->pc = 0x309AE0u;
label_309ae0:
    // 0x309ae0: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x309AE0u;
    SET_GPR_U32(ctx, 31, 0x309AE8u);
    ctx->pc = 0x309AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309AE0u;
            // 0x309ae4: 0x8f84a188  lw          $a0, -0x5E78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AE8u; }
        if (ctx->pc != 0x309AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AE8u; }
        if (ctx->pc != 0x309AE8u) { return; }
    }
    ctx->pc = 0x309AE8u;
label_309ae8:
    // 0x309ae8: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x309ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x309aec: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x309aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x309af0: 0x8c25b480  lw          $a1, -0x4B80($at)
    ctx->pc = 0x309af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947968)));
    // 0x309af4: 0xc04b950  jal         func_12E540
    ctx->pc = 0x309AF4u;
    SET_GPR_U32(ctx, 31, 0x309AFCu);
    ctx->pc = 0x309AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x309AF4u;
            // 0x309af8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AFCu; }
        if (ctx->pc != 0x309AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x309AFCu; }
        if (ctx->pc != 0x309AFCu) { return; }
    }
    ctx->pc = 0x309AFCu;
label_309afc:
    // 0x309afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309b00: 0x3e00008  jr          $ra
    ctx->pc = 0x309B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x309B00u;
            // 0x309b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x309B08u;
}
