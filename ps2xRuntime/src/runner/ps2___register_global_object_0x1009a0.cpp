#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __register_global_object
// Address: 0x1009a0 - 0x1009c4
void ps2___register_global_object_0x1009a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___register_global_object_0x1009a0");
#endif

    ctx->pc = 0x1009a0u;

    // 0x1009a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1009a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1009a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1009a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1009a8: 0x8c238ac8  lw          $v1, -0x7538($at)
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937288)));
    // 0x1009ac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1009acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1009b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1009b4: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1009b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1009b8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1009b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1009bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1009BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1009C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1009BCu;
            // 0x1009c0: 0xac268ac8  sw          $a2, -0x7538($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937288), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1009C4u;
}
