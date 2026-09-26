#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_SET_POWGAGE_SAFE_LEVEL__FP12RS_STACKDATAi
// Address: 0x276190 - 0x2761e4
void ps2__SPHIDA_SET_POWGAGE_SAFE_LEVEL__FP12RS_STACKDATAi_0x276190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_SET_POWGAGE_SAFE_LEVEL__FP12RS_STACKDATAi_0x276190");
#endif

    switch (ctx->pc) {
        case 0x2761a0u: goto label_2761a0;
        default: break;
    }

    ctx->pc = 0x276190u;

    // 0x276190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276198: 0xc097e18  jal         func_25F860
    ctx->pc = 0x276198u;
    SET_GPR_U32(ctx, 31, 0x2761A0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2761A0u; }
        if (ctx->pc != 0x2761A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2761A0u; }
        if (ctx->pc != 0x2761A0u) { return; }
    }
    ctx->pc = 0x2761A0u;
label_2761a0:
    // 0x2761a0: 0x8f839ed4  lw          $v1, -0x612C($gp)
    ctx->pc = 0x2761a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2761a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2761A4u;
    {
        const bool branch_taken_0x2761a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2761a4) {
            ctx->pc = 0x2761B4u;
            goto label_2761b4;
        }
    }
    ctx->pc = 0x2761ACu;
    // 0x2761ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2761ACu;
    {
        const bool branch_taken_0x2761ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2761B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761ACu;
            // 0x2761b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761ac) {
            ctx->pc = 0x2761D8u;
            goto label_2761d8;
        }
    }
    ctx->pc = 0x2761B4u;
label_2761b4:
    // 0x2761b4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2761B4u;
    {
        const bool branch_taken_0x2761b4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2761B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761B4u;
            // 0x2761b8: 0x28410007  slti        $at, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2761b4) {
            ctx->pc = 0x2761C4u;
            goto label_2761c4;
        }
    }
    ctx->pc = 0x2761BCu;
    // 0x2761bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2761c0: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2761c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2761c4:
    // 0x2761c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2761C4u;
    {
        const bool branch_taken_0x2761c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2761c4) {
            ctx->pc = 0x2761D0u;
            goto label_2761d0;
        }
    }
    ctx->pc = 0x2761CCu;
    // 0x2761cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2761ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2761d0:
    // 0x2761d0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2761d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2761d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2761d8:
    // 0x2761d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2761d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2761dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2761DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2761E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2761DCu;
            // 0x2761e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2761E4u;
}
