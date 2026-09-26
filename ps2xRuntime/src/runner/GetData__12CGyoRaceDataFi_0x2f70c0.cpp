#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetData__12CGyoRaceDataFi
// Address: 0x2f70c0 - 0x2f70f8
void GetData__12CGyoRaceDataFi_0x2f70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetData__12CGyoRaceDataFi_0x2f70c0");
#endif

    ctx->pc = 0x2f70c0u;

    // 0x2f70c0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F70C0u;
    {
        const bool branch_taken_0x2f70c0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F70C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F70C0u;
            // 0x2f70c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70c0) {
            ctx->pc = 0x2F70D8u;
            goto label_2f70d8;
        }
    }
    ctx->pc = 0x2F70C8u;
    // 0x2f70c8: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2f70c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f70cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F70CCu;
    {
        const bool branch_taken_0x2f70cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F70D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F70CCu;
            // 0x2f70d0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70cc) {
            ctx->pc = 0x2F70E0u;
            goto label_2f70e0;
        }
    }
    ctx->pc = 0x2F70D4u;
    // 0x2f70d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f70d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f70d8:
    // 0x2f70d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F70D8u;
    {
        const bool branch_taken_0x2f70d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f70d8) {
            ctx->pc = 0x2F70F0u;
            goto label_2f70f0;
        }
    }
    ctx->pc = 0x2F70E0u;
label_2f70e0:
    // 0x2f70e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f70e4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2f70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2f70e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f70ec: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x2f70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_2f70f0:
    // 0x2f70f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F70F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F70F8u;
}
