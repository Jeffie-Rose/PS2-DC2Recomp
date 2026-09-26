#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSyojiHin__5CShopFv
// Address: 0x291440 - 0x2914c8
void CheckSyojiHin__5CShopFv_0x291440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSyojiHin__5CShopFv_0x291440");
#endif

    switch (ctx->pc) {
        case 0x291464u: goto label_291464;
        case 0x291474u: goto label_291474;
        case 0x29148cu: goto label_29148c;
        default: break;
    }

    ctx->pc = 0x291440u;

    // 0x291440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291444: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x291444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x291448: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x291448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29144c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x291450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29145c: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x29145Cu;
    SET_GPR_U32(ctx, 31, 0x291464u);
    ctx->pc = 0x291460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29145Cu;
            // 0x291460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291464u; }
        if (ctx->pc != 0x291464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291464u; }
        if (ctx->pc != 0x291464u) { return; }
    }
    ctx->pc = 0x291464u;
label_291464:
    // 0x291464: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x291464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291468: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x291468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29146c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29146Cu;
    {
        const bool branch_taken_0x29146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29146Cu;
            // 0x291470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29146c) {
            ctx->pc = 0x291498u;
            goto label_291498;
        }
    }
    ctx->pc = 0x291474u;
label_291474:
    // 0x291474: 0xac600108  sw          $zero, 0x108($v1)
    ctx->pc = 0x291474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 0));
    // 0x291478: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x291478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x29147c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29147Cu;
    {
        const bool branch_taken_0x29147c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x291480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29147Cu;
            // 0x291480: 0x24740108  addiu       $s4, $v1, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29147c) {
            ctx->pc = 0x291490u;
            goto label_291490;
        }
    }
    ctx->pc = 0x291484u;
    // 0x291484: 0xc067778  jal         func_19DDE0
    ctx->pc = 0x291484u;
    SET_GPR_U32(ctx, 31, 0x29148Cu);
    ctx->pc = 0x291488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291484u;
            // 0x291488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DDE0u;
    if (runtime->hasFunction(0x19DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x19DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29148Cu; }
        if (ctx->pc != 0x29148Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumSameItem__16CUserDataManagerFi_0x19dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29148Cu; }
        if (ctx->pc != 0x29148Cu) { return; }
    }
    ctx->pc = 0x29148Cu;
label_29148c:
    // 0x29148c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x29148cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_291490:
    // 0x291490: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x291490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x291494: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x291494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_291498:
    // 0x291498: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x291498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29149c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x29149cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2914a0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2914A0u;
    {
        const bool branch_taken_0x2914a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2914A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914A0u;
            // 0x2914a4: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2914a0) {
            ctx->pc = 0x291474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291474;
        }
    }
    ctx->pc = 0x2914A8u;
    // 0x2914a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2914a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2914ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2914acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2914b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2914b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2914b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2914b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2914b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2914b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2914bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2914bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2914c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2914C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2914C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2914C0u;
            // 0x2914c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2914C8u;
}
