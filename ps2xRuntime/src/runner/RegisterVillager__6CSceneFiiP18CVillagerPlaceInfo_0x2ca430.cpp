#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo
// Address: 0x2ca430 - 0x2ca444
void RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430");
#endif

    ctx->pc = 0x2ca430u;

    // 0x2ca430: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ca430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca434: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2ca434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2ca438: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ca438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca43c: 0x80b34f4  j           func_2CD3D0
    ctx->pc = 0x2CA43Cu;
    ctx->pc = 0x2CA440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA43Cu;
            // 0x2ca440: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD3D0u;
    if (runtime->hasFunction(0x2CD3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD3D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Register__13CVillagerMngrFiiP18CVillagerPlaceInfo_0x2cd3d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CA444u;
}
