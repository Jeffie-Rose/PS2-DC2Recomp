#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RUN_HOLD_MOVE__FP12RS_STACKDATAi
// Address: 0x2ce860 - 0x2ce8ac
void ps2__RUN_HOLD_MOVE__FP12RS_STACKDATAi_0x2ce860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RUN_HOLD_MOVE__FP12RS_STACKDATAi_0x2ce860");
#endif

    switch (ctx->pc) {
        case 0x2ce880u: goto label_2ce880;
        case 0x2ce88cu: goto label_2ce88c;
        case 0x2ce89cu: goto label_2ce89c;
        default: break;
    }

    ctx->pc = 0x2ce860u;

    // 0x2ce860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce864: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ce868: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE868u;
    {
        const bool branch_taken_0x2ce868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE868u;
            // 0x2ce86c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce868) {
            ctx->pc = 0x2CE878u;
            goto label_2ce878;
        }
    }
    ctx->pc = 0x2CE870u;
    // 0x2ce870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CE870u;
    {
        const bool branch_taken_0x2ce870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE870u;
            // 0x2ce874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce870) {
            ctx->pc = 0x2CE8A0u;
            goto label_2ce8a0;
        }
    }
    ctx->pc = 0x2CE878u;
label_2ce878:
    // 0x2ce878: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CE878u;
    SET_GPR_U32(ctx, 31, 0x2CE880u);
    ctx->pc = 0x2CE87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE878u;
            // 0x2ce87c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE880u; }
        if (ctx->pc != 0x2CE880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE880u; }
        if (ctx->pc != 0x2CE880u) { return; }
    }
    ctx->pc = 0x2CE880u;
label_2ce880:
    // 0x2ce880: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ce880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce884: 0xc0b37a8  jal         func_2CDEA0
    ctx->pc = 0x2CE884u;
    SET_GPR_U32(ctx, 31, 0x2CE88Cu);
    ctx->pc = 0x2CE888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE884u;
            // 0x2ce888: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEA0u;
    if (runtime->hasFunction(0x2CDEA0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE88Cu; }
        if (ctx->pc != 0x2CE88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x2cdea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE88Cu; }
        if (ctx->pc != 0x2CE88Cu) { return; }
    }
    ctx->pc = 0x2CE88Cu;
label_2ce88c:
    // 0x2ce88c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2ce88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2ce890: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2ce890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
    // 0x2ce894: 0xc05b6a8  jal         func_16DAA0
    ctx->pc = 0x2CE894u;
    SET_GPR_U32(ctx, 31, 0x2CE89Cu);
    ctx->pc = 0x2CE898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE894u;
            // 0x2ce898: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DAA0u;
    if (runtime->hasFunction(0x16DAA0u)) {
        auto targetFn = runtime->lookupFunction(0x16DAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE89Cu; }
        if (ctx->pc != 0x2CE89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HumanGunMoveIF__12CActionCharaFPcPc_0x16daa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE89Cu; }
        if (ctx->pc != 0x2CE89Cu) { return; }
    }
    ctx->pc = 0x2CE89Cu;
label_2ce89c:
    // 0x2ce89c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce8a0:
    // 0x2ce8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ce8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE8A4u;
            // 0x2ce8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE8ACu;
}
