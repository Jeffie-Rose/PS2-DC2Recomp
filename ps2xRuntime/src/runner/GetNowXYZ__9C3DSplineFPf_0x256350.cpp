#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowXYZ__9C3DSplineFPf
// Address: 0x256350 - 0x256374
void GetNowXYZ__9C3DSplineFPf_0x256350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowXYZ__9C3DSplineFPf_0x256350");
#endif

    ctx->pc = 0x256350u;

    // 0x256350: 0xc480038c  lwc1        $f0, 0x38C($a0)
    ctx->pc = 0x256350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256354: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x256354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x256358: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x256358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x25635c: 0xc4800390  lwc1        $f0, 0x390($a0)
    ctx->pc = 0x25635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256360: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x256360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x256364: 0xc4800394  lwc1        $f0, 0x394($a0)
    ctx->pc = 0x256364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256368: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x256368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x25636c: 0x3e00008  jr          $ra
    ctx->pc = 0x25636Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25636Cu;
            // 0x256370: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x256374u;
}
