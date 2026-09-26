#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDrawTopList__14CPosDataManageFv
// Address: 0x22b0d0 - 0x22b118
void GetDrawTopList__14CPosDataManageFv_0x22b0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDrawTopList__14CPosDataManageFv_0x22b0d0");
#endif

    switch (ctx->pc) {
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0e8u: goto label_22b0e8;
        default: break;
    }

    ctx->pc = 0x22b0d0u;

    // 0x22b0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b0d8: 0xc08abbc  jal         func_22AEF0
    ctx->pc = 0x22B0D8u;
    SET_GPR_U32(ctx, 31, 0x22B0E0u);
    ctx->pc = 0x22B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0D8u;
            // 0x22b0dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B0E0u; }
        if (ctx->pc != 0x22B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B0E0u; }
        if (ctx->pc != 0x22B0E0u) { return; }
    }
    ctx->pc = 0x22B0E0u;
label_22b0e0:
    // 0x22b0e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B0E0u;
    {
        const bool branch_taken_0x22b0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0e0) {
            ctx->pc = 0x22B104u;
            goto label_22b104;
        }
    }
    ctx->pc = 0x22B0E8u;
label_22b0e8:
    // 0x22b0e8: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x22b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x22b0ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B0ECu;
    {
        const bool branch_taken_0x22b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b0ec) {
            ctx->pc = 0x22B0FCu;
            goto label_22b0fc;
        }
    }
    ctx->pc = 0x22B0F4u;
    // 0x22b0f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22B0F4u;
    {
        const bool branch_taken_0x22b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0F4u;
            // 0x22b0f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0f4) {
            ctx->pc = 0x22B110u;
            goto label_22b110;
        }
    }
    ctx->pc = 0x22B0FCu;
label_22b0fc:
    // 0x22b0fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22B0FCu;
    {
        const bool branch_taken_0x22b0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B0FCu;
            // 0x22b100: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0fc) {
            ctx->pc = 0x22B0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22b0e8;
        }
    }
    ctx->pc = 0x22B104u;
label_22b104:
    // 0x22b104: 0x0  nop
    ctx->pc = 0x22b104u;
    // NOP
    // 0x22b108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b110:
    // 0x22b110: 0x3e00008  jr          $ra
    ctx->pc = 0x22B110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B110u;
            // 0x22b114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B118u;
}
