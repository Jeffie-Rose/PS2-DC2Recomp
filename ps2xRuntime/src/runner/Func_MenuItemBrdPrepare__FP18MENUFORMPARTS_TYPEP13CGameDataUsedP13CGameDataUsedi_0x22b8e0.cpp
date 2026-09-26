#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MenuItemBrdPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsedi
// Address: 0x22b8e0 - 0x22b998
void Func_MenuItemBrdPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsedi_0x22b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MenuItemBrdPrepare__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsedi_0x22b8e0");
#endif

    switch (ctx->pc) {
        case 0x22b928u: goto label_22b928;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b94cu: goto label_22b94c;
        case 0x22b958u: goto label_22b958;
        default: break;
    }

    ctx->pc = 0x22b8e0u;

    // 0x22b8e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22b8e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22b8e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22b8ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22b8f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22b8f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b8f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b8fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22b8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22b904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b908: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b90c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22b90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b910: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x22B910u;
    {
        const bool branch_taken_0x22b910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B910u;
            // 0x22b914: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b910) {
            ctx->pc = 0x22B970u;
            goto label_22b970;
        }
    }
    ctx->pc = 0x22B918u;
    // 0x22b918: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22b918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b91c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b920: 0xc068644  jal         func_1A1910
    ctx->pc = 0x22B920u;
    SET_GPR_U32(ctx, 31, 0x22B928u);
    ctx->pc = 0x22B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B920u;
            // 0x22b924: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B928u; }
        if (ctx->pc != 0x22B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B928u; }
        if (ctx->pc != 0x22B928u) { return; }
    }
    ctx->pc = 0x22B928u;
label_22b928:
    // 0x22b928: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b92c: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x22b92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22b930: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x22B930u;
    {
        const bool branch_taken_0x22b930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B930u;
            // 0x22b934: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b930) {
            ctx->pc = 0x22B970u;
            goto label_22b970;
        }
    }
    ctx->pc = 0x22B938u;
    // 0x22b938: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22b938u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b93c:
    // 0x22b93c: 0x2563021  addu        $a2, $s2, $s6
    ctx->pc = 0x22b93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x22b940: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x22b944: 0xc0659c4  jal         func_196710
    ctx->pc = 0x22B944u;
    SET_GPR_U32(ctx, 31, 0x22B94Cu);
    ctx->pc = 0x22B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B944u;
            // 0x22b948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B94Cu; }
        if (ctx->pc != 0x22B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B94Cu; }
        if (ctx->pc != 0x22B94Cu) { return; }
    }
    ctx->pc = 0x22B94Cu;
label_22b94c:
    // 0x22b94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b950: 0xc08ae1c  jal         func_22B870
    ctx->pc = 0x22B950u;
    SET_GPR_U32(ctx, 31, 0x22B958u);
    ctx->pc = 0x22B954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B950u;
            // 0x22b954: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B870u;
    if (runtime->hasFunction(0x22B870u)) {
        auto targetFn = runtime->lookupFunction(0x22B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B958u; }
        if (ctx->pc != 0x22B958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget_0x22b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B958u; }
        if (ctx->pc != 0x22B958u) { return; }
    }
    ctx->pc = 0x22B958u;
label_22b958:
    // 0x22b958: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22b958u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x22b95c: 0xa2620045  sb          $v0, 0x45($s3)
    ctx->pc = 0x22b95cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b960: 0x2b4182a  slt         $v1, $s5, $s4
    ctx->pc = 0x22b960u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22b964: 0x26d6006c  addiu       $s6, $s6, 0x6C
    ctx->pc = 0x22b964u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 108));
    // 0x22b968: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x22B968u;
    {
        const bool branch_taken_0x22b968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B968u;
            // 0x22b96c: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b968) {
            ctx->pc = 0x22B93Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b93c;
        }
    }
    ctx->pc = 0x22B970u;
label_22b970:
    // 0x22b970: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22b974: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22b974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22b978: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22b978u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b97c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22b97cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b98c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b98cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b990: 0x3e00008  jr          $ra
    ctx->pc = 0x22B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B990u;
            // 0x22b994: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B998u;
}
