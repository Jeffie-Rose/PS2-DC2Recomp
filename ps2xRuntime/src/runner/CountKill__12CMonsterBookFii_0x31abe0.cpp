#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CountKill__12CMonsterBookFii
// Address: 0x31abe0 - 0x31ac48
void CountKill__12CMonsterBookFii_0x31abe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CountKill__12CMonsterBookFii_0x31abe0");
#endif

    ctx->pc = 0x31abe0u;

    // 0x31abe0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ABE0u;
    {
        const bool branch_taken_0x31abe0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x31ABE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABE0u;
            // 0x31abe4: 0x28a20180  slti        $v0, $a1, 0x180 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)384) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abe0) {
            ctx->pc = 0x31ABF0u;
            goto label_31abf0;
        }
    }
    ctx->pc = 0x31ABE8u;
    // 0x31abe8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31ABE8u;
    {
        const bool branch_taken_0x31abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABE8u;
            // 0x31abec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abe8) {
            ctx->pc = 0x31AC40u;
            goto label_31ac40;
        }
    }
    ctx->pc = 0x31ABF0u;
label_31abf0:
    // 0x31abf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31ABF0u;
    {
        const bool branch_taken_0x31abf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABF0u;
            // 0x31abf4: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abf0) {
            ctx->pc = 0x31AC00u;
            goto label_31ac00;
        }
    }
    ctx->pc = 0x31ABF8u;
    // 0x31abf8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31ABF8u;
    {
        const bool branch_taken_0x31abf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31ABFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31ABF8u;
            // 0x31abfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31abf8) {
            ctx->pc = 0x31AC40u;
            goto label_31ac40;
        }
    }
    ctx->pc = 0x31AC00u;
label_31ac00:
    // 0x31ac00: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x31ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x31ac04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31ac08: 0x3401ea61  ori         $at, $zero, 0xEA61
    ctx->pc = 0x31ac08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60001);
    // 0x31ac0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31ac10: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x31ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31ac14: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x31ac14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31ac18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ac1c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x31ac1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x31ac20: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x31ac20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31ac24: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x31ac24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x31ac28: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AC28u;
    {
        const bool branch_taken_0x31ac28 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31AC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AC28u;
            // 0x31ac2c: 0x24850002  addiu       $a1, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ac28) {
            ctx->pc = 0x31AC38u;
            goto label_31ac38;
        }
    }
    ctx->pc = 0x31AC30u;
    // 0x31ac30: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x31ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
    // 0x31ac34: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x31ac34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_31ac38:
    // 0x31ac38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x31ac38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31ac3c: 0x0  nop
    ctx->pc = 0x31ac3cu;
    // NOP
label_31ac40:
    // 0x31ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x31AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AC48u;
}
