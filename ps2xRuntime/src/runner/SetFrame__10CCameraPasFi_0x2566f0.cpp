#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFrame__10CCameraPasFi
// Address: 0x2566f0 - 0x2566fc
void SetFrame__10CCameraPasFi_0x2566f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFrame__10CCameraPasFi_0x2566f0");
#endif

    ctx->pc = 0x2566f0u;

    // 0x2566f0: 0xac850204  sw          $a1, 0x204($a0)
    ctx->pc = 0x2566f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 516), GPR_U32(ctx, 5));
    // 0x2566f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2566F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2566F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2566F4u;
            // 0x2566f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2566FCu;
}
