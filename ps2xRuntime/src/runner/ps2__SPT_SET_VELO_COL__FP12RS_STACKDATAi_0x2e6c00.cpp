#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_VELO_COL__FP12RS_STACKDATAi
// Address: 0x2e6c00 - 0x2e6cdc
void ps2__SPT_SET_VELO_COL__FP12RS_STACKDATAi_0x2e6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_VELO_COL__FP12RS_STACKDATAi_0x2e6c00");
#endif

    switch (ctx->pc) {
        case 0x2e6c28u: goto label_2e6c28;
        case 0x2e6c38u: goto label_2e6c38;
        case 0x2e6c48u: goto label_2e6c48;
        case 0x2e6c58u: goto label_2e6c58;
        case 0x2e6c68u: goto label_2e6c68;
        case 0x2e6c7cu: goto label_2e6c7c;
        case 0x2e6c88u: goto label_2e6c88;
        case 0x2e6c90u: goto label_2e6c90;
        default: break;
    }

    ctx->pc = 0x2e6c00u;

    // 0x2e6c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e6c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e6c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e6c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6c10: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6c10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e6c18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e6c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e6c20: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6C20u;
    SET_GPR_U32(ctx, 31, 0x2E6C28u);
    ctx->pc = 0x2E6C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C20u;
            // 0x2e6c24: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C28u; }
        if (ctx->pc != 0x2E6C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C28u; }
        if (ctx->pc != 0x2E6C28u) { return; }
    }
    ctx->pc = 0x2E6C28u;
label_2e6c28:
    // 0x2e6c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e6c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c30: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6C30u;
    SET_GPR_U32(ctx, 31, 0x2E6C38u);
    ctx->pc = 0x2E6C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C30u;
            // 0x2e6c34: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C38u; }
        if (ctx->pc != 0x2E6C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C38u; }
        if (ctx->pc != 0x2E6C38u) { return; }
    }
    ctx->pc = 0x2E6C38u;
label_2e6c38:
    // 0x2e6c38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c3c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2e6c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2e6c40: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6C40u;
    SET_GPR_U32(ctx, 31, 0x2E6C48u);
    ctx->pc = 0x2E6C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C40u;
            // 0x2e6c44: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C48u; }
        if (ctx->pc != 0x2E6C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C48u; }
        if (ctx->pc != 0x2E6C48u) { return; }
    }
    ctx->pc = 0x2E6C48u;
label_2e6c48:
    // 0x2e6c48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c4c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2e6c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2e6c50: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6C50u;
    SET_GPR_U32(ctx, 31, 0x2E6C58u);
    ctx->pc = 0x2E6C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C50u;
            // 0x2e6c54: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C58u; }
        if (ctx->pc != 0x2E6C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C58u; }
        if (ctx->pc != 0x2E6C58u) { return; }
    }
    ctx->pc = 0x2E6C58u;
label_2e6c58:
    // 0x2e6c58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e6c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6c5c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2e6c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2e6c60: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E6C60u;
    SET_GPR_U32(ctx, 31, 0x2E6C68u);
    ctx->pc = 0x2E6C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C60u;
            // 0x2e6c64: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C68u; }
        if (ctx->pc != 0x2E6C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C68u; }
        if (ctx->pc != 0x2E6C68u) { return; }
    }
    ctx->pc = 0x2E6C68u;
label_2e6c68:
    // 0x2e6c68: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x2e6c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e6c6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6C6Cu;
    {
        const bool branch_taken_0x2e6c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C6Cu;
            // 0x2e6c70: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c6c) {
            ctx->pc = 0x2E6C80u;
            goto label_2e6c80;
        }
    }
    ctx->pc = 0x2E6C74u;
    // 0x2e6c74: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E6C74u;
    SET_GPR_U32(ctx, 31, 0x2E6C7Cu);
    ctx->pc = 0x2E6C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C74u;
            // 0x2e6c78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C7Cu; }
        if (ctx->pc != 0x2E6C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C7Cu; }
        if (ctx->pc != 0x2E6C7Cu) { return; }
    }
    ctx->pc = 0x2E6C7Cu;
label_2e6c7c:
    // 0x2e6c7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e6c7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6c80:
    // 0x2e6c80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E6C80u;
    {
        const bool branch_taken_0x2e6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C80u;
            // 0x2e6c84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c80) {
            ctx->pc = 0x2E6CACu;
            goto label_2e6cac;
        }
    }
    ctx->pc = 0x2E6C88u;
label_2e6c88:
    // 0x2e6c88: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E6C88u;
    SET_GPR_U32(ctx, 31, 0x2E6C90u);
    ctx->pc = 0x2E6C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C88u;
            // 0x2e6c8c: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C90u; }
        if (ctx->pc != 0x2E6C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E6C90u; }
        if (ctx->pc != 0x2E6C90u) { return; }
    }
    ctx->pc = 0x2E6C90u;
label_2e6c90:
    // 0x2e6c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6C90u;
    {
        const bool branch_taken_0x2e6c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C90u;
            // 0x2e6c94: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c90) {
            ctx->pc = 0x2E6CA0u;
            goto label_2e6ca0;
        }
    }
    ctx->pc = 0x2E6C98u;
    // 0x2e6c98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E6C98u;
    {
        const bool branch_taken_0x2e6c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6C98u;
            // 0x2e6c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6c98) {
            ctx->pc = 0x2E6CC0u;
            goto label_2e6cc0;
        }
    }
    ctx->pc = 0x2E6CA0u;
label_2e6ca0:
    // 0x2e6ca0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e6ca4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e6ca4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e6ca8: 0x7c430080  sq          $v1, 0x80($v0)
    ctx->pc = 0x2e6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 3));
label_2e6cac:
    // 0x2e6cac: 0x0  nop
    ctx->pc = 0x2e6cacu;
    // NOP
    // 0x2e6cb0: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e6cb4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e6cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6cb8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2E6CB8u;
    {
        const bool branch_taken_0x2e6cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CB8u;
            // 0x2e6cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6cb8) {
            ctx->pc = 0x2E6C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e6c88;
        }
    }
    ctx->pc = 0x2E6CC0u;
label_2e6cc0:
    // 0x2e6cc0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e6cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e6cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e6cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e6cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6CD4u;
            // 0x2e6cd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6CDCu;
}
