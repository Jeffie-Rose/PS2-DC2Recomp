#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewBoundingBoxTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a780 - 0x17a830
void NewBoundingBoxTable__13CDynamicAnimeFiP9mgCMemory_0x17a780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewBoundingBoxTable__13CDynamicAnimeFiP9mgCMemory_0x17a780");
#endif

    switch (ctx->pc) {
        case 0x17a7ccu: goto label_17a7cc;
        case 0x17a7dcu: goto label_17a7dc;
        case 0x17a7f0u: goto label_17a7f0;
        default: break;
    }

    ctx->pc = 0x17a780u;

    // 0x17a780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a794: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x17a794u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x17a798: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17a79c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17a7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a7a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a7a8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a7ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A7ACu;
    {
        const bool branch_taken_0x17a7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7ACu;
            // 0x17a7b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7ac) {
            ctx->pc = 0x17A7C0u;
            goto label_17a7c0;
        }
    }
    ctx->pc = 0x17A7B4u;
    // 0x17a7b4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a7b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A7B8u;
    {
        const bool branch_taken_0x17a7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7B8u;
            // 0x17a7bc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7b8) {
            ctx->pc = 0x17A7C4u;
            goto label_17a7c4;
        }
    }
    ctx->pc = 0x17A7C0u;
label_17a7c0:
    // 0x17a7c0: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a7c4:
    // 0x17a7c4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A7C4u;
    SET_GPR_U32(ctx, 31, 0x17A7CCu);
    ctx->pc = 0x17A7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7C4u;
            // 0x17a7c8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7CCu; }
        if (ctx->pc != 0x17A7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7CCu; }
        if (ctx->pc != 0x17A7CCu) { return; }
    }
    ctx->pc = 0x17A7CCu;
label_17a7cc:
    // 0x17a7cc: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x17a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x17a7d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17A7D4u;
    {
        const bool branch_taken_0x17a7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7D4u;
            // 0x17a7d8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7d4) {
            ctx->pc = 0x17A808u;
            goto label_17a808;
        }
    }
    ctx->pc = 0x17A7DCu;
label_17a7dc:
    // 0x17a7dc: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17a7e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7e4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x17a7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17a7e8: 0xc049c86  jal         func_127218
    ctx->pc = 0x17A7E8u;
    SET_GPR_U32(ctx, 31, 0x17A7F0u);
    ctx->pc = 0x17A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A7E8u;
            // 0x17a7ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7F0u; }
        if (ctx->pc != 0x17A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7F0u; }
        if (ctx->pc != 0x17A7F0u) { return; }
    }
    ctx->pc = 0x17A7F0u;
label_17a7f0:
    // 0x17a7f0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x17a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x17a7f4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17a7fc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x17a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17a800: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x17a800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x17a804: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x17a804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_17a808:
    // 0x17a808: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x17a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x17a80c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x17a80cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a810: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x17A810u;
    {
        const bool branch_taken_0x17a810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a810) {
            ctx->pc = 0x17A7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a7dc;
        }
    }
    ctx->pc = 0x17A818u;
    // 0x17a818: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a828: 0x3e00008  jr          $ra
    ctx->pc = 0x17A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A828u;
            // 0x17a82c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A830u;
}
