#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void sqrt_0x11efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sqrt_0x11efc8");
#endif
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::sqrt(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
