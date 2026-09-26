#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewFixVertexTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a5b0 - 0x17a648
void NewFixVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewFixVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a5b0");
#endif

    switch (ctx->pc) {
        case 0x17a5f4u: goto label_17a5f4;
        case 0x17a604u: goto label_17a604;
        case 0x17a618u: goto label_17a618;
        default: break;
    }

    ctx->pc = 0x17a5b0u;

    // 0x17a5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a5b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a5bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a5c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a5c4: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x17a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x17a5c8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x17a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x17a5cc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17a5d0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a5d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A5D4u;
    {
        const bool branch_taken_0x17a5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5D4u;
            // 0x17a5d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5d4) {
            ctx->pc = 0x17A5E8u;
            goto label_17a5e8;
        }
    }
    ctx->pc = 0x17A5DCu;
    // 0x17a5dc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a5e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A5E0u;
    {
        const bool branch_taken_0x17a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5E0u;
            // 0x17a5e4: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5e0) {
            ctx->pc = 0x17A5ECu;
            goto label_17a5ec;
        }
    }
    ctx->pc = 0x17A5E8u;
label_17a5e8:
    // 0x17a5e8: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a5ec:
    // 0x17a5ec: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A5ECu;
    SET_GPR_U32(ctx, 31, 0x17A5F4u);
    ctx->pc = 0x17A5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5ECu;
            // 0x17a5f0: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5F4u; }
        if (ctx->pc != 0x17A5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A5F4u; }
        if (ctx->pc != 0x17A5F4u) { return; }
    }
    ctx->pc = 0x17A5F4u;
label_17a5f4:
    // 0x17a5f4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x17a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x17a5f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a5fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A5FCu;
    {
        const bool branch_taken_0x17a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A5FCu;
            // 0x17a600: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5fc) {
            ctx->pc = 0x17A620u;
            goto label_17a620;
        }
    }
    ctx->pc = 0x17A604u;
label_17a604:
    // 0x17a604: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x17a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17a608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a60c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x17a60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17a610: 0xc049c86  jal         func_127218
    ctx->pc = 0x17A610u;
    SET_GPR_U32(ctx, 31, 0x17A618u);
    ctx->pc = 0x17A614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A610u;
            // 0x17a614: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A618u; }
        if (ctx->pc != 0x17A618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A618u; }
        if (ctx->pc != 0x17A618u) { return; }
    }
    ctx->pc = 0x17A618u;
label_17a618:
    // 0x17a618: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x17a618u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x17a61c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a61cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a620:
    // 0x17a620: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17a624: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17a624u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a628: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x17A628u;
    {
        const bool branch_taken_0x17a628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a628) {
            ctx->pc = 0x17A604u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a604;
        }
    }
    ctx->pc = 0x17A630u;
    // 0x17a630: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a634: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a63c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a640: 0x3e00008  jr          $ra
    ctx->pc = 0x17A640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A640u;
            // 0x17a644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A648u;
}
