#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMinLineLength__Fv
// Address: 0x30fc60 - 0x30fc70
void GetMinLineLength__Fv_0x30fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMinLineLength__Fv_0x30fc60");
#endif

    ctx->pc = 0x30fc60u;

    // 0x30fc60: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x30fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x30fc64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30fc64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fc68: 0x3e00008  jr          $ra
    ctx->pc = 0x30FC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30FC70u;
}
