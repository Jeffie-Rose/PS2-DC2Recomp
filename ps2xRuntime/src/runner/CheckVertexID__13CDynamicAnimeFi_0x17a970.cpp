#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckVertexID__13CDynamicAnimeFi
// Address: 0x17a970 - 0x17a994
void CheckVertexID__13CDynamicAnimeFi_0x17a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckVertexID__13CDynamicAnimeFi_0x17a970");
#endif

    ctx->pc = 0x17a970u;

    // 0x17a970: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A970u;
    {
        const bool branch_taken_0x17a970 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17A974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A970u;
            // 0x17a974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a970) {
            ctx->pc = 0x17A98Cu;
            goto label_17a98c;
        }
    }
    ctx->pc = 0x17A978u;
    // 0x17a978: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17a97c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x17a97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17a980: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17A980u;
    {
        const bool branch_taken_0x17a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A980u;
            // 0x17a984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a980) {
            ctx->pc = 0x17A98Cu;
            goto label_17a98c;
        }
    }
    ctx->pc = 0x17A988u;
    // 0x17a988: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a98c:
    // 0x17a98c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A98Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A994u;
}
