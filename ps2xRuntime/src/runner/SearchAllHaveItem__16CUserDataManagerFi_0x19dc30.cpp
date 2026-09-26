#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchAllHaveItem__16CUserDataManagerFi
// Address: 0x19dc30 - 0x19dcd4
void SearchAllHaveItem__16CUserDataManagerFi_0x19dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchAllHaveItem__16CUserDataManagerFi_0x19dc30");
#endif

    switch (ctx->pc) {
        case 0x19dc50u: goto label_19dc50;
        case 0x19dc5cu: goto label_19dc5c;
        case 0x19dc6cu: goto label_19dc6c;
        default: break;
    }

    ctx->pc = 0x19dc30u;

    // 0x19dc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19dc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19dc34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19dc38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19dc3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19dc40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19dc44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19dc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc48: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x19DC48u;
    SET_GPR_U32(ctx, 31, 0x19DC50u);
    ctx->pc = 0x19DC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC48u;
            // 0x19dc4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC50u; }
        if (ctx->pc != 0x19DC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19DC50u; }
        if (ctx->pc != 0x19DC50u) { return; }
    }
    ctx->pc = 0x19DC50u;
label_19dc50:
    // 0x19dc50: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x19DC50u;
    {
        const bool branch_taken_0x19dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC50u;
            // 0x19dc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc50) {
            ctx->pc = 0x19DCC0u;
            goto label_19dcc0;
        }
    }
    ctx->pc = 0x19DC58u;
    // 0x19dc58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19dc58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dc5c:
    // 0x19dc5c: 0x2281821  addu        $v1, $s1, $t0
    ctx->pc = 0x19dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x19dc60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19dc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc64: 0x24653f48  addiu       $a1, $v1, 0x3F48
    ctx->pc = 0x19dc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16200));
    // 0x19dc68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19dc68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dc6c:
    // 0x19dc6c: 0x0  nop
    ctx->pc = 0x19dc6cu;
    // NOP
    // 0x19dc70: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x19dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x19dc74: 0x8463002e  lh          $v1, 0x2E($v1)
    ctx->pc = 0x19dc74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x19dc78: 0x16030009  bne         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19DC78u;
    {
        const bool branch_taken_0x19dc78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19dc78) {
            ctx->pc = 0x19DCA0u;
            goto label_19dca0;
        }
    }
    ctx->pc = 0x19DC80u;
    // 0x19dc80: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x19dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19dc84: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x19dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19dc88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19dc8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x19dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19dc90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19dc94: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19dc98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x19DC98u;
    {
        const bool branch_taken_0x19dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DC98u;
            // 0x19dc9c: 0x2442002c  addiu       $v0, $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dc98) {
            ctx->pc = 0x19DCB0u;
            goto label_19dcb0;
        }
    }
    ctx->pc = 0x19DCA0u;
label_19dca0:
    // 0x19dca0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x19dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x19dca4: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x19dca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x19dca8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19DCA8u;
    {
        const bool branch_taken_0x19dca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCA8u;
            // 0x19dcac: 0x24e7006c  addiu       $a3, $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dca8) {
            ctx->pc = 0x19DC6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19dc6c;
        }
    }
    ctx->pc = 0x19DCB0u;
label_19dcb0:
    // 0x19dcb0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x19dcb4: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x19dcb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19dcb8: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19DCB8u;
    {
        const bool branch_taken_0x19dcb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCB8u;
            // 0x19dcbc: 0x2508038c  addiu       $t0, $t0, 0x38C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 908));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dcb8) {
            ctx->pc = 0x19DC5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19dc5c;
        }
    }
    ctx->pc = 0x19DCC0u;
label_19dcc0:
    // 0x19dcc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dcc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19dcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19dcc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dccc: 0x3e00008  jr          $ra
    ctx->pc = 0x19DCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19DCCCu;
            // 0x19dcd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19DCD4u;
}
