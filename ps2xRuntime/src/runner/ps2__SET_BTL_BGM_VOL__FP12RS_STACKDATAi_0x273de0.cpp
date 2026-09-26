#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_BTL_BGM_VOL__FP12RS_STACKDATAi
// Address: 0x273de0 - 0x273e1c
void ps2__SET_BTL_BGM_VOL__FP12RS_STACKDATAi_0x273de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_BTL_BGM_VOL__FP12RS_STACKDATAi_0x273de0");
#endif

    switch (ctx->pc) {
        case 0x273e08u: goto label_273e08;
        default: break;
    }

    ctx->pc = 0x273de0u;

    // 0x273de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273de8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273dec: 0x24432f90  addiu       $v1, $v0, 0x2F90
    ctx->pc = 0x273decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x273df0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273DF0u;
    {
        const bool branch_taken_0x273df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DF0u;
            // 0x273df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273df0) {
            ctx->pc = 0x273E00u;
            goto label_273e00;
        }
    }
    ctx->pc = 0x273DF8u;
    // 0x273df8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x273DF8u;
    {
        const bool branch_taken_0x273df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DF8u;
            // 0x273dfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273df8) {
            ctx->pc = 0x273E14u;
            goto label_273e14;
        }
    }
    ctx->pc = 0x273E00u;
label_273e00:
    // 0x273e00: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x273E00u;
    SET_GPR_U32(ctx, 31, 0x273E08u);
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E08u; }
        if (ctx->pc != 0x273E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273E08u; }
        if (ctx->pc != 0x273E08u) { return; }
    }
    ctx->pc = 0x273E08u;
label_273e08:
    // 0x273e08: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x273e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x273e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_273e14:
    // 0x273e14: 0x3e00008  jr          $ra
    ctx->pc = 0x273E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E14u;
            // 0x273e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273E1Cu;
}
