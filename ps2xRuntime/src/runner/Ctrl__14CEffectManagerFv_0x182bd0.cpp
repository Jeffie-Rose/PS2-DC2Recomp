#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Ctrl__14CEffectManagerFv
// Address: 0x182bd0 - 0x182cec
void Ctrl__14CEffectManagerFv_0x182bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ctrl__14CEffectManagerFv_0x182bd0");
#endif

    switch (ctx->pc) {
        case 0x182c88u: goto label_182c88;
        case 0x182cd4u: goto label_182cd4;
        default: break;
    }

    ctx->pc = 0x182bd0u;

    // 0x182bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x182bdc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x182bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x182be0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x182BE0u;
    {
        const bool branch_taken_0x182be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BE0u;
            // 0x182be4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182be0) {
            ctx->pc = 0x182CDCu;
            goto label_182cdc;
        }
    }
    ctx->pc = 0x182BE8u;
    // 0x182be8: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x182be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x182bec: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182BECu;
    {
        const bool branch_taken_0x182bec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x182bec) {
            ctx->pc = 0x182BFCu;
            goto label_182bfc;
        }
    }
    ctx->pc = 0x182BF4u;
    // 0x182bf4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x182BF4u;
    {
        const bool branch_taken_0x182bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182BF4u;
            // 0x182bf8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182bf4) {
            ctx->pc = 0x182CE0u;
            goto label_182ce0;
        }
    }
    ctx->pc = 0x182BFCu;
label_182bfc:
    // 0x182bfc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x182bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x182c00: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x182c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x182c04: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x182C04u;
    {
        const bool branch_taken_0x182c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x182c04) {
            ctx->pc = 0x182C9Cu;
            goto label_182c9c;
        }
    }
    ctx->pc = 0x182C0Cu;
    // 0x182c0c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x182c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x182c10: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x182c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x182c14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x182c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x182c18: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182C18u;
    {
        const bool branch_taken_0x182c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182c18) {
            ctx->pc = 0x182C28u;
            goto label_182c28;
        }
    }
    ctx->pc = 0x182C20u;
    // 0x182c20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x182c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x182c24: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x182c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_182c28:
    // 0x182c28: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x182c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182c2c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x182c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x182c30: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x182c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182c34: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x182C34u;
    {
        const bool branch_taken_0x182c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c34) {
            ctx->pc = 0x182CDCu;
            goto label_182cdc;
        }
    }
    ctx->pc = 0x182C3Cu;
    // 0x182c3c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x182c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x182c40: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x182c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x182c44: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x182c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x182c48: 0x8c840044  lw          $a0, 0x44($a0)
    ctx->pc = 0x182c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x182c4c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x182c4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182c50: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x182C50u;
    {
        const bool branch_taken_0x182c50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c50) {
            ctx->pc = 0x182CDCu;
            goto label_182cdc;
        }
    }
    ctx->pc = 0x182C58u;
    // 0x182c58: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x182c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x182c5c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x182c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x182c60: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x182c60u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x182c64: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x182c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x182c68: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x182c6c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x182c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x182c70: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x182c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182c74: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x182c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x182c78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182C78u;
    {
        const bool branch_taken_0x182c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182c78) {
            ctx->pc = 0x182C88u;
            goto label_182c88;
        }
    }
    ctx->pc = 0x182C80u;
    // 0x182c80: 0xc060444  jal         func_181110
    ctx->pc = 0x182C80u;
    SET_GPR_U32(ctx, 31, 0x182C88u);
    ctx->pc = 0x181110u;
    if (runtime->hasFunction(0x181110u)) {
        auto targetFn = runtime->lookupFunction(0x181110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C88u; }
        if (ctx->pc != 0x182C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__11CEffectCtrlFv_0x181110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C88u; }
        if (ctx->pc != 0x182C88u) { return; }
    }
    ctx->pc = 0x182C88u;
label_182c88:
    // 0x182c88: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x182c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182c8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x182c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x182c90: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x182c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x182c94: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x182C94u;
    {
        const bool branch_taken_0x182c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182C94u;
            // 0x182c98: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182c94) {
            ctx->pc = 0x182CDCu;
            goto label_182cdc;
        }
    }
    ctx->pc = 0x182C9Cu;
label_182c9c:
    // 0x182c9c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182ca0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x182CA0u;
    {
        const bool branch_taken_0x182ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182ca0) {
            ctx->pc = 0x182CDCu;
            goto label_182cdc;
        }
    }
    ctx->pc = 0x182CA8u;
    // 0x182ca8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x182ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x182cac: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x182cacu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182cb0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x182cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x182cb4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x182cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182cb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x182cbc: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x182cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x182cc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x182cc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182CC4u;
    {
        const bool branch_taken_0x182cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CC4u;
            // 0x182cc8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cc4) {
            ctx->pc = 0x182CD8u;
            goto label_182cd8;
        }
    }
    ctx->pc = 0x182CCCu;
    // 0x182ccc: 0xc060444  jal         func_181110
    ctx->pc = 0x182CCCu;
    SET_GPR_U32(ctx, 31, 0x182CD4u);
    ctx->pc = 0x181110u;
    if (runtime->hasFunction(0x181110u)) {
        auto targetFn = runtime->lookupFunction(0x181110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CD4u; }
        if (ctx->pc != 0x182CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__11CEffectCtrlFv_0x181110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CD4u; }
        if (ctx->pc != 0x182CD4u) { return; }
    }
    ctx->pc = 0x182CD4u;
label_182cd4:
    // 0x182cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182cd8:
    // 0x182cd8: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x182cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_182cdc:
    // 0x182cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182ce0:
    // 0x182ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x182CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CE4u;
            // 0x182ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182CECu;
}
