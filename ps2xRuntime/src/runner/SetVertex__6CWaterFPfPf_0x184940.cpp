#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVertex__6CWaterFPfPf
// Address: 0x184940 - 0x184958
void SetVertex__6CWaterFPfPf_0x184940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVertex__6CWaterFPfPf_0x184940");
#endif

    ctx->pc = 0x184940u;

    // 0x184940: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x184940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x184944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184948: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x184948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18494c: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x18494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x184950: 0x804bd2c  j           func_12F4B0
    ctx->pc = 0x184950u;
    ctx->pc = 0x184954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184950u;
            // 0x184954: 0x24450060  addiu       $a1, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4B0u;
    if (runtime->hasFunction(0x12F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgVectorMaxMin__FPfPfPfPf_0x12f4b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x184958u;
}
