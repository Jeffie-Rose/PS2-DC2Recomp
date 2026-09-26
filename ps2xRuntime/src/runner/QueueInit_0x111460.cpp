#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QueueInit
// Address: 0x111460 - 0x111484
void QueueInit_0x111460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QueueInit_0x111460");
#endif

    ctx->pc = 0x111460u;

    // 0x111460: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x111460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x111464: 0x24439680  addiu       $v1, $v0, -0x6980
    ctx->pc = 0x111464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940288));
    // 0x111468: 0xac449680  sw          $a0, -0x6980($v0)
    ctx->pc = 0x111468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940288), GPR_U32(ctx, 4));
    // 0x11146c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x11146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x111470: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x111470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111474: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x111474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x111478: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x111478u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x11147c: 0x3e00008  jr          $ra
    ctx->pc = 0x11147Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11147Cu;
            // 0x111480: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111484u;
}
