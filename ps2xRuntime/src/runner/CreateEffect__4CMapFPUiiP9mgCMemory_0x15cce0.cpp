#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateEffect__4CMapFPUiiP9mgCMemory
// Address: 0x15cce0 - 0x15cd00
void CreateEffect__4CMapFPUiiP9mgCMemory_0x15cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateEffect__4CMapFPUiiP9mgCMemory_0x15cce0");
#endif

    ctx->pc = 0x15cce0u;

    // 0x15cce0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15cce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cce4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15cce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cce8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15cce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ccec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15ccecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ccf0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x15ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x15ccf4: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x15ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x15ccf8: 0x805f390  j           func_17CE40
    ctx->pc = 0x15CCF8u;
    ctx->pc = 0x15CCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CCF8u;
            // 0x15ccfc: 0x24a52cf8  addiu       $a1, $a1, 0x2CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17CE40u;
    if (runtime->hasFunction(0x17CE40u)) {
        auto targetFn = runtime->lookupFunction(0x17CE40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        LoadEFPFile__11CEffectListFPcPUiiP9mgCMemory_0x17ce40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15CD00u;
}
