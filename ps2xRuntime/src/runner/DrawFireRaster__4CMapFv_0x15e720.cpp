#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireRaster__4CMapFv
// Address: 0x15e720 - 0x15e7fc
void DrawFireRaster__4CMapFv_0x15e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireRaster__4CMapFv_0x15e720");
#endif

    switch (ctx->pc) {
        case 0x15e720u: goto label_15e720;
        case 0x15e724u: goto label_15e724;
        case 0x15e728u: goto label_15e728;
        case 0x15e72cu: goto label_15e72c;
        case 0x15e730u: goto label_15e730;
        case 0x15e734u: goto label_15e734;
        case 0x15e738u: goto label_15e738;
        case 0x15e73cu: goto label_15e73c;
        case 0x15e740u: goto label_15e740;
        case 0x15e744u: goto label_15e744;
        case 0x15e748u: goto label_15e748;
        case 0x15e74cu: goto label_15e74c;
        case 0x15e750u: goto label_15e750;
        case 0x15e754u: goto label_15e754;
        case 0x15e758u: goto label_15e758;
        case 0x15e75cu: goto label_15e75c;
        case 0x15e760u: goto label_15e760;
        case 0x15e764u: goto label_15e764;
        case 0x15e768u: goto label_15e768;
        case 0x15e76cu: goto label_15e76c;
        case 0x15e770u: goto label_15e770;
        case 0x15e774u: goto label_15e774;
        case 0x15e778u: goto label_15e778;
        case 0x15e77cu: goto label_15e77c;
        case 0x15e780u: goto label_15e780;
        case 0x15e784u: goto label_15e784;
        case 0x15e788u: goto label_15e788;
        case 0x15e78cu: goto label_15e78c;
        case 0x15e790u: goto label_15e790;
        case 0x15e794u: goto label_15e794;
        case 0x15e798u: goto label_15e798;
        case 0x15e79cu: goto label_15e79c;
        case 0x15e7a0u: goto label_15e7a0;
        case 0x15e7a4u: goto label_15e7a4;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e7acu: goto label_15e7ac;
        case 0x15e7b0u: goto label_15e7b0;
        case 0x15e7b4u: goto label_15e7b4;
        case 0x15e7b8u: goto label_15e7b8;
        case 0x15e7bcu: goto label_15e7bc;
        case 0x15e7c0u: goto label_15e7c0;
        case 0x15e7c4u: goto label_15e7c4;
        case 0x15e7c8u: goto label_15e7c8;
        case 0x15e7ccu: goto label_15e7cc;
        case 0x15e7d0u: goto label_15e7d0;
        case 0x15e7d4u: goto label_15e7d4;
        case 0x15e7d8u: goto label_15e7d8;
        case 0x15e7dcu: goto label_15e7dc;
        case 0x15e7e0u: goto label_15e7e0;
        case 0x15e7e4u: goto label_15e7e4;
        case 0x15e7e8u: goto label_15e7e8;
        case 0x15e7ecu: goto label_15e7ec;
        case 0x15e7f0u: goto label_15e7f0;
        case 0x15e7f4u: goto label_15e7f4;
        case 0x15e7f8u: goto label_15e7f8;
        default: break;
    }

    ctx->pc = 0x15e720u;

label_15e720:
    // 0x15e720: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_15e724:
    // 0x15e724: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15e728:
    // 0x15e728: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x15e728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_15e72c:
    // 0x15e72c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15e730:
    // 0x15e730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e734:
    // 0x15e734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15e738:
    // 0x15e738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15e738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e73c:
    // 0x15e73c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15e740:
    // 0x15e740: 0xc0575cc  jal         func_15D730
label_15e744:
    if (ctx->pc == 0x15E744u) {
        ctx->pc = 0x15E744u;
            // 0x15e744: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->pc = 0x15E748u;
        goto label_15e748;
    }
    ctx->pc = 0x15E740u;
    SET_GPR_U32(ctx, 31, 0x15E748u);
    ctx->pc = 0x15E744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E740u;
            // 0x15e744: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E748u; }
        if (ctx->pc != 0x15E748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E748u; }
        if (ctx->pc != 0x15E748u) { return; }
    }
    ctx->pc = 0x15E748u;
label_15e748:
    // 0x15e748: 0xc04c050  jal         func_130140
label_15e74c:
    if (ctx->pc == 0x15E74Cu) {
        ctx->pc = 0x15E74Cu;
            // 0x15e74c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15E750u;
        goto label_15e750;
    }
    ctx->pc = 0x15E748u;
    SET_GPR_U32(ctx, 31, 0x15E750u);
    ctx->pc = 0x15E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E748u;
            // 0x15e74c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E750u; }
        if (ctx->pc != 0x15E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E750u; }
        if (ctx->pc != 0x15E750u) { return; }
    }
    ctx->pc = 0x15E750u;
label_15e750:
    // 0x15e750: 0x8e470cfc  lw          $a3, 0xCFC($s2)
    ctx->pc = 0x15e750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3324)));
label_15e754:
    // 0x15e754: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15e754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15e758:
    // 0x15e758: 0x26450cb0  addiu       $a1, $s2, 0xCB0
    ctx->pc = 0x15e758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 3248));
label_15e75c:
    // 0x15e75c: 0xc0a7a9c  jal         func_29EA70
label_15e760:
    if (ctx->pc == 0x15E760u) {
        ctx->pc = 0x15E760u;
            // 0x15e760: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x15E764u;
        goto label_15e764;
    }
    ctx->pc = 0x15E75Cu;
    SET_GPR_U32(ctx, 31, 0x15E764u);
    ctx->pc = 0x15E760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E75Cu;
            // 0x15e760: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA70u;
    if (runtime->hasFunction(0x29EA70u)) {
        auto targetFn = runtime->lookupFunction(0x29EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E764u; }
        if (ctx->pc != 0x15E764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster_0x29ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E764u; }
        if (ctx->pc != 0x15E764u) { return; }
    }
    ctx->pc = 0x15E764u;
label_15e764:
    // 0x15e764: 0x8e500364  lw          $s0, 0x364($s2)
    ctx->pc = 0x15e764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 868)));
label_15e768:
    // 0x15e768: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_15e76c:
    if (ctx->pc == 0x15E76Cu) {
        ctx->pc = 0x15E76Cu;
            // 0x15e76c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E770u;
        goto label_15e770;
    }
    ctx->pc = 0x15E768u;
    {
        const bool branch_taken_0x15e768 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E768u;
            // 0x15e76c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e768) {
            ctx->pc = 0x15E7E0u;
            goto label_15e7e0;
        }
    }
    ctx->pc = 0x15E770u;
label_15e770:
    // 0x15e770: 0x10000017  b           . + 4 + (0x17 << 2)
label_15e774:
    if (ctx->pc == 0x15E774u) {
        ctx->pc = 0x15E778u;
        goto label_15e778;
    }
    ctx->pc = 0x15E770u;
    {
        const bool branch_taken_0x15e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e770) {
            ctx->pc = 0x15E7D0u;
            goto label_15e7d0;
        }
    }
    ctx->pc = 0x15E778u;
label_15e778:
    // 0x15e778: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x15e778u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15e77c:
    // 0x15e77c: 0x82630070  lb          $v1, 0x70($s3)
    ctx->pc = 0x15e77cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 112)));
label_15e780:
    // 0x15e780: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x15e780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
label_15e784:
    // 0x15e784: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x15e784u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15e788:
    // 0x15e788: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_15e78c:
    if (ctx->pc == 0x15E78Cu) {
        ctx->pc = 0x15E790u;
        goto label_15e790;
    }
    ctx->pc = 0x15E788u;
    {
        const bool branch_taken_0x15e788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e788) {
            ctx->pc = 0x15E7C4u;
            goto label_15e7c4;
        }
    }
    ctx->pc = 0x15E790u;
label_15e790:
    // 0x15e790: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15e794:
    // 0x15e794: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_15e798:
    // 0x15e798: 0x320f809  jalr        $t9
label_15e79c:
    if (ctx->pc == 0x15E79Cu) {
        ctx->pc = 0x15E79Cu;
            // 0x15e79c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E7A0u;
        goto label_15e7a0;
    }
    ctx->pc = 0x15E798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E7A0u);
        ctx->pc = 0x15E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E798u;
            // 0x15e79c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15E7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15E7A0u; }
            if (ctx->pc != 0x15E7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x15E7A0u;
label_15e7a0:
    // 0x15e7a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_15e7a4:
    if (ctx->pc == 0x15E7A4u) {
        ctx->pc = 0x15E7A4u;
            // 0x15e7a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15E7A8u;
        goto label_15e7a8;
    }
    ctx->pc = 0x15E7A0u;
    {
        const bool branch_taken_0x15e7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7A0u;
            // 0x15e7a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7a0) {
            ctx->pc = 0x15E7C4u;
            goto label_15e7c4;
        }
    }
    ctx->pc = 0x15E7A8u;
label_15e7a8:
    // 0x15e7a8: 0xc059cc0  jal         func_167300
label_15e7ac:
    if (ctx->pc == 0x15E7ACu) {
        ctx->pc = 0x15E7ACu;
            // 0x15e7ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x15E7B0u;
        goto label_15e7b0;
    }
    ctx->pc = 0x15E7A8u;
    SET_GPR_U32(ctx, 31, 0x15E7B0u);
    ctx->pc = 0x15E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7A8u;
            // 0x15e7ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7B0u; }
        if (ctx->pc != 0x15E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7B0u; }
        if (ctx->pc != 0x15E7B0u) { return; }
    }
    ctx->pc = 0x15E7B0u;
label_15e7b0:
    // 0x15e7b0: 0x8e470cfc  lw          $a3, 0xCFC($s2)
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3324)));
label_15e7b4:
    // 0x15e7b4: 0x266502b0  addiu       $a1, $s3, 0x2B0
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 688));
label_15e7b8:
    // 0x15e7b8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_15e7bc:
    // 0x15e7bc: 0xc0a7a9c  jal         func_29EA70
label_15e7c0:
    if (ctx->pc == 0x15E7C0u) {
        ctx->pc = 0x15E7C0u;
            // 0x15e7c0: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->pc = 0x15E7C4u;
        goto label_15e7c4;
    }
    ctx->pc = 0x15E7BCu;
    SET_GPR_U32(ctx, 31, 0x15E7C4u);
    ctx->pc = 0x15E7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7BCu;
            // 0x15e7c0: 0x27a60098  addiu       $a2, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA70u;
    if (runtime->hasFunction(0x29EA70u)) {
        auto targetFn = runtime->lookupFunction(0x29EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7C4u; }
        if (ctx->pc != 0x15E7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster_0x29ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E7C4u; }
        if (ctx->pc != 0x15E7C4u) { return; }
    }
    ctx->pc = 0x15E7C4u;
label_15e7c4:
    // 0x15e7c4: 0x0  nop
    ctx->pc = 0x15e7c4u;
    // NOP
label_15e7c8:
    // 0x15e7c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15e7cc:
    // 0x15e7cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x15e7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_15e7d0:
    // 0x15e7d0: 0x8e430360  lw          $v1, 0x360($s2)
    ctx->pc = 0x15e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 864)));
label_15e7d4:
    // 0x15e7d4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x15e7d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_15e7d8:
    // 0x15e7d8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
label_15e7dc:
    if (ctx->pc == 0x15E7DCu) {
        ctx->pc = 0x15E7E0u;
        goto label_15e7e0;
    }
    ctx->pc = 0x15E7D8u;
    {
        const bool branch_taken_0x15e7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e7d8) {
            ctx->pc = 0x15E778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e778;
        }
    }
    ctx->pc = 0x15E7E0u;
label_15e7e0:
    // 0x15e7e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15e7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15e7e4:
    // 0x15e7e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e7e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e7e8:
    // 0x15e7e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e7e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e7ec:
    // 0x15e7ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e7ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e7f0:
    // 0x15e7f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15e7f4:
    // 0x15e7f4: 0x3e00008  jr          $ra
label_15e7f8:
    if (ctx->pc == 0x15E7F8u) {
        ctx->pc = 0x15E7F8u;
            // 0x15e7f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x15E7FCu;
        goto label_fallthrough_0x15e7f4;
    }
    ctx->pc = 0x15E7F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E7F4u;
            // 0x15e7f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15e7f4:
    ctx->pc = 0x15E7FCu;
}
