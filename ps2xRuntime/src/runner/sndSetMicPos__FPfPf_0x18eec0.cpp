#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndSetMicPos__FPfPf
// Address: 0x18eec0 - 0x18eee4
void sndSetMicPos__FPfPf_0x18eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndSetMicPos__FPfPf_0x18eec0");
#endif

    ctx->pc = 0x18eec0u;

    // 0x18eec0: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x18eec0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18eec4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18eec8: 0x24637690  addiu       $v1, $v1, 0x7690
    ctx->pc = 0x18eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30352));
    // 0x18eecc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x18eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x18eed0: 0x24847680  addiu       $a0, $a0, 0x7680
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30336));
    // 0x18eed4: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x18eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x18eed8: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x18eed8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18eedc: 0x3e00008  jr          $ra
    ctx->pc = 0x18EEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EEDCu;
            // 0x18eee0: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EEE4u;
}
