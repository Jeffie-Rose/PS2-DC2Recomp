#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitItemMes__9CGameDataFii
// Address: 0x195720 - 0x195770
void InitItemMes__9CGameDataFii_0x195720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitItemMes__9CGameDataFii_0x195720");
#endif

    switch (ctx->pc) {
        case 0x195734u: goto label_195734;
        default: break;
    }

    ctx->pc = 0x195720u;

    // 0x195720: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x195720u;
    {
        const bool branch_taken_0x195720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x195724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195720u;
            // 0x195724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195720) {
            ctx->pc = 0x195768u;
            goto label_195768;
        }
    }
    ctx->pc = 0x195728u;
    // 0x195728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19572c: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x19572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x195730: 0x248495a0  addiu       $a0, $a0, -0x6A60
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940064));
label_195734:
    // 0x195734: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x195738: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x195738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x19573c: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x19573cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x195740: 0x28a301b0  slti        $v1, $a1, 0x1B0
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)432) ? 1 : 0);
    // 0x195744: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x195744u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x195748: 0x24c60160  addiu       $a2, $a2, 0x160
    ctx->pc = 0x195748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 352));
    // 0x19574c: 0xace00080  sw          $zero, 0x80($a3)
    ctx->pc = 0x19574cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 0));
    // 0x195750: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x195750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x195754: 0xace000d8  sw          $zero, 0xD8($a3)
    ctx->pc = 0x195754u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 0));
    // 0x195758: 0xace00104  sw          $zero, 0x104($a3)
    ctx->pc = 0x195758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 260), GPR_U32(ctx, 0));
    // 0x19575c: 0xace00130  sw          $zero, 0x130($a3)
    ctx->pc = 0x19575cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 304), GPR_U32(ctx, 0));
    // 0x195760: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x195760u;
    {
        const bool branch_taken_0x195760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195760u;
            // 0x195764: 0xace0015c  sw          $zero, 0x15C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195760) {
            ctx->pc = 0x195734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195734;
        }
    }
    ctx->pc = 0x195768u;
label_195768:
    // 0x195768: 0x3e00008  jr          $ra
    ctx->pc = 0x195768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195770u;
}
