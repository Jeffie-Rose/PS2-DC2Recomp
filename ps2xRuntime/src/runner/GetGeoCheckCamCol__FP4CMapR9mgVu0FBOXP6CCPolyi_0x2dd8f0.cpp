#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGeoCheckCamCol__FP4CMapR9mgVu0FBOXP6CCPolyi
// Address: 0x2dd8f0 - 0x2dd99c
void GetGeoCheckCamCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGeoCheckCamCol__FP4CMapR9mgVu0FBOXP6CCPolyi_0x2dd8f0");
#endif

    switch (ctx->pc) {
        case 0x2dd8f0u: goto label_2dd8f0;
        case 0x2dd8f4u: goto label_2dd8f4;
        case 0x2dd8f8u: goto label_2dd8f8;
        case 0x2dd8fcu: goto label_2dd8fc;
        case 0x2dd900u: goto label_2dd900;
        case 0x2dd904u: goto label_2dd904;
        case 0x2dd908u: goto label_2dd908;
        case 0x2dd90cu: goto label_2dd90c;
        case 0x2dd910u: goto label_2dd910;
        case 0x2dd914u: goto label_2dd914;
        case 0x2dd918u: goto label_2dd918;
        case 0x2dd91cu: goto label_2dd91c;
        case 0x2dd920u: goto label_2dd920;
        case 0x2dd924u: goto label_2dd924;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd92cu: goto label_2dd92c;
        case 0x2dd930u: goto label_2dd930;
        case 0x2dd934u: goto label_2dd934;
        case 0x2dd938u: goto label_2dd938;
        case 0x2dd93cu: goto label_2dd93c;
        case 0x2dd940u: goto label_2dd940;
        case 0x2dd944u: goto label_2dd944;
        case 0x2dd948u: goto label_2dd948;
        case 0x2dd94cu: goto label_2dd94c;
        case 0x2dd950u: goto label_2dd950;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd958u: goto label_2dd958;
        case 0x2dd95cu: goto label_2dd95c;
        case 0x2dd960u: goto label_2dd960;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd968u: goto label_2dd968;
        case 0x2dd96cu: goto label_2dd96c;
        case 0x2dd970u: goto label_2dd970;
        case 0x2dd974u: goto label_2dd974;
        case 0x2dd978u: goto label_2dd978;
        case 0x2dd97cu: goto label_2dd97c;
        case 0x2dd980u: goto label_2dd980;
        case 0x2dd984u: goto label_2dd984;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd98cu: goto label_2dd98c;
        case 0x2dd990u: goto label_2dd990;
        case 0x2dd994u: goto label_2dd994;
        case 0x2dd998u: goto label_2dd998;
        default: break;
    }

    ctx->pc = 0x2dd8f0u;

label_2dd8f0:
    // 0x2dd8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dd8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dd8f4:
    // 0x2dd8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dd8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2dd8f8:
    // 0x2dd8f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dd8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2dd8fc:
    // 0x2dd8fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dd8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dd900:
    // 0x2dd900: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dd900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dd904:
    // 0x2dd904: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd908:
    // 0x2dd908: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dd908u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dd90c:
    // 0x2dd90c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd910:
    // 0x2dd910: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_2dd914:
    if (ctx->pc == 0x2DD914u) {
        ctx->pc = 0x2DD914u;
            // 0x2dd914: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD918u;
        goto label_2dd918;
    }
    ctx->pc = 0x2DD910u;
    {
        const bool branch_taken_0x2dd910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD910u;
            // 0x2dd914: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd910) {
            ctx->pc = 0x2DD920u;
            goto label_2dd920;
        }
    }
    ctx->pc = 0x2DD918u;
label_2dd918:
    // 0x2dd918: 0x10000019  b           . + 4 + (0x19 << 2)
label_2dd91c:
    if (ctx->pc == 0x2DD91Cu) {
        ctx->pc = 0x2DD91Cu;
            // 0x2dd91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD920u;
        goto label_2dd920;
    }
    ctx->pc = 0x2DD918u;
    {
        const bool branch_taken_0x2dd918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD918u;
            // 0x2dd91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd918) {
            ctx->pc = 0x2DD980u;
            goto label_2dd980;
        }
    }
    ctx->pc = 0x2DD920u;
label_2dd920:
    // 0x2dd920: 0xc0b7604  jal         func_2DD810
label_2dd924:
    if (ctx->pc == 0x2DD924u) {
        ctx->pc = 0x2DD928u;
        goto label_2dd928;
    }
    ctx->pc = 0x2DD920u;
    SET_GPR_U32(ctx, 31, 0x2DD928u);
    ctx->pc = 0x2DD810u;
    if (runtime->hasFunction(0x2DD810u)) {
        auto targetFn = runtime->lookupFunction(0x2DD810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD928u; }
        if (ctx->pc != 0x2DD928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGeoCheckPts__FP4CMap_0x2dd810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD928u; }
        if (ctx->pc != 0x2DD928u) { return; }
    }
    ctx->pc = 0x2DD928u;
label_2dd928:
    // 0x2dd928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd92c:
    // 0x2dd92c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2dd930:
    if (ctx->pc == 0x2DD930u) {
        ctx->pc = 0x2DD930u;
            // 0x2dd930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD934u;
        goto label_2dd934;
    }
    ctx->pc = 0x2DD92Cu;
    {
        const bool branch_taken_0x2dd92c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD92Cu;
            // 0x2dd930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd92c) {
            ctx->pc = 0x2DD93Cu;
            goto label_2dd93c;
        }
    }
    ctx->pc = 0x2DD934u;
label_2dd934:
    // 0x2dd934: 0x10000013  b           . + 4 + (0x13 << 2)
label_2dd938:
    if (ctx->pc == 0x2DD938u) {
        ctx->pc = 0x2DD938u;
            // 0x2dd938: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2DD93Cu;
        goto label_2dd93c;
    }
    ctx->pc = 0x2DD934u;
    {
        const bool branch_taken_0x2dd934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD934u;
            // 0x2dd938: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd934) {
            ctx->pc = 0x2DD984u;
            goto label_2dd984;
        }
    }
    ctx->pc = 0x2DD93Cu;
label_2dd93c:
    // 0x2dd93c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd93cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd940:
    // 0x2dd940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd944:
    // 0x2dd944: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2dd944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2dd948:
    // 0x2dd948: 0x320f809  jalr        $t9
label_2dd94c:
    if (ctx->pc == 0x2DD94Cu) {
        ctx->pc = 0x2DD94Cu;
            // 0x2dd94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DD950u;
        goto label_2dd950;
    }
    ctx->pc = 0x2DD948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD950u);
        ctx->pc = 0x2DD94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD948u;
            // 0x2dd94c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD950u; }
            if (ctx->pc != 0x2DD950u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD950u;
label_2dd950:
    // 0x2dd950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dd950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd954:
    // 0x2dd954: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2dd954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd958:
    // 0x2dd958: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2dd958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd95c:
    // 0x2dd95c: 0xc0599b4  jal         func_1666D0
label_2dd960:
    if (ctx->pc == 0x2DD960u) {
        ctx->pc = 0x2DD960u;
            // 0x2dd960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD964u;
        goto label_2dd964;
    }
    ctx->pc = 0x2DD95Cu;
    SET_GPR_U32(ctx, 31, 0x2DD964u);
    ctx->pc = 0x2DD960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD95Cu;
            // 0x2dd960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1666D0u;
    if (runtime->hasFunction(0x1666D0u)) {
        auto targetFn = runtime->lookupFunction(0x1666D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD964u; }
        if (ctx->pc != 0x2DD964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPoly__9CMapPartsFP6CCPolyR9mgVu0FBOXi_0x1666d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD964u; }
        if (ctx->pc != 0x2DD964u) { return; }
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2dd964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dd968:
    // 0x2dd968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd96c:
    // 0x2dd96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd970:
    // 0x2dd970: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x2dd970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_2dd974:
    // 0x2dd974: 0x320f809  jalr        $t9
label_2dd978:
    if (ctx->pc == 0x2DD978u) {
        ctx->pc = 0x2DD978u;
            // 0x2dd978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD97Cu;
        goto label_2dd97c;
    }
    ctx->pc = 0x2DD974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD97Cu);
        ctx->pc = 0x2DD978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD974u;
            // 0x2dd978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD97Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD97Cu; }
            if (ctx->pc != 0x2DD97Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DD97Cu;
label_2dd97c:
    // 0x2dd97c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd980:
    // 0x2dd980: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dd980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dd984:
    // 0x2dd984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dd984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd988:
    // 0x2dd988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd98c:
    // 0x2dd98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd990:
    // 0x2dd990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd994:
    // 0x2dd994: 0x3e00008  jr          $ra
label_2dd998:
    if (ctx->pc == 0x2DD998u) {
        ctx->pc = 0x2DD998u;
            // 0x2dd998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DD99Cu;
        goto label_fallthrough_0x2dd994;
    }
    ctx->pc = 0x2DD994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD994u;
            // 0x2dd998: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dd994:
    ctx->pc = 0x2DD99Cu;
}
