#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetBitCtrl__9CSaveDataFi
// Address: 0x2f67d0 - 0x2f67f8
void ResetBitCtrl__9CSaveDataFi_0x2f67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetBitCtrl__9CSaveDataFi_0x2f67d0");
#endif

    ctx->pc = 0x2f67d0u;

    // 0x2f67d0: 0xa01827  not         $v1, $a1
    ctx->pc = 0x2f67d0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2f67d4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f67d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f67d8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2f67d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f67dc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f67dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f67e0: 0x902343c8  lbu         $v1, 0x43C8($at)
    ctx->pc = 0x2f67e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17352)));
    // 0x2f67e4: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f67e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f67e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2f67e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2f67ec: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f67ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f67f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67F0u;
            // 0x2f67f4: 0xa02343c8  sb          $v1, 0x43C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17352), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F67F8u;
}
