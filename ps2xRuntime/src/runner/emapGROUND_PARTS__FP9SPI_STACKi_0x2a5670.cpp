#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapGROUND_PARTS__FP9SPI_STACKi
// Address: 0x2a5670 - 0x2a569c
void emapGROUND_PARTS__FP9SPI_STACKi_0x2a5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapGROUND_PARTS__FP9SPI_STACKi_0x2a5670");
#endif

    ctx->pc = 0x2a5670u;

    // 0x2a5670: 0x8f849a64  lw          $a0, -0x659C($gp)
    ctx->pc = 0x2a5670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941284)));
    // 0x2a5674: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A5674u;
    {
        const bool branch_taken_0x2a5674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5674u;
            // 0x2a5678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5674) {
            ctx->pc = 0x2A5684u;
            goto label_2a5684;
        }
    }
    ctx->pc = 0x2A567Cu;
    // 0x2a567c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A567Cu;
    {
        const bool branch_taken_0x2a567c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a567c) {
            ctx->pc = 0x2A5694u;
            goto label_2a5694;
        }
    }
    ctx->pc = 0x2A5684u;
label_2a5684:
    // 0x2a5684: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a5684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a5688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a568c: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x2a568cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x2a5690: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2a5690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2a5694:
    // 0x2a5694: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A569Cu;
}
