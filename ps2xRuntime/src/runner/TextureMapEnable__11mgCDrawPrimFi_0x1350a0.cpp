#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TextureMapEnable__11mgCDrawPrimFi
// Address: 0x1350a0 - 0x1350c0
void TextureMapEnable__11mgCDrawPrimFi_0x1350a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TextureMapEnable__11mgCDrawPrimFi_0x1350a0");
#endif

    ctx->pc = 0x1350a0u;

    // 0x1350a0: 0x90860050  lbu         $a2, 0x50($a0)
    ctx->pc = 0x1350a0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1350a4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x1350a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1350a8: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1350a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1350ac: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1350b0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1350b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1350b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1350b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1350b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1350B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1350BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1350B8u;
            // 0x1350bc: 0xa0830050  sb          $v1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1350C0u;
}
