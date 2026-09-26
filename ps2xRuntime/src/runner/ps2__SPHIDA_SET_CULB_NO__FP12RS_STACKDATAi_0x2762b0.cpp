#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_CULB_NO__FP12RS_STACKDATAi
// Address: 0x2762b0 - 0x2762e8
void ps2__SPHIDA_SET_CULB_NO__FP12RS_STACKDATAi_0x2762b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_CULB_NO__FP12RS_STACKDATAi_0x2762b0");
#endif

    switch (ctx->pc) {
        case 0x2762c0u: goto label_2762c0;
        default: break;
    }

    ctx->pc = 0x2762b0u;

    // 0x2762b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2762b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2762b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2762b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2762b8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2762B8u;
    SET_GPR_U32(ctx, 31, 0x2762C0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2762C0u; }
        if (ctx->pc != 0x2762C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2762C0u; }
        if (ctx->pc != 0x2762C0u) { return; }
    }
    ctx->pc = 0x2762C0u;
label_2762c0:
    // 0x2762c0: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x2762c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2762c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2762C4u;
    {
        const bool branch_taken_0x2762c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2762c4) {
            ctx->pc = 0x2762D4u;
            goto label_2762d4;
        }
    }
    ctx->pc = 0x2762CCu;
    // 0x2762cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2762CCu;
    {
        const bool branch_taken_0x2762cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2762D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762CCu;
            // 0x2762d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2762cc) {
            ctx->pc = 0x2762DCu;
            goto label_2762dc;
        }
    }
    ctx->pc = 0x2762D4u;
label_2762d4:
    // 0x2762d4: 0xac6201fc  sw          $v0, 0x1FC($v1)
    ctx->pc = 0x2762d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 508), GPR_U32(ctx, 2));
    // 0x2762d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2762dc:
    // 0x2762dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2762dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2762e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2762E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2762E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2762E0u;
            // 0x2762e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2762E8u;
}
