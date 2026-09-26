#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ForceBootTour__9CSaveDataFii
// Address: 0x2f6820 - 0x2f6874
void ForceBootTour__9CSaveDataFii_0x2f6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForceBootTour__9CSaveDataFii_0x2f6820");
#endif

    ctx->pc = 0x2f6820u;

    // 0x2f6820: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6824: 0x24a3fff6  addiu       $v1, $a1, -0xA
    ctx->pc = 0x2f6824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x2f6828: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6828u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f682c: 0xac2543dc  sw          $a1, 0x43DC($at)
    ctx->pc = 0x2f682cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17372), GPR_U32(ctx, 5));
    // 0x2f6830: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6834: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6834u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6838: 0xac2543d0  sw          $a1, 0x43D0($at)
    ctx->pc = 0x2f6838u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17360), GPR_U32(ctx, 5));
    // 0x2f683c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f683cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6840: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6840u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6844: 0xac2343d4  sw          $v1, 0x43D4($at)
    ctx->pc = 0x2f6844u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 17364), GPR_U32(ctx, 3));
    // 0x2f6848: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f684c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6850: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6850u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6854: 0xa42343d8  sh          $v1, 0x43D8($at)
    ctx->pc = 0x2f6854u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 17368), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f6858: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f685c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f685cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f6860: 0xa02643da  sb          $a2, 0x43DA($at)
    ctx->pc = 0x2f6860u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 17370), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f6864: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f6864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f6868: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2f6868u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2f686c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F686Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F686Cu;
            // 0x2f6870: 0xa02043db  sb          $zero, 0x43DB($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 17371), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F6874u;
}
