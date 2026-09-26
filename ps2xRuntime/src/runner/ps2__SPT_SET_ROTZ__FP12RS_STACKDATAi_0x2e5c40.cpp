#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_ROTZ__FP12RS_STACKDATAi
// Address: 0x2e5c40 - 0x2e5cf0
void ps2__SPT_SET_ROTZ__FP12RS_STACKDATAi_0x2e5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_ROTZ__FP12RS_STACKDATAi_0x2e5c40");
#endif

    switch (ctx->pc) {
        case 0x2e5c6cu: goto label_2e5c6c;
        case 0x2e5c7cu: goto label_2e5c7c;
        case 0x2e5c90u: goto label_2e5c90;
        case 0x2e5c9cu: goto label_2e5c9c;
        case 0x2e5ca4u: goto label_2e5ca4;
        default: break;
    }

    ctx->pc = 0x2e5c40u;

    // 0x2e5c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5c44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e5c48: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5c4c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5c50: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e5c50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5c54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5c58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5c58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5c60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e5c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5c64: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5C64u;
    SET_GPR_U32(ctx, 31, 0x2E5C6Cu);
    ctx->pc = 0x2E5C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C64u;
            // 0x2e5c68: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C6Cu; }
        if (ctx->pc != 0x2E5C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C6Cu; }
        if (ctx->pc != 0x2E5C6Cu) { return; }
    }
    ctx->pc = 0x2E5C6Cu;
label_2e5c6c:
    // 0x2e5c6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5c74: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E5C74u;
    SET_GPR_U32(ctx, 31, 0x2E5C7Cu);
    ctx->pc = 0x2E5C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C74u;
            // 0x2e5c78: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C7Cu; }
        if (ctx->pc != 0x2E5C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C7Cu; }
        if (ctx->pc != 0x2E5C7Cu) { return; }
    }
    ctx->pc = 0x2E5C7Cu;
label_2e5c7c:
    // 0x2e5c7c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2e5c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e5c80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C80u;
    {
        const bool branch_taken_0x2e5c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C80u;
            // 0x2e5c84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c80) {
            ctx->pc = 0x2E5C94u;
            goto label_2e5c94;
        }
    }
    ctx->pc = 0x2E5C88u;
    // 0x2e5c88: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5C88u;
    SET_GPR_U32(ctx, 31, 0x2E5C90u);
    ctx->pc = 0x2E5C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C88u;
            // 0x2e5c8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C90u; }
        if (ctx->pc != 0x2E5C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5C90u; }
        if (ctx->pc != 0x2E5C90u) { return; }
    }
    ctx->pc = 0x2E5C90u;
label_2e5c90:
    // 0x2e5c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e5c94:
    // 0x2e5c94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5C94u;
    {
        const bool branch_taken_0x2e5c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C94u;
            // 0x2e5c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5c94) {
            ctx->pc = 0x2E5CBCu;
            goto label_2e5cbc;
        }
    }
    ctx->pc = 0x2E5C9Cu;
label_2e5c9c:
    // 0x2e5c9c: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5C9Cu;
    SET_GPR_U32(ctx, 31, 0x2E5CA4u);
    ctx->pc = 0x2E5CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5C9Cu;
            // 0x2e5ca0: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CA4u; }
        if (ctx->pc != 0x2E5CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5CA4u; }
        if (ctx->pc != 0x2E5CA4u) { return; }
    }
    ctx->pc = 0x2E5CA4u;
label_2e5ca4:
    // 0x2e5ca4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5CA4u;
    {
        const bool branch_taken_0x2e5ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ca4) {
            ctx->pc = 0x2E5CB4u;
            goto label_2e5cb4;
        }
    }
    ctx->pc = 0x2E5CACu;
    // 0x2e5cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5CACu;
    {
        const bool branch_taken_0x2e5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CACu;
            // 0x2e5cb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cac) {
            ctx->pc = 0x2E5CD0u;
            goto label_2e5cd0;
        }
    }
    ctx->pc = 0x2E5CB4u;
label_2e5cb4:
    // 0x2e5cb4: 0xe4540050  swc1        $f20, 0x50($v0)
    ctx->pc = 0x2e5cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2e5cb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e5cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e5cbc:
    // 0x2e5cbc: 0x0  nop
    ctx->pc = 0x2e5cbcu;
    // NOP
    // 0x2e5cc0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e5cc4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e5cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5cc8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E5CC8u;
    {
        const bool branch_taken_0x2e5cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CC8u;
            // 0x2e5ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5cc8) {
            ctx->pc = 0x2E5C9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5c9c;
        }
    }
    ctx->pc = 0x2E5CD0u;
label_2e5cd0:
    // 0x2e5cd0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5cd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e5cd8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5cdc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5ce0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e5ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5CE8u;
            // 0x2e5cec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5CF0u;
}
