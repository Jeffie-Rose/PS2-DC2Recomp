#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEnableEnterPart__16CMenuPosDataFormFv
// Address: 0x2260a0 - 0x2260fc
void GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0");
#endif

    switch (ctx->pc) {
        case 0x2260b0u: goto label_2260b0;
        default: break;
    }

    ctx->pc = 0x2260a0u;

    // 0x2260a0: 0x84830068  lh          $v1, 0x68($a0)
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2260a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2260a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2260a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2260A8u;
    {
        const bool branch_taken_0x2260a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260A8u;
            // 0x2260ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260a8) {
            ctx->pc = 0x2260E8u;
            goto label_2260e8;
        }
    }
    ctx->pc = 0x2260B0u;
label_2260b0:
    // 0x2260b0: 0x8c88006c  lw          $t0, 0x6C($a0)
    ctx->pc = 0x2260b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2260b4: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2260b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2260bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2260BCu;
    {
        const bool branch_taken_0x2260bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2260bc) {
            ctx->pc = 0x2260E0u;
            goto label_2260e0;
        }
    }
    ctx->pc = 0x2260C4u;
    // 0x2260c4: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2260c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2260c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2260C8u;
    {
        const bool branch_taken_0x2260c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260C8u;
            // 0x2260cc: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260c8) {
            ctx->pc = 0x2260E0u;
            goto label_2260e0;
        }
    }
    ctx->pc = 0x2260D0u;
    // 0x2260d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2260d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2260d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2260d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2260D8u;
    {
        const bool branch_taken_0x2260d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2260DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260D8u;
            // 0x2260dc: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260d8) {
            ctx->pc = 0x2260F4u;
            goto label_2260f4;
        }
    }
    ctx->pc = 0x2260E0u;
label_2260e0:
    // 0x2260e0: 0x24c60048  addiu       $a2, $a2, 0x48
    ctx->pc = 0x2260e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
    // 0x2260e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2260e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2260e8:
    // 0x2260e8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2260e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2260ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2260ECu;
    {
        const bool branch_taken_0x2260ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2260F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2260ECu;
            // 0x2260f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2260ec) {
            ctx->pc = 0x2260B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2260b0;
        }
    }
    ctx->pc = 0x2260F4u;
label_2260f4:
    // 0x2260f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2260F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2260FCu;
}
