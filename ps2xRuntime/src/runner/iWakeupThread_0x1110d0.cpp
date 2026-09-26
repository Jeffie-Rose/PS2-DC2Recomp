#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void iWakeupThread_0x1110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iWakeupThread_0x1110d0");
#endif
    const uint32_t __entryPc = ctx->pc;
    ps2_syscalls::iWakeupThread(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
