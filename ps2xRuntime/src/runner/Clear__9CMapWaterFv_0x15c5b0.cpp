#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__9CMapWaterFv
// Address: 0x15c5b0 - 0x15c5f8
void Clear__9CMapWaterFv_0x15c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9CMapWaterFv_0x15c5b0");
#endif

    switch (ctx->pc) {
        case 0x15c5c8u: goto label_15c5c8;
        default: break;
    }

    ctx->pc = 0x15c5b0u;

    // 0x15c5b0: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x15c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x15c5b4: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x15c5b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15C5B8u;
    {
        const bool branch_taken_0x15c5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5B8u;
            // 0x15c5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5b8) {
            ctx->pc = 0x15C5F0u;
            goto label_15c5f0;
        }
    }
    ctx->pc = 0x15C5C0u;
    // 0x15c5c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15C5C0u;
    {
        const bool branch_taken_0x15c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C5C0u;
            // 0x15c5c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5c0) {
            ctx->pc = 0x15C5DCu;
            goto label_15c5dc;
        }
    }
    ctx->pc = 0x15C5C8u;
label_15c5c8:
    // 0x15c5c8: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x15c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x15c5cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15c5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15c5d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c5d4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15c5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x15c5d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x15c5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_15c5dc:
    // 0x15c5dc: 0x0  nop
    ctx->pc = 0x15c5dcu;
    // NOP
    // 0x15c5e0: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x15c5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x15c5e4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x15c5e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15c5e8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15C5E8u;
    {
        const bool branch_taken_0x15c5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c5e8) {
            ctx->pc = 0x15C5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c5c8;
        }
    }
    ctx->pc = 0x15C5F0u;
label_15c5f0:
    // 0x15c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x15C5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C5F8u;
}
