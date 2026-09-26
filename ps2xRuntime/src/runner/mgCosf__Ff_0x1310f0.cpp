#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCosf__Ff
// Address: 0x1310f0 - 0x131104
void mgCosf__Ff_0x1310f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCosf__Ff_0x1310f0");
#endif

    ctx->pc = 0x1310f0u;

    // 0x1310f0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1310f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1310f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1310f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1310f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1310f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1310fc: 0x804c414  j           func_131050
    ctx->pc = 0x1310FCu;
    ctx->pc = 0x131100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1310FCu;
            // 0x131100: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131050u;
    if (runtime->hasFunction(0x131050u)) {
        auto targetFn = runtime->lookupFunction(0x131050u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        mgSinf__Ff_0x131050(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131104u;
}
