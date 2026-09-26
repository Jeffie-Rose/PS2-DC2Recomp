#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: finite
// Address: 0x11db68 - 0x11db88
void finite_0x11db68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("finite_0x11db68");
#endif

    ctx->pc = 0x11db68u;

    // 0x11db68: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x11db68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11db6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11db70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11db70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11db74: 0x3c048010  lui         $a0, 0x8010
    ctx->pc = 0x11db74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32784 << 16));
    // 0x11db78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11db7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11db80: 0x3e00008  jr          $ra
    ctx->pc = 0x11DB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB80u;
            // 0x11db84: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11DB88u;
}
