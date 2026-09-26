#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditGetPlaceAnimeState__Fv
// Address: 0x2fc3d0 - 0x2fc420
void EditGetPlaceAnimeState__Fv_0x2fc3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditGetPlaceAnimeState__Fv_0x2fc3d0");
#endif

    switch (ctx->pc) {
        case 0x2fc3e8u: goto label_2fc3e8;
        default: break;
    }

    ctx->pc = 0x2fc3d0u;

    // 0x2fc3d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc3d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fc3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fc3d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc3dc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2fc3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2fc3e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fc3e4: 0x24a596d0  addiu       $a1, $a1, -0x6930
    ctx->pc = 0x2fc3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940368));
label_2fc3e8:
    // 0x2fc3e8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2fc3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2fc3ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2fc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fc3f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC3F0u;
    {
        const bool branch_taken_0x2fc3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc3f0) {
            ctx->pc = 0x2FC408u;
            goto label_2fc408;
        }
    }
    ctx->pc = 0x2FC3F8u;
    // 0x2fc3f8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC3F8u;
    {
        const bool branch_taken_0x2fc3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FC3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC3F8u;
            // 0x2fc3fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc3f8) {
            ctx->pc = 0x2FC408u;
            goto label_2fc408;
        }
    }
    ctx->pc = 0x2FC400u;
    // 0x2fc400: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FC400u;
    {
        const bool branch_taken_0x2fc400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC400u;
            // 0x2fc404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc400) {
            ctx->pc = 0x2FC418u;
            goto label_2fc418;
        }
    }
    ctx->pc = 0x2FC408u;
label_2fc408:
    // 0x2fc408: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2fc408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fc40c: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x2fc40cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fc410: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FC410u;
    {
        const bool branch_taken_0x2fc410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC410u;
            // 0x2fc414: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc410) {
            ctx->pc = 0x2FC3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fc3e8;
        }
    }
    ctx->pc = 0x2FC418u;
label_2fc418:
    // 0x2fc418: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC420u;
}
