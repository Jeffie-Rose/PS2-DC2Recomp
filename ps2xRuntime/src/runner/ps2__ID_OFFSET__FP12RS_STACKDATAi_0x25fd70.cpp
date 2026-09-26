#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ID_OFFSET__FP12RS_STACKDATAi
// Address: 0x25fd70 - 0x25fdac
void ps2__ID_OFFSET__FP12RS_STACKDATAi_0x25fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ID_OFFSET__FP12RS_STACKDATAi_0x25fd70");
#endif

    switch (ctx->pc) {
        case 0x25fd94u: goto label_25fd94;
        default: break;
    }

    ctx->pc = 0x25fd70u;

    // 0x25fd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fd78: 0x8f829808  lw          $v0, -0x67F8($gp)
    ctx->pc = 0x25fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x25fd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FD7Cu;
    {
        const bool branch_taken_0x25fd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD7Cu;
            // 0x25fd80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd7c) {
            ctx->pc = 0x25FD8Cu;
            goto label_25fd8c;
        }
    }
    ctx->pc = 0x25FD84u;
    // 0x25fd84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25FD84u;
    {
        const bool branch_taken_0x25fd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FD84u;
            // 0x25fd88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fd84) {
            ctx->pc = 0x25FDA4u;
            goto label_25fda4;
        }
    }
    ctx->pc = 0x25FD8Cu;
label_25fd8c:
    // 0x25fd8c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x25FD8Cu;
    SET_GPR_U32(ctx, 31, 0x25FD94u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD94u; }
        if (ctx->pc != 0x25FD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FD94u; }
        if (ctx->pc != 0x25FD94u) { return; }
    }
    ctx->pc = 0x25FD94u;
label_25fd94:
    // 0x25fd94: 0x8f839808  lw          $v1, -0x67F8($gp)
    ctx->pc = 0x25fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940680)));
    // 0x25fd98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x25fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25fd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25fda0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fda4:
    // 0x25fda4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FDA4u;
            // 0x25fda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FDACu;
}
