#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsBurn__10CEditPartsFv
// Address: 0x1b5af0 - 0x1b5b18
void IsBurn__10CEditPartsFv_0x1b5af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsBurn__10CEditPartsFv_0x1b5af0");
#endif

    ctx->pc = 0x1b5af0u;

    // 0x1b5af0: 0x8c820324  lw          $v0, 0x324($a0)
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x1b5af4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5AF4u;
    {
        const bool branch_taken_0x1b5af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5af4) {
            ctx->pc = 0x1B5B04u;
            goto label_1b5b04;
        }
    }
    ctx->pc = 0x1B5AFCu;
    // 0x1b5afc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5AFCu;
    {
        const bool branch_taken_0x1b5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5AFCu;
            // 0x1b5b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5afc) {
            ctx->pc = 0x1B5B10u;
            goto label_1b5b10;
        }
    }
    ctx->pc = 0x1B5B04u;
label_1b5b04:
    // 0x1b5b04: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1b5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b5b08: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1b5b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1b5b0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b5b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1b5b10:
    // 0x1b5b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5B18u;
}
