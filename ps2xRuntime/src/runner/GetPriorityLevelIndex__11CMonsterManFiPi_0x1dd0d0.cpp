#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPriorityLevelIndex__11CMonsterManFiPi
// Address: 0x1dd0d0 - 0x1dd140
void GetPriorityLevelIndex__11CMonsterManFiPi_0x1dd0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPriorityLevelIndex__11CMonsterManFiPi_0x1dd0d0");
#endif

    switch (ctx->pc) {
        case 0x1dd0dcu: goto label_1dd0dc;
        default: break;
    }

    ctx->pc = 0x1dd0d0u;

    // 0x1dd0d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dd0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dd0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dd0dc:
    // 0x1dd0dc: 0x881021  addu        $v0, $a0, $t0
    ctx->pc = 0x1dd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1dd0e0: 0x8c490484  lw          $t1, 0x484($v0)
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1dd0e4: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DD0E4u;
    {
        const bool branch_taken_0x1dd0e4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd0e4) {
            ctx->pc = 0x1DD124u;
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DD0ECu;
    // 0x1dd0ec: 0x8522068a  lh          $v0, 0x68A($t1)
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 1674)));
    // 0x1dd0f0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1DD0F0u;
    {
        const bool branch_taken_0x1dd0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dd0f0) {
            ctx->pc = 0x1DD124u;
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DD0F8u;
    // 0x1dd0f8: 0x852212f0  lh          $v0, 0x12F0($t1)
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4848)));
    // 0x1dd0fc: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD0FCu;
    {
        const bool branch_taken_0x1dd0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dd0fc) {
            ctx->pc = 0x1DD124u;
            goto label_1dd124;
        }
    }
    ctx->pc = 0x1DD104u;
    // 0x1dd104: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD104u;
    {
        const bool branch_taken_0x1dd104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD104u;
            // 0x1dd108: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd104) {
            ctx->pc = 0x1DD118u;
            goto label_1dd118;
        }
    }
    ctx->pc = 0x1DD10Cu;
    // 0x1dd10c: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x1dd110: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1dd110u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1dd114: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1dd118:
    // 0x1dd118: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd11c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD11Cu;
    {
        const bool branch_taken_0x1dd11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD11Cu;
            // 0x1dd120: 0x8c420484  lw          $v0, 0x484($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd11c) {
            ctx->pc = 0x1DD138u;
            goto label_1dd138;
        }
    }
    ctx->pc = 0x1DD124u;
label_1dd124:
    // 0x1dd124: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dd124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dd128: 0x28e20018  slti        $v0, $a3, 0x18
    ctx->pc = 0x1dd128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dd12c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DD12Cu;
    {
        const bool branch_taken_0x1dd12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD12Cu;
            // 0x1dd130: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd12c) {
            ctx->pc = 0x1DD0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dd0dc;
        }
    }
    ctx->pc = 0x1DD134u;
    // 0x1dd134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd138:
    // 0x1dd138: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD140u;
}
