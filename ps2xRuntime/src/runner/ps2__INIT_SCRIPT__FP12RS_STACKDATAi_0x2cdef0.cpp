#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INIT_SCRIPT__FP12RS_STACKDATAi
// Address: 0x2cdef0 - 0x2cdf14
void ps2__INIT_SCRIPT__FP12RS_STACKDATAi_0x2cdef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INIT_SCRIPT__FP12RS_STACKDATAi_0x2cdef0");
#endif

    switch (ctx->pc) {
        case 0x2cdf04u: goto label_2cdf04;
        default: break;
    }

    ctx->pc = 0x2cdef0u;

    // 0x2cdef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cdef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cdef4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2cdef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2cdef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cdef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cdefc: 0xc05a888  jal         func_16A220
    ctx->pc = 0x2CDEFCu;
    SET_GPR_U32(ctx, 31, 0x2CDF04u);
    ctx->pc = 0x2CDF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDEFCu;
            // 0x2cdf00: 0x8c24d430  lw          $a0, -0x2BD0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF04u; }
        if (ctx->pc != 0x2CDF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetScript__12CActionCharaFv_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDF04u; }
        if (ctx->pc != 0x2CDF04u) { return; }
    }
    ctx->pc = 0x2CDF04u;
label_2cdf04:
    // 0x2cdf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cdf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cdf08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cdf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDF0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDF10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDF0Cu;
            // 0x2cdf10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDF14u;
}
