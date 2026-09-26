#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcBreedFishParam__FP14BREEDFISH_USED
// Address: 0x196de0 - 0x196e0c
void CalcBreedFishParam__FP14BREEDFISH_USED_0x196de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcBreedFishParam__FP14BREEDFISH_USED_0x196de0");
#endif

    ctx->pc = 0x196de0u;

    // 0x196de0: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x196de0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x196de4: 0x94870028  lhu         $a3, 0x28($a0)
    ctx->pc = 0x196de4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x196de8: 0x9486002a  lhu         $a2, 0x2A($a0)
    ctx->pc = 0x196de8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x196dec: 0x9485002c  lhu         $a1, 0x2C($a0)
    ctx->pc = 0x196decu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x196df0: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x196df0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x196df4: 0x21021  addu        $v0, $zero, $v0
    ctx->pc = 0x196df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x196df8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x196df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x196dfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x196dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x196e00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x196e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x196e04: 0x3e00008  jr          $ra
    ctx->pc = 0x196E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E04u;
            // 0x196e08: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196E0Cu;
}
