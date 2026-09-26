#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteInstallThread__Fv
// Address: 0x31c150 - 0x31c1e4
void DeleteInstallThread__Fv_0x31c150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteInstallThread__Fv_0x31c150");
#endif

    switch (ctx->pc) {
        case 0x31c170u: goto label_31c170;
        case 0x31c17cu: goto label_31c17c;
        case 0x31c184u: goto label_31c184;
        case 0x31c18cu: goto label_31c18c;
        case 0x31c194u: goto label_31c194;
        case 0x31c19cu: goto label_31c19c;
        case 0x31c1c0u: goto label_31c1c0;
        case 0x31c1c8u: goto label_31c1c8;
        case 0x31c1d0u: goto label_31c1d0;
        default: break;
    }

    ctx->pc = 0x31c150u;

    // 0x31c150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c154: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c15c: 0x8f84a3d0  lw          $a0, -0x5C30($gp)
    ctx->pc = 0x31c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943696)));
    // 0x31c160: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x31C160u;
    {
        const bool branch_taken_0x31c160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31c160) {
            ctx->pc = 0x31C1D8u;
            goto label_31c1d8;
        }
    }
    ctx->pc = 0x31C168u;
    // 0x31c168: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31C168u;
    SET_GPR_U32(ctx, 31, 0x31C170u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C170u; }
        if (ctx->pc != 0x31C170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C170u; }
        if (ctx->pc != 0x31C170u) { return; }
    }
    ctx->pc = 0x31C170u;
label_31c170:
    // 0x31c170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c174: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31C174u;
    SET_GPR_U32(ctx, 31, 0x31C17Cu);
    ctx->pc = 0x31C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C174u;
            // 0x31c178: 0xaf82a3d4  sw          $v0, -0x5C2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C17Cu; }
        if (ctx->pc != 0x31C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C17Cu; }
        if (ctx->pc != 0x31C17Cu) { return; }
    }
    ctx->pc = 0x31C17Cu;
label_31c17c:
    // 0x31c17c: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31C17Cu;
    SET_GPR_U32(ctx, 31, 0x31C184u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C184u; }
        if (ctx->pc != 0x31C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C184u; }
        if (ctx->pc != 0x31C184u) { return; }
    }
    ctx->pc = 0x31C184u;
label_31c184:
    // 0x31c184: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31C184u;
    {
        const bool branch_taken_0x31c184 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x31c184) {
            ctx->pc = 0x31C1B4u;
            goto label_31c1b4;
        }
    }
    ctx->pc = 0x31C18Cu;
label_31c18c:
    // 0x31c18c: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31C18Cu;
    SET_GPR_U32(ctx, 31, 0x31C194u);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C194u; }
        if (ctx->pc != 0x31C194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C194u; }
        if (ctx->pc != 0x31C194u) { return; }
    }
    ctx->pc = 0x31C194u;
label_31c194:
    // 0x31c194: 0xc0c7040  jal         func_31C100
    ctx->pc = 0x31C194u;
    SET_GPR_U32(ctx, 31, 0x31C19Cu);
    ctx->pc = 0x31C100u;
    if (runtime->hasFunction(0x31C100u)) {
        auto targetFn = runtime->lookupFunction(0x31C100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C19Cu; }
        if (ctx->pc != 0x31C19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepInstallThread__Fv_0x31c100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C19Cu; }
        if (ctx->pc != 0x31C19Cu) { return; }
    }
    ctx->pc = 0x31C19Cu;
label_31c19c:
    // 0x31c19c: 0x0  nop
    ctx->pc = 0x31c19cu;
    // NOP
    // 0x31c1a0: 0x0  nop
    ctx->pc = 0x31c1a0u;
    // NOP
    // 0x31c1a4: 0x0  nop
    ctx->pc = 0x31c1a4u;
    // NOP
    // 0x31c1a8: 0x0  nop
    ctx->pc = 0x31c1a8u;
    // NOP
    // 0x31c1ac: 0x1c40fff7  bgtz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31C1ACu;
    {
        const bool branch_taken_0x31c1ac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x31c1ac) {
            ctx->pc = 0x31C18Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c18c;
        }
    }
    ctx->pc = 0x31C1B4u;
label_31c1b4:
    // 0x31c1b4: 0x0  nop
    ctx->pc = 0x31c1b4u;
    // NOP
    // 0x31c1b8: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x31C1B8u;
    SET_GPR_U32(ctx, 31, 0x31C1C0u);
    ctx->pc = 0x31C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C1B8u;
            // 0x31c1bc: 0x8f84a3c8  lw          $a0, -0x5C38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1C0u; }
        if (ctx->pc != 0x31C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1C0u; }
        if (ctx->pc != 0x31C1C0u) { return; }
    }
    ctx->pc = 0x31C1C0u;
label_31c1c0:
    // 0x31c1c0: 0xc043fbc  jal         func_10FEF0
    ctx->pc = 0x31C1C0u;
    SET_GPR_U32(ctx, 31, 0x31C1C8u);
    ctx->pc = 0x31C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C1C0u;
            // 0x31c1c4: 0x8f84a3c8  lw          $a0, -0x5C38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FEF0u;
    if (runtime->hasFunction(0x10FEF0u)) {
        auto targetFn = runtime->lookupFunction(0x10FEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1C8u; }
        if (ctx->pc != 0x31C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x10fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1C8u; }
        if (ctx->pc != 0x31C1C8u) { return; }
    }
    ctx->pc = 0x31C1C8u;
label_31c1c8:
    // 0x31c1c8: 0xc0504a4  jal         func_141290
    ctx->pc = 0x31C1C8u;
    SET_GPR_U32(ctx, 31, 0x31C1D0u);
    ctx->pc = 0x31C1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31C1C8u;
            // 0x31c1cc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141290u;
    if (runtime->hasFunction(0x141290u)) {
        auto targetFn = runtime->lookupFunction(0x141290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1D0u; }
        if (ctx->pc != 0x31C1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetRotateThread__Fi_0x141290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31C1D0u; }
        if (ctx->pc != 0x31C1D0u) { return; }
    }
    ctx->pc = 0x31C1D0u;
label_31c1d0:
    // 0x31c1d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c1d4: 0xaf83a3c8  sw          $v1, -0x5C38($gp)
    ctx->pc = 0x31c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943688), GPR_U32(ctx, 3));
label_31c1d8:
    // 0x31c1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31C1DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31C1DCu;
            // 0x31c1e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31C1E4u;
}
