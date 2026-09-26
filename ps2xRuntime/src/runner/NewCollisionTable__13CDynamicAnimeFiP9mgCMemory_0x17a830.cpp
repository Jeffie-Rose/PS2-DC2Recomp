#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewCollisionTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a830 - 0x17a8b0
void NewCollisionTable__13CDynamicAnimeFiP9mgCMemory_0x17a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewCollisionTable__13CDynamicAnimeFiP9mgCMemory_0x17a830");
#endif

    switch (ctx->pc) {
        case 0x17a86cu: goto label_17a86c;
        case 0x17a87cu: goto label_17a87c;
        default: break;
    }

    ctx->pc = 0x17a830u;

    // 0x17a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a83c: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x17a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x17a840: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x17a844: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a848: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a84c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A84Cu;
    {
        const bool branch_taken_0x17a84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A84Cu;
            // 0x17a850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a84c) {
            ctx->pc = 0x17A860u;
            goto label_17a860;
        }
    }
    ctx->pc = 0x17A854u;
    // 0x17a854: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A858u;
    {
        const bool branch_taken_0x17a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A858u;
            // 0x17a85c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a858) {
            ctx->pc = 0x17A864u;
            goto label_17a864;
        }
    }
    ctx->pc = 0x17A860u;
label_17a860:
    // 0x17a860: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a864:
    // 0x17a864: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A864u;
    SET_GPR_U32(ctx, 31, 0x17A86Cu);
    ctx->pc = 0x17A868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A864u;
            // 0x17a868: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A86Cu; }
        if (ctx->pc != 0x17A86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A86Cu; }
        if (ctx->pc != 0x17A86Cu) { return; }
    }
    ctx->pc = 0x17A86Cu;
label_17a86c:
    // 0x17a86c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x17a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x17a870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a874: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17A874u;
    {
        const bool branch_taken_0x17a874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A874u;
            // 0x17a878: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a874) {
            ctx->pc = 0x17A890u;
            goto label_17a890;
        }
    }
    ctx->pc = 0x17A87Cu;
label_17a87c:
    // 0x17a87c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x17a880: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17a884: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17a884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17a888: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17a888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17a88c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_17a890:
    // 0x17a890: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x17a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17a894: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x17a894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a898: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17A898u;
    {
        const bool branch_taken_0x17a898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a898) {
            ctx->pc = 0x17A87Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a87c;
        }
    }
    ctx->pc = 0x17A8A0u;
    // 0x17a8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a8a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a8a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8A8u;
            // 0x17a8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A8B0u;
}
