#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void _ch3dmaCSC_0x10c988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ch3dmaCSC_0x10c988");
#endif
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("_ch3dmaCSC", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
