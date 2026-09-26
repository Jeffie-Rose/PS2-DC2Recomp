#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SeLoopPlayStop__11CLoopSeMngrFUiiii
// Address: 0x18c6a0 - 0x18c6b8
void SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0");
#endif

    ctx->pc = 0x18c6a0u;

    // 0x18c6a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18c6a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x18c6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x18c6a8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x18c6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x18c6ac: 0x0  nop
    ctx->pc = 0x18c6acu;
    // NOP
    // 0x18c6b0: 0x80631b0  j           func_18C6C0
    ctx->pc = 0x18C6B0u;
    ctx->pc = 0x18C6C0u;
    if (runtime->hasFunction(0x18C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SeLoopPlayStop__11CLoopSeMngrFUiiiffi_0x18c6c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18C6B8u;
}
