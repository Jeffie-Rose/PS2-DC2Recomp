#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BTL_BGM_VOL__FP12RS_STACKDATAi
// Address: 0x273da0 - 0x273dd8
void ps2__GET_BTL_BGM_VOL__FP12RS_STACKDATAi_0x273da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BTL_BGM_VOL__FP12RS_STACKDATAi_0x273da0");
#endif

    switch (ctx->pc) {
        case 0x273dc8u: goto label_273dc8;
        default: break;
    }

    ctx->pc = 0x273da0u;

    // 0x273da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273da8: 0x8f8297dc  lw          $v0, -0x6824($gp)
    ctx->pc = 0x273da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x273dac: 0x24422f90  addiu       $v0, $v0, 0x2F90
    ctx->pc = 0x273dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x273db0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x273DB0u;
    {
        const bool branch_taken_0x273db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273db0) {
            ctx->pc = 0x273DC0u;
            goto label_273dc0;
        }
    }
    ctx->pc = 0x273DB8u;
    // 0x273db8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273DB8u;
    {
        const bool branch_taken_0x273db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DB8u;
            // 0x273dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273db8) {
            ctx->pc = 0x273DCCu;
            goto label_273dcc;
        }
    }
    ctx->pc = 0x273DC0u;
label_273dc0:
    // 0x273dc0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x273DC0u;
    SET_GPR_U32(ctx, 31, 0x273DC8u);
    ctx->pc = 0x273DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273DC0u;
            // 0x273dc4: 0xc44c0088  lwc1        $f12, 0x88($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273DC8u; }
        if (ctx->pc != 0x273DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273DC8u; }
        if (ctx->pc != 0x273DC8u) { return; }
    }
    ctx->pc = 0x273DC8u;
label_273dc8:
    // 0x273dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x273dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_273dcc:
    // 0x273dcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x273DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DD0u;
            // 0x273dd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x273DD8u;
}
