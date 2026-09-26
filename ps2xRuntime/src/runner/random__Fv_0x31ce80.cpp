#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: random__Fv
// Address: 0x31ce80 - 0x31cea4
void random__Fv_0x31ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("random__Fv_0x31ce80");
#endif

    ctx->pc = 0x31ce80u;

    // 0x31ce80: 0x8f838688  lw          $v1, -0x7978($gp)
    ctx->pc = 0x31ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x31ce84: 0x3c02021f  lui         $v0, 0x21F
    ctx->pc = 0x31ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)543 << 16));
    // 0x31ce88: 0x3442c436  ori         $v0, $v0, 0xC436
    ctx->pc = 0x31ce88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50230);
    // 0x31ce8c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x31ce8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31ce90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31ce94: 0xaf828688  sw          $v0, -0x7978($gp)
    ctx->pc = 0x31ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 2));
    // 0x31ce98: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x31ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
    // 0x31ce9c: 0x3e00008  jr          $ra
    ctx->pc = 0x31CE9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CEA4u;
}
