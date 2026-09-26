#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__9mgCCameraFPf
// Address: 0x131410 - 0x131420
void SetPos__9mgCCameraFPf_0x131410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__9mgCCameraFPf_0x131410");
#endif

    ctx->pc = 0x131410u;

    // 0x131410: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x131410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131414: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x131414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131418: 0x804c4f8  j           func_1313E0
    ctx->pc = 0x131418u;
    ctx->pc = 0x13141Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131418u;
            // 0x13141c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131420u;
}
