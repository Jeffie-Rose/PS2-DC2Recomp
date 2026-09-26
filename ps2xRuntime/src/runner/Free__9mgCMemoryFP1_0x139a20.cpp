#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Free__9mgCMemoryFP1
// Address: 0x139a20 - 0x139a94
void Free__9mgCMemoryFP1_0x139a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Free__9mgCMemoryFP1_0x139a20");
#endif

    switch (ctx->pc) {
        case 0x139a3cu: goto label_139a3c;
        case 0x139a78u: goto label_139a78;
        default: break;
    }

    ctx->pc = 0x139a20u;

    // 0x139a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139a24: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x139A24u;
    {
        const bool branch_taken_0x139a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A24u;
            // 0x139a28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a24) {
            ctx->pc = 0x139A88u;
            goto label_139a88;
        }
    }
    ctx->pc = 0x139A2Cu;
    // 0x139a2c: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x139a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x139a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139A34u;
    {
        const bool branch_taken_0x139a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A34u;
            // 0x139a38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a34) {
            ctx->pc = 0x139A58u;
            goto label_139a58;
        }
    }
    ctx->pc = 0x139A3Cu;
label_139a3c:
    // 0x139a3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x139a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x139a40: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139A40u;
    {
        const bool branch_taken_0x139a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x139a40) {
            ctx->pc = 0x139A50u;
            goto label_139a50;
        }
    }
    ctx->pc = 0x139A48u;
    // 0x139a48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139A48u;
    {
        const bool branch_taken_0x139a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A48u;
            // 0x139a4c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a48) {
            ctx->pc = 0x139A64u;
            goto label_139a64;
        }
    }
    ctx->pc = 0x139A50u;
label_139a50:
    // 0x139a50: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x139a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a54: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x139a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_139a58:
    // 0x139a58: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x139a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x139a5c: 0x1500fff7  bnez        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x139A5Cu;
    {
        const bool branch_taken_0x139a5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x139a5c) {
            ctx->pc = 0x139A3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139a3c;
        }
    }
    ctx->pc = 0x139A64u;
label_139a64:
    // 0x139a64: 0x0  nop
    ctx->pc = 0x139a64u;
    // NOP
    // 0x139a68: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x139A68u;
    {
        const bool branch_taken_0x139a68 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x139A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A68u;
            // 0x139a6c: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a68) {
            ctx->pc = 0x139A80u;
            goto label_139a80;
        }
    }
    ctx->pc = 0x139A70u;
    // 0x139a70: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x139A70u;
    SET_GPR_U32(ctx, 31, 0x139A78u);
    ctx->pc = 0x139A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139A70u;
            // 0x139a74: 0x24842590  addiu       $a0, $a0, 0x2590 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A78u; }
        if (ctx->pc != 0x139A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139A78u; }
        if (ctx->pc != 0x139A78u) { return; }
    }
    ctx->pc = 0x139A78u;
label_139a78:
    // 0x139a78: 0x1000ffff  b           . + 4 + (-0x1 << 2)
    ctx->pc = 0x139A78u;
    {
        const bool branch_taken_0x139a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a78) {
            ctx->pc = 0x139A78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139a78;
        }
    }
    ctx->pc = 0x139A80u;
label_139a80:
    // 0x139a80: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x139a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x139a84: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x139a84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_139a88:
    // 0x139a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x139A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A8Cu;
            // 0x139a90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139A94u;
}
