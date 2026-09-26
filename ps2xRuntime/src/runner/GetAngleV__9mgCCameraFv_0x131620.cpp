#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAngleV__9mgCCameraFv
// Address: 0x131620 - 0x131628
void GetAngleV__9mgCCameraFv_0x131620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAngleV__9mgCCameraFv_0x131620");
#endif

    ctx->pc = 0x131620u;

    // 0x131620: 0x3e00008  jr          $ra
    ctx->pc = 0x131620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131620u;
            // 0x131624: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131628u;
}
