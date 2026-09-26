#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateChara__FPUiPcP9mgCMemory
// Address: 0x1698c0 - 0x1699ec
void CreateChara__FPUiPcP9mgCMemory_0x1698c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateChara__FPUiPcP9mgCMemory_0x1698c0");
#endif

    switch (ctx->pc) {
        case 0x1698c0u: goto label_1698c0;
        case 0x1698c4u: goto label_1698c4;
        case 0x1698c8u: goto label_1698c8;
        case 0x1698ccu: goto label_1698cc;
        case 0x1698d0u: goto label_1698d0;
        case 0x1698d4u: goto label_1698d4;
        case 0x1698d8u: goto label_1698d8;
        case 0x1698dcu: goto label_1698dc;
        case 0x1698e0u: goto label_1698e0;
        case 0x1698e4u: goto label_1698e4;
        case 0x1698e8u: goto label_1698e8;
        case 0x1698ecu: goto label_1698ec;
        case 0x1698f0u: goto label_1698f0;
        case 0x1698f4u: goto label_1698f4;
        case 0x1698f8u: goto label_1698f8;
        case 0x1698fcu: goto label_1698fc;
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        case 0x16997cu: goto label_16997c;
        case 0x169980u: goto label_169980;
        case 0x169984u: goto label_169984;
        case 0x169988u: goto label_169988;
        case 0x16998cu: goto label_16998c;
        case 0x169990u: goto label_169990;
        case 0x169994u: goto label_169994;
        case 0x169998u: goto label_169998;
        case 0x16999cu: goto label_16999c;
        case 0x1699a0u: goto label_1699a0;
        case 0x1699a4u: goto label_1699a4;
        case 0x1699a8u: goto label_1699a8;
        case 0x1699acu: goto label_1699ac;
        case 0x1699b0u: goto label_1699b0;
        case 0x1699b4u: goto label_1699b4;
        case 0x1699b8u: goto label_1699b8;
        case 0x1699bcu: goto label_1699bc;
        case 0x1699c0u: goto label_1699c0;
        case 0x1699c4u: goto label_1699c4;
        case 0x1699c8u: goto label_1699c8;
        case 0x1699ccu: goto label_1699cc;
        case 0x1699d0u: goto label_1699d0;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699d8u: goto label_1699d8;
        case 0x1699dcu: goto label_1699dc;
        case 0x1699e0u: goto label_1699e0;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699e8u: goto label_1699e8;
        default: break;
    }

    ctx->pc = 0x1698c0u;

label_1698c0:
    // 0x1698c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1698c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1698c4:
    // 0x1698c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1698c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1698c8:
    // 0x1698c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1698c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1698cc:
    // 0x1698cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1698ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1698d0:
    // 0x1698d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1698d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1698d4:
    // 0x1698d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1698d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1698d8:
    // 0x1698d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1698d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1698dc:
    // 0x1698dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1698dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1698e0:
    // 0x1698e0: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1698e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1698e4:
    // 0x1698e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1698e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1698e8:
    // 0x1698e8: 0xc04e748  jal         func_139D20
label_1698ec:
    if (ctx->pc == 0x1698ECu) {
        ctx->pc = 0x1698ECu;
            // 0x1698ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1698F0u;
        goto label_1698f0;
    }
    ctx->pc = 0x1698E8u;
    SET_GPR_U32(ctx, 31, 0x1698F0u);
    ctx->pc = 0x1698ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698E8u;
            // 0x1698ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698F0u; }
        if (ctx->pc != 0x1698F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698F0u; }
        if (ctx->pc != 0x1698F0u) { return; }
    }
    ctx->pc = 0x1698F0u;
label_1698f0:
    // 0x1698f0: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_1698f4:
    // 0x1698f4: 0xc04e638  jal         func_1398E0
label_1698f8:
    if (ctx->pc == 0x1698F8u) {
        ctx->pc = 0x1698F8u;
            // 0x1698f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1698FCu;
        goto label_1698fc;
    }
    ctx->pc = 0x1698F4u;
    SET_GPR_U32(ctx, 31, 0x1698FCu);
    ctx->pc = 0x1698F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1698F4u;
            // 0x1698f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698FCu; }
        if (ctx->pc != 0x1698FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1698FCu; }
        if (ctx->pc != 0x1698FCu) { return; }
    }
    ctx->pc = 0x1698FCu;
label_1698fc:
    // 0x1698fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_169900:
    if (ctx->pc == 0x169900u) {
        ctx->pc = 0x169900u;
            // 0x169900: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169904u;
        goto label_169904;
    }
    ctx->pc = 0x1698FCu;
    {
        const bool branch_taken_0x1698fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1698FCu;
            // 0x169900: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698fc) {
            ctx->pc = 0x169980u;
            goto label_169980;
        }
    }
    ctx->pc = 0x169904u;
label_169904:
    // 0x169904: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x169904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_169908:
    // 0x169908: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x169908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_16990c:
    // 0x16990c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16990cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_169910:
    // 0x169910: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169914:
    // 0x169914: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_169918:
    // 0x169918: 0x320f809  jalr        $t9
label_16991c:
    if (ctx->pc == 0x16991Cu) {
        ctx->pc = 0x16991Cu;
            // 0x16991c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169920u;
        goto label_169920;
    }
    ctx->pc = 0x169918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169920u);
        ctx->pc = 0x16991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169918u;
            // 0x16991c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169920u; }
            if (ctx->pc != 0x169920u) { return; }
        }
        }
    }
    ctx->pc = 0x169920u;
label_169920:
    // 0x169920: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x169920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_169924:
    // 0x169924: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_169928:
    // 0x169928: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x169928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_16992c:
    // 0x16992c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16992cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169930:
    // 0x169930: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_169934:
    // 0x169934: 0x320f809  jalr        $t9
label_169938:
    if (ctx->pc == 0x169938u) {
        ctx->pc = 0x169938u;
            // 0x169938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16993Cu;
        goto label_16993c;
    }
    ctx->pc = 0x169934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16993Cu);
        ctx->pc = 0x169938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169934u;
            // 0x169938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16993Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16993Cu; }
            if (ctx->pc != 0x16993Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16993Cu;
label_16993c:
    // 0x16993c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_169940:
    // 0x169940: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_169944:
    // 0x169944: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x169944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_169948:
    // 0x169948: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16994c:
    // 0x16994c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x16994cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_169950:
    // 0x169950: 0x320f809  jalr        $t9
label_169954:
    if (ctx->pc == 0x169954u) {
        ctx->pc = 0x169954u;
            // 0x169954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169958u;
        goto label_169958;
    }
    ctx->pc = 0x169950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169958u);
        ctx->pc = 0x169954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169950u;
            // 0x169954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169958u; }
            if (ctx->pc != 0x169958u) { return; }
        }
        }
    }
    ctx->pc = 0x169958u;
label_169958:
    // 0x169958: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x169958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_16995c:
    // 0x16995c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x16995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_169960:
    // 0x169960: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x169960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_169964:
    // 0x169964: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x169964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_169968:
    // 0x169968: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x169968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_16996c:
    // 0x16996c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x16996cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_169970:
    // 0x169970: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169974:
    // 0x169974: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x169974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_169978:
    // 0x169978: 0x320f809  jalr        $t9
label_16997c:
    if (ctx->pc == 0x16997Cu) {
        ctx->pc = 0x16997Cu;
            // 0x16997c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169980u;
        goto label_169980;
    }
    ctx->pc = 0x169978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x169980u);
        ctx->pc = 0x16997Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169978u;
            // 0x16997c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x169980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x169980u; }
            if (ctx->pc != 0x169980u) { return; }
        }
        }
    }
    ctx->pc = 0x169980u;
label_169980:
    // 0x169980: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_169984:
    if (ctx->pc == 0x169984u) {
        ctx->pc = 0x169984u;
            // 0x169984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x169988u;
        goto label_169988;
    }
    ctx->pc = 0x169980u;
    {
        const bool branch_taken_0x169980 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x169984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169980u;
            // 0x169984: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169980) {
            ctx->pc = 0x169990u;
            goto label_169990;
        }
    }
    ctx->pc = 0x169988u;
label_169988:
    // 0x169988: 0x10000012  b           . + 4 + (0x12 << 2)
label_16998c:
    if (ctx->pc == 0x16998Cu) {
        ctx->pc = 0x16998Cu;
            // 0x16998c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x169990u;
        goto label_169990;
    }
    ctx->pc = 0x169988u;
    {
        const bool branch_taken_0x169988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169988u;
            // 0x16998c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169988) {
            ctx->pc = 0x1699D4u;
            goto label_1699d4;
        }
    }
    ctx->pc = 0x169990u;
label_169990:
    // 0x169990: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_169994:
    // 0x169994: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x169994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_169998:
    // 0x169998: 0x320f809  jalr        $t9
label_16999c:
    if (ctx->pc == 0x16999Cu) {
        ctx->pc = 0x16999Cu;
            // 0x16999c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1699A0u;
        goto label_1699a0;
    }
    ctx->pc = 0x169998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1699A0u);
        ctx->pc = 0x16999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169998u;
            // 0x16999c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1699A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1699A0u; }
            if (ctx->pc != 0x1699A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1699A0u;
label_1699a0:
    // 0x1699a0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1699a4:
    // 0x1699a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1699a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1699a8:
    // 0x1699a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1699a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1699ac:
    // 0x1699ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1699acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1699b0:
    // 0x1699b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1699b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1699b4:
    // 0x1699b4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1699b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1699b8:
    // 0x1699b8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1699b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1699bc:
    // 0x1699bc: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1699bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1699c0:
    // 0x1699c0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1699c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1699c4:
    // 0x1699c4: 0x320f809  jalr        $t9
label_1699c8:
    if (ctx->pc == 0x1699C8u) {
        ctx->pc = 0x1699C8u;
            // 0x1699c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1699CCu;
        goto label_1699cc;
    }
    ctx->pc = 0x1699C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1699CCu);
        ctx->pc = 0x1699C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699C4u;
            // 0x1699c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1699CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1699CCu; }
            if (ctx->pc != 0x1699CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1699CCu;
label_1699cc:
    // 0x1699cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1699ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1699d0:
    // 0x1699d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1699d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1699d4:
    // 0x1699d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1699d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1699d8:
    // 0x1699d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1699d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1699dc:
    // 0x1699dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1699dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1699e0:
    // 0x1699e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1699e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1699e4:
    // 0x1699e4: 0x3e00008  jr          $ra
label_1699e8:
    if (ctx->pc == 0x1699E8u) {
        ctx->pc = 0x1699E8u;
            // 0x1699e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1699ECu;
        goto label_fallthrough_0x1699e4;
    }
    ctx->pc = 0x1699E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1699E4u;
            // 0x1699e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1699e4:
    ctx->pc = 0x1699ECu;
}
