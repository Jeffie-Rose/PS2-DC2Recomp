#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsEnableChangeRoboParts__FP13CGameDataUsed
// Address: 0x23a680 - 0x23a7b4
void IsEnableChangeRoboParts__FP13CGameDataUsed_0x23a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEnableChangeRoboParts__FP13CGameDataUsed_0x23a680");
#endif

    switch (ctx->pc) {
        case 0x23a6ccu: goto label_23a6cc;
        case 0x23a6e4u: goto label_23a6e4;
        case 0x23a6f0u: goto label_23a6f0;
        case 0x23a718u: goto label_23a718;
        case 0x23a778u: goto label_23a778;
        default: break;
    }

    ctx->pc = 0x23a680u;

    // 0x23a680: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23a684: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23a688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23a688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x23a68c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23a68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23a690: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23a690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23a694: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23a698: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23a698u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a69c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23a6a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23a6a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23a6a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23a6ac: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x23a6acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23a6b0: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23A6B0u;
    {
        const bool branch_taken_0x23a6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6B0u;
            // 0x23a6b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b0) {
            ctx->pc = 0x23A788u;
            goto label_23a788;
        }
    }
    ctx->pc = 0x23A6B8u;
    // 0x23a6b8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a6bc: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x23a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x23a6c0: 0x8c24d8c8  lw          $a0, -0x2738($at)
    ctx->pc = 0x23a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23a6c4: 0xc065c00  jal         func_197000
    ctx->pc = 0x23A6C4u;
    SET_GPR_U32(ctx, 31, 0x23A6CCu);
    ctx->pc = 0x23A6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6C4u;
            // 0x23a6c8: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197000u;
    if (runtime->hasFunction(0x197000u)) {
        auto targetFn = runtime->lookupFunction(0x197000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6CCu; }
        if (ctx->pc != 0x23A6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowRoboUseCapacity__FP9ROBO_DATAPi_0x197000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6CCu; }
        if (ctx->pc != 0x23A6CCu) { return; }
    }
    ctx->pc = 0x23A6CCu;
label_23a6cc:
    // 0x23a6cc: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x23a6ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x23a6d0: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x23a6d4: 0x82920004  lb          $s2, 0x4($s4)
    ctx->pc = 0x23a6d4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x23a6d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6dc: 0xc06567c  jal         func_1959F0
    ctx->pc = 0x23A6DCu;
    SET_GPR_U32(ctx, 31, 0x23A6E4u);
    ctx->pc = 0x23A6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6DCu;
            // 0x23a6e0: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959F0u;
    if (runtime->hasFunction(0x1959F0u)) {
        auto targetFn = runtime->lookupFunction(0x1959F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6E4u; }
        if (ctx->pc != 0x23A6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboData__9CGameDataFi_0x1959f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A6E4u; }
        if (ctx->pc != 0x23A6E4u) { return; }
    }
    ctx->pc = 0x23A6E4u;
label_23a6e4:
    // 0x23a6e4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23a6e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a6ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23a6ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a6f0:
    // 0x23a6f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23a6f4: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23a6f8: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x23a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x23a6fc: 0x80620034  lb          $v0, 0x34($v1)
    ctx->pc = 0x23a6fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x23a700: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A700u;
    {
        const bool branch_taken_0x23a700 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a700) {
            ctx->pc = 0x23A728u;
            goto label_23a728;
        }
    }
    ctx->pc = 0x23A708u;
    // 0x23a708: 0x84650032  lh          $a1, 0x32($v1)
    ctx->pc = 0x23a708u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x23a70c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x23a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x23a710: 0xc06567c  jal         func_1959F0
    ctx->pc = 0x23A710u;
    SET_GPR_U32(ctx, 31, 0x23A718u);
    ctx->pc = 0x23A714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A710u;
            // 0x23a714: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959F0u;
    if (runtime->hasFunction(0x1959F0u)) {
        auto targetFn = runtime->lookupFunction(0x1959F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A718u; }
        if (ctx->pc != 0x23A718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboData__9CGameDataFi_0x1959f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A718u; }
        if (ctx->pc != 0x23A718u) { return; }
    }
    ctx->pc = 0x23A718u;
label_23a718:
    // 0x23a718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A718u;
    {
        const bool branch_taken_0x23a718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a718) {
            ctx->pc = 0x23A728u;
            goto label_23a728;
        }
    }
    ctx->pc = 0x23A720u;
    // 0x23a720: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x23a720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23a724: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x23a724u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_23a728:
    // 0x23a728: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23a72c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x23a72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x23a730: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23A730u;
    {
        const bool branch_taken_0x23a730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A730u;
            // 0x23a734: 0x2673006c  addiu       $s3, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a730) {
            ctx->pc = 0x23A6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a6f0;
        }
    }
    ctx->pc = 0x23A738u;
    // 0x23a738: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a73c: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x23a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x23a740: 0xa78495f0  sh          $a0, -0x6A10($gp)
    ctx->pc = 0x23a740u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940144), (uint16_t)GPR_U32(ctx, 4));
    // 0x23a744: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x23a748: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x23a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x23a74c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23a74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23a750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A750u;
    {
        const bool branch_taken_0x23a750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a750) {
            ctx->pc = 0x23A760u;
            goto label_23a760;
        }
    }
    ctx->pc = 0x23A758u;
    // 0x23a758: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23a758u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a75c: 0xa78095f0  sh          $zero, -0x6A10($gp)
    ctx->pc = 0x23a75cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940144), (uint16_t)GPR_U32(ctx, 0));
label_23a760:
    // 0x23a760: 0x82830004  lb          $v1, 0x4($s4)
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x23a764: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23a768: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A768u;
    {
        const bool branch_taken_0x23a768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A768u;
            // 0x23a76c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a768) {
            ctx->pc = 0x23A78Cu;
            goto label_23a78c;
        }
    }
    ctx->pc = 0x23A770u;
    // 0x23a770: 0xc066154  jal         func_198550
    ctx->pc = 0x23A770u;
    SET_GPR_U32(ctx, 31, 0x23A778u);
    ctx->pc = 0x23A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A770u;
            // 0x23a774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198550u;
    if (runtime->hasFunction(0x198550u)) {
        auto targetFn = runtime->lookupFunction(0x198550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A778u; }
        if (ctx->pc != 0x23A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBroken__13CGameDataUsedFv_0x198550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A778u; }
        if (ctx->pc != 0x23A778u) { return; }
    }
    ctx->pc = 0x23A778u;
label_23a778:
    // 0x23a778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A778u;
    {
        const bool branch_taken_0x23a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A778u;
            // 0x23a77c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a778) {
            ctx->pc = 0x23A788u;
            goto label_23a788;
        }
    }
    ctx->pc = 0x23A780u;
    // 0x23a780: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23a780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a784: 0xa78295f0  sh          $v0, -0x6A10($gp)
    ctx->pc = 0x23a784u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940144), (uint16_t)GPR_U32(ctx, 2));
label_23a788:
    // 0x23a788: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x23a788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23a78c:
    // 0x23a78c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23a78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23a790: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23a790u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23a794: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23a794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23a798: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23a79c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a79cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23a7a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a7a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a7a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a7a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a7a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x23A7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7ACu;
            // 0x23a7b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23A7B4u;
}
