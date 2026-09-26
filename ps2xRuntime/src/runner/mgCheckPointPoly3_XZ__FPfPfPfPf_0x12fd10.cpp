#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCheckPointPoly3_XZ__FPfPfPfPf
// Address: 0x12fd10 - 0x12fd34
void mgCheckPointPoly3_XZ__FPfPfPfPf_0x12fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCheckPointPoly3_XZ__FPfPfPfPf_0x12fd10");
#endif

    ctx->pc = 0x12fd10u;

    // 0x12fd10: 0xc48d0008  lwc1        $f13, 0x8($a0)
    ctx->pc = 0x12fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12fd14: 0xc4ae0000  lwc1        $f14, 0x0($a1)
    ctx->pc = 0x12fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x12fd18: 0xc4af0008  lwc1        $f15, 0x8($a1)
    ctx->pc = 0x12fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x12fd1c: 0xc4d00000  lwc1        $f16, 0x0($a2)
    ctx->pc = 0x12fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x12fd20: 0xc4d10008  lwc1        $f17, 0x8($a2)
    ctx->pc = 0x12fd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x12fd24: 0xc4f20000  lwc1        $f18, 0x0($a3)
    ctx->pc = 0x12fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x12fd28: 0xc4f30008  lwc1        $f19, 0x8($a3)
    ctx->pc = 0x12fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x12fd2c: 0x804bf50  j           func_12FD40
    ctx->pc = 0x12FD2Cu;
    ctx->pc = 0x12FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FD2Cu;
            // 0x12fd30: 0xc48c0000  lwc1        $f12, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FD40u;
    if (runtime->hasFunction(0x12FD40u)) {
        auto targetFn = runtime->lookupFunction(0x12FD40u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Check_Point_Poly3__Fffffffff_0x12fd40(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12FD34u;
}
