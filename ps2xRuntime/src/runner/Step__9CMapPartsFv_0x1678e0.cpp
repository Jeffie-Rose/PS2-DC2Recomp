#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CMapPartsFv
// Address: 0x1678e0 - 0x167964
void Step__9CMapPartsFv_0x1678e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CMapPartsFv_0x1678e0");
#endif

    switch (ctx->pc) {
        case 0x167910u: goto label_167910;
        case 0x167928u: goto label_167928;
        case 0x167930u: goto label_167930;
        case 0x167938u: goto label_167938;
        default: break;
    }

    ctx->pc = 0x1678e0u;

    // 0x1678e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1678e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1678e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1678e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1678e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1678ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1678ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1678f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1678f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1678f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1678f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1678f8: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x1678f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1678fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1678FCu;
    {
        const bool branch_taken_0x1678fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1678FCu;
            // 0x167900: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1678fc) {
            ctx->pc = 0x167948u;
            goto label_167948;
        }
    }
    ctx->pc = 0x167904u;
    // 0x167904: 0x8e7000b0  lw          $s0, 0xB0($s3)
    ctx->pc = 0x167904u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x167908: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x167908u;
    {
        const bool branch_taken_0x167908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167908) {
            ctx->pc = 0x167944u;
            goto label_167944;
        }
    }
    ctx->pc = 0x167910u;
label_167910:
    // 0x167910: 0x8e120080  lw          $s2, 0x80($s0)
    ctx->pc = 0x167910u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x167914: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x167914u;
    {
        const bool branch_taken_0x167914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x167918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167914u;
            // 0x167918: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167914) {
            ctx->pc = 0x167938u;
            goto label_167938;
        }
    }
    ctx->pc = 0x16791Cu;
    // 0x16791c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167920: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x167920u;
    SET_GPR_U32(ctx, 31, 0x167928u);
    ctx->pc = 0x167924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167920u;
            // 0x167924: 0x266500c0  addiu       $a1, $s3, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167928u; }
        if (ctx->pc != 0x167928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167928u; }
        if (ctx->pc != 0x167928u) { return; }
    }
    ctx->pc = 0x167928u;
label_167928:
    // 0x167928: 0xc05a1a0  jal         func_168680
    ctx->pc = 0x167928u;
    SET_GPR_U32(ctx, 31, 0x167930u);
    ctx->pc = 0x16792Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167928u;
            // 0x16792c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168680u;
    if (runtime->hasFunction(0x168680u)) {
        auto targetFn = runtime->lookupFunction(0x168680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167930u; }
        if (ctx->pc != 0x167930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CMapPieceFv_0x168680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167930u; }
        if (ctx->pc != 0x167930u) { return; }
    }
    ctx->pc = 0x167930u;
label_167930:
    // 0x167930: 0xc04db18  jal         func_136C60
    ctx->pc = 0x167930u;
    SET_GPR_U32(ctx, 31, 0x167938u);
    ctx->pc = 0x167934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167930u;
            // 0x167934: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167938u; }
        if (ctx->pc != 0x167938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167938u; }
        if (ctx->pc != 0x167938u) { return; }
    }
    ctx->pc = 0x167938u;
label_167938:
    // 0x167938: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x167938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16793c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16793Cu;
    {
        const bool branch_taken_0x16793c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16793c) {
            ctx->pc = 0x167910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_167910;
        }
    }
    ctx->pc = 0x167944u;
label_167944:
    // 0x167944: 0x0  nop
    ctx->pc = 0x167944u;
    // NOP
label_167948:
    // 0x167948: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x167948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16794c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16794cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167950: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167950u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16795c: 0x3e00008  jr          $ra
    ctx->pc = 0x16795Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16795Cu;
            // 0x167960: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x167964u;
}
