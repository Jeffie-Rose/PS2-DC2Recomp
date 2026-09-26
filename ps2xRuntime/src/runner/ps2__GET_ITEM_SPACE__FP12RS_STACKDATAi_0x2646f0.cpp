#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ITEM_SPACE__FP12RS_STACKDATAi
// Address: 0x2646f0 - 0x264758
void ps2__GET_ITEM_SPACE__FP12RS_STACKDATAi_0x2646f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ITEM_SPACE__FP12RS_STACKDATAi_0x2646f0");
#endif

    switch (ctx->pc) {
        case 0x26470cu: goto label_26470c;
        case 0x264734u: goto label_264734;
        case 0x264740u: goto label_264740;
        default: break;
    }

    ctx->pc = 0x2646f0u;

    // 0x2646f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2646f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2646f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2646f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2646f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2646f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2646fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2646fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x264700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264704: 0xc064220  jal         func_190880
    ctx->pc = 0x264704u;
    SET_GPR_U32(ctx, 31, 0x26470Cu);
    ctx->pc = 0x264708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264704u;
            // 0x264708: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26470Cu; }
        if (ctx->pc != 0x26470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26470Cu; }
        if (ctx->pc != 0x26470Cu) { return; }
    }
    ctx->pc = 0x26470Cu;
label_26470c:
    // 0x26470c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26470Cu;
    {
        const bool branch_taken_0x26470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26470Cu;
            // 0x264710: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26470c) {
            ctx->pc = 0x26471Cu;
            goto label_26471c;
        }
    }
    ctx->pc = 0x264714u;
    // 0x264714: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x264714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x264718: 0x418021  addu        $s0, $v0, $at
    ctx->pc = 0x264718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_26471c:
    // 0x26471c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26471Cu;
    {
        const bool branch_taken_0x26471c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x264720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26471Cu;
            // 0x264720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26471c) {
            ctx->pc = 0x26472Cu;
            goto label_26472c;
        }
    }
    ctx->pc = 0x264724u;
    // 0x264724: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264724u;
    {
        const bool branch_taken_0x264724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264724u;
            // 0x264728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264724) {
            ctx->pc = 0x264744u;
            goto label_264744;
        }
    }
    ctx->pc = 0x26472Cu;
label_26472c:
    // 0x26472c: 0xc067610  jal         func_19D840
    ctx->pc = 0x26472Cu;
    SET_GPR_U32(ctx, 31, 0x264734u);
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264734u; }
        if (ctx->pc != 0x264734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264734u; }
        if (ctx->pc != 0x264734u) { return; }
    }
    ctx->pc = 0x264734u;
label_264734:
    // 0x264734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264738: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x264738u;
    SET_GPR_U32(ctx, 31, 0x264740u);
    ctx->pc = 0x26473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264738u;
            // 0x26473c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264740u; }
        if (ctx->pc != 0x264740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264740u; }
        if (ctx->pc != 0x264740u) { return; }
    }
    ctx->pc = 0x264740u;
label_264740:
    // 0x264740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264744:
    // 0x264744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x264744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26474c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26474cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264750: 0x3e00008  jr          $ra
    ctx->pc = 0x264750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264750u;
            // 0x264754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x264758u;
}
