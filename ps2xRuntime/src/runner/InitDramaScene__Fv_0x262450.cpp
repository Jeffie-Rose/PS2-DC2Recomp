#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitDramaScene__Fv
// Address: 0x262450 - 0x26248c
void InitDramaScene__Fv_0x262450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDramaScene__Fv_0x262450");
#endif

    ctx->pc = 0x262450u;

    // 0x262450: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262458: 0xac20e510  sw          $zero, -0x1AF0($at)
    ctx->pc = 0x262458u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960400), GPR_U32(ctx, 0));
    // 0x26245c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262460: 0xac20e514  sw          $zero, -0x1AEC($at)
    ctx->pc = 0x262460u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960404), GPR_U32(ctx, 0));
    // 0x262464: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262468: 0xac23e504  sw          $v1, -0x1AFC($at)
    ctx->pc = 0x262468u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 3));
    // 0x26246c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x26246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x262470: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262474: 0xac23e508  sw          $v1, -0x1AF8($at)
    ctx->pc = 0x262474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960392), GPR_U32(ctx, 3));
    // 0x262478: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26247c: 0xac20e518  sw          $zero, -0x1AE8($at)
    ctx->pc = 0x26247cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960408), GPR_U32(ctx, 0));
    // 0x262480: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262484: 0x3e00008  jr          $ra
    ctx->pc = 0x262484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262484u;
            // 0x262488: 0xac20e51c  sw          $zero, -0x1AE4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26248Cu;
}
