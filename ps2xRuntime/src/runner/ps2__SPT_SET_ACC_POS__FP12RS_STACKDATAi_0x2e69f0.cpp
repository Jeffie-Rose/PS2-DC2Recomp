#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ACC_POS__FP12RS_STACKDATAi
// Address: 0x2e69f0 - 0x2e6a9c
void ps2__SPT_SET_ACC_POS__FP12RS_STACKDATAi_0x2e69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ACC_POS__FP12RS_STACKDATAi_0x2e69f0");
#endif

    switch (ctx->pc) {
        case 0x2e6a18u: goto label_2e6a18;
        case 0x2e6a28u: goto label_2e6a28;
        case 0x2e6a40u: goto label_2e6a40;
        case 0x2e6a4cu: goto label_2e6a4c;
        case 0x2e6a54u: goto label_2e6a54;
        default: break;
    }

    ctx->pc = 0x2e69f0u;

    // 0x2e69f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e69f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e69f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e69f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e69f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e69fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e69fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6a00: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6a08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6a10: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6A10u;
    SET_GPR_U32(ctx, 31, 0x2E6A18u);
    ctx->pc = 0x2E6A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A10u;
            // 0x2e6a14: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A18u; }
        if (ctx->pc != 0x2E6A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A18u; }
        if (ctx->pc != 0x2E6A18u) { return; }
    }
    ctx->pc = 0x2E6A18u;
label_2e6a18:
    // 0x2e6a18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6a1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e6a20: 0xc0b8cbc  jal         func_2E32F0
    ctx->pc = 0x2E6A20u;
    SET_GPR_U32(ctx, 31, 0x2E6A28u);
    ctx->pc = 0x2E6A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A20u;
            // 0x2e6a24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32F0u;
    if (runtime->hasFunction(0x2E32F0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A28u; }
        if (ctx->pc != 0x2E6A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x2e32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A28u; }
        if (ctx->pc != 0x2E6A28u) { return; }
    }
    ctx->pc = 0x2E6A28u;
label_2e6a28:
    // 0x2e6a28: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e6a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e6a2c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x2e6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x2e6a30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6A30u;
    {
        const bool branch_taken_0x2e6a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A30u;
            // 0x2e6a34: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a30) {
            ctx->pc = 0x2E6A44u;
            goto label_2e6a44;
        }
    }
    ctx->pc = 0x2E6A38u;
    // 0x2e6a38: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6A38u;
    SET_GPR_U32(ctx, 31, 0x2E6A40u);
    ctx->pc = 0x2E6A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A38u;
            // 0x2e6a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A40u; }
        if (ctx->pc != 0x2E6A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A40u; }
        if (ctx->pc != 0x2E6A40u) { return; }
    }
    ctx->pc = 0x2E6A40u;
label_2e6a40:
    // 0x2e6a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6a44:
    // 0x2e6a44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6A44u;
    {
        const bool branch_taken_0x2e6a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A44u;
            // 0x2e6a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a44) {
            ctx->pc = 0x2E6A70u;
            goto label_2e6a70;
        }
    }
    ctx->pc = 0x2E6A4Cu;
label_2e6a4c:
    // 0x2e6a4c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E6A54u);
    ctx->pc = 0x2E6A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A4Cu;
            // 0x2e6a50: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A54u; }
        if (ctx->pc != 0x2E6A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6A54u; }
        if (ctx->pc != 0x2E6A54u) { return; }
    }
    ctx->pc = 0x2E6A54u;
label_2e6a54:
    // 0x2e6a54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6A54u;
    {
        const bool branch_taken_0x2e6a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A54u;
            // 0x2e6a58: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a54) {
            ctx->pc = 0x2E6A64u;
            goto label_2e6a64;
        }
    }
    ctx->pc = 0x2E6A5Cu;
    // 0x2e6a5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6A5Cu;
    {
        const bool branch_taken_0x2e6a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A5Cu;
            // 0x2e6a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a5c) {
            ctx->pc = 0x2E6A80u;
            goto label_2e6a80;
        }
    }
    ctx->pc = 0x2E6A64u;
label_2e6a64:
    // 0x2e6a64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6a68: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e6a68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6a6c: 0x7c430070  sq          $v1, 0x70($v0)
    ctx->pc = 0x2e6a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 3));
label_2e6a70:
    // 0x2e6a70: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6a74: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6a78: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E6A78u;
    {
        const bool branch_taken_0x2e6a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A78u;
            // 0x2e6a7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6a78) {
            ctx->pc = 0x2E6A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6a4c;
        }
    }
    ctx->pc = 0x2E6A80u;
label_2e6a80:
    // 0x2e6a80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6a84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6a84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6a88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6a88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6a8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6a90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6a94: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6A94u;
            // 0x2e6a98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6A9Cu;
}
