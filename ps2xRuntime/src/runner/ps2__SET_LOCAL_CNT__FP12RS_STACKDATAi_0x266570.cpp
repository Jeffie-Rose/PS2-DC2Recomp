#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_LOCAL_CNT__FP12RS_STACKDATAi
// Address: 0x266570 - 0x2665b0
void ps2__SET_LOCAL_CNT__FP12RS_STACKDATAi_0x266570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_LOCAL_CNT__FP12RS_STACKDATAi_0x266570");
#endif

    switch (ctx->pc) {
        case 0x266584u: goto label_266584;
        case 0x266590u: goto label_266590;
        case 0x26659cu: goto label_26659c;
        default: break;
    }

    ctx->pc = 0x266570u;

    // 0x266570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26657c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26657Cu;
    SET_GPR_U32(ctx, 31, 0x266584u);
    ctx->pc = 0x266580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26657Cu;
            // 0x266580: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266584u; }
        if (ctx->pc != 0x266584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266584u; }
        if (ctx->pc != 0x266584u) { return; }
    }
    ctx->pc = 0x266584u;
label_266584:
    // 0x266584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266588: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266588u;
    SET_GPR_U32(ctx, 31, 0x266590u);
    ctx->pc = 0x26658Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266588u;
            // 0x26658c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266590u; }
        if (ctx->pc != 0x266590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266590u; }
        if (ctx->pc != 0x266590u) { return; }
    }
    ctx->pc = 0x266590u;
label_266590:
    // 0x266590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266594: 0xc098444  jal         func_261110
    ctx->pc = 0x266594u;
    SET_GPR_U32(ctx, 31, 0x26659Cu);
    ctx->pc = 0x266598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266594u;
            // 0x266598: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261110u;
    if (runtime->hasFunction(0x261110u)) {
        auto targetFn = runtime->lookupFunction(0x261110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26659Cu; }
        if (ctx->pc != 0x26659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLocalCnt__Fii_0x261110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26659Cu; }
        if (ctx->pc != 0x26659Cu) { return; }
    }
    ctx->pc = 0x26659Cu;
label_26659c:
    // 0x26659c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26659cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2665a0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2665a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2665a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2665a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2665a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2665A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2665ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2665A8u;
            // 0x2665ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2665B0u;
}
