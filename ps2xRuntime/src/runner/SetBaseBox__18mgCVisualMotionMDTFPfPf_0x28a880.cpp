#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBaseBox__18mgCVisualMotionMDTFPfPf
// Address: 0x28a880 - 0x28a8a0
void SetBaseBox__18mgCVisualMotionMDTFPfPf_0x28a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBaseBox__18mgCVisualMotionMDTFPfPf_0x28a880");
#endif

    ctx->pc = 0x28a880u;

    // 0x28a880: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x28a880u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28a884: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x28a884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x28a888: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x28a888u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x28a88c: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x28a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x28a890: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x28a890u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28a894: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x28a894u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x28a898: 0x3e00008  jr          $ra
    ctx->pc = 0x28A898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A898u;
            // 0x28a89c: 0xacc7000c  sw          $a3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A8A0u;
}
