#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextPos__9mgCCameraFPf
// Address: 0x131430 - 0x131440
void SetNextPos__9mgCCameraFPf_0x131430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextPos__9mgCCameraFPf_0x131430");
#endif

    ctx->pc = 0x131430u;

    // 0x131430: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x131430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x131434: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x131434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x131438: 0x804c508  j           func_131420
    ctx->pc = 0x131438u;
    ctx->pc = 0x13143Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131438u;
            // 0x13143c: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131420u;
    if (runtime->hasFunction(0x131420u)) {
        auto targetFn = runtime->lookupFunction(0x131420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        SetNextPos__9mgCCameraFfff_0x131420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x131440u;
}
