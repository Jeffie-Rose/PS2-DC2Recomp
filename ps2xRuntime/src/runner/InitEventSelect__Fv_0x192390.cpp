#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitEventSelect__Fv
// Address: 0x192390 - 0x1923a8
void InitEventSelect__Fv_0x192390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitEventSelect__Fv_0x192390");
#endif

    ctx->pc = 0x192390u;

    // 0x192390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x192390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192394: 0xaf808b2c  sw          $zero, -0x74D4($gp)
    ctx->pc = 0x192394u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 0));
    // 0x192398: 0xaf808b30  sw          $zero, -0x74D0($gp)
    ctx->pc = 0x192398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 0));
    // 0x19239c: 0xaf838b10  sw          $v1, -0x74F0($gp)
    ctx->pc = 0x19239cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 3));
    // 0x1923a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1923A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1923A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1923A0u;
            // 0x1923a4: 0xaf808b34  sw          $zero, -0x74CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1923A8u;
}
