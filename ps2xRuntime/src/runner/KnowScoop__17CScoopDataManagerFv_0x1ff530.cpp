#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KnowScoop__17CScoopDataManagerFv
// Address: 0x1ff530 - 0x1ff5e8
void KnowScoop__17CScoopDataManagerFv_0x1ff530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KnowScoop__17CScoopDataManagerFv_0x1ff530");
#endif

    switch (ctx->pc) {
        case 0x1ff558u: goto label_1ff558;
        case 0x1ff560u: goto label_1ff560;
        case 0x1ff578u: goto label_1ff578;
        case 0x1ff58cu: goto label_1ff58c;
        case 0x1ff5b0u: goto label_1ff5b0;
        default: break;
    }

    ctx->pc = 0x1ff530u;

    // 0x1ff530: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ff530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ff534: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ff534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ff538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ff538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ff53c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ff53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ff540: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ff540u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ff544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ff548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff54c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ff54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ff550: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ff550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff554: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ff554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff558:
    // 0x1ff558: 0xc07fcb0  jal         func_1FF2C0
    ctx->pc = 0x1FF558u;
    SET_GPR_U32(ctx, 31, 0x1FF560u);
    ctx->pc = 0x1FF55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF558u;
            // 0x1ff55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF2C0u;
    if (runtime->hasFunction(0x1FF2C0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF560u; }
        if (ctx->pc != 0x1FF560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopDataTableIndex__Fi_0x1ff2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF560u; }
        if (ctx->pc != 0x1FF560u) { return; }
    }
    ctx->pc = 0x1FF560u;
label_1ff560:
    // 0x1ff560: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ff560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff564: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FF564u;
    {
        const bool branch_taken_0x1ff564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff564) {
            ctx->pc = 0x1FF5B4u;
            goto label_1ff5b4;
        }
    }
    ctx->pc = 0x1FF56Cu;
    // 0x1ff56c: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1ff56cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ff570: 0xc07fd28  jal         func_1FF4A0
    ctx->pc = 0x1FF570u;
    SET_GPR_U32(ctx, 31, 0x1FF578u);
    ctx->pc = 0x1FF574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF570u;
            // 0x1ff574: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF4A0u;
    if (runtime->hasFunction(0x1FF4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF578u; }
        if (ctx->pc != 0x1FF578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScoopInfo__17CScoopDataManagerFi_0x1ff4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF578u; }
        if (ctx->pc != 0x1FF578u) { return; }
    }
    ctx->pc = 0x1FF578u;
label_1ff578:
    // 0x1ff578: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ff578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff57c: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1FF57Cu;
    {
        const bool branch_taken_0x1ff57c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff57c) {
            ctx->pc = 0x1FF5B4u;
            goto label_1ff5b4;
        }
    }
    ctx->pc = 0x1FF584u;
    // 0x1ff584: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x1FF584u;
    SET_GPR_U32(ctx, 31, 0x1FF58Cu);
    ctx->pc = 0x1FF588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF584u;
            // 0x1ff588: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF58Cu; }
        if (ctx->pc != 0x1FF58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF58Cu; }
        if (ctx->pc != 0x1FF58Cu) { return; }
    }
    ctx->pc = 0x1FF58Cu;
label_1ff58c:
    // 0x1ff58c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FF58Cu;
    {
        const bool branch_taken_0x1ff58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff58c) {
            ctx->pc = 0x1FF5B4u;
            goto label_1ff5b4;
        }
    }
    ctx->pc = 0x1FF594u;
    // 0x1ff594: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1ff594u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ff598: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF598u;
    {
        const bool branch_taken_0x1ff598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff598) {
            ctx->pc = 0x1FF5B4u;
            goto label_1ff5b4;
        }
    }
    ctx->pc = 0x1FF5A0u;
    // 0x1ff5a0: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1ff5a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ff5a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ff5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff5a8: 0xc07fd40  jal         func_1FF500
    ctx->pc = 0x1FF5A8u;
    SET_GPR_U32(ctx, 31, 0x1FF5B0u);
    ctx->pc = 0x1FF5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5A8u;
            // 0x1ff5ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF500u;
    if (runtime->hasFunction(0x1FF500u)) {
        auto targetFn = runtime->lookupFunction(0x1FF500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5B0u; }
        if (ctx->pc != 0x1FF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetViewFlag__17CScoopDataManagerFii_0x1ff500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5B0u; }
        if (ctx->pc != 0x1FF5B0u) { return; }
    }
    ctx->pc = 0x1FF5B0u;
label_1ff5b0:
    // 0x1ff5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ff5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ff5b4:
    // 0x1ff5b4: 0x0  nop
    ctx->pc = 0x1ff5b4u;
    // NOP
    // 0x1ff5b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ff5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ff5bc: 0x2a220035  slti        $v0, $s1, 0x35
    ctx->pc = 0x1ff5bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x1ff5c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1FF5C0u;
    {
        const bool branch_taken_0x1ff5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5C0u;
            // 0x1ff5c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff5c0) {
            ctx->pc = 0x1FF558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff558;
        }
    }
    ctx->pc = 0x1FF5C8u;
    // 0x1ff5c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ff5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ff5cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ff5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ff5d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ff5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ff5d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ff5d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff5d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff5d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff5dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ff5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5E0u;
            // 0x1ff5e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF5E8u;
}
