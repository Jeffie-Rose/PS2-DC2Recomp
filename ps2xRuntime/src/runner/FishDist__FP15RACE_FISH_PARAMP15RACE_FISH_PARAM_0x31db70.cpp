#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FishDist__FP15RACE_FISH_PARAMP15RACE_FISH_PARAM
// Address: 0x31db70 - 0x31db90
void FishDist__FP15RACE_FISH_PARAMP15RACE_FISH_PARAM_0x31db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FishDist__FP15RACE_FISH_PARAMP15RACE_FISH_PARAM_0x31db70");
#endif

    ctx->pc = 0x31db70u;

    // 0x31db70: 0xc4830054  lwc1        $f3, 0x54($a0)
    ctx->pc = 0x31db70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31db74: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x31db74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31db78: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x31db78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31db7c: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x31db7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31db80: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x31db80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x31db84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31db84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31db88: 0x3e00008  jr          $ra
    ctx->pc = 0x31DB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31DB88u;
            // 0x31db8c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31DB90u;
}
