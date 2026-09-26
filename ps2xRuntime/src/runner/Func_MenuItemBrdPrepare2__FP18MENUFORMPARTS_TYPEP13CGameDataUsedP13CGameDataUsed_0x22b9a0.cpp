#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Func_MenuItemBrdPrepare2__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsed
// Address: 0x22b9a0 - 0x22ba78
void Func_MenuItemBrdPrepare2__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsed_0x22b9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Func_MenuItemBrdPrepare2__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsed_0x22b9a0");
#endif

    switch (ctx->pc) {
        case 0x22b9e4u: goto label_22b9e4;
        case 0x22b9fcu: goto label_22b9fc;
        case 0x22ba28u: goto label_22ba28;
        case 0x22ba34u: goto label_22ba34;
        default: break;
    }

    ctx->pc = 0x22b9a0u;

    // 0x22b9a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22b9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22b9a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22b9a8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22b9ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22b9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22b9b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22b9b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22b9b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b9bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x22b9bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b9c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x22b9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b9cc: 0x12a00020  beqz        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x22B9CCu;
    {
        const bool branch_taken_0x22b9cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9CCu;
            // 0x22b9d0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9cc) {
            ctx->pc = 0x22BA50u;
            goto label_22ba50;
        }
    }
    ctx->pc = 0x22B9D4u;
    // 0x22b9d4: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x22B9D4u;
    {
        const bool branch_taken_0x22b9d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9D4u;
            // 0x22b9d8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9d4) {
            ctx->pc = 0x22BA50u;
            goto label_22ba50;
        }
    }
    ctx->pc = 0x22B9DCu;
    // 0x22b9dc: 0xc068644  jal         func_1A1910
    ctx->pc = 0x22B9DCu;
    SET_GPR_U32(ctx, 31, 0x22B9E4u);
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9E4u; }
        if (ctx->pc != 0x22B9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B9E4u; }
        if (ctx->pc != 0x22B9E4u) { return; }
    }
    ctx->pc = 0x22B9E4u;
label_22b9e4:
    // 0x22b9e4: 0x86760002  lh          $s6, 0x2($s3)
    ctx->pc = 0x22b9e4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x22b9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b9ec: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x22b9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22b9f0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x22B9F0u;
    {
        const bool branch_taken_0x22b9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B9F0u;
            // 0x22b9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b9f0) {
            ctx->pc = 0x22BA4Cu;
            goto label_22ba4c;
        }
    }
    ctx->pc = 0x22B9F8u;
    // 0x22b9f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22b9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22b9fc:
    // 0x22b9fc: 0x2403017d  addiu       $v1, $zero, 0x17D
    ctx->pc = 0x22b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x22ba00: 0x16c30003  bne         $s6, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BA00u;
    {
        const bool branch_taken_0x22ba00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x22ba00) {
            ctx->pc = 0x22BA10u;
            goto label_22ba10;
        }
    }
    ctx->pc = 0x22BA08u;
    // 0x22ba08: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x22BA08u;
    {
        const bool branch_taken_0x22ba08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA08u;
            // 0x22ba0c: 0xa2a00045  sb          $zero, 0x45($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 69), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba08) {
            ctx->pc = 0x22BA38u;
            goto label_22ba38;
        }
    }
    ctx->pc = 0x22BA10u;
label_22ba10:
    // 0x22ba10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ba14: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x22ba14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x22ba18: 0x2923021  addu        $a2, $s4, $s2
    ctx->pc = 0x22ba18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x22ba1c: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x22ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x22ba20: 0xc0659c4  jal         func_196710
    ctx->pc = 0x22BA20u;
    SET_GPR_U32(ctx, 31, 0x22BA28u);
    ctx->pc = 0x22BA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA20u;
            // 0x22ba24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196710u;
    if (runtime->hasFunction(0x196710u)) {
        auto targetFn = runtime->lookupFunction(0x196710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA28u; }
        if (ctx->pc != 0x22BA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPtr__14CItemUseTargetFiPv_0x196710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA28u; }
        if (ctx->pc != 0x22BA28u) { return; }
    }
    ctx->pc = 0x22BA28u;
label_22ba28:
    // 0x22ba28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22ba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ba2c: 0xc08ae1c  jal         func_22B870
    ctx->pc = 0x22BA2Cu;
    SET_GPR_U32(ctx, 31, 0x22BA34u);
    ctx->pc = 0x22BA30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA2Cu;
            // 0x22ba30: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B870u;
    if (runtime->hasFunction(0x22B870u)) {
        auto targetFn = runtime->lookupFunction(0x22B870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA34u; }
        if (ctx->pc != 0x22BA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseVariable__FP13CGameDataUsedP14CItemUseTarget_0x22b870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BA34u; }
        if (ctx->pc != 0x22BA34u) { return; }
    }
    ctx->pc = 0x22BA34u;
label_22ba34:
    // 0x22ba34: 0xa2a20045  sb          $v0, 0x45($s5)
    ctx->pc = 0x22ba34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 69), (uint8_t)GPR_U32(ctx, 2));
label_22ba38:
    // 0x22ba38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ba38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ba3c: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x22ba3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22ba40: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x22ba40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x22ba44: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x22BA44u;
    {
        const bool branch_taken_0x22ba44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA44u;
            // 0x22ba48: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ba44) {
            ctx->pc = 0x22B9FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b9fc;
        }
    }
    ctx->pc = 0x22BA4Cu;
label_22ba4c:
    // 0x22ba4c: 0x0  nop
    ctx->pc = 0x22ba4cu;
    // NOP
label_22ba50:
    // 0x22ba50: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22ba50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ba54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22ba54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ba58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ba58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ba5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ba5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ba60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ba60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ba64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ba64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ba68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ba68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ba6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ba6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ba70: 0x3e00008  jr          $ra
    ctx->pc = 0x22BA70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BA70u;
            // 0x22ba74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22BA78u;
}
