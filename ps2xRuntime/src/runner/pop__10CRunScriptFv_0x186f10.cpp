#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: pop__10CRunScriptFv
// Address: 0x186f10 - 0x186f30
void pop__10CRunScriptFv_0x186f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pop__10CRunScriptFv_0x186f10");
#endif

    ctx->pc = 0x186f10u;

    // 0x186f10: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x186f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x186f14: 0x24c3fff8  addiu       $v1, $a2, -0x8
    ctx->pc = 0x186f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x186f18: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x186f18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x186f1c: 0xc4c1fff8  lwc1        $f1, -0x8($a2)
    ctx->pc = 0x186f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186f20: 0xc4c0fffc  lwc1        $f0, -0x4($a2)
    ctx->pc = 0x186f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186f24: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x186f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x186f28: 0x3e00008  jr          $ra
    ctx->pc = 0x186F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F28u;
            // 0x186f2c: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186F30u;
}
