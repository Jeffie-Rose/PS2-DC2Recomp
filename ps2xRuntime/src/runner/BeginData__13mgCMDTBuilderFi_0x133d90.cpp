#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginData__13mgCMDTBuilderFi
// Address: 0x133d90 - 0x133db4
void BeginData__13mgCMDTBuilderFi_0x133d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginData__13mgCMDTBuilderFi_0x133d90");
#endif

    ctx->pc = 0x133d90u;

    // 0x133d90: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x133d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x133d94: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133D94u;
    {
        const bool branch_taken_0x133d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x133d94) {
            ctx->pc = 0x133DACu;
            goto label_133dac;
        }
    }
    ctx->pc = 0x133D9Cu;
    // 0x133d9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x133d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x133da0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x133da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x133da4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x133da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x133da8: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x133da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
label_133dac:
    // 0x133dac: 0x3e00008  jr          $ra
    ctx->pc = 0x133DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133DB4u;
}
