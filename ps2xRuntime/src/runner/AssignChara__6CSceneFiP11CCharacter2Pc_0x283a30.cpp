#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AssignChara__6CSceneFiP11CCharacter2Pc
// Address: 0x283a30 - 0x283b00
void AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30");
#endif

    switch (ctx->pc) {
        case 0x283a64u: goto label_283a64;
        case 0x283a6cu: goto label_283a6c;
        case 0x283ab0u: goto label_283ab0;
        case 0x283ad8u: goto label_283ad8;
        default: break;
    }

    ctx->pc = 0x283a30u;

    // 0x283a30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x283a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x283a34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x283a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x283a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x283a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x283a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x283a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x283a40: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x283a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x283a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x283a48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x283a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x283a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x283a50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x283a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a54: 0x6610014  bgez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x283A54u;
    {
        const bool branch_taken_0x283a54 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x283A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A54u;
            // 0x283a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a54) {
            ctx->pc = 0x283AA8u;
            goto label_283aa8;
        }
    }
    ctx->pc = 0x283A5Cu;
    // 0x283a5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x283A5Cu;
    {
        const bool branch_taken_0x283a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A5Cu;
            // 0x283a60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a5c) {
            ctx->pc = 0x283A8Cu;
            goto label_283a8c;
        }
    }
    ctx->pc = 0x283A64u;
label_283a64:
    // 0x283a64: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x283A64u;
    SET_GPR_U32(ctx, 31, 0x283A6Cu);
    ctx->pc = 0x283A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283A64u;
            // 0x283a68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283A6Cu; }
        if (ctx->pc != 0x283A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283A6Cu; }
        if (ctx->pc != 0x283A6Cu) { return; }
    }
    ctx->pc = 0x283A6Cu;
label_283a6c:
    // 0x283a6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283A6Cu;
    {
        const bool branch_taken_0x283a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a6c) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x283A74u;
    // 0x283a74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x283a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283a78: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x283a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x283a7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x283a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x283a80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x283A80u;
    {
        const bool branch_taken_0x283a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283a80) {
            ctx->pc = 0x283AA0u;
            goto label_283aa0;
        }
    }
    ctx->pc = 0x283A88u;
label_283a88:
    // 0x283a88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x283a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_283a8c:
    // 0x283a8c: 0x0  nop
    ctx->pc = 0x283a8cu;
    // NOP
    // 0x283a90: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x283a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x283a94: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x283a94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283a98: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x283A98u;
    {
        const bool branch_taken_0x283a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283A98u;
            // 0x283a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a98) {
            ctx->pc = 0x283A64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_283a64;
        }
    }
    ctx->pc = 0x283AA0u;
label_283aa0:
    // 0x283aa0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283AA0u;
    {
        const bool branch_taken_0x283aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AA0u;
            // 0x283aa4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283aa0) {
            ctx->pc = 0x283AE4u;
            goto label_283ae4;
        }
    }
    ctx->pc = 0x283AA8u;
label_283aa8:
    // 0x283aa8: 0xc0a0cd0  jal         func_283340
    ctx->pc = 0x283AA8u;
    SET_GPR_U32(ctx, 31, 0x283AB0u);
    ctx->pc = 0x283340u;
    if (runtime->hasFunction(0x283340u)) {
        auto targetFn = runtime->lookupFunction(0x283340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AB0u; }
        if (ctx->pc != 0x283AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneCharacter__6CSceneFi_0x283340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AB0u; }
        if (ctx->pc != 0x283AB0u) { return; }
    }
    ctx->pc = 0x283AB0u;
label_283ab0:
    // 0x283ab0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283AB0u;
    {
        const bool branch_taken_0x283ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283ab0) {
            ctx->pc = 0x283AC0u;
            goto label_283ac0;
        }
    }
    ctx->pc = 0x283AB8u;
    // 0x283ab8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x283AB8u;
    {
        const bool branch_taken_0x283ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AB8u;
            // 0x283abc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ab8) {
            ctx->pc = 0x283AE4u;
            goto label_283ae4;
        }
    }
    ctx->pc = 0x283AC0u;
label_283ac0:
    // 0x283ac0: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x283AC0u;
    {
        const bool branch_taken_0x283ac0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x283AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AC0u;
            // 0x283ac4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ac0) {
            ctx->pc = 0x283ACCu;
            goto label_283acc;
        }
    }
    ctx->pc = 0x283AC8u;
    // 0x283ac8: 0x27918408  addiu       $s1, $gp, -0x7BF8
    ctx->pc = 0x283ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935560));
label_283acc:
    // 0x283acc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x283accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ad0: 0xc0a0ab8  jal         func_282AE0
    ctx->pc = 0x283AD0u;
    SET_GPR_U32(ctx, 31, 0x283AD8u);
    ctx->pc = 0x283AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x283AD0u;
            // 0x283ad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282AE0u;
    if (runtime->hasFunction(0x282AE0u)) {
        auto targetFn = runtime->lookupFunction(0x282AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AD8u; }
        if (ctx->pc != 0x283AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignData__15CSceneCharacterFP11CCharacter2Pc_0x282ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x283AD8u; }
        if (ctx->pc != 0x283AD8u) { return; }
    }
    ctx->pc = 0x283AD8u;
label_283ad8:
    // 0x283ad8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x283AD8u;
    {
        const bool branch_taken_0x283ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AD8u;
            // 0x283adc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ad8) {
            ctx->pc = 0x283AE4u;
            goto label_283ae4;
        }
    }
    ctx->pc = 0x283AE0u;
    // 0x283ae0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x283ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_283ae4:
    // 0x283ae4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x283ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x283ae8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x283ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x283aec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x283aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x283af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x283af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283af8: 0x3e00008  jr          $ra
    ctx->pc = 0x283AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283AF8u;
            // 0x283afc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x283B00u;
}
