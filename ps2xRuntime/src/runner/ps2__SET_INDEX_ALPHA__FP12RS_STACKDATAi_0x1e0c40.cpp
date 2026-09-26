#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_INDEX_ALPHA__FP12RS_STACKDATAi
// Address: 0x1e0c40 - 0x1e0cd8
void ps2__SET_INDEX_ALPHA__FP12RS_STACKDATAi_0x1e0c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_INDEX_ALPHA__FP12RS_STACKDATAi_0x1e0c40");
#endif

    switch (ctx->pc) {
        case 0x1e0c58u: goto label_1e0c58;
        case 0x1e0c6cu: goto label_1e0c6c;
        case 0x1e0c84u: goto label_1e0c84;
        case 0x1e0ca0u: goto label_1e0ca0;
        default: break;
    }

    ctx->pc = 0x1e0c40u;

    // 0x1e0c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e0c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e0c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e0c48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0c4c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e0c50: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E0C50u;
    SET_GPR_U32(ctx, 31, 0x1E0C58u);
    ctx->pc = 0x1E0C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C50u;
            // 0x1e0c54: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C58u; }
        if (ctx->pc != 0x1E0C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C58u; }
        if (ctx->pc != 0x1E0C58u) { return; }
    }
    ctx->pc = 0x1E0C58u;
label_1e0c58:
    // 0x1e0c58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e0c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c5c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e0c60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e0c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e0c64: 0xc076dc0  jal         func_1DB700
    ctx->pc = 0x1E0C64u;
    SET_GPR_U32(ctx, 31, 0x1E0C6Cu);
    ctx->pc = 0x1E0C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C64u;
            // 0x1e0c68: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB700u;
    if (runtime->hasFunction(0x1DB700u)) {
        auto targetFn = runtime->lookupFunction(0x1DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C6Cu; }
        if (ctx->pc != 0x1E0C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterNum__11CMonsterManFf_0x1db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0C6Cu; }
        if (ctx->pc != 0x1E0C6Cu) { return; }
    }
    ctx->pc = 0x1E0C6Cu;
label_1e0c6c:
    // 0x1e0c6c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e0c6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0c70: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0C70u;
    {
        const bool branch_taken_0x1e0c70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C70u;
            // 0x1e0c74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c70) {
            ctx->pc = 0x1E0CBCu;
            goto label_1e0cbc;
        }
    }
    ctx->pc = 0x1E0C78u;
    // 0x1e0c78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0c78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c7c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e0c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e0c80: 0x0  nop
    ctx->pc = 0x1e0c80u;
    // NOP
label_1e0c84:
    // 0x1e0c84: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1e0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e0c88: 0x8c660484  lw          $a2, 0x484($v1)
    ctx->pc = 0x1e0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1e0c8c: 0x84c31156  lh          $v1, 0x1156($a2)
    ctx->pc = 0x1e0c8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4438)));
    // 0x1e0c90: 0x14700006  bne         $v1, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C90u;
    {
        const bool branch_taken_0x1e0c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e0c90) {
            ctx->pc = 0x1E0CACu;
            goto label_1e0cac;
        }
    }
    ctx->pc = 0x1E0C98u;
    // 0x1e0c98: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E0C98u;
    SET_GPR_U32(ctx, 31, 0x1E0CA0u);
    ctx->pc = 0x1E0C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C98u;
            // 0x1e0c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0CA0u; }
        if (ctx->pc != 0x1E0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0CA0u; }
        if (ctx->pc != 0x1E0CA0u) { return; }
    }
    ctx->pc = 0x1E0CA0u;
label_1e0ca0:
    // 0x1e0ca0: 0xe4c00100  swc1        $f0, 0x100($a2)
    ctx->pc = 0x1e0ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 256), bits); }
    // 0x1e0ca4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0CA4u;
    {
        const bool branch_taken_0x1e0ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CA4u;
            // 0x1e0ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ca4) {
            ctx->pc = 0x1E0CC4u;
            goto label_1e0cc4;
        }
    }
    ctx->pc = 0x1E0CACu;
label_1e0cac:
    // 0x1e0cac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e0cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e0cb0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x1e0cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0cb4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E0CB4u;
    {
        const bool branch_taken_0x1e0cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CB4u;
            // 0x1e0cb8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cb4) {
            ctx->pc = 0x1E0C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e0c84;
        }
    }
    ctx->pc = 0x1E0CBCu;
label_1e0cbc:
    // 0x1e0cbc: 0x0  nop
    ctx->pc = 0x1e0cbcu;
    // NOP
    // 0x1e0cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0cc4:
    // 0x1e0cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0cc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0ccc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e0cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CD0u;
            // 0x1e0cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0CD8u;
}
