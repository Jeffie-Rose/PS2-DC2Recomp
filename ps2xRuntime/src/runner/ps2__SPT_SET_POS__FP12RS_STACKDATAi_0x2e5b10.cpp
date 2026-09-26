#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_POS__FP12RS_STACKDATAi
// Address: 0x2e5b10 - 0x2e5bbc
void ps2__SPT_SET_POS__FP12RS_STACKDATAi_0x2e5b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_POS__FP12RS_STACKDATAi_0x2e5b10");
#endif

    switch (ctx->pc) {
        case 0x2e5b38u: goto label_2e5b38;
        case 0x2e5b48u: goto label_2e5b48;
        case 0x2e5b5cu: goto label_2e5b5c;
        case 0x2e5b68u: goto label_2e5b68;
        case 0x2e5b70u: goto label_2e5b70;
        default: break;
    }

    ctx->pc = 0x2e5b10u;

    // 0x2e5b10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e5b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5b20: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5b28: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5b30: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5B30u;
    SET_GPR_U32(ctx, 31, 0x2E5B38u);
    ctx->pc = 0x2E5B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B30u;
            // 0x2e5b34: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B38u; }
        if (ctx->pc != 0x2E5B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B38u; }
        if (ctx->pc != 0x2E5B38u) { return; }
    }
    ctx->pc = 0x2E5B38u;
label_2e5b38:
    // 0x2e5b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5b3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e5b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e5b40: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E5B40u;
    SET_GPR_U32(ctx, 31, 0x2E5B48u);
    ctx->pc = 0x2E5B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B40u;
            // 0x2e5b44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B48u; }
        if (ctx->pc != 0x2E5B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B48u; }
        if (ctx->pc != 0x2E5B48u) { return; }
    }
    ctx->pc = 0x2E5B48u;
label_2e5b48:
    // 0x2e5b48: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e5b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e5b4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5B4Cu;
    {
        const bool branch_taken_0x2e5b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B4Cu;
            // 0x2e5b50: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b4c) {
            ctx->pc = 0x2E5B60u;
            goto label_2e5b60;
        }
    }
    ctx->pc = 0x2E5B54u;
    // 0x2e5b54: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5B54u;
    SET_GPR_U32(ctx, 31, 0x2E5B5Cu);
    ctx->pc = 0x2E5B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B54u;
            // 0x2e5b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B5Cu; }
        if (ctx->pc != 0x2E5B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B5Cu; }
        if (ctx->pc != 0x2E5B5Cu) { return; }
    }
    ctx->pc = 0x2E5B5Cu;
label_2e5b5c:
    // 0x2e5b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b60:
    // 0x2e5b60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E5B60u;
    {
        const bool branch_taken_0x2e5b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B60u;
            // 0x2e5b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b60) {
            ctx->pc = 0x2E5B8Cu;
            goto label_2e5b8c;
        }
    }
    ctx->pc = 0x2E5B68u;
label_2e5b68:
    // 0x2e5b68: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5B68u;
    SET_GPR_U32(ctx, 31, 0x2E5B70u);
    ctx->pc = 0x2E5B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B68u;
            // 0x2e5b6c: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B70u; }
        if (ctx->pc != 0x2E5B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B70u; }
        if (ctx->pc != 0x2E5B70u) { return; }
    }
    ctx->pc = 0x2E5B70u;
label_2e5b70:
    // 0x2e5b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B70u;
    {
        const bool branch_taken_0x2e5b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B70u;
            // 0x2e5b74: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b70) {
            ctx->pc = 0x2E5B80u;
            goto label_2e5b80;
        }
    }
    ctx->pc = 0x2E5B78u;
    // 0x2e5b78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5B78u;
    {
        const bool branch_taken_0x2e5b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B78u;
            // 0x2e5b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b78) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5B80u;
label_2e5b80:
    // 0x2e5b80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5b84: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e5b84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e5b88: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x2e5b88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
label_2e5b8c:
    // 0x2e5b8c: 0x0  nop
    ctx->pc = 0x2e5b8cu;
    // NOP
    // 0x2e5b90: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5b94: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5b98: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E5B98u;
    {
        const bool branch_taken_0x2e5b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B98u;
            // 0x2e5b9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5b98) {
            ctx->pc = 0x2E5B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5b68;
        }
    }
    ctx->pc = 0x2E5BA0u;
label_2e5ba0:
    // 0x2e5ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BB4u;
            // 0x2e5bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5BBCu;
}
