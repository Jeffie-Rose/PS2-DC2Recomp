#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaMenuKey__Fv
// Address: 0x2ae350 - 0x2aec34
void SphidaMenuKey__Fv_0x2ae350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaMenuKey__Fv_0x2ae350");
#endif

    switch (ctx->pc) {
        case 0x2ae374u: goto label_2ae374;
        case 0x2ae380u: goto label_2ae380;
        case 0x2ae38cu: goto label_2ae38c;
        case 0x2ae430u: goto label_2ae430;
        case 0x2ae448u: goto label_2ae448;
        case 0x2ae4d0u: goto label_2ae4d0;
        case 0x2ae4d8u: goto label_2ae4d8;
        case 0x2ae4f4u: goto label_2ae4f4;
        case 0x2ae518u: goto label_2ae518;
        case 0x2ae530u: goto label_2ae530;
        case 0x2ae544u: goto label_2ae544;
        case 0x2ae550u: goto label_2ae550;
        case 0x2ae568u: goto label_2ae568;
        case 0x2ae5b8u: goto label_2ae5b8;
        case 0x2ae5c8u: goto label_2ae5c8;
        case 0x2ae5d0u: goto label_2ae5d0;
        case 0x2ae5d8u: goto label_2ae5d8;
        case 0x2ae5fcu: goto label_2ae5fc;
        case 0x2ae620u: goto label_2ae620;
        case 0x2ae634u: goto label_2ae634;
        case 0x2ae674u: goto label_2ae674;
        case 0x2ae68cu: goto label_2ae68c;
        case 0x2ae69cu: goto label_2ae69c;
        case 0x2ae6c0u: goto label_2ae6c0;
        case 0x2ae6f0u: goto label_2ae6f0;
        case 0x2ae70cu: goto label_2ae70c;
        case 0x2ae71cu: goto label_2ae71c;
        case 0x2ae73cu: goto label_2ae73c;
        case 0x2ae74cu: goto label_2ae74c;
        case 0x2ae784u: goto label_2ae784;
        case 0x2ae7a4u: goto label_2ae7a4;
        case 0x2ae7bcu: goto label_2ae7bc;
        case 0x2ae7c0u: goto label_2ae7c0;
        case 0x2ae824u: goto label_2ae824;
        case 0x2ae86cu: goto label_2ae86c;
        case 0x2ae87cu: goto label_2ae87c;
        case 0x2ae890u: goto label_2ae890;
        case 0x2ae8a0u: goto label_2ae8a0;
        case 0x2ae8b8u: goto label_2ae8b8;
        case 0x2ae8ccu: goto label_2ae8cc;
        case 0x2ae8e0u: goto label_2ae8e0;
        case 0x2ae8ecu: goto label_2ae8ec;
        case 0x2ae910u: goto label_2ae910;
        case 0x2ae930u: goto label_2ae930;
        case 0x2ae964u: goto label_2ae964;
        case 0x2ae990u: goto label_2ae990;
        case 0x2ae9a0u: goto label_2ae9a0;
        case 0x2ae9c0u: goto label_2ae9c0;
        case 0x2ae9d0u: goto label_2ae9d0;
        case 0x2aea08u: goto label_2aea08;
        case 0x2aea28u: goto label_2aea28;
        case 0x2aea3cu: goto label_2aea3c;
        case 0x2aea50u: goto label_2aea50;
        case 0x2aea6cu: goto label_2aea6c;
        case 0x2aea78u: goto label_2aea78;
        case 0x2aea84u: goto label_2aea84;
        case 0x2aeab8u: goto label_2aeab8;
        case 0x2aeac8u: goto label_2aeac8;
        case 0x2aeae0u: goto label_2aeae0;
        case 0x2aeaecu: goto label_2aeaec;
        case 0x2aeb10u: goto label_2aeb10;
        case 0x2aeb2cu: goto label_2aeb2c;
        case 0x2aeb68u: goto label_2aeb68;
        case 0x2aeb74u: goto label_2aeb74;
        case 0x2aeb9cu: goto label_2aeb9c;
        case 0x2aeba8u: goto label_2aeba8;
        case 0x2aebf4u: goto label_2aebf4;
        case 0x2aebfcu: goto label_2aebfc;
        case 0x2aec04u: goto label_2aec04;
        case 0x2aec10u: goto label_2aec10;
        default: break;
    }

    ctx->pc = 0x2ae350u;

    // 0x2ae350: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2ae350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2ae354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ae354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ae358: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ae358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ae35c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ae35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ae360: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ae360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ae364: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ae364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ae368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ae368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ae36c: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x2AE36Cu;
    SET_GPR_U32(ctx, 31, 0x2AE374u);
    ctx->pc = 0x2AE370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE36Cu;
            // 0x2ae370: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE374u; }
        if (ctx->pc != 0x2AE374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE374u; }
        if (ctx->pc != 0x2AE374u) { return; }
    }
    ctx->pc = 0x2AE374u;
label_2ae374:
    // 0x2ae374: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2ae374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2ae378: 0xc08f840  jal         func_23E100
    ctx->pc = 0x2AE378u;
    SET_GPR_U32(ctx, 31, 0x2AE380u);
    ctx->pc = 0x2AE37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE378u;
            // 0x2ae37c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE380u; }
        if (ctx->pc != 0x2AE380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE380u; }
        if (ctx->pc != 0x2AE380u) { return; }
    }
    ctx->pc = 0x2AE380u;
label_2ae380:
    // 0x2ae380: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2ae380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2ae384: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2AE384u;
    SET_GPR_U32(ctx, 31, 0x2AE38Cu);
    ctx->pc = 0x2AE388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE384u;
            // 0x2ae388: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE38Cu; }
        if (ctx->pc != 0x2AE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE38Cu; }
        if (ctx->pc != 0x2AE38Cu) { return; }
    }
    ctx->pc = 0x2AE38Cu;
label_2ae38c:
    // 0x2ae38c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ae38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae390: 0x8f829b08  lw          $v0, -0x64F8($gp)
    ctx->pc = 0x2ae390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ae394: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE394u;
    {
        const bool branch_taken_0x2ae394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE394u;
            // 0x2ae398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae394) {
            ctx->pc = 0x2AE3A4u;
            goto label_2ae3a4;
        }
    }
    ctx->pc = 0x2AE39Cu;
    // 0x2ae39c: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x2AE39Cu;
    {
        const bool branch_taken_0x2ae39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE39Cu;
            // 0x2ae3a0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae39c) {
            ctx->pc = 0x2AEC18u;
            goto label_2aec18;
        }
    }
    ctx->pc = 0x2AE3A4u;
label_2ae3a4:
    // 0x2ae3a4: 0x87839b50  lh          $v1, -0x64B0($gp)
    ctx->pc = 0x2ae3a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941520)));
    // 0x2ae3a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2ae3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2ae3ac: 0x8f939b4c  lw          $s3, -0x64B4($gp)
    ctx->pc = 0x2ae3acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
    // 0x2ae3b0: 0x8f949b10  lw          $s4, -0x64F0($gp)
    ctx->pc = 0x2ae3b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941456)));
    // 0x2ae3b4: 0x106201da  beq         $v1, $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x2AE3B4u;
    {
        const bool branch_taken_0x2ae3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3B4u;
            // 0x2ae3b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3b4) {
            ctx->pc = 0x2AEB20u;
            goto label_2aeb20;
        }
    }
    ctx->pc = 0x2AE3BCu;
    // 0x2ae3bc: 0x2402012d  addiu       $v0, $zero, 0x12D
    ctx->pc = 0x2ae3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x2ae3c0: 0x106201bf  beq         $v1, $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x2AE3C0u;
    {
        const bool branch_taken_0x2ae3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3C0u;
            // 0x2ae3c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3c0) {
            ctx->pc = 0x2AEAC0u;
            goto label_2aeac0;
        }
    }
    ctx->pc = 0x2AE3C8u;
    // 0x2ae3c8: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2ae3cc: 0x10620172  beq         $v1, $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x2AE3CCu;
    {
        const bool branch_taken_0x2ae3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3CCu;
            // 0x2ae3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3cc) {
            ctx->pc = 0x2AE998u;
            goto label_2ae998;
        }
    }
    ctx->pc = 0x2AE3D4u;
    // 0x2ae3d4: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x2ae3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x2ae3d8: 0x10620164  beq         $v1, $v0, . + 4 + (0x164 << 2)
    ctx->pc = 0x2AE3D8u;
    {
        const bool branch_taken_0x2ae3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3D8u;
            // 0x2ae3dc: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3d8) {
            ctx->pc = 0x2AE96Cu;
            goto label_2ae96c;
        }
    }
    ctx->pc = 0x2AE3E0u;
    // 0x2ae3e0: 0x106200cc  beq         $v1, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x2AE3E0u;
    {
        const bool branch_taken_0x2ae3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3E0u;
            // 0x2ae3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3e0) {
            ctx->pc = 0x2AE714u;
            goto label_2ae714;
        }
    }
    ctx->pc = 0x2AE3E8u;
    // 0x2ae3e8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ae3ec: 0x106200a5  beq         $v1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2AE3ECu;
    {
        const bool branch_taken_0x2ae3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3ECu;
            // 0x2ae3f0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3ec) {
            ctx->pc = 0x2AE684u;
            goto label_2ae684;
        }
    }
    ctx->pc = 0x2AE3F4u;
    // 0x2ae3f4: 0x1062008c  beq         $v1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x2AE3F4u;
    {
        const bool branch_taken_0x2ae3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE3F4u;
            // 0x2ae3f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3f4) {
            ctx->pc = 0x2AE628u;
            goto label_2ae628;
        }
    }
    ctx->pc = 0x2AE3FCu;
    // 0x2ae3fc: 0x1067008a  beq         $v1, $a3, . + 4 + (0x8A << 2)
    ctx->pc = 0x2AE3FCu;
    {
        const bool branch_taken_0x2ae3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ae3fc) {
            ctx->pc = 0x2AE628u;
            goto label_2ae628;
        }
    }
    ctx->pc = 0x2AE404u;
    // 0x2ae404: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE404u;
    {
        const bool branch_taken_0x2ae404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae404) {
            ctx->pc = 0x2AE414u;
            goto label_2ae414;
        }
    }
    ctx->pc = 0x2AE40Cu;
    // 0x2ae40c: 0x100001e4  b           . + 4 + (0x1E4 << 2)
    ctx->pc = 0x2AE40Cu;
    {
        const bool branch_taken_0x2ae40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE40Cu;
            // 0x2ae410: 0x8f849b18  lw          $a0, -0x64E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae40c) {
            ctx->pc = 0x2AEBA0u;
            goto label_2aeba0;
        }
    }
    ctx->pc = 0x2AE414u;
label_2ae414:
    // 0x2ae414: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2ae414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ae418: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AE418u;
    {
        const bool branch_taken_0x2ae418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae418) {
            ctx->pc = 0x2AE438u;
            goto label_2ae438;
        }
    }
    ctx->pc = 0x2AE420u;
    // 0x2ae420: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae428: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x2AE428u;
    SET_GPR_U32(ctx, 31, 0x2AE430u);
    ctx->pc = 0x2AE42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE428u;
            // 0x2ae42c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE430u; }
        if (ctx->pc != 0x2AE430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE430u; }
        if (ctx->pc != 0x2AE430u) { return; }
    }
    ctx->pc = 0x2AE430u;
label_2ae430:
    // 0x2ae430: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE430u;
    {
        const bool branch_taken_0x2ae430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE430u;
            // 0x2ae434: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae430) {
            ctx->pc = 0x2AE44Cu;
            goto label_2ae44c;
        }
    }
    ctx->pc = 0x2AE438u;
label_2ae438:
    // 0x2ae438: 0x8f849b0c  lw          $a0, -0x64F4($gp)
    ctx->pc = 0x2ae438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae43c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae440: 0xc0875b4  jal         func_21D6D0
    ctx->pc = 0x2AE440u;
    SET_GPR_U32(ctx, 31, 0x2AE448u);
    ctx->pc = 0x2AE444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE440u;
            // 0x2ae444: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6D0u;
    if (runtime->hasFunction(0x21D6D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE448u; }
        if (ctx->pc != 0x2AE448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMsgCursor2__7CDC2MesFiii_0x21d6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE448u; }
        if (ctx->pc != 0x2AE448u) { return; }
    }
    ctx->pc = 0x2AE448u;
label_2ae448:
    // 0x2ae448: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x2ae448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2ae44c:
    // 0x2ae44c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2AE44Cu;
    {
        const bool branch_taken_0x2ae44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae44c) {
            ctx->pc = 0x2AE570u;
            goto label_2ae570;
        }
    }
    ctx->pc = 0x2AE454u;
    // 0x2ae454: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x2ae454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ae458: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE458u;
    {
        const bool branch_taken_0x2ae458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE458u;
            // 0x2ae45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae458) {
            ctx->pc = 0x2AE47Cu;
            goto label_2ae47c;
        }
    }
    ctx->pc = 0x2AE460u;
    // 0x2ae460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae464: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE464u;
    {
        const bool branch_taken_0x2ae464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AE468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE464u;
            // 0x2ae468: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae464) {
            ctx->pc = 0x2AE470u;
            goto label_2ae470;
        }
    }
    ctx->pc = 0x2AE46Cu;
    // 0x2ae46c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ae46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ae470:
    // 0x2ae470: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE470u;
    {
        const bool branch_taken_0x2ae470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2AE474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE470u;
            // 0x2ae474: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae470) {
            ctx->pc = 0x2AE480u;
            goto label_2ae480;
        }
    }
    ctx->pc = 0x2AE478u;
    // 0x2ae478: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ae478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae47c:
    // 0x2ae47c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ae47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ae480:
    // 0x2ae480: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2AE480u;
    {
        const bool branch_taken_0x2ae480 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE480u;
            // 0x2ae484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae480) {
            ctx->pc = 0x2AE520u;
            goto label_2ae520;
        }
    }
    ctx->pc = 0x2AE488u;
    // 0x2ae488: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ae488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae48c: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2AE48Cu;
    {
        const bool branch_taken_0x2ae48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE48Cu;
            // 0x2ae490: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae48c) {
            ctx->pc = 0x2AE4FCu;
            goto label_2ae4fc;
        }
    }
    ctx->pc = 0x2AE494u;
    // 0x2ae494: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AE494u;
    {
        const bool branch_taken_0x2ae494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2AE498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE494u;
            // 0x2ae498: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae494) {
            ctx->pc = 0x2AE4E0u;
            goto label_2ae4e0;
        }
    }
    ctx->pc = 0x2AE49Cu;
    // 0x2ae49c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE49Cu;
    {
        const bool branch_taken_0x2ae49c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae49c) {
            ctx->pc = 0x2AE4ACu;
            goto label_2ae4ac;
        }
    }
    ctx->pc = 0x2AE4A4u;
    // 0x2ae4a4: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x2AE4A4u;
    {
        const bool branch_taken_0x2ae4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4a4) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE4ACu;
label_2ae4ac:
    // 0x2ae4ac: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ae4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ae4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ae4b4: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x2ae4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2ae4b8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2ae4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ae4bc: 0xa7839b50  sh          $v1, -0x64B0($gp)
    ctx->pc = 0x2ae4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ae4c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ae4c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae4c4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ae4c4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae4c8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2AE4C8u;
    SET_GPR_U32(ctx, 31, 0x2AE4D0u);
    ctx->pc = 0x2AE4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE4C8u;
            // 0x2ae4cc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4D0u; }
        if (ctx->pc != 0x2AE4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4D0u; }
        if (ctx->pc != 0x2AE4D0u) { return; }
    }
    ctx->pc = 0x2AE4D0u;
label_2ae4d0:
    // 0x2ae4d0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE4D0u;
    SET_GPR_U32(ctx, 31, 0x2AE4D8u);
    ctx->pc = 0x2AE4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE4D0u;
            // 0x2ae4d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4D8u; }
        if (ctx->pc != 0x2AE4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4D8u; }
        if (ctx->pc != 0x2AE4D8u) { return; }
    }
    ctx->pc = 0x2AE4D8u;
label_2ae4d8:
    // 0x2ae4d8: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x2AE4D8u;
    {
        const bool branch_taken_0x2ae4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4d8) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE4E0u;
label_2ae4e0:
    // 0x2ae4e0: 0xa3849b2c  sb          $a0, -0x64D4($gp)
    ctx->pc = 0x2ae4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae4e4: 0xa7829b50  sh          $v0, -0x64B0($gp)
    ctx->pc = 0x2ae4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae4e8: 0x8f829b0c  lw          $v0, -0x64F4($gp)
    ctx->pc = 0x2ae4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae4ec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE4ECu;
    SET_GPR_U32(ctx, 31, 0x2AE4F4u);
    ctx->pc = 0x2AE4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE4ECu;
            // 0x2ae4f0: 0xa04021e8  sb          $zero, 0x21E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4F4u; }
        if (ctx->pc != 0x2AE4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE4F4u; }
        if (ctx->pc != 0x2AE4F4u) { return; }
    }
    ctx->pc = 0x2AE4F4u;
label_2ae4f4:
    // 0x2ae4f4: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x2AE4F4u;
    {
        const bool branch_taken_0x2ae4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4f4) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE4FCu;
label_2ae4fc:
    // 0x2ae4fc: 0x8f839b0c  lw          $v1, -0x64F4($gp)
    ctx->pc = 0x2ae4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae500: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae504: 0xa3849b2c  sb          $a0, -0x64D4($gp)
    ctx->pc = 0x2ae504u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae508: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2ae50c: 0xa06021e8  sb          $zero, 0x21E8($v1)
    ctx->pc = 0x2ae50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8680), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae510: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE510u;
    SET_GPR_U32(ctx, 31, 0x2AE518u);
    ctx->pc = 0x2AE514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE510u;
            // 0x2ae514: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE518u; }
        if (ctx->pc != 0x2AE518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE518u; }
        if (ctx->pc != 0x2AE518u) { return; }
    }
    ctx->pc = 0x2AE518u;
label_2ae518:
    // 0x2ae518: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x2AE518u;
    {
        const bool branch_taken_0x2ae518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae518) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE520u;
label_2ae520:
    // 0x2ae520: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae524: 0xa3829b14  sb          $v0, -0x64EC($gp)
    ctx->pc = 0x2ae524u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ae528: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE528u;
    SET_GPR_U32(ctx, 31, 0x2AE530u);
    ctx->pc = 0x2AE52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE528u;
            // 0x2ae52c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE530u; }
        if (ctx->pc != 0x2AE530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE530u; }
        if (ctx->pc != 0x2AE530u) { return; }
    }
    ctx->pc = 0x2AE530u;
label_2ae530:
    // 0x2ae530: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae534: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae538: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x2ae538u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x2ae53c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE53Cu;
    SET_GPR_U32(ctx, 31, 0x2AE544u);
    ctx->pc = 0x2AE540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE53Cu;
            // 0x2ae540: 0x24050c58  addiu       $a1, $zero, 0xC58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE544u; }
        if (ctx->pc != 0x2AE544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE544u; }
        if (ctx->pc != 0x2AE544u) { return; }
    }
    ctx->pc = 0x2AE544u;
label_2ae544:
    // 0x2ae544: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae548: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2AE548u;
    SET_GPR_U32(ctx, 31, 0x2AE550u);
    ctx->pc = 0x2AE54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE548u;
            // 0x2ae54c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE550u; }
        if (ctx->pc != 0x2AE550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE550u; }
        if (ctx->pc != 0x2AE550u) { return; }
    }
    ctx->pc = 0x2AE550u;
label_2ae550:
    // 0x2ae550: 0x8f839b0c  lw          $v1, -0x64F4($gp)
    ctx->pc = 0x2ae550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae554: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2ae554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2ae558: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ae558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae55c: 0xa06021e8  sb          $zero, 0x21E8($v1)
    ctx->pc = 0x2ae55cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8680), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae560: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE560u;
    SET_GPR_U32(ctx, 31, 0x2AE568u);
    ctx->pc = 0x2AE564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE560u;
            // 0x2ae564: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE568u; }
        if (ctx->pc != 0x2AE568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE568u; }
        if (ctx->pc != 0x2AE568u) { return; }
    }
    ctx->pc = 0x2AE568u;
label_2ae568:
    // 0x2ae568: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x2AE568u;
    {
        const bool branch_taken_0x2ae568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae568) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE570u;
label_2ae570:
    // 0x2ae570: 0x8f828ac8  lw          $v0, -0x7538($gp)
    ctx->pc = 0x2ae570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x2ae574: 0x10400189  beqz        $v0, . + 4 + (0x189 << 2)
    ctx->pc = 0x2AE574u;
    {
        const bool branch_taken_0x2ae574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae574) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE57Cu;
    // 0x2ae57c: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2ae57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2ae580: 0x10400186  beqz        $v0, . + 4 + (0x186 << 2)
    ctx->pc = 0x2AE580u;
    {
        const bool branch_taken_0x2ae580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE580u;
            // 0x2ae584: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae580) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE588u;
    // 0x2ae588: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AE588u;
    {
        const bool branch_taken_0x2ae588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE588u;
            // 0x2ae58c: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae588) {
            ctx->pc = 0x2AE610u;
            goto label_2ae610;
        }
    }
    ctx->pc = 0x2AE590u;
    // 0x2ae590: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2ae590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2ae594: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ae594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ae598: 0x24424620  addiu       $v0, $v0, 0x4620
    ctx->pc = 0x2ae598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17952));
    // 0x2ae59c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ae59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ae5a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ae5a4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2ae5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae5a8: 0x90420014  lbu         $v0, 0x14($v0)
    ctx->pc = 0x2ae5a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2ae5ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ae5acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2ae5b0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2ae5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2ae5b4: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x2ae5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
label_2ae5b8:
    // 0x2ae5b8: 0x8f829b08  lw          $v0, -0x64F8($gp)
    ctx->pc = 0x2ae5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ae5bc: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ae5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ae5c0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AE5C0u;
    SET_GPR_U32(ctx, 31, 0x2AE5C8u);
    ctx->pc = 0x2AE5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE5C0u;
            // 0x2ae5c4: 0x2444147c  addiu       $a0, $v0, 0x147C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5C8u; }
        if (ctx->pc != 0x2AE5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5C8u; }
        if (ctx->pc != 0x2AE5C8u) { return; }
    }
    ctx->pc = 0x2AE5C8u;
label_2ae5c8:
    // 0x2ae5c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ae5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae5cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ae5ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae5d0:
    // 0x2ae5d0: 0xc0941b0  jal         func_2506C0
    ctx->pc = 0x2AE5D0u;
    SET_GPR_U32(ctx, 31, 0x2AE5D8u);
    ctx->pc = 0x2AE5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE5D0u;
            // 0x2ae5d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5D8u; }
        if (ctx->pc != 0x2AE5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5D8u; }
        if (ctx->pc != 0x2AE5D8u) { return; }
    }
    ctx->pc = 0x2AE5D8u;
label_2ae5d8:
    // 0x2ae5d8: 0x8f849b08  lw          $a0, -0x64F8($gp)
    ctx->pc = 0x2ae5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ae5dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ae5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ae5e0: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x2ae5e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ae5e4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2ae5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2ae5e8: 0xa4821448  sh          $v0, 0x1448($a0)
    ctx->pc = 0x2ae5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5192), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae5ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AE5ECu;
    {
        const bool branch_taken_0x2ae5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE5ECu;
            // 0x2ae5f0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5ec) {
            ctx->pc = 0x2AE5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae5d0;
        }
    }
    ctx->pc = 0x2AE5F4u;
    // 0x2ae5f4: 0xc0bdb70  jal         func_2F6DC0
    ctx->pc = 0x2AE5F4u;
    SET_GPR_U32(ctx, 31, 0x2AE5FCu);
    ctx->pc = 0x2AE5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE5F4u;
            // 0x2ae5f8: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6DC0u;
    if (runtime->hasFunction(0x2F6DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5FCu; }
        if (ctx->pc != 0x2AE5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterScore__11CSphidaDataFv_0x2f6dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE5FCu; }
        if (ctx->pc != 0x2AE5FCu) { return; }
    }
    ctx->pc = 0x2AE5FCu;
label_2ae5fc:
    // 0x2ae5fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ae5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ae600: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x2ae600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2ae604: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2AE604u;
    {
        const bool branch_taken_0x2ae604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE604u;
            // 0x2ae608: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae604) {
            ctx->pc = 0x2AE5B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae5b8;
        }
    }
    ctx->pc = 0x2AE60Cu;
    // 0x2ae60c: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x2ae60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_2ae610:
    // 0x2ae610: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x2AE610u;
    {
        const bool branch_taken_0x2ae610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae610) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE618u;
    // 0x2ae618: 0xc0bdaec  jal         func_2F6BB0
    ctx->pc = 0x2AE618u;
    SET_GPR_U32(ctx, 31, 0x2AE620u);
    ctx->pc = 0x2AE61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE618u;
            // 0x2ae61c: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6BB0u;
    if (runtime->hasFunction(0x2F6BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE620u; }
        if (ctx->pc != 0x2AE620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CSphidaDataFv_0x2f6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE620u; }
        if (ctx->pc != 0x2AE620u) { return; }
    }
    ctx->pc = 0x2AE620u;
label_2ae620:
    // 0x2ae620: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x2AE620u;
    {
        const bool branch_taken_0x2ae620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE620u;
            // 0x2ae624: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae620) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE628u;
label_2ae628:
    // 0x2ae628: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2ae628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ae62c: 0xc05f65c  jal         func_17D970
    ctx->pc = 0x2AE62Cu;
    SET_GPR_U32(ctx, 31, 0x2AE634u);
    ctx->pc = 0x2AE630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE62Cu;
            // 0x2ae630: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D970u;
    if (runtime->hasFunction(0x17D970u)) {
        auto targetFn = runtime->lookupFunction(0x17D970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE634u; }
        if (ctx->pc != 0x2AE634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheck__10CFadeInOutFv_0x17d970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE634u; }
        if (ctx->pc != 0x2AE634u) { return; }
    }
    ctx->pc = 0x2AE634u;
label_2ae634:
    // 0x2ae634: 0x10400159  beqz        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x2AE634u;
    {
        const bool branch_taken_0x2ae634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae634) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE63Cu;
    // 0x2ae63c: 0x87839b50  lh          $v1, -0x64B0($gp)
    ctx->pc = 0x2ae63cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941520)));
    // 0x2ae640: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2ae640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2ae644: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AE644u;
    {
        const bool branch_taken_0x2ae644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AE648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE644u;
            // 0x2ae648: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae644) {
            ctx->pc = 0x2AE67Cu;
            goto label_2ae67c;
        }
    }
    ctx->pc = 0x2AE64Cu;
    // 0x2ae64c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ae64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ae650: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ae650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ae654: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2ae654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
    // 0x2ae658: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2ae658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ae65c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ae65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2ae660: 0xa7829b50  sh          $v0, -0x64B0($gp)
    ctx->pc = 0x2ae660u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae664: 0x2484ca10  addiu       $a0, $a0, -0x35F0
    ctx->pc = 0x2ae664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953488));
    // 0x2ae668: 0xa426dce0  sh          $a2, -0x2320($at)
    ctx->pc = 0x2ae668u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ae66c: 0xc0c2bdc  jal         func_30AF70
    ctx->pc = 0x2AE66Cu;
    SET_GPR_U32(ctx, 31, 0x2AE674u);
    ctx->pc = 0x2AE670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE66Cu;
            // 0x2ae670: 0x24a5ca54  addiu       $a1, $a1, -0x35AC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953556));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE674u; }
        if (ctx->pc != 0x2AE674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistInit__FP9mgCMemoryPii_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE674u; }
        if (ctx->pc != 0x2AE674u) { return; }
    }
    ctx->pc = 0x2AE674u;
label_2ae674:
    // 0x2ae674: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2AE674u;
    {
        const bool branch_taken_0x2ae674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae674) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE67Cu;
label_2ae67c:
    // 0x2ae67c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x2AE67Cu;
    {
        const bool branch_taken_0x2ae67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae67c) {
            ctx->pc = 0x2AEC14u;
            goto label_2aec14;
        }
    }
    ctx->pc = 0x2AE684u;
label_2ae684:
    // 0x2ae684: 0xc0c2d3c  jal         func_30B4F0
    ctx->pc = 0x2AE684u;
    SET_GPR_U32(ctx, 31, 0x2AE68Cu);
    ctx->pc = 0x30B4F0u;
    if (runtime->hasFunction(0x30B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE68Cu; }
        if (ctx->pc != 0x2AE68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistKey__Fv_0x30b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE68Cu; }
        if (ctx->pc != 0x2AE68Cu) { return; }
    }
    ctx->pc = 0x2AE68Cu;
label_2ae68c:
    // 0x2ae68c: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x2AE68Cu;
    {
        const bool branch_taken_0x2ae68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae68c) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE694u;
    // 0x2ae694: 0xc0bdbe8  jal         func_2F6FA0
    ctx->pc = 0x2AE694u;
    SET_GPR_U32(ctx, 31, 0x2AE69Cu);
    ctx->pc = 0x2AE698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE694u;
            // 0x2ae698: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FA0u;
    if (runtime->hasFunction(0x2F6FA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE69Cu; }
        if (ctx->pc != 0x2AE69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPlay__11CSphidaDataFv_0x2f6fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE69Cu; }
        if (ctx->pc != 0x2AE69Cu) { return; }
    }
    ctx->pc = 0x2AE69Cu;
label_2ae69c:
    // 0x2ae69c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ae69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x2ae6a0: 0x8022dce8  lb          $v0, -0x2318($at)
    ctx->pc = 0x2ae6a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958312)));
    // 0x2ae6a4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AE6A4u;
    {
        const bool branch_taken_0x2ae6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae6a4) {
            ctx->pc = 0x2AE6FCu;
            goto label_2ae6fc;
        }
    }
    ctx->pc = 0x2AE6ACu;
    // 0x2ae6ac: 0x8f829b08  lw          $v0, -0x64F8($gp)
    ctx->pc = 0x2ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
    // 0x2ae6b0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2ae6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2ae6b4: 0x24a5dce8  addiu       $a1, $a1, -0x2318
    ctx->pc = 0x2ae6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958312));
    // 0x2ae6b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AE6B8u;
    SET_GPR_U32(ctx, 31, 0x2AE6C0u);
    ctx->pc = 0x2AE6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE6B8u;
            // 0x2ae6bc: 0x2444147c  addiu       $a0, $v0, 0x147C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5244));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE6C0u; }
        if (ctx->pc != 0x2AE6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE6C0u; }
        if (ctx->pc != 0x2AE6C0u) { return; }
    }
    ctx->pc = 0x2AE6C0u;
label_2ae6c0:
    // 0x2ae6c0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2ae6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ae6c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ae6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ae6c8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2ae6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ae6cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ae6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ae6d0: 0xac23d62c  sw          $v1, -0x29D4($at)
    ctx->pc = 0x2ae6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 3));
    // 0x2ae6d4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2ae6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ae6d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ae6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ae6dc: 0xac23d630  sw          $v1, -0x29D0($at)
    ctx->pc = 0x2ae6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 3));
    // 0x2ae6e0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2ae6e0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae6e4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ae6e4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ae6e8: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2AE6E8u;
    SET_GPR_U32(ctx, 31, 0x2AE6F0u);
    ctx->pc = 0x2AE6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE6E8u;
            // 0x2ae6ec: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE6F0u; }
        if (ctx->pc != 0x2AE6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE6F0u; }
        if (ctx->pc != 0x2AE6F0u) { return; }
    }
    ctx->pc = 0x2AE6F0u;
label_2ae6f0:
    // 0x2ae6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae6f4: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x2AE6F4u;
    {
        const bool branch_taken_0x2ae6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE6F4u;
            // 0x2ae6f8: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae6f4) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE6FCu;
label_2ae6fc:
    // 0x2ae6fc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2ae6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2ae700: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ae700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ae704: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x2AE704u;
    SET_GPR_U32(ctx, 31, 0x2AE70Cu);
    ctx->pc = 0x2AE708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE704u;
            // 0x2ae708: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE70Cu; }
        if (ctx->pc != 0x2AE70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE70Cu; }
        if (ctx->pc != 0x2AE70Cu) { return; }
    }
    ctx->pc = 0x2AE70Cu;
label_2ae70c:
    // 0x2ae70c: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x2AE70Cu;
    {
        const bool branch_taken_0x2ae70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE70Cu;
            // 0x2ae710: 0xa7809b50  sh          $zero, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae70c) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE714u;
label_2ae714:
    // 0x2ae714: 0xc0ab8c0  jal         func_2AE300
    ctx->pc = 0x2AE714u;
    SET_GPR_U32(ctx, 31, 0x2AE71Cu);
    ctx->pc = 0x2AE300u;
    if (runtime->hasFunction(0x2AE300u)) {
        auto targetFn = runtime->lookupFunction(0x2AE300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE71Cu; }
        if (ctx->pc != 0x2AE71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OmakeSfidaSelect__Fi_0x2ae300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE71Cu; }
        if (ctx->pc != 0x2AE71Cu) { return; }
    }
    ctx->pc = 0x2AE71Cu;
label_2ae71c:
    // 0x2ae71c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae720: 0x27859b48  addiu       $a1, $gp, -0x64B8
    ctx->pc = 0x2ae720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941512));
    // 0x2ae724: 0x27869b4c  addiu       $a2, $gp, -0x64B4
    ctx->pc = 0x2ae724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941516));
    // 0x2ae728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae72c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2ae72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ae730: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2ae730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae734: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2AE734u;
    SET_GPR_U32(ctx, 31, 0x2AE73Cu);
    ctx->pc = 0x2AE738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE734u;
            // 0x2ae738: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE73Cu; }
        if (ctx->pc != 0x2AE73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE73Cu; }
        if (ctx->pc != 0x2AE73Cu) { return; }
    }
    ctx->pc = 0x2AE73Cu;
label_2ae73c:
    // 0x2ae73c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE73Cu;
    {
        const bool branch_taken_0x2ae73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE73Cu;
            // 0x2ae740: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae73c) {
            ctx->pc = 0x2AE770u;
            goto label_2ae770;
        }
    }
    ctx->pc = 0x2AE744u;
    // 0x2ae744: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE744u;
    SET_GPR_U32(ctx, 31, 0x2AE74Cu);
    ctx->pc = 0x2AE748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE744u;
            // 0x2ae748: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE74Cu; }
        if (ctx->pc != 0x2AE74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE74Cu; }
        if (ctx->pc != 0x2AE74Cu) { return; }
    }
    ctx->pc = 0x2AE74Cu;
label_2ae74c:
    // 0x2ae74c: 0x8f829b4c  lw          $v0, -0x64B4($gp)
    ctx->pc = 0x2ae74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
    // 0x2ae750: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE750u;
    {
        const bool branch_taken_0x2ae750 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE750u;
            // 0x2ae754: 0x262082a  slt         $at, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae750) {
            ctx->pc = 0x2AE76Cu;
            goto label_2ae76c;
        }
    }
    ctx->pc = 0x2AE758u;
    // 0x2ae758: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE758u;
    {
        const bool branch_taken_0x2ae758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE758u;
            // 0x2ae75c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae758) {
            ctx->pc = 0x2AE764u;
            goto label_2ae764;
        }
    }
    ctx->pc = 0x2AE760u;
    // 0x2ae760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae764:
    // 0x2ae764: 0xa7829b54  sh          $v0, -0x64AC($gp)
    ctx->pc = 0x2ae764u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941524), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae768: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ae768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae76c:
    // 0x2ae76c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ae76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2ae770:
    // 0x2ae770: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2AE770u;
    {
        const bool branch_taken_0x2ae770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE770u;
            // 0x2ae774: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae770) {
            ctx->pc = 0x2AE93Cu;
            goto label_2ae93c;
        }
    }
    ctx->pc = 0x2AE778u;
    // 0x2ae778: 0x8f859b48  lw          $a1, -0x64B8($gp)
    ctx->pc = 0x2ae778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941512)));
    // 0x2ae77c: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2AE77Cu;
    SET_GPR_U32(ctx, 31, 0x2AE784u);
    ctx->pc = 0x2AE780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE77Cu;
            // 0x2ae780: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE784u; }
        if (ctx->pc != 0x2AE784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE784u; }
        if (ctx->pc != 0x2AE784u) { return; }
    }
    ctx->pc = 0x2AE784u;
label_2ae784:
    // 0x2ae784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae788: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AE788u;
    {
        const bool branch_taken_0x2ae788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE788u;
            // 0x2ae78c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae788) {
            ctx->pc = 0x2AE79Cu;
            goto label_2ae79c;
        }
    }
    ctx->pc = 0x2AE790u;
    // 0x2ae790: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2ae790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae794: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE794u;
    {
        const bool branch_taken_0x2ae794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae794) {
            ctx->pc = 0x2AE7ACu;
            goto label_2ae7ac;
        }
    }
    ctx->pc = 0x2AE79Cu;
label_2ae79c:
    // 0x2ae79c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE79Cu;
    SET_GPR_U32(ctx, 31, 0x2AE7A4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7A4u; }
        if (ctx->pc != 0x2AE7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7A4u; }
        if (ctx->pc != 0x2AE7A4u) { return; }
    }
    ctx->pc = 0x2AE7A4u;
label_2ae7a4:
    // 0x2ae7a4: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2AE7A4u;
    {
        const bool branch_taken_0x2ae7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae7a4) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE7ACu;
label_2ae7ac:
    // 0x2ae7ac: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ae7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ae7b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae7b4: 0xc049c86  jal         func_127218
    ctx->pc = 0x2AE7B4u;
    SET_GPR_U32(ctx, 31, 0x2AE7BCu);
    ctx->pc = 0x2AE7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE7B4u;
            // 0x2ae7b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7BCu; }
        if (ctx->pc != 0x2AE7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE7BCu; }
        if (ctx->pc != 0x2AE7BCu) { return; }
    }
    ctx->pc = 0x2AE7BCu;
label_2ae7bc:
    // 0x2ae7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae7c0:
    // 0x2ae7c0: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x2ae7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2ae7c4: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2ae7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2ae7c8: 0x90830024  lbu         $v1, 0x24($a0)
    ctx->pc = 0x2ae7c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ae7cc: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x2ae7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2ae7d0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2ae7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2ae7d4: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2ae7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ae7d8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2ae7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae7dc: 0x90830025  lbu         $v1, 0x25($a0)
    ctx->pc = 0x2ae7dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x2ae7e0: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x2ae7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae7e4: 0x90830026  lbu         $v1, 0x26($a0)
    ctx->pc = 0x2ae7e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2ae7e8: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x2ae7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae7ec: 0x90830027  lbu         $v1, 0x27($a0)
    ctx->pc = 0x2ae7ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x2ae7f0: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x2ae7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae7f4: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x2ae7f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ae7f8: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x2ae7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae7fc: 0x90830029  lbu         $v1, 0x29($a0)
    ctx->pc = 0x2ae7fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
    // 0x2ae800: 0xa0c30005  sb          $v1, 0x5($a2)
    ctx->pc = 0x2ae800u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae804: 0x9083002a  lbu         $v1, 0x2A($a0)
    ctx->pc = 0x2ae804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2ae808: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x2ae808u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae80c: 0x9083002b  lbu         $v1, 0x2B($a0)
    ctx->pc = 0x2ae80cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x2ae810: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2AE810u;
    {
        const bool branch_taken_0x2ae810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE810u;
            // 0x2ae814: 0xa0c30007  sb          $v1, 0x7($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae810) {
            ctx->pc = 0x2AE7C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae7c0;
        }
    }
    ctx->pc = 0x2AE818u;
    // 0x2ae818: 0x28a1000a  slti        $at, $a1, 0xA
    ctx->pc = 0x2ae818u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ae81c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE81Cu;
    {
        const bool branch_taken_0x2ae81c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae81c) {
            ctx->pc = 0x2AE844u;
            goto label_2ae844;
        }
    }
    ctx->pc = 0x2AE824u;
label_2ae824:
    // 0x2ae824: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x2ae824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2ae828: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x2ae828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2ae82c: 0x90440024  lbu         $a0, 0x24($v0)
    ctx->pc = 0x2ae82cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2ae830: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ae830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ae834: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2ae834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ae838: 0xa06400b0  sb          $a0, 0xB0($v1)
    ctx->pc = 0x2ae838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ae83c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AE83Cu;
    {
        const bool branch_taken_0x2ae83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae83c) {
            ctx->pc = 0x2AE824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae824;
        }
    }
    ctx->pc = 0x2AE844u;
label_2ae844:
    // 0x2ae844: 0x0  nop
    ctx->pc = 0x2ae844u;
    // NOP
    // 0x2ae848: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2ae848u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2ae84c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2ae84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2ae850: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ae850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ae854: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae858: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x2ae858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ae85c: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x2ae85cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ae860: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x2ae860u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2ae864: 0xc0c7490  jal         func_31D240
    ctx->pc = 0x2AE864u;
    SET_GPR_U32(ctx, 31, 0x2AE86Cu);
    ctx->pc = 0x2AE868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE864u;
            // 0x2ae868: 0xa3a200bd  sb          $v0, 0xBD($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 189), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D240u;
    if (runtime->hasFunction(0x31D240u)) {
        auto targetFn = runtime->lookupFunction(0x31D240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE86Cu; }
        if (ctx->pc != 0x2AE86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EncodePassword__FPUciPUciPci_0x31d240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE86Cu; }
        if (ctx->pc != 0x2AE86Cu) { return; }
    }
    ctx->pc = 0x2AE86Cu;
label_2ae86c:
    // 0x2ae86c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ae86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae870: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ae870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ae874: 0xc0c2bbc  jal         func_30AEF0
    ctx->pc = 0x2AE874u;
    SET_GPR_U32(ctx, 31, 0x2AE87Cu);
    ctx->pc = 0x2AE878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE874u;
            // 0x2ae878: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AEF0u;
    if (runtime->hasFunction(0x30AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x30AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE87Cu; }
        if (ctx->pc != 0x2AE87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertAscii2ShitJiss__FPcPc_0x30aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE87Cu; }
        if (ctx->pc != 0x2AE87Cu) { return; }
    }
    ctx->pc = 0x2AE87Cu;
label_2ae87c:
    // 0x2ae87c: 0xa3a000ec  sb          $zero, 0xEC($sp)
    ctx->pc = 0x2ae87cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 236), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae880: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE880u;
    {
        const bool branch_taken_0x2ae880 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE880u;
            // 0x2ae884: 0xa3a000ed  sb          $zero, 0xED($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 237), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae880) {
            ctx->pc = 0x2AE898u;
            goto label_2ae898;
        }
    }
    ctx->pc = 0x2AE888u;
    // 0x2ae888: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE888u;
    SET_GPR_U32(ctx, 31, 0x2AE890u);
    ctx->pc = 0x2AE88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE888u;
            // 0x2ae88c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE890u; }
        if (ctx->pc != 0x2AE890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE890u; }
        if (ctx->pc != 0x2AE890u) { return; }
    }
    ctx->pc = 0x2AE890u;
label_2ae890:
    // 0x2ae890: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x2AE890u;
    {
        const bool branch_taken_0x2ae890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae890) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE898u;
label_2ae898:
    // 0x2ae898: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE898u;
    SET_GPR_U32(ctx, 31, 0x2AE8A0u);
    ctx->pc = 0x2AE89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE898u;
            // 0x2ae89c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8A0u; }
        if (ctx->pc != 0x2AE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8A0u; }
        if (ctx->pc != 0x2AE8A0u) { return; }
    }
    ctx->pc = 0x2AE8A0u;
label_2ae8a0:
    // 0x2ae8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae8a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8a8: 0xa3829b14  sb          $v0, -0x64EC($gp)
    ctx->pc = 0x2ae8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ae8ac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2ae8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ae8b0: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE8B0u;
    SET_GPR_U32(ctx, 31, 0x2AE8B8u);
    ctx->pc = 0x2AE8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8B0u;
            // 0x2ae8b4: 0xa3809b2c  sb          $zero, -0x64D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8B8u; }
        if (ctx->pc != 0x2AE8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8B8u; }
        if (ctx->pc != 0x2AE8B8u) { return; }
    }
    ctx->pc = 0x2AE8B8u;
label_2ae8b8:
    // 0x2ae8b8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2ae8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae8bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8c0: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x2ae8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x2ae8c4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE8C4u;
    SET_GPR_U32(ctx, 31, 0x2AE8CCu);
    ctx->pc = 0x2AE8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8C4u;
            // 0x2ae8c8: 0x240513f0  addiu       $a1, $zero, 0x13F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8CCu; }
        if (ctx->pc != 0x2AE8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8CCu; }
        if (ctx->pc != 0x2AE8CCu) { return; }
    }
    ctx->pc = 0x2AE8CCu;
label_2ae8cc:
    // 0x2ae8cc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE8CCu;
    {
        const bool branch_taken_0x2ae8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8CCu;
            // 0x2ae8d0: 0x26841841  addiu       $a0, $s4, 0x1841 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8cc) {
            ctx->pc = 0x2AE8E4u;
            goto label_2ae8e4;
        }
    }
    ctx->pc = 0x2AE8D4u;
    // 0x2ae8d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ae8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae8d8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AE8D8u;
    SET_GPR_U32(ctx, 31, 0x2AE8E0u);
    ctx->pc = 0x2AE8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8D8u;
            // 0x2ae8dc: 0x26841801  addiu       $a0, $s4, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8E0u; }
        if (ctx->pc != 0x2AE8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8E0u; }
        if (ctx->pc != 0x2AE8E0u) { return; }
    }
    ctx->pc = 0x2AE8E0u;
label_2ae8e0:
    // 0x2ae8e0: 0x26841841  addiu       $a0, $s4, 0x1841
    ctx->pc = 0x2ae8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6209));
label_2ae8e4:
    // 0x2ae8e4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2AE8E4u;
    SET_GPR_U32(ctx, 31, 0x2AE8ECu);
    ctx->pc = 0x2AE8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8E4u;
            // 0x2ae8e8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8ECu; }
        if (ctx->pc != 0x2AE8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE8ECu; }
        if (ctx->pc != 0x2AE8ECu) { return; }
    }
    ctx->pc = 0x2AE8ECu;
label_2ae8ec:
    // 0x2ae8ec: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2ae8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ae8f0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AE8F0u;
    {
        const bool branch_taken_0x2ae8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE8F0u;
            // 0x2ae8f4: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae8f0) {
            ctx->pc = 0x2AE934u;
            goto label_2ae934;
        }
    }
    ctx->pc = 0x2AE8F8u;
    // 0x2ae8f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ae8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ae8fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae900: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x2ae900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2ae904: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2ae904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ae908: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AE908u;
    SET_GPR_U32(ctx, 31, 0x2AE910u);
    ctx->pc = 0x2AE90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE908u;
            // 0x2ae90c: 0xa3829b38  sb          $v0, -0x64C8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941496), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE910u; }
        if (ctx->pc != 0x2AE910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE910u; }
        if (ctx->pc != 0x2AE910u) { return; }
    }
    ctx->pc = 0x2AE910u;
label_2ae910:
    // 0x2ae910: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ae910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ae914: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2ae914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae918: 0x8c22ca48  lw          $v0, -0x35B8($at)
    ctx->pc = 0x2ae918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2ae91c: 0xac43014c  sw          $v1, 0x14C($v0)
    ctx->pc = 0x2ae91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 3));
    // 0x2ae920: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2ae920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2ae924: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x2ae924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
    // 0x2ae928: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AE928u;
    SET_GPR_U32(ctx, 31, 0x2AE930u);
    ctx->pc = 0x2AE92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE928u;
            // 0x2ae92c: 0x240513f2  addiu       $a1, $zero, 0x13F2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE930u; }
        if (ctx->pc != 0x2AE930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE930u; }
        if (ctx->pc != 0x2AE930u) { return; }
    }
    ctx->pc = 0x2AE930u;
label_2ae930:
    // 0x2ae930: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x2ae930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_2ae934:
    // 0x2ae934: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2AE934u;
    {
        const bool branch_taken_0x2ae934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE934u;
            // 0x2ae938: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae934) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE93Cu;
label_2ae93c:
    // 0x2ae93c: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x2AE93Cu;
    {
        const bool branch_taken_0x2ae93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae93c) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE944u;
    // 0x2ae944: 0x8f829b0c  lw          $v0, -0x64F4($gp)
    ctx->pc = 0x2ae944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2ae948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ae948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae94c: 0xa7809b50  sh          $zero, -0x64B0($gp)
    ctx->pc = 0x2ae94cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ae950: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ae950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae954: 0xa3809b2c  sb          $zero, -0x64D4($gp)
    ctx->pc = 0x2ae954u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae958: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2ae958u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae95c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE95Cu;
    SET_GPR_U32(ctx, 31, 0x2AE964u);
    ctx->pc = 0x2AE960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE95Cu;
            // 0x2ae960: 0xa04321e8  sb          $v1, 0x21E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE964u; }
        if (ctx->pc != 0x2AE964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE964u; }
        if (ctx->pc != 0x2AE964u) { return; }
    }
    ctx->pc = 0x2AE964u;
label_2ae964:
    // 0x2ae964: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2AE964u;
    {
        const bool branch_taken_0x2ae964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae964) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE96Cu;
label_2ae96c:
    // 0x2ae96c: 0x1220008b  beqz        $s1, . + 4 + (0x8B << 2)
    ctx->pc = 0x2AE96Cu;
    {
        const bool branch_taken_0x2ae96c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE96Cu;
            // 0x2ae970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae96c) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE974u;
    // 0x2ae974: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ae974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ae978: 0xa3829b2c  sb          $v0, -0x64D4($gp)
    ctx->pc = 0x2ae978u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ae97c: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2ae97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2ae980: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2ae980u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ae984: 0xa7829b50  sh          $v0, -0x64B0($gp)
    ctx->pc = 0x2ae984u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae988: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE988u;
    SET_GPR_U32(ctx, 31, 0x2AE990u);
    ctx->pc = 0x2AE98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE988u;
            // 0x2ae98c: 0xa3809b38  sb          $zero, -0x64C8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941496), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE990u; }
        if (ctx->pc != 0x2AE990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE990u; }
        if (ctx->pc != 0x2AE990u) { return; }
    }
    ctx->pc = 0x2AE990u;
label_2ae990:
    // 0x2ae990: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2AE990u;
    {
        const bool branch_taken_0x2ae990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae990) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AE998u;
label_2ae998:
    // 0x2ae998: 0xc0ab8c0  jal         func_2AE300
    ctx->pc = 0x2AE998u;
    SET_GPR_U32(ctx, 31, 0x2AE9A0u);
    ctx->pc = 0x2AE300u;
    if (runtime->hasFunction(0x2AE300u)) {
        auto targetFn = runtime->lookupFunction(0x2AE300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9A0u; }
        if (ctx->pc != 0x2AE9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OmakeSfidaSelect__Fi_0x2ae300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9A0u; }
        if (ctx->pc != 0x2AE9A0u) { return; }
    }
    ctx->pc = 0x2AE9A0u;
label_2ae9a0:
    // 0x2ae9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ae9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9a4: 0x27859b48  addiu       $a1, $gp, -0x64B8
    ctx->pc = 0x2ae9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941512));
    // 0x2ae9a8: 0x27869b4c  addiu       $a2, $gp, -0x64B4
    ctx->pc = 0x2ae9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941516));
    // 0x2ae9ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae9acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae9b0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x2ae9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ae9b4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2ae9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ae9b8: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x2AE9B8u;
    SET_GPR_U32(ctx, 31, 0x2AE9C0u);
    ctx->pc = 0x2AE9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9B8u;
            // 0x2ae9bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9C0u; }
        if (ctx->pc != 0x2AE9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9C0u; }
        if (ctx->pc != 0x2AE9C0u) { return; }
    }
    ctx->pc = 0x2AE9C0u;
label_2ae9c0:
    // 0x2ae9c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE9C0u;
    {
        const bool branch_taken_0x2ae9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9C0u;
            // 0x2ae9c4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9c0) {
            ctx->pc = 0x2AE9F4u;
            goto label_2ae9f4;
        }
    }
    ctx->pc = 0x2AE9C8u;
    // 0x2ae9c8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AE9C8u;
    SET_GPR_U32(ctx, 31, 0x2AE9D0u);
    ctx->pc = 0x2AE9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9C8u;
            // 0x2ae9cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9D0u; }
        if (ctx->pc != 0x2AE9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE9D0u; }
        if (ctx->pc != 0x2AE9D0u) { return; }
    }
    ctx->pc = 0x2AE9D0u;
label_2ae9d0:
    // 0x2ae9d0: 0x8f829b4c  lw          $v0, -0x64B4($gp)
    ctx->pc = 0x2ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941516)));
    // 0x2ae9d4: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE9D4u;
    {
        const bool branch_taken_0x2ae9d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9D4u;
            // 0x2ae9d8: 0x262082a  slt         $at, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9d4) {
            ctx->pc = 0x2AE9F0u;
            goto label_2ae9f0;
        }
    }
    ctx->pc = 0x2AE9DCu;
    // 0x2ae9dc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE9DCu;
    {
        const bool branch_taken_0x2ae9dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9DCu;
            // 0x2ae9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9dc) {
            ctx->pc = 0x2AE9E8u;
            goto label_2ae9e8;
        }
    }
    ctx->pc = 0x2AE9E4u;
    // 0x2ae9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae9e8:
    // 0x2ae9e8: 0xa7829b54  sh          $v0, -0x64AC($gp)
    ctx->pc = 0x2ae9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941524), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ae9ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ae9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae9f0:
    // 0x2ae9f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2ae9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2ae9f4:
    // 0x2ae9f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AE9F4u;
    {
        const bool branch_taken_0x2ae9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE9F4u;
            // 0x2ae9f8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae9f4) {
            ctx->pc = 0x2AEA90u;
            goto label_2aea90;
        }
    }
    ctx->pc = 0x2AE9FCu;
    // 0x2ae9fc: 0x8f859b48  lw          $a1, -0x64B8($gp)
    ctx->pc = 0x2ae9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941512)));
    // 0x2aea00: 0xc0bdbd8  jal         func_2F6F60
    ctx->pc = 0x2AEA00u;
    SET_GPR_U32(ctx, 31, 0x2AEA08u);
    ctx->pc = 0x2AEA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA00u;
            // 0x2aea04: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6F60u;
    if (runtime->hasFunction(0x2F6F60u)) {
        auto targetFn = runtime->lookupFunction(0x2F6F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA08u; }
        if (ctx->pc != 0x2AEA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlayerData__11CSphidaDataFi_0x2f6f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA08u; }
        if (ctx->pc != 0x2AEA08u) { return; }
    }
    ctx->pc = 0x2AEA08u;
label_2aea08:
    // 0x2aea08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aea08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea0c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEA0Cu;
    {
        const bool branch_taken_0x2aea0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA0Cu;
            // 0x2aea10: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea0c) {
            ctx->pc = 0x2AEA20u;
            goto label_2aea20;
        }
    }
    ctx->pc = 0x2AEA14u;
    // 0x2aea14: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2aea14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aea18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AEA18u;
    {
        const bool branch_taken_0x2aea18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aea18) {
            ctx->pc = 0x2AEA30u;
            goto label_2aea30;
        }
    }
    ctx->pc = 0x2AEA20u;
label_2aea20:
    // 0x2aea20: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEA20u;
    SET_GPR_U32(ctx, 31, 0x2AEA28u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA28u; }
        if (ctx->pc != 0x2AEA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA28u; }
        if (ctx->pc != 0x2AEA28u) { return; }
    }
    ctx->pc = 0x2AEA28u;
label_2aea28:
    // 0x2aea28: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2AEA28u;
    {
        const bool branch_taken_0x2aea28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea28) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEA30u;
label_2aea30:
    // 0x2aea30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea34: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2AEA34u;
    SET_GPR_U32(ctx, 31, 0x2AEA3Cu);
    ctx->pc = 0x2AEA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA34u;
            // 0x2aea38: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA3Cu; }
        if (ctx->pc != 0x2AEA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA3Cu; }
        if (ctx->pc != 0x2AEA3Cu) { return; }
    }
    ctx->pc = 0x2AEA3Cu;
label_2aea3c:
    // 0x2aea3c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2aea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aea40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aea40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea44: 0xae82014c  sw          $v0, 0x14C($s4)
    ctx->pc = 0x2aea44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 332), GPR_U32(ctx, 2));
    // 0x2aea48: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x2AEA48u;
    SET_GPR_U32(ctx, 31, 0x2AEA50u);
    ctx->pc = 0x2AEA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA48u;
            // 0x2aea4c: 0x240513f1  addiu       $a1, $zero, 0x13F1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5105));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA50u; }
        if (ctx->pc != 0x2AEA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA50u; }
        if (ctx->pc != 0x2AEA50u) { return; }
    }
    ctx->pc = 0x2AEA50u;
label_2aea50:
    // 0x2aea50: 0xdf829b60  ld          $v0, -0x64A0($gp)
    ctx->pc = 0x2aea50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294941536)));
    // 0x2aea54: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x2aea54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x2aea58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2aea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aea60: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2aea60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x2aea64: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2AEA64u;
    SET_GPR_U32(ctx, 31, 0x2AEA6Cu);
    ctx->pc = 0x2AEA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA64u;
            // 0x2aea68: 0xafb00148  sw          $s0, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA6Cu; }
        if (ctx->pc != 0x2AEA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA6Cu; }
        if (ctx->pc != 0x2AEA6Cu) { return; }
    }
    ctx->pc = 0x2AEA6Cu;
label_2aea6c:
    // 0x2aea6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aea70: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x2AEA70u;
    SET_GPR_U32(ctx, 31, 0x2AEA78u);
    ctx->pc = 0x2AEA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA70u;
            // 0x2aea74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA78u; }
        if (ctx->pc != 0x2AEA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA78u; }
        if (ctx->pc != 0x2AEA78u) { return; }
    }
    ctx->pc = 0x2AEA78u;
label_2aea78:
    // 0x2aea78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aea7c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEA7Cu;
    SET_GPR_U32(ctx, 31, 0x2AEA84u);
    ctx->pc = 0x2AEA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA7Cu;
            // 0x2aea80: 0xa3849b14  sb          $a0, -0x64EC($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA84u; }
        if (ctx->pc != 0x2AEA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEA84u; }
        if (ctx->pc != 0x2AEA84u) { return; }
    }
    ctx->pc = 0x2AEA84u;
label_2aea84:
    // 0x2aea84: 0x2402012d  addiu       $v0, $zero, 0x12D
    ctx->pc = 0x2aea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 301));
    // 0x2aea88: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2AEA88u;
    {
        const bool branch_taken_0x2aea88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEA88u;
            // 0x2aea8c: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aea88) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEA90u;
label_2aea90:
    // 0x2aea90: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2AEA90u;
    {
        const bool branch_taken_0x2aea90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aea90) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEA98u;
    // 0x2aea98: 0x8f829b0c  lw          $v0, -0x64F4($gp)
    ctx->pc = 0x2aea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2aea9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aea9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeaa0: 0xa7809b50  sh          $zero, -0x64B0($gp)
    ctx->pc = 0x2aeaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aeaa4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aeaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aeaa8: 0xa3809b2c  sb          $zero, -0x64D4($gp)
    ctx->pc = 0x2aeaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941484), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeaac: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2aeaacu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeab0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEAB0u;
    SET_GPR_U32(ctx, 31, 0x2AEAB8u);
    ctx->pc = 0x2AEAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEAB0u;
            // 0x2aeab4: 0xa04321e8  sb          $v1, 0x21E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAB8u; }
        if (ctx->pc != 0x2AEAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAB8u; }
        if (ctx->pc != 0x2AEAB8u) { return; }
    }
    ctx->pc = 0x2AEAB8u;
label_2aeab8:
    // 0x2aeab8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2AEAB8u;
    {
        const bool branch_taken_0x2aeab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aeab8) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEAC0u;
label_2aeac0:
    // 0x2aeac0: 0xc087654  jal         func_21D950
    ctx->pc = 0x2AEAC0u;
    SET_GPR_U32(ctx, 31, 0x2AEAC8u);
    ctx->pc = 0x2AEAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEAC0u;
            // 0x2aeac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAC8u; }
        if (ctx->pc != 0x2AEAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAC8u; }
        if (ctx->pc != 0x2AEAC8u) { return; }
    }
    ctx->pc = 0x2AEAC8u;
label_2aeac8:
    // 0x2aeac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aeac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeacc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aeaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aead0: 0x1604000b  bne         $s0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2AEAD0u;
    {
        const bool branch_taken_0x2aead0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x2AEAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEAD0u;
            // 0x2aead4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aead0) {
            ctx->pc = 0x2AEB00u;
            goto label_2aeb00;
        }
    }
    ctx->pc = 0x2AEAD8u;
    // 0x2aead8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEAD8u;
    SET_GPR_U32(ctx, 31, 0x2AEAE0u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAE0u; }
        if (ctx->pc != 0x2AEAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAE0u; }
        if (ctx->pc != 0x2AEAE0u) { return; }
    }
    ctx->pc = 0x2AEAE0u;
label_2aeae0:
    // 0x2aeae0: 0x8f859b48  lw          $a1, -0x64B8($gp)
    ctx->pc = 0x2aeae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941512)));
    // 0x2aeae4: 0xc0bdb40  jal         func_2F6D00
    ctx->pc = 0x2AEAE4u;
    SET_GPR_U32(ctx, 31, 0x2AEAECu);
    ctx->pc = 0x2AEAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEAE4u;
            // 0x2aeae8: 0x8f849b08  lw          $a0, -0x64F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D00u;
    if (runtime->hasFunction(0x2F6D00u)) {
        auto targetFn = runtime->lookupFunction(0x2F6D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAECu; }
        if (ctx->pc != 0x2AEAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerScore__11CSphidaDataFi_0x2f6d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEAECu; }
        if (ctx->pc != 0x2AEAECu) { return; }
    }
    ctx->pc = 0x2AEAECu;
label_2aeaec:
    // 0x2aeaec: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2aeaf0: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2aeaf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeaf4: 0xa7829b50  sh          $v0, -0x64B0($gp)
    ctx->pc = 0x2aeaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aeaf8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2aeaf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeafc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aeafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aeb00:
    // 0x2aeb00: 0x16020026  bne         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2AEB00u;
    {
        const bool branch_taken_0x2aeb00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AEB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB00u;
            // 0x2aeb04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb00) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEB08u;
    // 0x2aeb08: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEB08u;
    SET_GPR_U32(ctx, 31, 0x2AEB10u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB10u; }
        if (ctx->pc != 0x2AEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB10u; }
        if (ctx->pc != 0x2AEB10u) { return; }
    }
    ctx->pc = 0x2AEB10u;
label_2aeb10:
    // 0x2aeb10: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2aeb10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2aeb14: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2aeb14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeb18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2AEB18u;
    {
        const bool branch_taken_0x2aeb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB18u;
            // 0x2aeb1c: 0xa7829b50  sh          $v0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb18) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEB20u;
label_2aeb20:
    // 0x2aeb20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2aeb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb24: 0xc087654  jal         func_21D950
    ctx->pc = 0x2AEB24u;
    SET_GPR_U32(ctx, 31, 0x2AEB2Cu);
    ctx->pc = 0x2AEB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB24u;
            // 0x2aeb28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB2Cu; }
        if (ctx->pc != 0x2AEB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB2Cu; }
        if (ctx->pc != 0x2AEB2Cu) { return; }
    }
    ctx->pc = 0x2AEB2Cu;
label_2aeb2c:
    // 0x2aeb2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aeb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeb34: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AEB34u;
    {
        const bool branch_taken_0x2aeb34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AEB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB34u;
            // 0x2aeb38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb34) {
            ctx->pc = 0x2AEB78u;
            goto label_2aeb78;
        }
    }
    ctx->pc = 0x2AEB3Cu;
    // 0x2aeb3c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2aeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2aeb40: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2aeb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2aeb44: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x2aeb44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x2aeb48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2aeb48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2aeb4c: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2aeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2aeb50: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x2aeb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2aeb54: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2aeb54u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2aeb58: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2aeb58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeb5c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2aeb5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2aeb60: 0xc05f610  jal         func_17D840
    ctx->pc = 0x2AEB60u;
    SET_GPR_U32(ctx, 31, 0x2AEB68u);
    ctx->pc = 0x2AEB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB60u;
            // 0x2aeb64: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB68u; }
        if (ctx->pc != 0x2AEB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB68u; }
        if (ctx->pc != 0x2AEB68u) { return; }
    }
    ctx->pc = 0x2AEB68u;
label_2aeb68:
    // 0x2aeb68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2aeb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeb6c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEB6Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB74u);
    ctx->pc = 0x2AEB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB6Cu;
            // 0x2aeb70: 0xa7849b50  sh          $a0, -0x64B0($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB74u; }
        if (ctx->pc != 0x2AEB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB74u; }
        if (ctx->pc != 0x2AEB74u) { return; }
    }
    ctx->pc = 0x2AEB74u;
label_2aeb74:
    // 0x2aeb74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2aeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aeb78:
    // 0x2aeb78: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AEB78u;
    {
        const bool branch_taken_0x2aeb78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aeb78) {
            ctx->pc = 0x2AEB9Cu;
            goto label_2aeb9c;
        }
    }
    ctx->pc = 0x2AEB80u;
    // 0x2aeb80: 0x8f829b0c  lw          $v0, -0x64F4($gp)
    ctx->pc = 0x2aeb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
    // 0x2aeb84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2aeb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeb88: 0xa7809b50  sh          $zero, -0x64B0($gp)
    ctx->pc = 0x2aeb88u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941520), (uint16_t)GPR_U32(ctx, 0));
    // 0x2aeb8c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aeb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aeb90: 0xa3809b14  sb          $zero, -0x64EC($gp)
    ctx->pc = 0x2aeb90u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941460), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aeb94: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AEB94u;
    SET_GPR_U32(ctx, 31, 0x2AEB9Cu);
    ctx->pc = 0x2AEB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEB94u;
            // 0x2aeb98: 0xa04321e8  sb          $v1, 0x21E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8680), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB9Cu; }
        if (ctx->pc != 0x2AEB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB9Cu; }
        if (ctx->pc != 0x2AEB9Cu) { return; }
    }
    ctx->pc = 0x2AEB9Cu;
label_2aeb9c:
    // 0x2aeb9c: 0x8f849b18  lw          $a0, -0x64E8($gp)
    ctx->pc = 0x2aeb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
label_2aeba0:
    // 0x2aeba0: 0xc0ab780  jal         func_2ADE00
    ctx->pc = 0x2AEBA0u;
    SET_GPR_U32(ctx, 31, 0x2AEBA8u);
    ctx->pc = 0x2AEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEBA0u;
            // 0x2aeba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ADE00u;
    if (runtime->hasFunction(0x2ADE00u)) {
        auto targetFn = runtime->lookupFunction(0x2ADE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBA8u; }
        if (ctx->pc != 0x2AEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SphidaScreListUpdate__FP7CDC2Mesi_0x2ade00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBA8u; }
        if (ctx->pc != 0x2AEBA8u) { return; }
    }
    ctx->pc = 0x2AEBA8u;
label_2aeba8:
    // 0x2aeba8: 0xc7829b3c  lwc1        $f2, -0x64C4($gp)
    ctx->pc = 0x2aeba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aebac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2aebacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2aebb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2aebb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2aebb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2aebb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aebb8: 0x0  nop
    ctx->pc = 0x2aebb8u;
    // NOP
    // 0x2aebbc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2aebbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2aebc0: 0xe7819b3c  swc1        $f1, -0x64C4($gp)
    ctx->pc = 0x2aebc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941500), bits); }
    // 0x2aebc4: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x2aebc4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
    // 0x2aebc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2aebc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aebcc: 0x0  nop
    ctx->pc = 0x2aebccu;
    // NOP
    // 0x2aebd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEBD0u;
    {
        const bool branch_taken_0x2aebd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AEBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEBD0u;
            // 0x2aebd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebd0) {
            ctx->pc = 0x2AEBECu;
            goto label_2aebec;
        }
    }
    ctx->pc = 0x2AEBD8u;
    // 0x2aebd8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2aebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2aebdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2aebdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aebe0: 0x0  nop
    ctx->pc = 0x2aebe0u;
    // NOP
    // 0x2aebe4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2aebe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2aebe8: 0xe7809b3c  swc1        $f0, -0x64C4($gp)
    ctx->pc = 0x2aebe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294941500), bits); }
label_2aebec:
    // 0x2aebec: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AEBECu;
    SET_GPR_U32(ctx, 31, 0x2AEBF4u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBF4u; }
        if (ctx->pc != 0x2AEBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBF4u; }
        if (ctx->pc != 0x2AEBF4u) { return; }
    }
    ctx->pc = 0x2AEBF4u;
label_2aebf4:
    // 0x2aebf4: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AEBF4u;
    SET_GPR_U32(ctx, 31, 0x2AEBFCu);
    ctx->pc = 0x2AEBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEBF4u;
            // 0x2aebf8: 0x8f849b0c  lw          $a0, -0x64F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941452)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBFCu; }
        if (ctx->pc != 0x2AEBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEBFCu; }
        if (ctx->pc != 0x2AEBFCu) { return; }
    }
    ctx->pc = 0x2AEBFCu;
label_2aebfc:
    // 0x2aebfc: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AEBFCu;
    SET_GPR_U32(ctx, 31, 0x2AEC04u);
    ctx->pc = 0x2AEC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEBFCu;
            // 0x2aec00: 0x8f849b18  lw          $a0, -0x64E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC04u; }
        if (ctx->pc != 0x2AEC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC04u; }
        if (ctx->pc != 0x2AEC04u) { return; }
    }
    ctx->pc = 0x2AEC04u;
label_2aec04:
    // 0x2aec04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2aec04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2aec08: 0xc087898  jal         func_21E260
    ctx->pc = 0x2AEC08u;
    SET_GPR_U32(ctx, 31, 0x2AEC10u);
    ctx->pc = 0x2AEC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEC08u;
            // 0x2aec0c: 0x8c24ca48  lw          $a0, -0x35B8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC10u; }
        if (ctx->pc != 0x2AEC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEC10u; }
        if (ctx->pc != 0x2AEC10u) { return; }
    }
    ctx->pc = 0x2AEC10u;
label_2aec10:
    // 0x2aec10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aec10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aec14:
    // 0x2aec14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2aec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2aec18:
    // 0x2aec18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2aec18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aec1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2aec1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aec20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aec20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aec24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aec24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aec28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aec28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aec2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AEC2Cu;
            // 0x2aec30: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEC34u;
}
