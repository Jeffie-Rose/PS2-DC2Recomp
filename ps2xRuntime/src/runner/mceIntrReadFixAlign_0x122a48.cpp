#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

void mceIntrReadFixAlign_0x122a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("mceIntrReadFixAlign_0x122a48");
#endif
    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::mceIntrReadFixAlign(rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
