#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SET_DRAW_FLAG__FP12RS_STACKDATAi
// Address: 0x2e5840 - 0x2e58f8
void ps2__SPT_SET_DRAW_FLAG__FP12RS_STACKDATAi_0x2e5840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SET_DRAW_FLAG__FP12RS_STACKDATAi_0x2e5840");
#endif

    switch (ctx->pc) {
        case 0x2e586cu: goto label_2e586c;
        case 0x2e587cu: goto label_2e587c;
        case 0x2e5894u: goto label_2e5894;
        case 0x2e58a4u: goto label_2e58a4;
        case 0x2e58acu: goto label_2e58ac;
        default: break;
    }

    ctx->pc = 0x2e5840u;

    // 0x2e5840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5844: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e5848: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e584c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5850: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x2e5850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e5854: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e5858: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e5858u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e585c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5860: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2e5860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5864: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5864u;
    SET_GPR_U32(ctx, 31, 0x2E586Cu);
    ctx->pc = 0x2E5868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5864u;
            // 0x2e5868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E586Cu; }
        if (ctx->pc != 0x2E586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E586Cu; }
        if (ctx->pc != 0x2E586Cu) { return; }
    }
    ctx->pc = 0x2E586Cu;
label_2e586c:
    // 0x2e586c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5870: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e5870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5874: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E5874u;
    SET_GPR_U32(ctx, 31, 0x2E587Cu);
    ctx->pc = 0x2E5878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5874u;
            // 0x2e5878: 0x24940008  addiu       $s4, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E587Cu; }
        if (ctx->pc != 0x2E587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E587Cu; }
        if (ctx->pc != 0x2E587Cu) { return; }
    }
    ctx->pc = 0x2E587Cu;
label_2e587c:
    // 0x2e587c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e587cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5880: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2e5880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e5884: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5884u;
    {
        const bool branch_taken_0x2e5884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5884u;
            // 0x2e5888: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5884) {
            ctx->pc = 0x2E589Cu;
            goto label_2e589c;
        }
    }
    ctx->pc = 0x2E588Cu;
    // 0x2e588c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E588Cu;
    SET_GPR_U32(ctx, 31, 0x2E5894u);
    ctx->pc = 0x2E5890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E588Cu;
            // 0x2e5890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5894u; }
        if (ctx->pc != 0x2E5894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5894u; }
        if (ctx->pc != 0x2E5894u) { return; }
    }
    ctx->pc = 0x2E5894u;
label_2e5894:
    // 0x2e5894: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e5894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5898: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e5898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e589c:
    // 0x2e589c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E589Cu;
    {
        const bool branch_taken_0x2e589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e589c) {
            ctx->pc = 0x2E58C4u;
            goto label_2e58c4;
        }
    }
    ctx->pc = 0x2E58A4u;
label_2e58a4:
    // 0x2e58a4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E58A4u;
    SET_GPR_U32(ctx, 31, 0x2E58ACu);
    ctx->pc = 0x2E58A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58A4u;
            // 0x2e58a8: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58ACu; }
        if (ctx->pc != 0x2E58ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E58ACu; }
        if (ctx->pc != 0x2E58ACu) { return; }
    }
    ctx->pc = 0x2E58ACu;
label_2e58ac:
    // 0x2e58ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E58ACu;
    {
        const bool branch_taken_0x2e58ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e58ac) {
            ctx->pc = 0x2E58BCu;
            goto label_2e58bc;
        }
    }
    ctx->pc = 0x2E58B4u;
    // 0x2e58b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E58B4u;
    {
        const bool branch_taken_0x2e58b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E58B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58B4u;
            // 0x2e58b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58b4) {
            ctx->pc = 0x2E58D8u;
            goto label_2e58d8;
        }
    }
    ctx->pc = 0x2E58BCu;
label_2e58bc:
    // 0x2e58bc: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2e58bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2e58c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e58c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e58c4:
    // 0x2e58c4: 0x0  nop
    ctx->pc = 0x2e58c4u;
    // NOP
    // 0x2e58c8: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x2e58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e58cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e58ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e58d0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E58D0u;
    {
        const bool branch_taken_0x2e58d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E58D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58D0u;
            // 0x2e58d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58d0) {
            ctx->pc = 0x2E58A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e58a4;
        }
    }
    ctx->pc = 0x2E58D8u;
label_2e58d8:
    // 0x2e58d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e58d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e58dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e58dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e58e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e58e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e58e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e58e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e58e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e58e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e58ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e58ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e58f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E58F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E58F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E58F0u;
            // 0x2e58f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E58F8u;
}
