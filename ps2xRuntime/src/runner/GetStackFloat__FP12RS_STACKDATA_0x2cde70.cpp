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
// Address: 0x2cde70 - 0x2cde98
void GetStackFloat__FP12RS_STACKDATA_0x2cde70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackFloat__FP12RS_STACKDATA_0x2cde70");
#endif

    ctx->pc = 0x2cde70u;

    // 0x2cde70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cde70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cde74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDE74u;
    {
        const bool branch_taken_0x2cde74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cde74) {
            ctx->pc = 0x2CDE88u;
            goto label_2cde88;
        }
    }
    ctx->pc = 0x2CDE7Cu;
    // 0x2cde7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2cde7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cde80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE80u;
    {
        const bool branch_taken_0x2cde80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE80u;
            // 0x2cde84: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde80) {
            ctx->pc = 0x2CDE90u;
            goto label_2cde90;
        }
    }
    ctx->pc = 0x2CDE88u;
label_2cde88:
    // 0x2cde88: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2cde88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cde8c: 0x0  nop
    ctx->pc = 0x2cde8cu;
    // NOP
label_2cde90:
    // 0x2cde90: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDE98u;
}
