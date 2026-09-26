#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitS51Thunder__Fv
// Address: 0x2f76d0 - 0x2f76f0
void InitS51Thunder__Fv_0x2f76d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitS51Thunder__Fv_0x2f76d0");
#endif

    ctx->pc = 0x2f76d0u;

    // 0x2f76d0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2f76d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2f76d4: 0xaf809f0c  sw          $zero, -0x60F4($gp)
    ctx->pc = 0x2f76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942476), GPR_U32(ctx, 0));
    // 0x2f76d8: 0xaf809f10  sw          $zero, -0x60F0($gp)
    ctx->pc = 0x2f76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942480), GPR_U32(ctx, 0));
    // 0x2f76dc: 0xaf839f14  sw          $v1, -0x60EC($gp)
    ctx->pc = 0x2f76dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942484), GPR_U32(ctx, 3));
    // 0x2f76e0: 0xaf809f18  sw          $zero, -0x60E8($gp)
    ctx->pc = 0x2f76e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942488), GPR_U32(ctx, 0));
    // 0x2f76e4: 0xaf809f20  sw          $zero, -0x60E0($gp)
    ctx->pc = 0x2f76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942496), GPR_U32(ctx, 0));
    // 0x2f76e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F76E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F76ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F76E8u;
            // 0x2f76ec: 0xaf809f1c  sw          $zero, -0x60E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F76F0u;
}
