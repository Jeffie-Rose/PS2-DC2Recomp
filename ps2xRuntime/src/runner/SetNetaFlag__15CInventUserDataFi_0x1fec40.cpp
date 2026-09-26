#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNetaFlag__15CInventUserDataFi
// Address: 0x1fec40 - 0x1fec94
void SetNetaFlag__15CInventUserDataFi_0x1fec40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNetaFlag__15CInventUserDataFi_0x1fec40");
#endif

    switch (ctx->pc) {
        case 0x1fec4cu: goto label_1fec4c;
        default: break;
    }

    ctx->pc = 0x1fec40u;

    // 0x1fec40: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fec40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fec44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fec44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fec48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fec48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fec4c:
    // 0x1fec4c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1fec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1fec50: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x1fec50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1fec54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC54u;
    {
        const bool branch_taken_0x1fec54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fec54) {
            ctx->pc = 0x1FEC64u;
            goto label_1fec64;
        }
    }
    ctx->pc = 0x1FEC5Cu;
    // 0x1fec5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEC5Cu;
    {
        const bool branch_taken_0x1fec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC5Cu;
            // 0x1fec60: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec5c) {
            ctx->pc = 0x1FEC74u;
            goto label_1fec74;
        }
    }
    ctx->pc = 0x1FEC64u;
label_1fec64:
    // 0x1fec64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1fec64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1fec68: 0x28e30200  slti        $v1, $a3, 0x200
    ctx->pc = 0x1fec68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1fec6c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FEC6Cu;
    {
        const bool branch_taken_0x1fec6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC6Cu;
            // 0x1fec70: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec6c) {
            ctx->pc = 0x1FEC4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fec4c;
        }
    }
    ctx->pc = 0x1FEC74u;
label_1fec74:
    // 0x1fec74: 0x0  nop
    ctx->pc = 0x1fec74u;
    // NOP
    // 0x1fec78: 0xc0082a  slt         $at, $a2, $zero
    ctx->pc = 0x1fec78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1fec7c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEC7Cu;
    {
        const bool branch_taken_0x1fec7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FEC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEC7Cu;
            // 0x1fec80: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fec7c) {
            ctx->pc = 0x1FEC8Cu;
            goto label_1fec8c;
        }
    }
    ctx->pc = 0x1FEC84u;
    // 0x1fec84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fec88: 0xa4650008  sh          $a1, 0x8($v1)
    ctx->pc = 0x1fec88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 5));
label_1fec8c:
    // 0x1fec8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEC94u;
}
