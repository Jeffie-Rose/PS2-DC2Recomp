#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetEventKeyword__FPcPci
// Address: 0x30a610 - 0x30a688
void SetEventKeyword__FPcPci_0x30a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEventKeyword__FPcPci_0x30a610");
#endif

    switch (ctx->pc) {
        case 0x30a64cu: goto label_30a64c;
        case 0x30a670u: goto label_30a670;
        default: break;
    }

    ctx->pc = 0x30a610u;

    // 0x30a610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30a614: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30a614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30a618: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a61c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30a620: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30a624: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30a624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a628: 0xa020dce8  sb          $zero, -0x2318($at)
    ctx->pc = 0x30a628u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958312), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a62c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30a62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a630: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30a634: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A634u;
    {
        const bool branch_taken_0x30a634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A634u;
            // 0x30a638: 0xa020dce9  sb          $zero, -0x2317($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294958313), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a634) {
            ctx->pc = 0x30A64Cu;
            goto label_30a64c;
        }
    }
    ctx->pc = 0x30A63Cu;
    // 0x30a63c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a640: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30a640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30a644: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30A644u;
    SET_GPR_U32(ctx, 31, 0x30A64Cu);
    ctx->pc = 0x30A648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A644u;
            // 0x30a648: 0x2484dce8  addiu       $a0, $a0, -0x2318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A64Cu; }
        if (ctx->pc != 0x30A64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A64Cu; }
        if (ctx->pc != 0x30A64Cu) { return; }
    }
    ctx->pc = 0x30A64Cu;
label_30a64c:
    // 0x30a64c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30a64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30a650: 0xa020dd30  sb          $zero, -0x22D0($at)
    ctx->pc = 0x30a650u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958384), (uint8_t)GPR_U32(ctx, 0));
    // 0x30a654: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x30a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
    // 0x30a658: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A658u;
    {
        const bool branch_taken_0x30a658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A658u;
            // 0x30a65c: 0xa020dd31  sb          $zero, -0x22CF($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294958385), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a658) {
            ctx->pc = 0x30A670u;
            goto label_30a670;
        }
    }
    ctx->pc = 0x30A660u;
    // 0x30a660: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30a660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x30a664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30a664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a668: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x30A668u;
    SET_GPR_U32(ctx, 31, 0x30A670u);
    ctx->pc = 0x30A66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30A668u;
            // 0x30a66c: 0x2484dd30  addiu       $a0, $a0, -0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A670u; }
        if (ctx->pc != 0x30A670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30A670u; }
        if (ctx->pc != 0x30A670u) { return; }
    }
    ctx->pc = 0x30A670u;
label_30a670:
    // 0x30a670: 0xa390a1d4  sb          $s0, -0x5E2C($gp)
    ctx->pc = 0x30a670u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943188), (uint8_t)GPR_U32(ctx, 16));
    // 0x30a674: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30a678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30a67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a680: 0x3e00008  jr          $ra
    ctx->pc = 0x30A680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A680u;
            // 0x30a684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A688u;
}
