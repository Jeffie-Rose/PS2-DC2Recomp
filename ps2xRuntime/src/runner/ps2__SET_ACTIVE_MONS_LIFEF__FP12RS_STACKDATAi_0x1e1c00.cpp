#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi
// Address: 0x1e1c00 - 0x1e1cc4
void ps2__SET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi_0x1e1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACTIVE_MONS_LIFEF__FP12RS_STACKDATAi_0x1e1c00");
#endif

    switch (ctx->pc) {
        case 0x1e1c28u: goto label_1e1c28;
        case 0x1e1c34u: goto label_1e1c34;
        case 0x1e1c80u: goto label_1e1c80;
        default: break;
    }

    ctx->pc = 0x1e1c00u;

    // 0x1e1c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e1c04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e1c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1c10: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1C10u;
    {
        const bool branch_taken_0x1e1c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C10u;
            // 0x1e1c14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c10) {
            ctx->pc = 0x1E1C20u;
            goto label_1e1c20;
        }
    }
    ctx->pc = 0x1E1C18u;
    // 0x1e1c18: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1E1C18u;
    {
        const bool branch_taken_0x1e1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C18u;
            // 0x1e1c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c18) {
            ctx->pc = 0x1E1CB0u;
            goto label_1e1cb0;
        }
    }
    ctx->pc = 0x1E1C20u;
label_1e1c20:
    // 0x1e1c20: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1C20u;
    SET_GPR_U32(ctx, 31, 0x1E1C28u);
    ctx->pc = 0x1E1C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C20u;
            // 0x1e1c24: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C28u; }
        if (ctx->pc != 0x1E1C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C28u; }
        if (ctx->pc != 0x1E1C28u) { return; }
    }
    ctx->pc = 0x1E1C28u;
label_1e1c28:
    // 0x1e1c28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e1c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1c2c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E1C2Cu;
    SET_GPR_U32(ctx, 31, 0x1E1C34u);
    ctx->pc = 0x1E1C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C2Cu;
            // 0x1e1c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C34u; }
        if (ctx->pc != 0x1E1C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C34u; }
        if (ctx->pc != 0x1E1C34u) { return; }
    }
    ctx->pc = 0x1E1C34u;
label_1e1c34:
    // 0x1e1c34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1c38: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1C38u;
    {
        const bool branch_taken_0x1e1c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C38u;
            // 0x1e1c3c: 0x2462ffe8  addiu       $v0, $v1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c38) {
            ctx->pc = 0x1E1C60u;
            goto label_1e1c60;
        }
    }
    ctx->pc = 0x1E1C40u;
    // 0x1e1c40: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1c4c: 0x8c500484  lw          $s0, 0x484($v0)
    ctx->pc = 0x1e1c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1c50: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1C50u;
    {
        const bool branch_taken_0x1e1c50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C50u;
            // 0x1e1c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c50) {
            ctx->pc = 0x1E1C68u;
            goto label_1e1c68;
        }
    }
    ctx->pc = 0x1E1C58u;
    // 0x1e1c58: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1C58u;
    {
        const bool branch_taken_0x1e1c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C58u;
            // 0x1e1c5c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c58) {
            ctx->pc = 0x1E1CB4u;
            goto label_1e1cb4;
        }
    }
    ctx->pc = 0x1E1C60u;
label_1e1c60:
    // 0x1e1c60: 0x8f908e70  lw          $s0, -0x7190($gp)
    ctx->pc = 0x1e1c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1c64: 0x0  nop
    ctx->pc = 0x1e1c64u;
    // NOP
label_1e1c68:
    // 0x1e1c68: 0x8e111310  lw          $s1, 0x1310($s0)
    ctx->pc = 0x1e1c68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4880)));
    // 0x1e1c6c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1e1c6cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1c70: 0x0  nop
    ctx->pc = 0x1e1c70u;
    // NOP
    // 0x1e1c74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e1c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e1c78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E1C78u;
    SET_GPR_U32(ctx, 31, 0x1E1C80u);
    ctx->pc = 0x1E1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C78u;
            // 0x1e1c7c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C80u; }
        if (ctx->pc != 0x1E1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C80u; }
        if (ctx->pc != 0x1E1C80u) { return; }
    }
    ctx->pc = 0x1E1C80u;
label_1e1c80:
    // 0x1e1c80: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1C80u;
    {
        const bool branch_taken_0x1e1c80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e1c80) {
            ctx->pc = 0x1E1C8Cu;
            goto label_1e1c8c;
        }
    }
    ctx->pc = 0x1E1C88u;
    // 0x1e1c88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e1c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1c8c:
    // 0x1e1c8c: 0x8e031314  lw          $v1, 0x1314($s0)
    ctx->pc = 0x1e1c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4884)));
    // 0x1e1c90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1c94: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x1e1c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e1c98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1C98u;
    {
        const bool branch_taken_0x1e1c98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1c98) {
            ctx->pc = 0x1E1CA8u;
            goto label_1e1ca8;
        }
    }
    ctx->pc = 0x1E1CA0u;
    // 0x1e1ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1CA0u;
    {
        const bool branch_taken_0x1e1ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CA0u;
            // 0x1e1ca4: 0xae111314  sw          $s1, 0x1314($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4884), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca0) {
            ctx->pc = 0x1E1CACu;
            goto label_1e1cac;
        }
    }
    ctx->pc = 0x1E1CA8u;
label_1e1ca8:
    // 0x1e1ca8: 0xae021314  sw          $v0, 0x1314($s0)
    ctx->pc = 0x1e1ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4884), GPR_U32(ctx, 2));
label_1e1cac:
    // 0x1e1cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1cb0:
    // 0x1e1cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e1cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1cb4:
    // 0x1e1cb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1cb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CBCu;
            // 0x1e1cc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1CC4u;
}
