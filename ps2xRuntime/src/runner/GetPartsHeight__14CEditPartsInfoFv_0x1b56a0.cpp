#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPartsHeight__14CEditPartsInfoFv
// Address: 0x1b56a0 - 0x1b56b0
void GetPartsHeight__14CEditPartsInfoFv_0x1b56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPartsHeight__14CEditPartsInfoFv_0x1b56a0");
#endif

    ctx->pc = 0x1b56a0u;

    // 0x1b56a0: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1b56a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b56a4: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x1b56a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b56a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B56A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B56ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B56A8u;
            // 0x1b56ac: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B56B0u;
}
