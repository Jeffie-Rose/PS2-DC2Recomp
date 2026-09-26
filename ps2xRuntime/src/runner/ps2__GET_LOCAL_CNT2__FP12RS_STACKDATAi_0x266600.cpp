#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_LOCAL_CNT2__FP12RS_STACKDATAi
// Address: 0x266600 - 0x26663c
void ps2__GET_LOCAL_CNT2__FP12RS_STACKDATAi_0x266600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_LOCAL_CNT2__FP12RS_STACKDATAi_0x266600");
#endif

    switch (ctx->pc) {
        case 0x266614u: goto label_266614;
        case 0x26661cu: goto label_26661c;
        case 0x266628u: goto label_266628;
        default: break;
    }

    ctx->pc = 0x266600u;

    // 0x266600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x266608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26660c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26660Cu;
    SET_GPR_U32(ctx, 31, 0x266614u);
    ctx->pc = 0x266610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26660Cu;
            // 0x266610: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266614u; }
        if (ctx->pc != 0x266614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266614u; }
        if (ctx->pc != 0x266614u) { return; }
    }
    ctx->pc = 0x266614u;
label_266614:
    // 0x266614: 0xc098454  jal         func_261150
    ctx->pc = 0x266614u;
    SET_GPR_U32(ctx, 31, 0x26661Cu);
    ctx->pc = 0x266618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266614u;
            // 0x266618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261150u;
    if (runtime->hasFunction(0x261150u)) {
        auto targetFn = runtime->lookupFunction(0x261150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26661Cu; }
        if (ctx->pc != 0x26661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalCnt2__Fi_0x261150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26661Cu; }
        if (ctx->pc != 0x26661Cu) { return; }
    }
    ctx->pc = 0x26661Cu;
label_26661c:
    // 0x26661c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266620: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x266620u;
    SET_GPR_U32(ctx, 31, 0x266628u);
    ctx->pc = 0x266624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266620u;
            // 0x266624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266628u; }
        if (ctx->pc != 0x266628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266628u; }
        if (ctx->pc != 0x266628u) { return; }
    }
    ctx->pc = 0x266628u;
label_266628:
    // 0x266628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26662c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266634: 0x3e00008  jr          $ra
    ctx->pc = 0x266634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266634u;
            // 0x266638: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26663Cu;
}
