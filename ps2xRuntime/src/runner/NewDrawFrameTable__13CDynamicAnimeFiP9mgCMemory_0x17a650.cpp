#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NewDrawFrameTable__13CDynamicAnimeFiP9mgCMemory
// Address: 0x17a650 - 0x17a6d8
void NewDrawFrameTable__13CDynamicAnimeFiP9mgCMemory_0x17a650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NewDrawFrameTable__13CDynamicAnimeFiP9mgCMemory_0x17a650");
#endif

    switch (ctx->pc) {
        case 0x17a68cu: goto label_17a68c;
        case 0x17a6a0u: goto label_17a6a0;
        default: break;
    }

    ctx->pc = 0x17a650u;

    // 0x17a650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a65c: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x17a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x17a660: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x17a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x17a664: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x17a664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a668: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x17a668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x17a66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A66Cu;
    {
        const bool branch_taken_0x17a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A66Cu;
            // 0x17a670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a66c) {
            ctx->pc = 0x17A680u;
            goto label_17a680;
        }
    }
    ctx->pc = 0x17A674u;
    // 0x17a674: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x17a674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x17a678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A678u;
    {
        const bool branch_taken_0x17a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A678u;
            // 0x17a67c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a678) {
            ctx->pc = 0x17A684u;
            goto label_17a684;
        }
    }
    ctx->pc = 0x17A680u;
label_17a680:
    // 0x17a680: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x17a680u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_17a684:
    // 0x17a684: 0xc04e748  jal         func_139D20
    ctx->pc = 0x17A684u;
    SET_GPR_U32(ctx, 31, 0x17A68Cu);
    ctx->pc = 0x17A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A684u;
            // 0x17a688: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A68Cu; }
        if (ctx->pc != 0x17A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A68Cu; }
        if (ctx->pc != 0x17A68Cu) { return; }
    }
    ctx->pc = 0x17A68Cu;
label_17a68c:
    // 0x17a68c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x17a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x17a690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a694: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a698: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17A698u;
    {
        const bool branch_taken_0x17a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A698u;
            // 0x17a69c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a698) {
            ctx->pc = 0x17A6B4u;
            goto label_17a6b4;
        }
    }
    ctx->pc = 0x17A6A0u;
label_17a6a0:
    // 0x17a6a0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x17a6a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17a6a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x17a6ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17a6b0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x17a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_17a6b4:
    // 0x17a6b4: 0x0  nop
    ctx->pc = 0x17a6b4u;
    // NOP
    // 0x17a6b8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x17a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17a6bc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x17a6bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17a6c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x17A6C0u;
    {
        const bool branch_taken_0x17a6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a6c0) {
            ctx->pc = 0x17A6A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17a6a0;
        }
    }
    ctx->pc = 0x17A6C8u;
    // 0x17a6c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a6cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A6D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A6D0u;
            // 0x17a6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A6D8u;
}
