#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFillRate__11COMMON_GAGEFf
// Address: 0x196d00 - 0x196d10
void SetFillRate__11COMMON_GAGEFf_0x196d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFillRate__11COMMON_GAGEFf_0x196d00");
#endif

    ctx->pc = 0x196d00u;

    // 0x196d00: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x196d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196d04: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x196d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x196d08: 0x3e00008  jr          $ra
    ctx->pc = 0x196D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196D08u;
            // 0x196d0c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196D10u;
}
