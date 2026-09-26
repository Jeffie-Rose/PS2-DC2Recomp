#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: toupper
// Address: 0x12a970 - 0x12a990
void toupper_0x12a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toupper_0x12a970");
#endif

    ctx->pc = 0x12a970u;

    // 0x12a970: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x12a970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x12a974: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x12a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x12a978: 0x24a51f01  addiu       $a1, $a1, 0x1F01
    ctx->pc = 0x12a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7937));
    // 0x12a97c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x12a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x12a980: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x12a980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a984: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12a988: 0x3e00008  jr          $ra
    ctx->pc = 0x12A988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A988u;
            // 0x12a98c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A990u;
}
