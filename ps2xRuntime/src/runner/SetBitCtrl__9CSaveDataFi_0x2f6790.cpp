#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBitCtrl__9CSaveDataFi
// Address: 0x2f6790 - 0x2f67c4
void SetBitCtrl__9CSaveDataFi_0x2f6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBitCtrl__9CSaveDataFi_0x2f6790");
#endif

    ctx->pc = 0x2f6790u;

    // 0x2f6790: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6794: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2f6794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x2f6798: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6798u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f679c: 0x344243c8  ori         $v0, $v0, 0x43C8
    ctx->pc = 0x2f679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17352);
    // 0x2f67a0: 0x902343c8  lbu         $v1, 0x43C8($at)
    ctx->pc = 0x2f67a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 17352)));
    // 0x2f67a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f67a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2f67a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2f67ac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f67acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f67b0: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f67b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f67b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f67b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f67b8: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f67b8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f67bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F67BCu;
            // 0x2f67c0: 0xa02343c8  sb          $v1, 0x43C8($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17352), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F67C4u;
}
