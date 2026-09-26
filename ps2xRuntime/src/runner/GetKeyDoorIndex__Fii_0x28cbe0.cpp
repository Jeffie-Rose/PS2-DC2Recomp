#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetKeyDoorIndex__Fii
// Address: 0x28cbe0 - 0x28cc20
void GetKeyDoorIndex__Fii_0x28cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetKeyDoorIndex__Fii_0x28cbe0");
#endif

    ctx->pc = 0x28cbe0u;

    // 0x28cbe0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28cbe4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CBE4u;
    {
        const bool branch_taken_0x28cbe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cbe4) {
            ctx->pc = 0x28CC00u;
            goto label_28cc00;
        }
    }
    ctx->pc = 0x28CBECu;
    // 0x28cbec: 0x28a20011  slti        $v0, $a1, 0x11
    ctx->pc = 0x28cbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28cbf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CBF0u;
    {
        const bool branch_taken_0x28cbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cbf0) {
            ctx->pc = 0x28CC00u;
            goto label_28cc00;
        }
    }
    ctx->pc = 0x28CBF8u;
    // 0x28cbf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28CBF8u;
    {
        const bool branch_taken_0x28cbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBF8u;
            // 0x28cbfc: 0x2402015b  addiu       $v0, $zero, 0x15B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbf8) {
            ctx->pc = 0x28CC18u;
            goto label_28cc18;
        }
    }
    ctx->pc = 0x28CC00u;
label_28cc00:
    // 0x28cc00: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x28cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x28cc04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28cc08: 0x24423f60  addiu       $v0, $v0, 0x3F60
    ctx->pc = 0x28cc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16224));
    // 0x28cc0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28cc10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28cc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28cc14: 0x0  nop
    ctx->pc = 0x28cc14u;
    // NOP
label_28cc18:
    // 0x28cc18: 0x3e00008  jr          $ra
    ctx->pc = 0x28CC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CC20u;
}
