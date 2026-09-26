#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DataAssignMDT__12mgCShadowMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager
// Address: 0x13a740 - 0x13a808
void DataAssignMDT__12mgCShadowMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataAssignMDT__12mgCShadowMDTFP10MDT_HEADERP9mgCMemoryP17mgCTextureManager_0x13a740");
#endif

    switch (ctx->pc) {
        case 0x13a740u: goto label_13a740;
        case 0x13a744u: goto label_13a744;
        case 0x13a748u: goto label_13a748;
        case 0x13a74cu: goto label_13a74c;
        case 0x13a750u: goto label_13a750;
        case 0x13a754u: goto label_13a754;
        case 0x13a758u: goto label_13a758;
        case 0x13a75cu: goto label_13a75c;
        case 0x13a760u: goto label_13a760;
        case 0x13a764u: goto label_13a764;
        case 0x13a768u: goto label_13a768;
        case 0x13a76cu: goto label_13a76c;
        case 0x13a770u: goto label_13a770;
        case 0x13a774u: goto label_13a774;
        case 0x13a778u: goto label_13a778;
        case 0x13a77cu: goto label_13a77c;
        case 0x13a780u: goto label_13a780;
        case 0x13a784u: goto label_13a784;
        case 0x13a788u: goto label_13a788;
        case 0x13a78cu: goto label_13a78c;
        case 0x13a790u: goto label_13a790;
        case 0x13a794u: goto label_13a794;
        case 0x13a798u: goto label_13a798;
        case 0x13a79cu: goto label_13a79c;
        case 0x13a7a0u: goto label_13a7a0;
        case 0x13a7a4u: goto label_13a7a4;
        case 0x13a7a8u: goto label_13a7a8;
        case 0x13a7acu: goto label_13a7ac;
        case 0x13a7b0u: goto label_13a7b0;
        case 0x13a7b4u: goto label_13a7b4;
        case 0x13a7b8u: goto label_13a7b8;
        case 0x13a7bcu: goto label_13a7bc;
        case 0x13a7c0u: goto label_13a7c0;
        case 0x13a7c4u: goto label_13a7c4;
        case 0x13a7c8u: goto label_13a7c8;
        case 0x13a7ccu: goto label_13a7cc;
        case 0x13a7d0u: goto label_13a7d0;
        case 0x13a7d4u: goto label_13a7d4;
        case 0x13a7d8u: goto label_13a7d8;
        case 0x13a7dcu: goto label_13a7dc;
        case 0x13a7e0u: goto label_13a7e0;
        case 0x13a7e4u: goto label_13a7e4;
        case 0x13a7e8u: goto label_13a7e8;
        case 0x13a7ecu: goto label_13a7ec;
        case 0x13a7f0u: goto label_13a7f0;
        case 0x13a7f4u: goto label_13a7f4;
        case 0x13a7f8u: goto label_13a7f8;
        case 0x13a7fcu: goto label_13a7fc;
        case 0x13a800u: goto label_13a800;
        case 0x13a804u: goto label_13a804;
        default: break;
    }

    ctx->pc = 0x13a740u;

label_13a740:
    // 0x13a740: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_13a744:
    // 0x13a744: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_13a748:
    // 0x13a748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13a74c:
    // 0x13a74c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13a750:
    // 0x13a750: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13a754:
    // 0x13a754: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13a758:
    // 0x13a758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13a75c:
    // 0x13a75c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13a75cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13a760:
    // 0x13a760: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x13a760u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_13a764:
    // 0x13a764: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_13a768:
    if (ctx->pc == 0x13A768u) {
        ctx->pc = 0x13A76Cu;
        goto label_13a76c;
    }
    ctx->pc = 0x13A764u;
    {
        const bool branch_taken_0x13a764 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a764) {
            ctx->pc = 0x13A778u;
            goto label_13a778;
        }
    }
    ctx->pc = 0x13A76Cu;
label_13a76c:
    // 0x13a76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a770:
    // 0x13a770: 0x1000001d  b           . + 4 + (0x1D << 2)
label_13a774:
    if (ctx->pc == 0x13A774u) {
        ctx->pc = 0x13A778u;
        goto label_13a778;
    }
    ctx->pc = 0x13A770u;
    {
        const bool branch_taken_0x13a770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a770) {
            ctx->pc = 0x13A7E8u;
            goto label_13a7e8;
        }
    }
    ctx->pc = 0x13A778u;
label_13a778:
    // 0x13a778: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x13a778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_13a77c:
    // 0x13a77c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x13a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_13a780:
    // 0x13a780: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x13a780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_13a784:
    // 0x13a784: 0xc04fae8  jal         func_13EBA0
label_13a788:
    if (ctx->pc == 0x13A788u) {
        ctx->pc = 0x13A78Cu;
        goto label_13a78c;
    }
    ctx->pc = 0x13A784u;
    SET_GPR_U32(ctx, 31, 0x13A78Cu);
    ctx->pc = 0x13EBA0u;
    if (runtime->hasFunction(0x13EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x13EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A78Cu; }
        if (ctx->pc != 0x13A78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyMDTData__12mgCVisualMDTFP10MDT_HEADERP9mgCMemory_0x13eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A78Cu; }
        if (ctx->pc != 0x13A78Cu) { return; }
    }
    ctx->pc = 0x13A78Cu;
label_13a78c:
    // 0x13a78c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x13a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_13a790:
    // 0x13a790: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_13a794:
    // 0x13a794: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_13a798:
    // 0x13a798: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x13a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_13a79c:
    // 0x13a79c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x13a79cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13a7a0:
    // 0x13a7a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13a7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a7a4:
    // 0x13a7a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_13a7a8:
    if (ctx->pc == 0x13A7A8u) {
        ctx->pc = 0x13A7ACu;
        goto label_13a7ac;
    }
    ctx->pc = 0x13A7A4u;
    {
        const bool branch_taken_0x13a7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a7a4) {
            ctx->pc = 0x13A7D4u;
            goto label_13a7d4;
        }
    }
    ctx->pc = 0x13A7ACu;
label_13a7ac:
    // 0x13a7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13a7b0:
    // 0x13a7b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x13a7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13a7b4:
    // 0x13a7b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x13a7b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13a7b8:
    // 0x13a7b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13a7b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a7bc:
    // 0x13a7bc: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13a7bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13a7c0:
    // 0x13a7c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x13a7c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_13a7c4:
    // 0x13a7c4: 0x320f809  jalr        $t9
label_13a7c8:
    if (ctx->pc == 0x13A7C8u) {
        ctx->pc = 0x13A7CCu;
        goto label_13a7cc;
    }
    ctx->pc = 0x13A7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13A7CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13A7CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13A7CCu; }
            if (ctx->pc != 0x13A7CCu) { return; }
        }
        }
    }
    ctx->pc = 0x13A7CCu;
label_13a7cc:
    // 0x13a7cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13a7d0:
    // 0x13a7d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13a7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13a7d4:
    // 0x13a7d4: 0x0  nop
    ctx->pc = 0x13a7d4u;
    // NOP
label_13a7d8:
    // 0x13a7d8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x13a7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_13a7dc:
    // 0x13a7dc: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_13a7e0:
    if (ctx->pc == 0x13A7E0u) {
        ctx->pc = 0x13A7E4u;
        goto label_13a7e4;
    }
    ctx->pc = 0x13A7DCu;
    {
        const bool branch_taken_0x13a7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7dc) {
            ctx->pc = 0x13A7ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13a7ac;
        }
    }
    ctx->pc = 0x13A7E4u;
label_13a7e4:
    // 0x13a7e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a7e8:
    // 0x13a7e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_13a7ec:
    // 0x13a7ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a7ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13a7f0:
    // 0x13a7f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13a7f4:
    // 0x13a7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13a7f8:
    // 0x13a7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13a7fc:
    // 0x13a7fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13a7fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13a800:
    // 0x13a800: 0x3e00008  jr          $ra
label_13a804:
    if (ctx->pc == 0x13A804u) {
        ctx->pc = 0x13A808u;
        goto label_fallthrough_0x13a800;
    }
    ctx->pc = 0x13A800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13a800:
    ctx->pc = 0x13A808u;
}
