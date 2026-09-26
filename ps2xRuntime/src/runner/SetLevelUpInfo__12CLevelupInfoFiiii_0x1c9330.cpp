#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetLevelUpInfo__12CLevelupInfoFiiii
// Address: 0x1c9330 - 0x1c9378
void SetLevelUpInfo__12CLevelupInfoFiiii_0x1c9330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetLevelUpInfo__12CLevelupInfoFiiii_0x1c9330");
#endif

    ctx->pc = 0x1c9330u;

    // 0x1c9330: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c9330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c9334: 0x24c3fffa  addiu       $v1, $a2, -0x6
    ctx->pc = 0x1c9334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x1c9338: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1c9338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1c933c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c933cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9340: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1c9340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1c9344: 0x24a5ffdd  addiu       $a1, $a1, -0x23
    ctx->pc = 0x1c9344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967261));
    // 0x1c9348: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1c9348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1c934c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1c934cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1c9350: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1c9350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1c9354: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1c9354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1c9358: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1c9358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1c935c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1c935cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1c9360: 0xac860024  sw          $a2, 0x24($a0)
    ctx->pc = 0x1c9360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 6));
    // 0x1c9364: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1c9364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1c9368: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1c9368u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1c936c: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x1c936cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x1c9370: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9370u;
            // 0x1c9374: 0xac880034  sw          $t0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9378u;
}
