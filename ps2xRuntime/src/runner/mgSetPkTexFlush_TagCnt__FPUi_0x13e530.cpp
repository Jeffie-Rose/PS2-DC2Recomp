#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkTexFlush_TagCnt__FPUi
// Address: 0x13e530 - 0x13e578
void mgSetPkTexFlush_TagCnt__FPUi_0x13e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkTexFlush_TagCnt__FPUi_0x13e530");
#endif

    ctx->pc = 0x13e530u;

    // 0x13e530: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E530u;
    {
        const bool branch_taken_0x13e530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E530u;
            // 0x13e534: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e530) {
            ctx->pc = 0x13E540u;
            goto label_13e540;
        }
    }
    ctx->pc = 0x13E538u;
    // 0x13e538: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13E538u;
    {
        const bool branch_taken_0x13e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E538u;
            // 0x13e53c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e538) {
            ctx->pc = 0x13E570u;
            goto label_13e570;
        }
    }
    ctx->pc = 0x13E540u;
label_13e540:
    // 0x13e540: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x13e544: 0x24424170  addiu       $v0, $v0, 0x4170
    ctx->pc = 0x13e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16752));
    // 0x13e548: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13e548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13e54c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x13e54cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e550: 0x24a54180  addiu       $a1, $a1, 0x4180
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16768));
    // 0x13e554: 0x24634190  addiu       $v1, $v1, 0x4190
    ctx->pc = 0x13e554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16784));
    // 0x13e558: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x13e558u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x13e55c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13e560: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x13e560u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e564: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x13e564u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
    // 0x13e568: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x13e568u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e56c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x13e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_13e570:
    // 0x13e570: 0x3e00008  jr          $ra
    ctx->pc = 0x13E570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13E578u;
}
