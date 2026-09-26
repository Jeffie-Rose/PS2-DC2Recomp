#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dbgSetContintionFlag__9CEditDataFiii
// Address: 0x2aa270 - 0x2aa29c
void dbgSetContintionFlag__9CEditDataFiii_0x2aa270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dbgSetContintionFlag__9CEditDataFiii_0x2aa270");
#endif

    ctx->pc = 0x2aa270u;

    // 0x2aa270: 0x4c00008  bltz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AA270u;
    {
        const bool branch_taken_0x2aa270 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2aa270) {
            ctx->pc = 0x2AA294u;
            goto label_2aa294;
        }
    }
    ctx->pc = 0x2AA278u;
    // 0x2aa278: 0x28c30040  slti        $v1, $a2, 0x40
    ctx->pc = 0x2aa278u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2aa27c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA27Cu;
    {
        const bool branch_taken_0x2aa27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA27Cu;
            // 0x2aa280: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa27c) {
            ctx->pc = 0x2AA290u;
            goto label_2aa290;
        }
    }
    ctx->pc = 0x2AA284u;
    // 0x2aa284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA284u;
    {
        const bool branch_taken_0x2aa284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa284) {
            ctx->pc = 0x2AA294u;
            goto label_2aa294;
        }
    }
    ctx->pc = 0x2AA28Cu;
    // 0x2aa28c: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2aa28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2aa290:
    // 0x2aa290: 0xa0675050  sb          $a3, 0x5050($v1)
    ctx->pc = 0x2aa290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20560), (uint8_t)GPR_U32(ctx, 7));
label_2aa294:
    // 0x2aa294: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA29Cu;
}
