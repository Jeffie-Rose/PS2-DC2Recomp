#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _V_PUSH2__FP12RS_STACKDATAi
// Address: 0x1e2f60 - 0x1e302c
void ps2__V_PUSH2__FP12RS_STACKDATAi_0x1e2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__V_PUSH2__FP12RS_STACKDATAi_0x1e2f60");
#endif

    switch (ctx->pc) {
        case 0x1e2f88u: goto label_1e2f88;
        case 0x1e2fbcu: goto label_1e2fbc;
        case 0x1e2ff8u: goto label_1e2ff8;
        default: break;
    }

    ctx->pc = 0x1e2f60u;

    // 0x1e2f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2f64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2f68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e2f6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2f70: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2F70u;
    {
        const bool branch_taken_0x1e2f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E2F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F70u;
            // 0x1e2f74: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f70) {
            ctx->pc = 0x1E2F80u;
            goto label_1e2f80;
        }
    }
    ctx->pc = 0x1E2F78u;
    // 0x1e2f78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1E2F78u;
    {
        const bool branch_taken_0x1e2f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F78u;
            // 0x1e2f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f78) {
            ctx->pc = 0x1E3018u;
            goto label_1e3018;
        }
    }
    ctx->pc = 0x1E2F80u;
label_1e2f80:
    // 0x1e2f80: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2F80u;
    SET_GPR_U32(ctx, 31, 0x1E2F88u);
    ctx->pc = 0x1E2F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F80u;
            // 0x1e2f84: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F88u; }
        if (ctx->pc != 0x1E2F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2F88u; }
        if (ctx->pc != 0x1E2F88u) { return; }
    }
    ctx->pc = 0x1E2F88u;
label_1e2f88:
    // 0x1e2f88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e2f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2f8c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2F8Cu;
    {
        const bool branch_taken_0x1e2f8c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1E2F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F8Cu;
            // 0x1e2f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f8c) {
            ctx->pc = 0x1E2F9Cu;
            goto label_1e2f9c;
        }
    }
    ctx->pc = 0x1E2F94u;
    // 0x1e2f94: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1E2F94u;
    {
        const bool branch_taken_0x1e2f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2F94u;
            // 0x1e2f98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f94) {
            ctx->pc = 0x1E301Cu;
            goto label_1e301c;
        }
    }
    ctx->pc = 0x1E2F9Cu;
label_1e2f9c:
    // 0x1e2f9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e2f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e2fa0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E2FA0u;
    {
        const bool branch_taken_0x1e2fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FA0u;
            // 0x1e2fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fa0) {
            ctx->pc = 0x1E2FE0u;
            goto label_1e2fe0;
        }
    }
    ctx->pc = 0x1E2FA8u;
    // 0x1e2fa8: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x1e2fa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e2fac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2FACu;
    {
        const bool branch_taken_0x1e2fac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FACu;
            // 0x1e2fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fac) {
            ctx->pc = 0x1E2FD0u;
            goto label_1e2fd0;
        }
    }
    ctx->pc = 0x1E2FB4u;
    // 0x1e2fb4: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E2FB4u;
    SET_GPR_U32(ctx, 31, 0x1E2FBCu);
    ctx->pc = 0x1E2FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FB4u;
            // 0x1e2fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FBCu; }
        if (ctx->pc != 0x1E2FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FBCu; }
        if (ctx->pc != 0x1E2FBCu) { return; }
    }
    ctx->pc = 0x1E2FBCu;
label_1e2fbc:
    // 0x1e2fbc: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e2fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2fc0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e2fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e2fc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e2fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e2fc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2FC8u;
    {
        const bool branch_taken_0x1e2fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FC8u;
            // 0x1e2fcc: 0xac62117c  sw          $v0, 0x117C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4476), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fc8) {
            ctx->pc = 0x1E2FD8u;
            goto label_1e2fd8;
        }
    }
    ctx->pc = 0x1E2FD0u;
label_1e2fd0:
    // 0x1e2fd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E2FD0u;
    {
        const bool branch_taken_0x1e2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2fd0) {
            ctx->pc = 0x1E3018u;
            goto label_1e3018;
        }
    }
    ctx->pc = 0x1E2FD8u;
label_1e2fd8:
    // 0x1e2fd8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E2FD8u;
    {
        const bool branch_taken_0x1e2fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FD8u;
            // 0x1e2fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fd8) {
            ctx->pc = 0x1E3018u;
            goto label_1e3018;
        }
    }
    ctx->pc = 0x1E2FE0u;
label_1e2fe0:
    // 0x1e2fe0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E2FE0u;
    {
        const bool branch_taken_0x1e2fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FE0u;
            // 0x1e2fe4: 0x2a010020  slti        $at, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fe0) {
            ctx->pc = 0x1E3018u;
            goto label_1e3018;
        }
    }
    ctx->pc = 0x1E2FE8u;
    // 0x1e2fe8: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E2FE8u;
    {
        const bool branch_taken_0x1e2fe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FE8u;
            // 0x1e2fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fe8) {
            ctx->pc = 0x1E300Cu;
            goto label_1e300c;
        }
    }
    ctx->pc = 0x1E2FF0u;
    // 0x1e2ff0: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E2FF0u;
    SET_GPR_U32(ctx, 31, 0x1E2FF8u);
    ctx->pc = 0x1E2FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2FF0u;
            // 0x1e2ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FF8u; }
        if (ctx->pc != 0x1E2FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2FF8u; }
        if (ctx->pc != 0x1E2FF8u) { return; }
    }
    ctx->pc = 0x1E2FF8u;
label_1e2ff8:
    // 0x1e2ff8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e2ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e2ffc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e2ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e3000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3004u;
    {
        const bool branch_taken_0x1e3004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3004u;
            // 0x1e3008: 0xe440117c  swc1        $f0, 0x117C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3004) {
            ctx->pc = 0x1E3014u;
            goto label_1e3014;
        }
    }
    ctx->pc = 0x1E300Cu;
label_1e300c:
    // 0x1e300c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E300Cu;
    {
        const bool branch_taken_0x1e300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e300c) {
            ctx->pc = 0x1E3018u;
            goto label_1e3018;
        }
    }
    ctx->pc = 0x1E3014u;
label_1e3014:
    // 0x1e3014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3018:
    // 0x1e3018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e301c:
    // 0x1e301c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e301cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3020: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3024: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3024u;
            // 0x1e3028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E302Cu;
}
