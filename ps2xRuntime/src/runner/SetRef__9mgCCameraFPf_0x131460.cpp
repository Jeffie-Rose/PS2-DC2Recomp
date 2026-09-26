#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRef__9mgCCameraFPf
// Address: 0x131460 - 0x131470
void SetRef__9mgCCameraFPf_0x131460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRef__9mgCCameraFPf_0x131460");
#endif

    ctx->pc = 0x131460u;

    // 0x131460: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x131460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131464: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x131464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131468: 0x804c510  j           func_131440
    ctx->pc = 0x131468u;
    ctx->pc = 0x13146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131468u;
            // 0x13146c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131470u;
}
