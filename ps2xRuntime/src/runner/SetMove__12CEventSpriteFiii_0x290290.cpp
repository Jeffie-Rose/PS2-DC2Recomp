#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMove__12CEventSpriteFiii
// Address: 0x290290 - 0x2902b8
void SetMove__12CEventSpriteFiii_0x290290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMove__12CEventSpriteFiii_0x290290");
#endif

    ctx->pc = 0x290290u;

    // 0x290290: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x290290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290294: 0xac830078  sw          $v1, 0x78($a0)
    ctx->pc = 0x290294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 3));
    // 0x290298: 0xac83007c  sw          $v1, 0x7C($a0)
    ctx->pc = 0x290298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 3));
    // 0x29029c: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x29029cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
    // 0x2902a0: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x2902a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x2902a4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x2902a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x2902a8: 0xac85007c  sw          $a1, 0x7C($a0)
    ctx->pc = 0x2902a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
    // 0x2902ac: 0xac860080  sw          $a2, 0x80($a0)
    ctx->pc = 0x2902acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 6));
    // 0x2902b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2902B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2902B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902B0u;
            // 0x2902b4: 0xac870084  sw          $a3, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2902B8u;
}
