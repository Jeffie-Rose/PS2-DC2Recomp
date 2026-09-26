#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadSndRevInfo__6CSceneFPci
// Address: 0x2a8300 - 0x2a831c
void LoadSndRevInfo__6CSceneFPci_0x2a8300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadSndRevInfo__6CSceneFPci_0x2a8300");
#endif

    ctx->pc = 0x2a8300u;

    // 0x2a8300: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a8300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a8304: 0x610c2  srl         $v0, $a2, 3
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x2a8308: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x2a8308u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2a830c: 0xac228864  sw          $v0, -0x779C($at)
    ctx->pc = 0x2a830cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294936676), GPR_U32(ctx, 2));
    // 0x2a8310: 0x34018868  ori         $at, $zero, 0x8868
    ctx->pc = 0x2a8310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34920);
    // 0x2a8314: 0x8049c18  j           func_127060
    ctx->pc = 0x2A8314u;
    ctx->pc = 0x2A8318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8314u;
            // 0x2a8318: 0x812021  addu        $a0, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        memcpy_0x127060(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2A831Cu;
}
