#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMenuFillBox__Fiiii
// Address: 0x221ec0 - 0x221ee0
void DrawMenuFillBox__Fiiii_0x221ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMenuFillBox__Fiiii_0x221ec0");
#endif

    ctx->pc = 0x221ec0u;

    // 0x221ec0: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x221ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221ec4: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x221ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221ec8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x221ec8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221ecc: 0x0  nop
    ctx->pc = 0x221eccu;
    // NOP
    // 0x221ed0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x221ed0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x221ed4: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x221ed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x221ed8: 0x80887b8  j           func_221EE0
    ctx->pc = 0x221ED8u;
    ctx->pc = 0x221EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221ED8u;
            // 0x221edc: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x221EE0u;
}
