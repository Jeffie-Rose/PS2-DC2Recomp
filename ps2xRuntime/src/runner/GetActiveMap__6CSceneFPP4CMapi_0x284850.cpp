#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveMap__6CSceneFPP4CMapi
// Address: 0x284850 - 0x284900
void GetActiveMap__6CSceneFPP4CMapi_0x284850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveMap__6CSceneFPP4CMapi_0x284850");
#endif

    switch (ctx->pc) {
        case 0x28488cu: goto label_28488c;
        case 0x2848a0u: goto label_2848a0;
        case 0x2848b0u: goto label_2848b0;
        default: break;
    }

    ctx->pc = 0x284850u;

    // 0x284850: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x284850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x284854: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x284854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x284858: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x284858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28485c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x284860: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x284860u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284864: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x284864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x284868: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x284868u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28486c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28486cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x284870: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x284870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284874: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x284874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x284878: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x284878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28487c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284880: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x284880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284884: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x284884u;
    {
        const bool branch_taken_0x284884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284884u;
            // 0x284888: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284884) {
            ctx->pc = 0x2848C4u;
            goto label_2848c4;
        }
    }
    ctx->pc = 0x28488Cu;
label_28488c:
    // 0x28488c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x28488Cu;
    {
        const bool branch_taken_0x28488c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x284890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28488Cu;
            // 0x284890: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28488c) {
            ctx->pc = 0x2848D8u;
            goto label_2848d8;
        }
    }
    ctx->pc = 0x284894u;
    // 0x284894: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x284894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284898: 0xc0a11a4  jal         func_284690
    ctx->pc = 0x284898u;
    SET_GPR_U32(ctx, 31, 0x2848A0u);
    ctx->pc = 0x28489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284898u;
            // 0x28489c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284690u;
    if (runtime->hasFunction(0x284690u)) {
        auto targetFn = runtime->lookupFunction(0x284690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2848A0u; }
        if (ctx->pc != 0x2848A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsActive__6CSceneFii_0x284690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2848A0u; }
        if (ctx->pc != 0x2848A0u) { return; }
    }
    ctx->pc = 0x2848A0u;
label_2848a0:
    // 0x2848a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2848A0u;
    {
        const bool branch_taken_0x2848a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2848A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848A0u;
            // 0x2848a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848a0) {
            ctx->pc = 0x2848C0u;
            goto label_2848c0;
        }
    }
    ctx->pc = 0x2848A8u;
    // 0x2848a8: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2848A8u;
    SET_GPR_U32(ctx, 31, 0x2848B0u);
    ctx->pc = 0x2848ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2848A8u;
            // 0x2848ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2848B0u; }
        if (ctx->pc != 0x2848B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2848B0u; }
        if (ctx->pc != 0x2848B0u) { return; }
    }
    ctx->pc = 0x2848B0u;
label_2848b0:
    // 0x2848b0: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x2848b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2848b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2848b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2848b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2848b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2848bc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2848bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2848c0:
    // 0x2848c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2848c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2848c4:
    // 0x2848c4: 0x0  nop
    ctx->pc = 0x2848c4u;
    // NOP
    // 0x2848c8: 0x8ea227e0  lw          $v0, 0x27E0($s5)
    ctx->pc = 0x2848c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10208)));
    // 0x2848cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2848ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2848d0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2848D0u;
    {
        const bool branch_taken_0x2848d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2848D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848D0u;
            // 0x2848d4: 0x233082a  slt         $at, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848d0) {
            ctx->pc = 0x28488Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28488c;
        }
    }
    ctx->pc = 0x2848D8u;
label_2848d8:
    // 0x2848d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2848d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2848dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2848e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2848e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2848e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2848e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2848e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2848e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2848ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2848ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2848f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2848f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2848f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2848f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2848f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2848F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2848FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2848F8u;
            // 0x2848fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x284900u;
}
