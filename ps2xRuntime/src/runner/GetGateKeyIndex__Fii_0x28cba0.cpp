#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetGateKeyIndex__Fii
// Address: 0x28cba0 - 0x28cbe0
void GetGateKeyIndex__Fii_0x28cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetGateKeyIndex__Fii_0x28cba0");
#endif

    ctx->pc = 0x28cba0u;

    // 0x28cba0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28cba4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CBA4u;
    {
        const bool branch_taken_0x28cba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cba4) {
            ctx->pc = 0x28CBC0u;
            goto label_28cbc0;
        }
    }
    ctx->pc = 0x28CBACu;
    // 0x28cbac: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x28cbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28cbb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CBB0u;
    {
        const bool branch_taken_0x28cbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cbb0) {
            ctx->pc = 0x28CBC0u;
            goto label_28cbc0;
        }
    }
    ctx->pc = 0x28CBB8u;
    // 0x28cbb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28CBB8u;
    {
        const bool branch_taken_0x28cbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBB8u;
            // 0x28cbbc: 0x24020159  addiu       $v0, $zero, 0x159 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbb8) {
            ctx->pc = 0x28CBD8u;
            goto label_28cbd8;
        }
    }
    ctx->pc = 0x28CBC0u;
label_28cbc0:
    // 0x28cbc0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x28cbc4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28cbc8: 0x24423f40  addiu       $v0, $v0, 0x3F40
    ctx->pc = 0x28cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
    // 0x28cbcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28cbd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28cbd4: 0x0  nop
    ctx->pc = 0x28cbd4u;
    // NOP
label_28cbd8:
    // 0x28cbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CBE0u;
}
