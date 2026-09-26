#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_STEP__FP12RS_STACKDATAi
// Address: 0x26ba00 - 0x26ba60
void ps2__SET_STEP__FP12RS_STACKDATAi_0x26ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_STEP__FP12RS_STACKDATAi_0x26ba00");
#endif

    switch (ctx->pc) {
        case 0x26ba00u: goto label_26ba00;
        case 0x26ba04u: goto label_26ba04;
        case 0x26ba08u: goto label_26ba08;
        case 0x26ba0cu: goto label_26ba0c;
        case 0x26ba10u: goto label_26ba10;
        case 0x26ba14u: goto label_26ba14;
        case 0x26ba18u: goto label_26ba18;
        case 0x26ba1cu: goto label_26ba1c;
        case 0x26ba20u: goto label_26ba20;
        case 0x26ba24u: goto label_26ba24;
        case 0x26ba28u: goto label_26ba28;
        case 0x26ba2cu: goto label_26ba2c;
        case 0x26ba30u: goto label_26ba30;
        case 0x26ba34u: goto label_26ba34;
        case 0x26ba38u: goto label_26ba38;
        case 0x26ba3cu: goto label_26ba3c;
        case 0x26ba40u: goto label_26ba40;
        case 0x26ba44u: goto label_26ba44;
        case 0x26ba48u: goto label_26ba48;
        case 0x26ba4cu: goto label_26ba4c;
        case 0x26ba50u: goto label_26ba50;
        case 0x26ba54u: goto label_26ba54;
        case 0x26ba58u: goto label_26ba58;
        case 0x26ba5cu: goto label_26ba5c;
        default: break;
    }

    ctx->pc = 0x26ba00u;

label_26ba00:
    // 0x26ba00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26ba04:
    // 0x26ba04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26ba08:
    // 0x26ba08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26ba0c:
    // 0x26ba0c: 0xc097e18  jal         func_25F860
label_26ba10:
    if (ctx->pc == 0x26BA10u) {
        ctx->pc = 0x26BA10u;
            // 0x26ba10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26BA14u;
        goto label_26ba14;
    }
    ctx->pc = 0x26BA0Cu;
    SET_GPR_U32(ctx, 31, 0x26BA14u);
    ctx->pc = 0x26BA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA0Cu;
            // 0x26ba10: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA14u; }
        if (ctx->pc != 0x26BA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA14u; }
        if (ctx->pc != 0x26BA14u) { return; }
    }
    ctx->pc = 0x26BA14u;
label_26ba14:
    // 0x26ba14: 0xc09ac74  jal         func_26B1D0
label_26ba18:
    if (ctx->pc == 0x26BA18u) {
        ctx->pc = 0x26BA18u;
            // 0x26ba18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BA1Cu;
        goto label_26ba1c;
    }
    ctx->pc = 0x26BA14u;
    SET_GPR_U32(ctx, 31, 0x26BA1Cu);
    ctx->pc = 0x26BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA14u;
            // 0x26ba18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA1Cu; }
        if (ctx->pc != 0x26BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA1Cu; }
        if (ctx->pc != 0x26BA1Cu) { return; }
    }
    ctx->pc = 0x26BA1Cu;
label_26ba1c:
    // 0x26ba1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26ba1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ba20:
    // 0x26ba20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_26ba24:
    if (ctx->pc == 0x26BA24u) {
        ctx->pc = 0x26BA24u;
            // 0x26ba24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BA28u;
        goto label_26ba28;
    }
    ctx->pc = 0x26BA20u;
    {
        const bool branch_taken_0x26ba20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA20u;
            // 0x26ba24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba20) {
            ctx->pc = 0x26BA30u;
            goto label_26ba30;
        }
    }
    ctx->pc = 0x26BA28u;
label_26ba28:
    // 0x26ba28: 0x10000009  b           . + 4 + (0x9 << 2)
label_26ba2c:
    if (ctx->pc == 0x26BA2Cu) {
        ctx->pc = 0x26BA2Cu;
            // 0x26ba2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BA30u;
        goto label_26ba30;
    }
    ctx->pc = 0x26BA28u;
    {
        const bool branch_taken_0x26ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA28u;
            // 0x26ba2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba28) {
            ctx->pc = 0x26BA50u;
            goto label_26ba50;
        }
    }
    ctx->pc = 0x26BA30u;
label_26ba30:
    // 0x26ba30: 0xc097e28  jal         func_25F8A0
label_26ba34:
    if (ctx->pc == 0x26BA34u) {
        ctx->pc = 0x26BA38u;
        goto label_26ba38;
    }
    ctx->pc = 0x26BA30u;
    SET_GPR_U32(ctx, 31, 0x26BA38u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA38u; }
        if (ctx->pc != 0x26BA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BA38u; }
        if (ctx->pc != 0x26BA38u) { return; }
    }
    ctx->pc = 0x26BA38u;
label_26ba38:
    // 0x26ba38: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x26ba38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26ba3c:
    // 0x26ba3c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26ba3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26ba40:
    // 0x26ba40: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x26ba40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_26ba44:
    // 0x26ba44: 0x320f809  jalr        $t9
label_26ba48:
    if (ctx->pc == 0x26BA48u) {
        ctx->pc = 0x26BA48u;
            // 0x26ba48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26BA4Cu;
        goto label_26ba4c;
    }
    ctx->pc = 0x26BA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26BA4Cu);
        ctx->pc = 0x26BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA44u;
            // 0x26ba48: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26BA4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26BA4Cu; }
            if (ctx->pc != 0x26BA4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26BA4Cu;
label_26ba4c:
    // 0x26ba4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ba50:
    // 0x26ba50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26ba54:
    // 0x26ba54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ba54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26ba58:
    // 0x26ba58: 0x3e00008  jr          $ra
label_26ba5c:
    if (ctx->pc == 0x26BA5Cu) {
        ctx->pc = 0x26BA5Cu;
            // 0x26ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26BA60u;
        goto label_fallthrough_0x26ba58;
    }
    ctx->pc = 0x26BA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BA58u;
            // 0x26ba5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26ba58:
    ctx->pc = 0x26BA60u;
}
