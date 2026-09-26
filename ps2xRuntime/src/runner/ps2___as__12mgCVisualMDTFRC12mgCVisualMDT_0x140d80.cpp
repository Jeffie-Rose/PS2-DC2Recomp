#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__12mgCVisualMDTFRC12mgCVisualMDT
// Address: 0x140d80 - 0x140e18
void ps2___as__12mgCVisualMDTFRC12mgCVisualMDT_0x140d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__12mgCVisualMDTFRC12mgCVisualMDT_0x140d80");
#endif

    ctx->pc = 0x140d80u;

    // 0x140d80: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x140d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140d84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x140d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x140d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x140d8c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x140d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x140d90: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x140d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x140d94: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x140d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x140d98: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x140d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x140d9c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x140da0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x140da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x140da4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x140da8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x140da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x140dac: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x140dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x140db0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x140db0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x140db4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x140db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x140db8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x140db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x140dbc: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x140dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x140dc0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x140dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x140dc4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x140dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x140dc8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x140dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x140dcc: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x140dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x140dd0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x140dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x140dd4: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x140dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x140dd8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x140dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x140ddc: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x140ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x140de0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x140de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x140de4: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x140de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x140de8: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x140de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x140dec: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x140decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x140df0: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x140df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x140df4: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x140df8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x140df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x140dfc: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x140e00: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x140e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x140e04: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x140e08: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x140e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x140e0c: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x140e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x140e10: 0x3e00008  jr          $ra
    ctx->pc = 0x140E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E10u;
            // 0x140e14: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140E18u;
}
