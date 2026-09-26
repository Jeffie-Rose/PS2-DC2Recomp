#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AlphaBlendEnable__11mgCDrawPrimFi
// Address: 0x134ec0 - 0x134ee0
void AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0");
#endif

    ctx->pc = 0x134ec0u;

    // 0x134ec0: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x134ec0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x134ec4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x134ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x134ec8: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x134ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x134ecc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x134eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x134ed0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x134ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x134ed4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x134ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x134ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x134ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134ED8u;
            // 0x134edc: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134EE0u;
}
