#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitMonsterInfo__12CMosBookMenuFv
// Address: 0x2bfb40 - 0x2bfb74
void InitMonsterInfo__12CMosBookMenuFv_0x2bfb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitMonsterInfo__12CMosBookMenuFv_0x2bfb40");
#endif

    ctx->pc = 0x2bfb40u;

    // 0x2bfb40: 0xa08007ec  sb          $zero, 0x7EC($a0)
    ctx->pc = 0x2bfb40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2028), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb44: 0xa080082c  sb          $zero, 0x82C($a0)
    ctx->pc = 0x2bfb44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2092), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb48: 0xa080086c  sb          $zero, 0x86C($a0)
    ctx->pc = 0x2bfb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2156), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb4c: 0xac800904  sw          $zero, 0x904($a0)
    ctx->pc = 0x2bfb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2308), GPR_U32(ctx, 0));
    // 0x2bfb50: 0xac800908  sw          $zero, 0x908($a0)
    ctx->pc = 0x2bfb50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2312), GPR_U32(ctx, 0));
    // 0x2bfb54: 0xac80090c  sw          $zero, 0x90C($a0)
    ctx->pc = 0x2bfb54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2316), GPR_U32(ctx, 0));
    // 0x2bfb58: 0xac800910  sw          $zero, 0x910($a0)
    ctx->pc = 0x2bfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2320), GPR_U32(ctx, 0));
    // 0x2bfb5c: 0xac800914  sw          $zero, 0x914($a0)
    ctx->pc = 0x2bfb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2324), GPR_U32(ctx, 0));
    // 0x2bfb60: 0xa0800918  sb          $zero, 0x918($a0)
    ctx->pc = 0x2bfb60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb64: 0xa0800939  sb          $zero, 0x939($a0)
    ctx->pc = 0x2bfb64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2361), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb68: 0xa080095a  sb          $zero, 0x95A($a0)
    ctx->pc = 0x2bfb68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2394), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB6Cu;
            // 0x2bfb70: 0xa08008ac  sb          $zero, 0x8AC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2220), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFB74u;
}
