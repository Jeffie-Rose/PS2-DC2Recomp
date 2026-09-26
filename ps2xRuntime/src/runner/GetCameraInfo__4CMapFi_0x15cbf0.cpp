#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraInfo__4CMapFi
// Address: 0x15cbf0 - 0x15cc38
void GetCameraInfo__4CMapFi_0x15cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraInfo__4CMapFi_0x15cbf0");
#endif

    ctx->pc = 0x15cbf0u;

    // 0x15cbf0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CBF0u;
    {
        const bool branch_taken_0x15cbf0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15CBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CBF0u;
            // 0x15cbf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbf0) {
            ctx->pc = 0x15CC0Cu;
            goto label_15cc0c;
        }
    }
    ctx->pc = 0x15CBF8u;
    // 0x15cbf8: 0x8c820c80  lw          $v0, 0xC80($a0)
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3200)));
    // 0x15cbfc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15cbfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15cc00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CC00u;
    {
        const bool branch_taken_0x15cc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cc00) {
            ctx->pc = 0x15CC14u;
            goto label_15cc14;
        }
    }
    ctx->pc = 0x15CC08u;
    // 0x15cc08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15cc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15cc0c:
    // 0x15cc0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15CC0Cu;
    {
        const bool branch_taken_0x15cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc0c) {
            ctx->pc = 0x15CC30u;
            goto label_15cc30;
        }
    }
    ctx->pc = 0x15CC14u;
label_15cc14:
    // 0x15cc14: 0x8c820c84  lw          $v0, 0xC84($a0)
    ctx->pc = 0x15cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3204)));
    // 0x15cc18: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x15cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15cc1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15cc20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15cc24: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15cc28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15cc2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15cc30:
    // 0x15cc30: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CC38u;
}
