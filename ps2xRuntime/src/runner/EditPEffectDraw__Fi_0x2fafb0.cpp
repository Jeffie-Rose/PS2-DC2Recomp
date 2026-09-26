#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditPEffectDraw__Fi
// Address: 0x2fafb0 - 0x2fb030
void EditPEffectDraw__Fi_0x2fafb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditPEffectDraw__Fi_0x2fafb0");
#endif

    switch (ctx->pc) {
        case 0x2fafb0u: goto label_2fafb0;
        case 0x2fafb4u: goto label_2fafb4;
        case 0x2fafb8u: goto label_2fafb8;
        case 0x2fafbcu: goto label_2fafbc;
        case 0x2fafc0u: goto label_2fafc0;
        case 0x2fafc4u: goto label_2fafc4;
        case 0x2fafc8u: goto label_2fafc8;
        case 0x2fafccu: goto label_2fafcc;
        case 0x2fafd0u: goto label_2fafd0;
        case 0x2fafd4u: goto label_2fafd4;
        case 0x2fafd8u: goto label_2fafd8;
        case 0x2fafdcu: goto label_2fafdc;
        case 0x2fafe0u: goto label_2fafe0;
        case 0x2fafe4u: goto label_2fafe4;
        case 0x2fafe8u: goto label_2fafe8;
        case 0x2fafecu: goto label_2fafec;
        case 0x2faff0u: goto label_2faff0;
        case 0x2faff4u: goto label_2faff4;
        case 0x2faff8u: goto label_2faff8;
        case 0x2faffcu: goto label_2faffc;
        case 0x2fb000u: goto label_2fb000;
        case 0x2fb004u: goto label_2fb004;
        case 0x2fb008u: goto label_2fb008;
        case 0x2fb00cu: goto label_2fb00c;
        case 0x2fb010u: goto label_2fb010;
        case 0x2fb014u: goto label_2fb014;
        case 0x2fb018u: goto label_2fb018;
        case 0x2fb01cu: goto label_2fb01c;
        case 0x2fb020u: goto label_2fb020;
        case 0x2fb024u: goto label_2fb024;
        case 0x2fb028u: goto label_2fb028;
        case 0x2fb02cu: goto label_2fb02c;
        default: break;
    }

    ctx->pc = 0x2fafb0u;

label_2fafb0:
    // 0x2fafb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fafb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2fafb4:
    // 0x2fafb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fafb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fafb8:
    // 0x2fafb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fafb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fafbc:
    // 0x2fafbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fafbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fafc0:
    // 0x2fafc0: 0x8f839f64  lw          $v1, -0x609C($gp)
    ctx->pc = 0x2fafc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942564)));
label_2fafc4:
    // 0x2fafc4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2fafc8:
    if (ctx->pc == 0x2FAFC8u) {
        ctx->pc = 0x2FAFC8u;
            // 0x2fafc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFCCu;
        goto label_2fafcc;
    }
    ctx->pc = 0x2FAFC4u;
    {
        const bool branch_taken_0x2fafc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFC4u;
            // 0x2fafc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafc4) {
            ctx->pc = 0x2FB01Cu;
            goto label_2fb01c;
        }
    }
    ctx->pc = 0x2FAFCCu;
label_2fafcc:
    // 0x2fafcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fafccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fafd0:
    // 0x2fafd0: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2fafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2fafd4:
    // 0x2fafd4: 0x24429370  addiu       $v0, $v0, -0x6C90
    ctx->pc = 0x2fafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939504));
label_2fafd8:
    // 0x2fafd8: 0xc0bece8  jal         func_2FB3A0
label_2fafdc:
    if (ctx->pc == 0x2FAFDCu) {
        ctx->pc = 0x2FAFDCu;
            // 0x2fafdc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x2FAFE0u;
        goto label_2fafe0;
    }
    ctx->pc = 0x2FAFD8u;
    SET_GPR_U32(ctx, 31, 0x2FAFE0u);
    ctx->pc = 0x2FAFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFD8u;
            // 0x2fafdc: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FB3A0u;
    if (runtime->hasFunction(0x2FB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2FB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAFE0u; }
        if (ctx->pc != 0x2FAFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CStarEffectFv_0x2fb3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FAFE0u; }
        if (ctx->pc != 0x2FAFE0u) { return; }
    }
    ctx->pc = 0x2FAFE0u;
label_2fafe0:
    // 0x2fafe0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fafe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fafe4:
    // 0x2fafe4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2fafe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_2fafe8:
    // 0x2fafe8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2fafec:
    if (ctx->pc == 0x2FAFECu) {
        ctx->pc = 0x2FAFECu;
            // 0x2fafec: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x2FAFF0u;
        goto label_2faff0;
    }
    ctx->pc = 0x2FAFE8u;
    {
        const bool branch_taken_0x2fafe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FAFE8u;
            // 0x2fafec: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafe8) {
            ctx->pc = 0x2FAFD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fafd0;
        }
    }
    ctx->pc = 0x2FAFF0u;
label_2faff0:
    // 0x2faff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2faff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faff4:
    // 0x2faff4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2faff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faff8:
    // 0x2faff8: 0x8f829f6c  lw          $v0, -0x6094($gp)
    ctx->pc = 0x2faff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942572)));
label_2faffc:
    // 0x2faffc: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2faffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fb000:
    // 0x2fb000: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fb000u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fb004:
    // 0x2fb004: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2fb004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2fb008:
    // 0x2fb008: 0x320f809  jalr        $t9
label_2fb00c:
    if (ctx->pc == 0x2FB00Cu) {
        ctx->pc = 0x2FB010u;
        goto label_2fb010;
    }
    ctx->pc = 0x2FB008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FB010u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FB010u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FB010u; }
            if (ctx->pc != 0x2FB010u) { return; }
        }
        }
    }
    ctx->pc = 0x2FB010u;
label_2fb010:
    // 0x2fb010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb014:
    // 0x2fb014: 0x1a00fff8  blez        $s0, . + 4 + (-0x8 << 2)
label_2fb018:
    if (ctx->pc == 0x2FB018u) {
        ctx->pc = 0x2FB018u;
            // 0x2fb018: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->pc = 0x2FB01Cu;
        goto label_2fb01c;
    }
    ctx->pc = 0x2FB014u;
    {
        const bool branch_taken_0x2fb014 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2FB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB014u;
            // 0x2fb018: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb014) {
            ctx->pc = 0x2FAFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2faff8;
        }
    }
    ctx->pc = 0x2FB01Cu;
label_2fb01c:
    // 0x2fb01c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb020:
    // 0x2fb020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb024:
    // 0x2fb024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fb024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb028:
    // 0x2fb028: 0x3e00008  jr          $ra
label_2fb02c:
    if (ctx->pc == 0x2FB02Cu) {
        ctx->pc = 0x2FB02Cu;
            // 0x2fb02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2FB030u;
        goto label_fallthrough_0x2fb028;
    }
    ctx->pc = 0x2FB028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB028u;
            // 0x2fb02c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fb028:
    ctx->pc = 0x2FB030u;
}
