#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SphidaScoreViewKey__Fv
// Address: 0x2af620 - 0x2af674
void SphidaScoreViewKey__Fv_0x2af620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SphidaScoreViewKey__Fv_0x2af620");
#endif

    switch (ctx->pc) {
        case 0x2af630u: goto label_2af630;
        case 0x2af640u: goto label_2af640;
        default: break;
    }

    ctx->pc = 0x2af620u;

    // 0x2af620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af628: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x2AF628u;
    SET_GPR_U32(ctx, 31, 0x2AF630u);
    ctx->pc = 0x2AF62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF628u;
            // 0x2af62c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF630u; }
        if (ctx->pc != 0x2AF630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF630u; }
        if (ctx->pc != 0x2AF630u) { return; }
    }
    ctx->pc = 0x2AF630u;
label_2af630:
    // 0x2af630: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF630u;
    {
        const bool branch_taken_0x2af630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF630u;
            // 0x2af634: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af630) {
            ctx->pc = 0x2AF648u;
            goto label_2af648;
        }
    }
    ctx->pc = 0x2AF638u;
    // 0x2af638: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2AF638u;
    SET_GPR_U32(ctx, 31, 0x2AF640u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF640u; }
        if (ctx->pc != 0x2AF640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AF640u; }
        if (ctx->pc != 0x2AF640u) { return; }
    }
    ctx->pc = 0x2AF640u;
label_2af640:
    // 0x2af640: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF640u;
    {
        const bool branch_taken_0x2af640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF640u;
            // 0x2af644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af640) {
            ctx->pc = 0x2AF668u;
            goto label_2af668;
        }
    }
    ctx->pc = 0x2AF648u;
label_2af648:
    // 0x2af648: 0x87829b68  lh          $v0, -0x6498($gp)
    ctx->pc = 0x2af648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941544)));
    // 0x2af64c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2af64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2af650: 0xa7829b68  sh          $v0, -0x6498($gp)
    ctx->pc = 0x2af650u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941544), (uint16_t)GPR_U32(ctx, 2));
    // 0x2af654: 0x87829b68  lh          $v0, -0x6498($gp)
    ctx->pc = 0x2af654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941544)));
    // 0x2af658: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x2af658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2af65c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AF65Cu;
    {
        const bool branch_taken_0x2af65c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF65Cu;
            // 0x2af660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af65c) {
            ctx->pc = 0x2AF668u;
            goto label_2af668;
        }
    }
    ctx->pc = 0x2AF664u;
    // 0x2af664: 0xa7809b68  sh          $zero, -0x6498($gp)
    ctx->pc = 0x2af664u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941544), (uint16_t)GPR_U32(ctx, 0));
label_2af668:
    // 0x2af668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AF66Cu;
            // 0x2af670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AF674u;
}
