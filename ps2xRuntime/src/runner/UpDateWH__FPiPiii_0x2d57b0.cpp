#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpDateWH__FPiPiii
// Address: 0x2d57b0 - 0x2d57e0
void UpDateWH__FPiPiii_0x2d57b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpDateWH__FPiPiii_0x2d57b0");
#endif

    ctx->pc = 0x2d57b0u;

    // 0x2d57b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d57b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d57b4: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x2d57b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d57b8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D57B8u;
    {
        const bool branch_taken_0x2d57b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d57b8) {
            ctx->pc = 0x2D57C4u;
            goto label_2d57c4;
        }
    }
    ctx->pc = 0x2D57C0u;
    // 0x2d57c0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2d57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2d57c4:
    // 0x2d57c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d57c8: 0x67082a  slt         $at, $v1, $a3
    ctx->pc = 0x2d57c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d57cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D57CCu;
    {
        const bool branch_taken_0x2d57cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d57cc) {
            ctx->pc = 0x2D57D8u;
            goto label_2d57d8;
        }
    }
    ctx->pc = 0x2D57D4u;
    // 0x2d57d4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2d57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_2d57d8:
    // 0x2d57d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D57D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D57E0u;
}
