#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcFishParam__FP14BREEDFISH_USED
// Address: 0x214390 - 0x2143d0
void CalcFishParam__FP14BREEDFISH_USED_0x214390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcFishParam__FP14BREEDFISH_USED_0x214390");
#endif

    ctx->pc = 0x214390u;

    // 0x214390: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214390u;
    {
        const bool branch_taken_0x214390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214390u;
            // 0x214394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214390) {
            ctx->pc = 0x2143A0u;
            goto label_2143a0;
        }
    }
    ctx->pc = 0x214398u;
    // 0x214398: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x214398u;
    {
        const bool branch_taken_0x214398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214398) {
            ctx->pc = 0x2143C8u;
            goto label_2143c8;
        }
    }
    ctx->pc = 0x2143A0u;
label_2143a0:
    // 0x2143a0: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x2143a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x2143a4: 0x94870028  lhu         $a3, 0x28($a0)
    ctx->pc = 0x2143a4u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2143a8: 0x9486002a  lhu         $a2, 0x2A($a0)
    ctx->pc = 0x2143a8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x2143ac: 0x9485002c  lhu         $a1, 0x2C($a0)
    ctx->pc = 0x2143acu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2143b0: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x2143b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2143b4: 0x21021  addu        $v0, $zero, $v0
    ctx->pc = 0x2143b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2143b8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2143bc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2143c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2143c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2143c8:
    // 0x2143c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2143C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2143D0u;
}
