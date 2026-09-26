#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDngTreeMapFuncType__Fv
// Address: 0x1ef850 - 0x1ef88c
void CheckDngTreeMapFuncType__Fv_0x1ef850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDngTreeMapFuncType__Fv_0x1ef850");
#endif

    ctx->pc = 0x1ef850u;

    // 0x1ef850: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x1ef850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1ef854: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ef854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ef858: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ef858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1ef85c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF85Cu;
    {
        const bool branch_taken_0x1ef85c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF85Cu;
            // 0x1ef860: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef85c) {
            ctx->pc = 0x1EF86Cu;
            goto label_1ef86c;
        }
    }
    ctx->pc = 0x1EF864u;
    // 0x1ef864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF864u;
    {
        const bool branch_taken_0x1ef864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF864u;
            // 0x1ef868: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef864) {
            ctx->pc = 0x1EF884u;
            goto label_1ef884;
        }
    }
    ctx->pc = 0x1EF86Cu;
label_1ef86c:
    // 0x1ef86c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF86Cu;
    {
        const bool branch_taken_0x1ef86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EF870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF86Cu;
            // 0x1ef870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef86c) {
            ctx->pc = 0x1EF884u;
            goto label_1ef884;
        }
    }
    ctx->pc = 0x1EF874u;
    // 0x1ef874: 0x93828f1c  lbu         $v0, -0x70E4($gp)
    ctx->pc = 0x1ef874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938396)));
    // 0x1ef878: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF878u;
    {
        const bool branch_taken_0x1ef878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF878u;
            // 0x1ef87c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef878) {
            ctx->pc = 0x1EF884u;
            goto label_1ef884;
        }
    }
    ctx->pc = 0x1EF880u;
    // 0x1ef880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef884:
    // 0x1ef884: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF88Cu;
}
