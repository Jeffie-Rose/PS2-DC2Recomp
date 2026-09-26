#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sendIpuCommand
// Address: 0x10ab30 - 0x10ab5c
void _sendIpuCommand_0x10ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendIpuCommand_0x10ab30");
#endif

    ctx->pc = 0x10ab30u;

    // 0x10ab30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ab34: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x10ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x10ab38: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10ab3c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x10ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x10ab40: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x10ab44: 0x24630490  addiu       $v1, $v1, 0x490
    ctx->pc = 0x10ab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x10ab48: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x10ab4c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x10ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x10ab50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10ab54: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10AB54u;
            // 0x10ab58: 0xac820818  sw          $v0, 0x818($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10AB5Cu;
}
