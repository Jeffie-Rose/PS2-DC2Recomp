#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNowFrame__11CCharacter2Ff
// Address: 0x168450 - 0x168458
void SetNowFrame__11CCharacter2Ff_0x168450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNowFrame__11CCharacter2Ff_0x168450");
#endif

    ctx->pc = 0x168450u;

    // 0x168450: 0x3e00008  jr          $ra
    ctx->pc = 0x168450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168450u;
            // 0x168454: 0xe48c0388  swc1        $f12, 0x388($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 904), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168458u;
}
