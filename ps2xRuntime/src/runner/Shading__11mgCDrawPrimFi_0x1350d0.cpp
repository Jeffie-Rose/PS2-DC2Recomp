#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Shading__11mgCDrawPrimFi
// Address: 0x1350d0 - 0x1350f0
void Shading__11mgCDrawPrimFi_0x1350d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shading__11mgCDrawPrimFi_0x1350d0");
#endif

    ctx->pc = 0x1350d0u;

    // 0x1350d0: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x1350d0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1350d4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1350d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1350d8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1350d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1350dc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1350dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1350e0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1350e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1350e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1350e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1350e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1350E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1350ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1350E8u;
            // 0x1350ec: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1350F0u;
}
