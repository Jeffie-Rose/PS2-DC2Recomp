#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetHorlScore__11CSphidaDataFi
// Address: 0x2f6c30 - 0x2f6cf4
void GetHorlScore__11CSphidaDataFi_0x2f6c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetHorlScore__11CSphidaDataFi_0x2f6c30");
#endif

    switch (ctx->pc) {
        case 0x2f6c48u: goto label_2f6c48;
        case 0x2f6ca4u: goto label_2f6ca4;
        default: break;
    }

    ctx->pc = 0x2f6c30u;

    // 0x2f6c30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6c34: 0x14a20026  bne         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F6C34u;
    {
        const bool branch_taken_0x2f6c34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F6C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C34u;
            // 0x2f6c38: 0x28a10009  slti        $at, $a1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c34) {
            ctx->pc = 0x2F6CD0u;
            goto label_2f6cd0;
        }
    }
    ctx->pc = 0x2F6C3Cu;
    // 0x2f6c3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6c3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2f6c40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6c44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f6c44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c48:
    // 0x2f6c48: 0x8b6021  addu        $t4, $a0, $t3
    ctx->pc = 0x2f6c48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x2f6c4c: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x2f6c4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2f6c50: 0x95851448  lhu         $a1, 0x1448($t4)
    ctx->pc = 0x2f6c50u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5192)));
    // 0x2f6c54: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x2f6c54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x2f6c58: 0x9583144a  lhu         $v1, 0x144A($t4)
    ctx->pc = 0x2f6c58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5194)));
    // 0x2f6c5c: 0x9589144c  lhu         $t1, 0x144C($t4)
    ctx->pc = 0x2f6c5cu;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5196)));
    // 0x2f6c60: 0x9588144e  lhu         $t0, 0x144E($t4)
    ctx->pc = 0x2f6c60u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5198)));
    // 0x2f6c64: 0x95871450  lhu         $a3, 0x1450($t4)
    ctx->pc = 0x2f6c64u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5200)));
    // 0x2f6c68: 0x95861452  lhu         $a2, 0x1452($t4)
    ctx->pc = 0x2f6c68u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5202)));
    // 0x2f6c6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6c70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f6c74: 0x95851454  lhu         $a1, 0x1454($t4)
    ctx->pc = 0x2f6c74u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5204)));
    // 0x2f6c78: 0x95831456  lhu         $v1, 0x1456($t4)
    ctx->pc = 0x2f6c78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 5206)));
    // 0x2f6c7c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2f6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2f6c80: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2f6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2f6c84: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2f6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f6c88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2f6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2f6c8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6c90: 0x1940ffed  blez        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F6C90u;
    {
        const bool branch_taken_0x2f6c90 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x2F6C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C90u;
            // 0x2f6c94: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c90) {
            ctx->pc = 0x2F6C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6c48;
        }
    }
    ctx->pc = 0x2F6C98u;
    // 0x2f6c98: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x2f6c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f6c9c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6C9Cu;
    {
        const bool branch_taken_0x2f6c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6C9Cu;
            // 0x2f6ca0: 0xa3040  sll         $a2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c9c) {
            ctx->pc = 0x2F6CC4u;
            goto label_2f6cc4;
        }
    }
    ctx->pc = 0x2F6CA4u;
label_2f6ca4:
    // 0x2f6ca4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2f6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f6ca8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2f6ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2f6cac: 0x94651448  lhu         $a1, 0x1448($v1)
    ctx->pc = 0x2f6cacu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5192)));
    // 0x2f6cb0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x2f6cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2f6cb4: 0x29430009  slti        $v1, $t2, 0x9
    ctx->pc = 0x2f6cb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2f6cb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6cbc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F6CBCu;
    {
        const bool branch_taken_0x2f6cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cbc) {
            ctx->pc = 0x2F6CA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f6ca4;
        }
    }
    ctx->pc = 0x2F6CC4u;
label_2f6cc4:
    // 0x2f6cc4: 0x0  nop
    ctx->pc = 0x2f6cc4u;
    // NOP
    // 0x2f6cc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6CC8u;
    {
        const bool branch_taken_0x2f6cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cc8) {
            ctx->pc = 0x2F6CECu;
            goto label_2f6cec;
        }
    }
    ctx->pc = 0x2F6CD0u;
label_2f6cd0:
    // 0x2f6cd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6CD0u;
    {
        const bool branch_taken_0x2f6cd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6CD0u;
            // 0x2f6cd4: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cd0) {
            ctx->pc = 0x2F6CE0u;
            goto label_2f6ce0;
        }
    }
    ctx->pc = 0x2F6CD8u;
    // 0x2f6cd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6CD8u;
    {
        const bool branch_taken_0x2f6cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6CD8u;
            // 0x2f6cdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6cd8) {
            ctx->pc = 0x2F6CECu;
            goto label_2f6cec;
        }
    }
    ctx->pc = 0x2F6CE0u;
label_2f6ce0:
    // 0x2f6ce0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f6ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f6ce4: 0x94421448  lhu         $v0, 0x1448($v0)
    ctx->pc = 0x2f6ce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 5192)));
    // 0x2f6ce8: 0x0  nop
    ctx->pc = 0x2f6ce8u;
    // NOP
label_2f6cec:
    // 0x2f6cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6CF4u;
}
