#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewBindVertexTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a6e0 - 0x17a778
void NewBindVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewBindVertexTable__13CDynamicAnimeFiP9mgCMemory_0x17a6e0");
#endif

    switch (ctx->pc) {
        case 0x17a724u: goto label_17a724;
        case 0x17a734u: goto label_17a734;
        case 0x17a748u: goto label_17a748;
        default: break;
    }

    ctx->pc = 0x17a6e0u;

    // 0x17a6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a6e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17a6e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a6ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a6f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a6f4: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x17a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x17a6f8: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x17a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x17a6fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17a700: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A704u;
    {
        const bool branch_taken_0x17a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A704u;
            // 0x17a708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a704) {
            ctx->pc = 0x17A718u;
            goto label_17a718;
        }
    }
    ctx->pc = 0x17A70Cu;
    // 0x17a70c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a710: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A710u;
    {
        const bool branch_taken_0x17a710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A710u;
            // 0x17a714: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a710) {
            ctx->pc = 0x17A71Cu;
            goto label_17a71c;
        }
    }
    ctx->pc = 0x17A718u;
label_17a718:
    // 0x17a718: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a718u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a71c:
    // 0x17a71c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A71Cu;
    SET_GPR_U32(ctx, 31, 0x17A724u);
    ctx->pc = 0x17A720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A71Cu;
            // 0x17a720: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A724u; }
        if (ctx->pc != 0x17A724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A724u; }
        if (ctx->pc != 0x17A724u) { return; }
    }
    ctx->pc = 0x17A724u;
label_17a724:
    // 0x17a724: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x17a724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17a728: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17a728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a72c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17A72Cu;
    {
        const bool branch_taken_0x17a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A72Cu;
            // 0x17a730: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a72c) {
            ctx->pc = 0x17A750u;
            goto label_17a750;
        }
    }
    ctx->pc = 0x17A734u;
label_17a734:
    // 0x17a734: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x17a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x17a738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a73c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x17a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17a740: 0xc049c86  jal         func_127218
    ctx->pc = 0x17A740u;
    SET_GPR_U32(ctx, 31, 0x17A748u);
    ctx->pc = 0x17A744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A740u;
            // 0x17a744: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A748u; }
        if (ctx->pc != 0x17A748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A748u; }
        if (ctx->pc != 0x17A748u) { return; }
    }
    ctx->pc = 0x17A748u;
label_17a748:
    // 0x17a748: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x17a748u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x17a74c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a74cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a750:
    // 0x17a750: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x17a750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17a754: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x17a754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a758: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x17A758u;
    {
        const bool branch_taken_0x17a758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a758) {
            ctx->pc = 0x17A734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a734;
        }
    }
    ctx->pc = 0x17A760u;
    // 0x17a760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a76c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a770: 0x3e00008  jr          $ra
    ctx->pc = 0x17A770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A770u;
            // 0x17a774: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A778u;
}
