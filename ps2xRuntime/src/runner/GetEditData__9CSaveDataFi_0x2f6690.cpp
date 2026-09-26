#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditData__9CSaveDataFi
// Address: 0x2f6690 - 0x2f66c4
void GetEditData__9CSaveDataFi_0x2f6690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditData__9CSaveDataFi_0x2f6690");
#endif

    ctx->pc = 0x2f6690u;

    // 0x2f6690: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6690u;
    {
        const bool branch_taken_0x2f6690 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F6694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6690u;
            // 0x2f6694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6690) {
            ctx->pc = 0x2F66A8u;
            goto label_2f66a8;
        }
    }
    ctx->pc = 0x2F6698u;
    // 0x2f6698: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x2f6698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f669c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F669Cu;
    {
        const bool branch_taken_0x2f669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F66A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F669Cu;
            // 0x2f66a0: 0x24025510  addiu       $v0, $zero, 0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f669c) {
            ctx->pc = 0x2F66B0u;
            goto label_2f66b0;
        }
    }
    ctx->pc = 0x2F66A4u;
    // 0x2f66a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f66a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f66a8:
    // 0x2f66a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F66A8u;
    {
        const bool branch_taken_0x2f66a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f66a8) {
            ctx->pc = 0x2F66BCu;
            goto label_2f66bc;
        }
    }
    ctx->pc = 0x2F66B0u;
label_2f66b0:
    // 0x2f66b0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2f66b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f66b4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f66b8: 0x24421c24  addiu       $v0, $v0, 0x1C24
    ctx->pc = 0x2f66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7204));
label_2f66bc:
    // 0x2f66bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F66BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F66C4u;
}
