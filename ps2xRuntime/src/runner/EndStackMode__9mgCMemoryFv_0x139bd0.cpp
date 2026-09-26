#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndStackMode__9mgCMemoryFv
// Address: 0x139bd0 - 0x139c04
void EndStackMode__9mgCMemoryFv_0x139bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndStackMode__9mgCMemoryFv_0x139bd0");
#endif

    ctx->pc = 0x139bd0u;

    // 0x139bd0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x139bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x139bd4: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x139BD4u;
    {
        const bool branch_taken_0x139bd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x139bd4) {
            ctx->pc = 0x139BFCu;
            goto label_139bfc;
        }
    }
    ctx->pc = 0x139BDCu;
    // 0x139bdc: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x139bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x139be0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x139be4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x139be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139be8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x139be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x139bec: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x139becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x139bf0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x139bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x139bf4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x139bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x139bf8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x139bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_139bfc:
    // 0x139bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x139BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139C04u;
}
