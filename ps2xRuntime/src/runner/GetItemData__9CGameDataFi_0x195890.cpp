#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemData__9CGameDataFi
// Address: 0x195890 - 0x195934
void GetItemData__9CGameDataFi_0x195890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemData__9CGameDataFi_0x195890");
#endif

    switch (ctx->pc) {
        case 0x1958a8u: goto label_1958a8;
        case 0x1958f4u: goto label_1958f4;
        default: break;
    }

    ctx->pc = 0x195890u;

    // 0x195890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x195898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19589c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19589cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958a0: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1958A0u;
    SET_GPR_U32(ctx, 31, 0x1958A8u);
    ctx->pc = 0x1958A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958A0u;
            // 0x1958a4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958A8u; }
        if (ctx->pc != 0x1958A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonData__9CGameDataFi_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958A8u; }
        if (ctx->pc != 0x1958A8u) { return; }
    }
    ctx->pc = 0x1958A8u;
label_1958a8:
    // 0x1958a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1958a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1958ac: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1958ACu;
    {
        const bool branch_taken_0x1958ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1958B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958ACu;
            // 0x1958b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958ac) {
            ctx->pc = 0x1958BCu;
            goto label_1958bc;
        }
    }
    ctx->pc = 0x1958B4u;
    // 0x1958b4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1958B4u;
    {
        const bool branch_taken_0x1958b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1958B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958B4u;
            // 0x1958b8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958b4) {
            ctx->pc = 0x195924u;
            goto label_195924;
        }
    }
    ctx->pc = 0x1958BCu;
label_1958bc:
    // 0x1958bc: 0x96230024  lhu         $v1, 0x24($s1)
    ctx->pc = 0x1958bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1958c0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x1958c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1958c4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1958c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1958c8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1958C8u;
    {
        const bool branch_taken_0x1958c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1958CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958C8u;
            // 0x1958cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958c8) {
            ctx->pc = 0x1958D8u;
            goto label_1958d8;
        }
    }
    ctx->pc = 0x1958D0u;
    // 0x1958d0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1958D0u;
    {
        const bool branch_taken_0x1958d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958d0) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x1958D8u;
label_1958d8:
    // 0x1958d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1958d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1958dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1958DCu;
    {
        const bool branch_taken_0x1958dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1958E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958DCu;
            // 0x1958e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958dc) {
            ctx->pc = 0x1958ECu;
            goto label_1958ec;
        }
    }
    ctx->pc = 0x1958E4u;
    // 0x1958e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1958E4u;
    {
        const bool branch_taken_0x1958e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1958e4) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x1958ECu;
label_1958ec:
    // 0x1958ec: 0xc0657c4  jal         func_195F10
    ctx->pc = 0x1958ECu;
    SET_GPR_U32(ctx, 31, 0x1958F4u);
    ctx->pc = 0x1958F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958ECu;
            // 0x1958f0: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195F10u;
    if (runtime->hasFunction(0x195F10u)) {
        auto targetFn = runtime->lookupFunction(0x195F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F4u; }
        if (ctx->pc != 0x1958F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertUsedItemType__Fi_0x195f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F4u; }
        if (ctx->pc != 0x1958F4u) { return; }
    }
    ctx->pc = 0x1958F4u;
label_1958f4:
    // 0x1958f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1958f8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1958F8u;
            // 0x1958fc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195910u;
            goto label_195910;
        }
    }
    ctx->pc = 0x195900u;
    // 0x195900: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x195900u;
    {
        const bool branch_taken_0x195900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x195904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195900u;
            // 0x195904: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195900) {
            ctx->pc = 0x195910u;
            goto label_195910;
        }
    }
    ctx->pc = 0x195908u;
    // 0x195908: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195908u;
    {
        const bool branch_taken_0x195908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195908u;
            // 0x19590c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195908) {
            ctx->pc = 0x195920u;
            goto label_195920;
        }
    }
    ctx->pc = 0x195910u;
label_195910:
    // 0x195910: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x195914: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x195914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x195918: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x195918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19591c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_195920:
    // 0x195920: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195924:
    // 0x195924: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195924u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195928: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19592c: 0x3e00008  jr          $ra
    ctx->pc = 0x19592Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19592Cu;
            // 0x195930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195934u;
}
