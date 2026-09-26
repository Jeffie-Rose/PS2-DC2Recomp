#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_FAR_DIST__FP12RS_STACKDATAi
// Address: 0x26dfe0 - 0x26e040
void ps2__SET_CHARA_FAR_DIST__FP12RS_STACKDATAi_0x26dfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_FAR_DIST__FP12RS_STACKDATAi_0x26dfe0");
#endif

    switch (ctx->pc) {
        case 0x26dfe0u: goto label_26dfe0;
        case 0x26dfe4u: goto label_26dfe4;
        case 0x26dfe8u: goto label_26dfe8;
        case 0x26dfecu: goto label_26dfec;
        case 0x26dff0u: goto label_26dff0;
        case 0x26dff4u: goto label_26dff4;
        case 0x26dff8u: goto label_26dff8;
        case 0x26dffcu: goto label_26dffc;
        case 0x26e000u: goto label_26e000;
        case 0x26e004u: goto label_26e004;
        case 0x26e008u: goto label_26e008;
        case 0x26e00cu: goto label_26e00c;
        case 0x26e010u: goto label_26e010;
        case 0x26e014u: goto label_26e014;
        case 0x26e018u: goto label_26e018;
        case 0x26e01cu: goto label_26e01c;
        case 0x26e020u: goto label_26e020;
        case 0x26e024u: goto label_26e024;
        case 0x26e028u: goto label_26e028;
        case 0x26e02cu: goto label_26e02c;
        case 0x26e030u: goto label_26e030;
        case 0x26e034u: goto label_26e034;
        case 0x26e038u: goto label_26e038;
        case 0x26e03cu: goto label_26e03c;
        default: break;
    }

    ctx->pc = 0x26dfe0u;

label_26dfe0:
    // 0x26dfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26dfe4:
    // 0x26dfe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26dfe8:
    // 0x26dfe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26dfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26dfec:
    // 0x26dfec: 0xc097e18  jal         func_25F860
label_26dff0:
    if (ctx->pc == 0x26DFF0u) {
        ctx->pc = 0x26DFF0u;
            // 0x26dff0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x26DFF4u;
        goto label_26dff4;
    }
    ctx->pc = 0x26DFECu;
    SET_GPR_U32(ctx, 31, 0x26DFF4u);
    ctx->pc = 0x26DFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFECu;
            // 0x26dff0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFF4u; }
        if (ctx->pc != 0x26DFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFF4u; }
        if (ctx->pc != 0x26DFF4u) { return; }
    }
    ctx->pc = 0x26DFF4u;
label_26dff4:
    // 0x26dff4: 0xc09ac74  jal         func_26B1D0
label_26dff8:
    if (ctx->pc == 0x26DFF8u) {
        ctx->pc = 0x26DFF8u;
            // 0x26dff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26DFFCu;
        goto label_26dffc;
    }
    ctx->pc = 0x26DFF4u;
    SET_GPR_U32(ctx, 31, 0x26DFFCu);
    ctx->pc = 0x26DFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFF4u;
            // 0x26dff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFFCu; }
        if (ctx->pc != 0x26DFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DFFCu; }
        if (ctx->pc != 0x26DFFCu) { return; }
    }
    ctx->pc = 0x26DFFCu;
label_26dffc:
    // 0x26dffc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26dffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e000:
    // 0x26e000: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_26e004:
    if (ctx->pc == 0x26E004u) {
        ctx->pc = 0x26E004u;
            // 0x26e004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E008u;
        goto label_26e008;
    }
    ctx->pc = 0x26E000u;
    {
        const bool branch_taken_0x26e000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E000u;
            // 0x26e004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e000) {
            ctx->pc = 0x26E010u;
            goto label_26e010;
        }
    }
    ctx->pc = 0x26E008u;
label_26e008:
    // 0x26e008: 0x10000009  b           . + 4 + (0x9 << 2)
label_26e00c:
    if (ctx->pc == 0x26E00Cu) {
        ctx->pc = 0x26E00Cu;
            // 0x26e00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E010u;
        goto label_26e010;
    }
    ctx->pc = 0x26E008u;
    {
        const bool branch_taken_0x26e008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E008u;
            // 0x26e00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e008) {
            ctx->pc = 0x26E030u;
            goto label_26e030;
        }
    }
    ctx->pc = 0x26E010u;
label_26e010:
    // 0x26e010: 0xc097e28  jal         func_25F8A0
label_26e014:
    if (ctx->pc == 0x26E014u) {
        ctx->pc = 0x26E018u;
        goto label_26e018;
    }
    ctx->pc = 0x26E010u;
    SET_GPR_U32(ctx, 31, 0x26E018u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E018u; }
        if (ctx->pc != 0x26E018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E018u; }
        if (ctx->pc != 0x26E018u) { return; }
    }
    ctx->pc = 0x26E018u;
label_26e018:
    // 0x26e018: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x26e018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26e01c:
    // 0x26e01c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x26e01cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_26e020:
    // 0x26e020: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_26e024:
    // 0x26e024: 0x320f809  jalr        $t9
label_26e028:
    if (ctx->pc == 0x26E028u) {
        ctx->pc = 0x26E028u;
            // 0x26e028: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26E02Cu;
        goto label_26e02c;
    }
    ctx->pc = 0x26E024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x26E02Cu);
        ctx->pc = 0x26E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E024u;
            // 0x26e028: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26E02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26E02Cu; }
            if (ctx->pc != 0x26E02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26E02Cu;
label_26e02c:
    // 0x26e02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e030:
    // 0x26e030: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26e030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26e034:
    // 0x26e034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26e038:
    // 0x26e038: 0x3e00008  jr          $ra
label_26e03c:
    if (ctx->pc == 0x26E03Cu) {
        ctx->pc = 0x26E03Cu;
            // 0x26e03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x26E040u;
        goto label_fallthrough_0x26e038;
    }
    ctx->pc = 0x26E038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E038u;
            // 0x26e03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26e038:
    ctx->pc = 0x26E040u;
}
