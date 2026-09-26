#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSphidaClubDef__Fi
// Address: 0x2e8dd0 - 0x2e8e14
void GetSphidaClubDef__Fi_0x2e8dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSphidaClubDef__Fi_0x2e8dd0");
#endif

    ctx->pc = 0x2e8dd0u;

    // 0x2e8dd0: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x2e8dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e8dd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8DD4u;
    {
        const bool branch_taken_0x2e8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8DD4u;
            // 0x2e8dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8dd4) {
            ctx->pc = 0x2E8DE8u;
            goto label_2e8de8;
        }
    }
    ctx->pc = 0x2E8DDCu;
    // 0x2e8ddc: 0x2881000f  slti        $at, $a0, 0xF
    ctx->pc = 0x2e8ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2e8de0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8DE0u;
    {
        const bool branch_taken_0x2e8de0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8de0) {
            ctx->pc = 0x2E8DF0u;
            goto label_2e8df0;
        }
    }
    ctx->pc = 0x2E8DE8u;
label_2e8de8:
    // 0x2e8de8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E8DE8u;
    {
        const bool branch_taken_0x2e8de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8de8) {
            ctx->pc = 0x2E8E0Cu;
            goto label_2e8e0c;
        }
    }
    ctx->pc = 0x2E8DF0u;
label_2e8df0:
    // 0x2e8df0: 0x2484fff7  addiu       $a0, $a0, -0x9
    ctx->pc = 0x2e8df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x2e8df4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2e8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2e8df8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2e8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2e8dfc: 0x2442cba0  addiu       $v0, $v0, -0x3460
    ctx->pc = 0x2e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953888));
    // 0x2e8e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e8e04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e8e0c:
    // 0x2e8e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8E14u;
}
