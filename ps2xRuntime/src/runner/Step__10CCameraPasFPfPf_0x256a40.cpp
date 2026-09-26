#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__10CCameraPasFPfPf
// Address: 0x256a40 - 0x256aec
void Step__10CCameraPasFPfPf_0x256a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__10CCameraPasFPfPf_0x256a40");
#endif

    switch (ctx->pc) {
        case 0x256a80u: goto label_256a80;
        case 0x256a94u: goto label_256a94;
        case 0x256ac0u: goto label_256ac0;
        case 0x256accu: goto label_256acc;
        default: break;
    }

    ctx->pc = 0x256a40u;

    // 0x256a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x256a44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x256a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x256a48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x256a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x256a4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x256a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x256a50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x256a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x256a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x256a58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x256a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x256a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x256a60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x256a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x256a64: 0x8c830940  lw          $v1, 0x940($a0)
    ctx->pc = 0x256a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2368)));
    // 0x256a68: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x256A68u;
    {
        const bool branch_taken_0x256a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256A68u;
            // 0x256a6c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a68) {
            ctx->pc = 0x256ACCu;
            goto label_256acc;
        }
    }
    ctx->pc = 0x256A70u;
    // 0x256a70: 0x26840208  addiu       $a0, $s4, 0x208
    ctx->pc = 0x256a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 520));
    // 0x256a74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x256a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a78: 0xc0957c8  jal         func_255F20
    ctx->pc = 0x256A78u;
    SET_GPR_U32(ctx, 31, 0x256A80u);
    ctx->pc = 0x256A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256A78u;
            // 0x256a7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255F20u;
    if (runtime->hasFunction(0x255F20u)) {
        auto targetFn = runtime->lookupFunction(0x255F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A80u; }
        if (ctx->pc != 0x256A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepS__9C3DSplineFv_0x255f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A80u; }
        if (ctx->pc != 0x256A80u) { return; }
    }
    ctx->pc = 0x256A80u;
label_256a80:
    // 0x256a80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256A80u;
    {
        const bool branch_taken_0x256a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256A80u;
            // 0x256a84: 0x268405a4  addiu       $a0, $s4, 0x5A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256a80) {
            ctx->pc = 0x256A8Cu;
            goto label_256a8c;
        }
    }
    ctx->pc = 0x256A88u;
    // 0x256a88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x256a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256a8c:
    // 0x256a8c: 0xc0957c8  jal         func_255F20
    ctx->pc = 0x256A8Cu;
    SET_GPR_U32(ctx, 31, 0x256A94u);
    ctx->pc = 0x255F20u;
    if (runtime->hasFunction(0x255F20u)) {
        auto targetFn = runtime->lookupFunction(0x255F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A94u; }
        if (ctx->pc != 0x256A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepS__9C3DSplineFv_0x255f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256A94u; }
        if (ctx->pc != 0x256A94u) { return; }
    }
    ctx->pc = 0x256A94u;
label_256a94:
    // 0x256a94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x256A94u;
    {
        const bool branch_taken_0x256a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x256a94) {
            ctx->pc = 0x256AA0u;
            goto label_256aa0;
        }
    }
    ctx->pc = 0x256A9Cu;
    // 0x256a9c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x256a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_256aa0:
    // 0x256aa0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256AA0u;
    {
        const bool branch_taken_0x256aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256AA0u;
            // 0x256aa4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256aa0) {
            ctx->pc = 0x256AB8u;
            goto label_256ab8;
        }
    }
    ctx->pc = 0x256AA8u;
    // 0x256aa8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x256AA8u;
    {
        const bool branch_taken_0x256aa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x256aa8) {
            ctx->pc = 0x256AB4u;
            goto label_256ab4;
        }
    }
    ctx->pc = 0x256AB0u;
    // 0x256ab0: 0xae800940  sw          $zero, 0x940($s4)
    ctx->pc = 0x256ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2368), GPR_U32(ctx, 0));
label_256ab4:
    // 0x256ab4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x256ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256ab8:
    // 0x256ab8: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256AB8u;
    SET_GPR_U32(ctx, 31, 0x256AC0u);
    ctx->pc = 0x256ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256AB8u;
            // 0x256abc: 0x26840208  addiu       $a0, $s4, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256AC0u; }
        if (ctx->pc != 0x256AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256AC0u; }
        if (ctx->pc != 0x256AC0u) { return; }
    }
    ctx->pc = 0x256AC0u;
label_256ac0:
    // 0x256ac0: 0x268405a4  addiu       $a0, $s4, 0x5A4
    ctx->pc = 0x256ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1444));
    // 0x256ac4: 0xc0958d4  jal         func_256350
    ctx->pc = 0x256AC4u;
    SET_GPR_U32(ctx, 31, 0x256ACCu);
    ctx->pc = 0x256AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x256AC4u;
            // 0x256ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256350u;
    if (runtime->hasFunction(0x256350u)) {
        auto targetFn = runtime->lookupFunction(0x256350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256ACCu; }
        if (ctx->pc != 0x256ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowXYZ__9C3DSplineFPf_0x256350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x256ACCu; }
        if (ctx->pc != 0x256ACCu) { return; }
    }
    ctx->pc = 0x256ACCu;
label_256acc:
    // 0x256acc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x256accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x256ad0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x256ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256ad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x256ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x256adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x256adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x256ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x256AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x256AE4u;
            // 0x256ae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256AECu;
}
