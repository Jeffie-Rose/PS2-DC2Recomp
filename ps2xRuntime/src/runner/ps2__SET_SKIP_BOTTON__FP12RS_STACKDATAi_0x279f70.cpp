#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_SKIP_BOTTON__FP12RS_STACKDATAi
// Address: 0x279f70 - 0x279fa8
void ps2__SET_SKIP_BOTTON__FP12RS_STACKDATAi_0x279f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_SKIP_BOTTON__FP12RS_STACKDATAi_0x279f70");
#endif

    switch (ctx->pc) {
        case 0x279f90u: goto label_279f90;
        default: break;
    }

    ctx->pc = 0x279f70u;

    // 0x279f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279f78: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279F78u;
    {
        const bool branch_taken_0x279f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x279F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F78u;
            // 0x279f7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f78) {
            ctx->pc = 0x279F88u;
            goto label_279f88;
        }
    }
    ctx->pc = 0x279F80u;
    // 0x279f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x279F80u;
    {
        const bool branch_taken_0x279f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279F80u;
            // 0x279f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f80) {
            ctx->pc = 0x279F9Cu;
            goto label_279f9c;
        }
    }
    ctx->pc = 0x279F88u;
label_279f88:
    // 0x279f88: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279F88u;
    SET_GPR_U32(ctx, 31, 0x279F90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F90u; }
        if (ctx->pc != 0x279F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279F90u; }
        if (ctx->pc != 0x279F90u) { return; }
    }
    ctx->pc = 0x279F90u;
label_279f90:
    // 0x279f90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x279f94: 0xac22e508  sw          $v0, -0x1AF8($at)
    ctx->pc = 0x279f94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960392), GPR_U32(ctx, 2));
    // 0x279f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279f9c:
    // 0x279f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x279FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279FA0u;
            // 0x279fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279FA8u;
}
