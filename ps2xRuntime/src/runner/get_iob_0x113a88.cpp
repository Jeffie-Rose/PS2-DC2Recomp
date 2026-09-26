#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: get_iob
// Address: 0x113a88 - 0x113af4
void get_iob_0x113a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_iob_0x113a88");
#endif

    switch (ctx->pc) {
        case 0x113aa4u: goto label_113aa4;
        case 0x113aacu: goto label_113aac;
        case 0x113ac0u: goto label_113ac0;
        case 0x113adcu: goto label_113adc;
        default: break;
    }

    ctx->pc = 0x113a88u;

    // 0x113a88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113a90: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x113a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x113a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x113a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x113a9c: 0xc044e68  jal         func_1139A0
    ctx->pc = 0x113A9Cu;
    SET_GPR_U32(ctx, 31, 0x113AA4u);
    ctx->pc = 0x113AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113A9Cu;
            // 0x113aa0: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1139A0u;
    if (runtime->hasFunction(0x1139A0u)) {
        auto targetFn = runtime->lookupFunction(0x1139A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AA4u; }
        if (ctx->pc != 0x113AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1139a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AA4u; }
        if (ctx->pc != 0x113AA4u) { return; }
    }
    ctx->pc = 0x113AA4u;
label_113aa4:
    // 0x113aa4: 0xc044048  jal         func_110120
    ctx->pc = 0x113AA4u;
    SET_GPR_U32(ctx, 31, 0x113AACu);
    ctx->pc = 0x113AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113AA4u;
            // 0x113aa8: 0x8e240f28  lw          $a0, 0xF28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AACu; }
        if (ctx->pc != 0x113AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AACu; }
        if (ctx->pc != 0x113AACu) { return; }
    }
    ctx->pc = 0x113AACu;
label_113aac:
    // 0x113aac: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x113aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x113ab0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113AB0u;
    {
        const bool branch_taken_0x113ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AB0u;
            // 0x113ab4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ab0) {
            ctx->pc = 0x113AC8u;
            goto label_113ac8;
        }
    }
    ctx->pc = 0x113AB8u;
    // 0x113ab8: 0xc044040  jal         func_110100
    ctx->pc = 0x113AB8u;
    SET_GPR_U32(ctx, 31, 0x113AC0u);
    ctx->pc = 0x113ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113AB8u;
            // 0x113abc: 0x8e240f28  lw          $a0, 0xF28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AC0u; }
        if (ctx->pc != 0x113AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113AC0u; }
        if (ctx->pc != 0x113AC0u) { return; }
    }
    ctx->pc = 0x113AC0u;
label_113ac0:
    // 0x113ac0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113AC0u;
    {
        const bool branch_taken_0x113ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AC0u;
            // 0x113ac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ac0) {
            ctx->pc = 0x113AE0u;
            goto label_113ae0;
        }
    }
    ctx->pc = 0x113AC8u;
label_113ac8:
    // 0x113ac8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x113ac8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x113acc: 0x2442c680  addiu       $v0, $v0, -0x3980
    ctx->pc = 0x113accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952576));
    // 0x113ad0: 0x8e240f28  lw          $a0, 0xF28($s1)
    ctx->pc = 0x113ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3880)));
    // 0x113ad4: 0xc044040  jal         func_110100
    ctx->pc = 0x113AD4u;
    SET_GPR_U32(ctx, 31, 0x113ADCu);
    ctx->pc = 0x113AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113AD4u;
            // 0x113ad8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113ADCu; }
        if (ctx->pc != 0x113ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113ADCu; }
        if (ctx->pc != 0x113ADCu) { return; }
    }
    ctx->pc = 0x113ADCu;
label_113adc:
    // 0x113adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113ae0:
    // 0x113ae0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x113ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x113ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113aec: 0x3e00008  jr          $ra
    ctx->pc = 0x113AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113AECu;
            // 0x113af0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113AF4u;
}
