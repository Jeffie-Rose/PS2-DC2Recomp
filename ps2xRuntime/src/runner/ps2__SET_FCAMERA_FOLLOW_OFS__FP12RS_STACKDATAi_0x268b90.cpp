#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FCAMERA_FOLLOW_OFS__FP12RS_STACKDATAi
// Address: 0x268b90 - 0x268bf0
void ps2__SET_FCAMERA_FOLLOW_OFS__FP12RS_STACKDATAi_0x268b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FCAMERA_FOLLOW_OFS__FP12RS_STACKDATAi_0x268b90");
#endif

    switch (ctx->pc) {
        case 0x268bacu: goto label_268bac;
        case 0x268bc8u: goto label_268bc8;
        case 0x268bdcu: goto label_268bdc;
        default: break;
    }

    ctx->pc = 0x268b90u;

    // 0x268b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x268b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x268b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x268b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x268b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x268b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ba0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x268ba4: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x268BA4u;
    SET_GPR_U32(ctx, 31, 0x268BACu);
    ctx->pc = 0x268BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268BA4u;
            // 0x268ba8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BACu; }
        if (ctx->pc != 0x268BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BACu; }
        if (ctx->pc != 0x268BACu) { return; }
    }
    ctx->pc = 0x268BACu;
label_268bac:
    // 0x268bac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x268bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bb0: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x268BB0u;
    {
        const bool branch_taken_0x268bb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x268BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BB0u;
            // 0x268bb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bb0) {
            ctx->pc = 0x268BC0u;
            goto label_268bc0;
        }
    }
    ctx->pc = 0x268BB8u;
    // 0x268bb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x268BB8u;
    {
        const bool branch_taken_0x268bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BB8u;
            // 0x268bbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bb8) {
            ctx->pc = 0x268BE0u;
            goto label_268be0;
        }
    }
    ctx->pc = 0x268BC0u;
label_268bc0:
    // 0x268bc0: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x268BC0u;
    SET_GPR_U32(ctx, 31, 0x268BC8u);
    ctx->pc = 0x268BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268BC0u;
            // 0x268bc4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BC8u; }
        if (ctx->pc != 0x268BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BC8u; }
        if (ctx->pc != 0x268BC8u) { return; }
    }
    ctx->pc = 0x268BC8u;
label_268bc8:
    // 0x268bc8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x268bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268bcc: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x268bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x268bd0: 0xc7ae0028  lwc1        $f14, 0x28($sp)
    ctx->pc = 0x268bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x268bd4: 0xc04c698  jal         func_131A60
    ctx->pc = 0x268BD4u;
    SET_GPR_U32(ctx, 31, 0x268BDCu);
    ctx->pc = 0x268BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x268BD4u;
            // 0x268bd8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BDCu; }
        if (ctx->pc != 0x268BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x268BDCu; }
        if (ctx->pc != 0x268BDCu) { return; }
    }
    ctx->pc = 0x268BDCu;
label_268bdc:
    // 0x268bdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268be0:
    // 0x268be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x268be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x268be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268be8: 0x3e00008  jr          $ra
    ctx->pc = 0x268BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x268BE8u;
            // 0x268bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x268BF0u;
}
