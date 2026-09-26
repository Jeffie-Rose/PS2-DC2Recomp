#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_ACT_STATUS__FP12RS_STACKDATAi
// Address: 0x1e54c0 - 0x1e54f8
void ps2__SET_ACT_STATUS__FP12RS_STACKDATAi_0x1e54c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_ACT_STATUS__FP12RS_STACKDATAi_0x1e54c0");
#endif

    switch (ctx->pc) {
        case 0x1e54e0u: goto label_1e54e0;
        default: break;
    }

    ctx->pc = 0x1e54c0u;

    // 0x1e54c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e54c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e54c8: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E54C8u;
    {
        const bool branch_taken_0x1e54c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E54CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54C8u;
            // 0x1e54cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54c8) {
            ctx->pc = 0x1E54D8u;
            goto label_1e54d8;
        }
    }
    ctx->pc = 0x1E54D0u;
    // 0x1e54d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E54D0u;
    {
        const bool branch_taken_0x1e54d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E54D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54D0u;
            // 0x1e54d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54d0) {
            ctx->pc = 0x1E54ECu;
            goto label_1e54ec;
        }
    }
    ctx->pc = 0x1E54D8u;
label_1e54d8:
    // 0x1e54d8: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E54D8u;
    SET_GPR_U32(ctx, 31, 0x1E54E0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54E0u; }
        if (ctx->pc != 0x1E54E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54E0u; }
        if (ctx->pc != 0x1E54E0u) { return; }
    }
    ctx->pc = 0x1E54E0u;
label_1e54e0:
    // 0x1e54e0: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e54e4: 0xac62077c  sw          $v0, 0x77C($v1)
    ctx->pc = 0x1e54e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1916), GPR_U32(ctx, 2));
    // 0x1e54e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e54ec:
    // 0x1e54ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e54ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e54f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E54F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E54F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54F0u;
            // 0x1e54f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E54F8u;
}
