#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPlayerData__11CSphidaDataFi
// Address: 0x2f6f60 - 0x2f6f98
void GetPlayerData__11CSphidaDataFi_0x2f6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPlayerData__11CSphidaDataFi_0x2f6f60");
#endif

    ctx->pc = 0x2f6f60u;

    // 0x2f6f60: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F60u;
    {
        const bool branch_taken_0x2f6f60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F60u;
            // 0x2f6f64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f60) {
            ctx->pc = 0x2F6F78u;
            goto label_2f6f78;
        }
    }
    ctx->pc = 0x2F6F68u;
    // 0x2f6f68: 0x28a20040  slti        $v0, $a1, 0x40
    ctx->pc = 0x2f6f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2f6f6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6F6Cu;
    {
        const bool branch_taken_0x2f6f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6F6Cu;
            // 0x2f6f70: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6f6c) {
            ctx->pc = 0x2F6F80u;
            goto label_2f6f80;
        }
    }
    ctx->pc = 0x2F6F74u;
    // 0x2f6f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6f78:
    // 0x2f6f78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6F78u;
    {
        const bool branch_taken_0x2f6f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6f78) {
            ctx->pc = 0x2F6F90u;
            goto label_2f6f90;
        }
    }
    ctx->pc = 0x2F6F80u;
label_2f6f80:
    // 0x2f6f80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f6f84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2f6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2f6f88: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f6f8c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2f6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2f6f90:
    // 0x2f6f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6F98u;
}
