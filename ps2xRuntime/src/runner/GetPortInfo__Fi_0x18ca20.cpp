#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPortInfo__Fi
// Address: 0x18ca20 - 0x18ca54
void GetPortInfo__Fi_0x18ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPortInfo__Fi_0x18ca20");
#endif

    ctx->pc = 0x18ca20u;

    // 0x18ca20: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CA20u;
    {
        const bool branch_taken_0x18ca20 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x18CA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA20u;
            // 0x18ca24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca20) {
            ctx->pc = 0x18CA34u;
            goto label_18ca34;
        }
    }
    ctx->pc = 0x18CA28u;
    // 0x18ca28: 0x28810011  slti        $at, $a0, 0x11
    ctx->pc = 0x18ca28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x18ca2c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CA2Cu;
    {
        const bool branch_taken_0x18ca2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CA2Cu;
            // 0x18ca30: 0x2403029c  addiu       $v1, $zero, 0x29C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca2c) {
            ctx->pc = 0x18CA3Cu;
            goto label_18ca3c;
        }
    }
    ctx->pc = 0x18CA34u;
label_18ca34:
    // 0x18ca34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CA34u;
    {
        const bool branch_taken_0x18ca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca34) {
            ctx->pc = 0x18CA4Cu;
            goto label_18ca4c;
        }
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18ca40: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x18ca40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x18ca44: 0x24423680  addiu       $v0, $v0, 0x3680
    ctx->pc = 0x18ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13952));
    // 0x18ca48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18ca4c:
    // 0x18ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CA54u;
}
