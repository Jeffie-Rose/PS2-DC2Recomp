#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeSetUnit__Fi
// Address: 0x1d39d0 - 0x1d3b10
void ChangeSetUnit__Fi_0x1d39d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeSetUnit__Fi_0x1d39d0");
#endif

    switch (ctx->pc) {
        case 0x1d39ecu: goto label_1d39ec;
        case 0x1d3a18u: goto label_1d3a18;
        case 0x1d3a40u: goto label_1d3a40;
        case 0x1d3a70u: goto label_1d3a70;
        case 0x1d3a98u: goto label_1d3a98;
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ae8u: goto label_1d3ae8;
        default: break;
    }

    ctx->pc = 0x1d39d0u;

    // 0x1d39d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d39d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d39d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d39d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d39dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d39dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d39e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d39e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e4: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1D39E4u;
    SET_GPR_U32(ctx, 31, 0x1D39ECu);
    ctx->pc = 0x1D39E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39E4u;
            // 0x1d39e8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39ECu; }
        if (ctx->pc != 0x1D39ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D39ECu; }
        if (ctx->pc != 0x1D39ECu) { return; }
    }
    ctx->pc = 0x1D39ECu;
label_1d39ec:
    // 0x1d39ec: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1d39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x1d39f0: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1d39f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1d39f4: 0x84314d96  lh          $s1, 0x4D96($at)
    ctx->pc = 0x1d39f4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1d39f8: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D39F8u;
    {
        const bool branch_taken_0x1d39f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D39FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D39F8u;
            // 0x1d39fc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39f8) {
            ctx->pc = 0x1D3A4Cu;
            goto label_1d3a4c;
        }
    }
    ctx->pc = 0x1D3A00u;
    // 0x1d3a00: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A00u;
    {
        const bool branch_taken_0x1d3a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A00u;
            // 0x1d3a04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a00) {
            ctx->pc = 0x1D3A28u;
            goto label_1d3a28;
        }
    }
    ctx->pc = 0x1D3A08u;
    // 0x1d3a08: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3a0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3a10: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3A10u;
    SET_GPR_U32(ctx, 31, 0x1D3A18u);
    ctx->pc = 0x1D3A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A10u;
            // 0x1d3a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A18u; }
        if (ctx->pc != 0x1D3A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A18u; }
        if (ctx->pc != 0x1D3A18u) { return; }
    }
    ctx->pc = 0x1D3A18u;
label_1d3a18:
    // 0x1d3a18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3A18u;
    {
        const bool branch_taken_0x1d3a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a18) {
            ctx->pc = 0x1D3A24u;
            goto label_1d3a24;
        }
    }
    ctx->pc = 0x1D3A20u;
    // 0x1d3a20: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d3a20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3a24:
    // 0x1d3a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3a28:
    // 0x1d3a28: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A28u;
    {
        const bool branch_taken_0x1d3a28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A28u;
            // 0x1d3a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a28) {
            ctx->pc = 0x1D3A50u;
            goto label_1d3a50;
        }
    }
    ctx->pc = 0x1D3A30u;
    // 0x1d3a30: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3a38: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3A38u;
    SET_GPR_U32(ctx, 31, 0x1D3A40u);
    ctx->pc = 0x1D3A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A38u;
            // 0x1d3a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A40u; }
        if (ctx->pc != 0x1D3A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A40u; }
        if (ctx->pc != 0x1D3A40u) { return; }
    }
    ctx->pc = 0x1D3A40u;
label_1d3a40:
    // 0x1d3a40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3A40u;
    {
        const bool branch_taken_0x1d3a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a40) {
            ctx->pc = 0x1D3A4Cu;
            goto label_1d3a4c;
        }
    }
    ctx->pc = 0x1D3A48u;
    // 0x1d3a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3a4c:
    // 0x1d3a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3a50:
    // 0x1d3a50: 0x16420029  bne         $s2, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D3A50u;
    {
        const bool branch_taken_0x1d3a50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A50u;
            // 0x1d3a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a50) {
            ctx->pc = 0x1D3AF8u;
            goto label_1d3af8;
        }
    }
    ctx->pc = 0x1D3A58u;
    // 0x1d3a58: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A58u;
    {
        const bool branch_taken_0x1d3a58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A58u;
            // 0x1d3a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a58) {
            ctx->pc = 0x1D3A80u;
            goto label_1d3a80;
        }
    }
    ctx->pc = 0x1D3A60u;
    // 0x1d3a60: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3a64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3a68: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3A68u;
    SET_GPR_U32(ctx, 31, 0x1D3A70u);
    ctx->pc = 0x1D3A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A68u;
            // 0x1d3a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A70u; }
        if (ctx->pc != 0x1D3A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A70u; }
        if (ctx->pc != 0x1D3A70u) { return; }
    }
    ctx->pc = 0x1D3A70u;
label_1d3a70:
    // 0x1d3a70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3A70u;
    {
        const bool branch_taken_0x1d3a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a70) {
            ctx->pc = 0x1D3A7Cu;
            goto label_1d3a7c;
        }
    }
    ctx->pc = 0x1D3A78u;
    // 0x1d3a78: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1d3a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3a7c:
    // 0x1d3a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3a80:
    // 0x1d3a80: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3A80u;
    {
        const bool branch_taken_0x1d3a80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A80u;
            // 0x1d3a84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a80) {
            ctx->pc = 0x1D3AA8u;
            goto label_1d3aa8;
        }
    }
    ctx->pc = 0x1D3A88u;
    // 0x1d3a88: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3a8c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d3a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3a90: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3A90u;
    SET_GPR_U32(ctx, 31, 0x1D3A98u);
    ctx->pc = 0x1D3A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3A90u;
            // 0x1d3a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A98u; }
        if (ctx->pc != 0x1D3A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3A98u; }
        if (ctx->pc != 0x1D3A98u) { return; }
    }
    ctx->pc = 0x1D3A98u;
label_1d3a98:
    // 0x1d3a98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3A98u;
    {
        const bool branch_taken_0x1d3a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3a98) {
            ctx->pc = 0x1D3AA4u;
            goto label_1d3aa4;
        }
    }
    ctx->pc = 0x1D3AA0u;
    // 0x1d3aa0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1d3aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3aa4:
    // 0x1d3aa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3aa8:
    // 0x1d3aa8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3AA8u;
    {
        const bool branch_taken_0x1d3aa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AA8u;
            // 0x1d3aac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3aa8) {
            ctx->pc = 0x1D3AD0u;
            goto label_1d3ad0;
        }
    }
    ctx->pc = 0x1D3AB0u;
    // 0x1d3ab0: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ab8: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3AB8u;
    SET_GPR_U32(ctx, 31, 0x1D3AC0u);
    ctx->pc = 0x1D3ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AB8u;
            // 0x1d3abc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC0u; }
        if (ctx->pc != 0x1D3AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AC0u; }
        if (ctx->pc != 0x1D3AC0u) { return; }
    }
    ctx->pc = 0x1D3AC0u;
label_1d3ac0:
    // 0x1d3ac0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3AC0u;
    {
        const bool branch_taken_0x1d3ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ac0) {
            ctx->pc = 0x1D3ACCu;
            goto label_1d3acc;
        }
    }
    ctx->pc = 0x1D3AC8u;
    // 0x1d3ac8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d3ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3acc:
    // 0x1d3acc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3ad0:
    // 0x1d3ad0: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3AD0u;
    {
        const bool branch_taken_0x1d3ad0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3ad0) {
            ctx->pc = 0x1D3AF4u;
            goto label_1d3af4;
        }
    }
    ctx->pc = 0x1D3AD8u;
    // 0x1d3ad8: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1d3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
    // 0x1d3adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3ae0: 0xc066f48  jal         func_19BD20
    ctx->pc = 0x1D3AE0u;
    SET_GPR_U32(ctx, 31, 0x1D3AE8u);
    ctx->pc = 0x1D3AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3AE0u;
            // 0x1d3ae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD20u;
    if (runtime->hasFunction(0x19BD20u)) {
        auto targetFn = runtime->lookupFunction(0x19BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AE8u; }
        if (ctx->pc != 0x1D3AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckQuickChange__16CUserDataManagerFiPi_0x19bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3AE8u; }
        if (ctx->pc != 0x1D3AE8u) { return; }
    }
    ctx->pc = 0x1D3AE8u;
label_1d3ae8:
    // 0x1d3ae8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3AE8u;
    {
        const bool branch_taken_0x1d3ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ae8) {
            ctx->pc = 0x1D3AF4u;
            goto label_1d3af4;
        }
    }
    ctx->pc = 0x1D3AF0u;
    // 0x1d3af0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3af4:
    // 0x1d3af4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d3af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3af8:
    // 0x1d3af8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d3af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3afc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3b08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3B08u;
            // 0x1d3b0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3B10u;
}
