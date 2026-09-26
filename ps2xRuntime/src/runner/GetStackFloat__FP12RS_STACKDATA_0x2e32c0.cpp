#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackFloat__FP12RS_STACKDATA
// Address: 0x2e32c0 - 0x2e32e8
void GetStackFloat__FP12RS_STACKDATA_0x2e32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackFloat__FP12RS_STACKDATA_0x2e32c0");
#endif

    ctx->pc = 0x2e32c0u;

    // 0x2e32c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e32c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e32c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E32C4u;
    {
        const bool branch_taken_0x2e32c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e32c4) {
            ctx->pc = 0x2E32D8u;
            goto label_2e32d8;
        }
    }
    ctx->pc = 0x2E32CCu;
    // 0x2e32cc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2e32ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E32D0u;
    {
        const bool branch_taken_0x2e32d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E32D0u;
            // 0x2e32d4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32d0) {
            ctx->pc = 0x2E32E0u;
            goto label_2e32e0;
        }
    }
    ctx->pc = 0x2E32D8u;
label_2e32d8:
    // 0x2e32d8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2e32d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e32dc: 0x0  nop
    ctx->pc = 0x2e32dcu;
    // NOP
label_2e32e0:
    // 0x2e32e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E32E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E32E8u;
}
