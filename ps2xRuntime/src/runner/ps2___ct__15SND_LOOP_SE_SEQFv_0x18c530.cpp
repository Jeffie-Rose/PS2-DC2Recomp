#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__15SND_LOOP_SE_SEQFv
// Address: 0x18c530 - 0x18c54c
void ps2___ct__15SND_LOOP_SE_SEQFv_0x18c530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__15SND_LOOP_SE_SEQFv_0x18c530");
#endif

    ctx->pc = 0x18c530u;

    // 0x18c530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18c530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c534: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18c534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18c538: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18c538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x18c53c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x18c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x18c540: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18c540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c544: 0x3e00008  jr          $ra
    ctx->pc = 0x18C544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C544u;
            // 0x18c548: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C54Cu;
}
