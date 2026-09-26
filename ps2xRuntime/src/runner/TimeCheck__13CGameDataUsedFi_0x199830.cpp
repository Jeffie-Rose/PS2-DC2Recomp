#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TimeCheck__13CGameDataUsedFi
// Address: 0x199830 - 0x199860
void TimeCheck__13CGameDataUsedFi_0x199830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TimeCheck__13CGameDataUsedFi_0x199830");
#endif

    ctx->pc = 0x199830u;

    // 0x199830: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199834: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x199834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x199838: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x199838u;
    {
        const bool branch_taken_0x199838 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x199838) {
            ctx->pc = 0x199858u;
            goto label_199858;
        }
    }
    ctx->pc = 0x199840u;
    // 0x199840: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x199840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x199844: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x199844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199848: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x199848u;
    {
        const bool branch_taken_0x199848 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x199848) {
            ctx->pc = 0x199854u;
            goto label_199854;
        }
    }
    ctx->pc = 0x199850u;
    // 0x199850: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x199850u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199854:
    // 0x199854: 0xa4830040  sh          $v1, 0x40($a0)
    ctx->pc = 0x199854u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 3));
label_199858:
    // 0x199858: 0x3e00008  jr          $ra
    ctx->pc = 0x199858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199860u;
}
