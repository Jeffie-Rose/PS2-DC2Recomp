#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_AI__FP12RS_STACKDATAi
// Address: 0x269620 - 0x26967c
void ps2__SET_AI__FP12RS_STACKDATAi_0x269620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_AI__FP12RS_STACKDATAi_0x269620");
#endif

    switch (ctx->pc) {
        case 0x269634u: goto label_269634;
        case 0x269640u: goto label_269640;
        case 0x269654u: goto label_269654;
        case 0x269668u: goto label_269668;
        default: break;
    }

    ctx->pc = 0x269620u;

    // 0x269620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269624: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269628: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x269628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26962c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26962Cu;
    SET_GPR_U32(ctx, 31, 0x269634u);
    ctx->pc = 0x269630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26962Cu;
            // 0x269630: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269634u; }
        if (ctx->pc != 0x269634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269634u; }
        if (ctx->pc != 0x269634u) { return; }
    }
    ctx->pc = 0x269634u;
label_269634:
    // 0x269634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269638: 0xc097e18  jal         func_25F860
    ctx->pc = 0x269638u;
    SET_GPR_U32(ctx, 31, 0x269640u);
    ctx->pc = 0x26963Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269638u;
            // 0x26963c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269640u; }
        if (ctx->pc != 0x269640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269640u; }
        if (ctx->pc != 0x269640u) { return; }
    }
    ctx->pc = 0x269640u;
label_269640:
    // 0x269640: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x269640u;
    {
        const bool branch_taken_0x269640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x269640) {
            ctx->pc = 0x26965Cu;
            goto label_26965c;
        }
    }
    ctx->pc = 0x269648u;
    // 0x269648: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x269648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x26964c: 0xc0b2bc8  jal         func_2CAF20
    ctx->pc = 0x26964Cu;
    SET_GPR_U32(ctx, 31, 0x269654u);
    ctx->pc = 0x269650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26964Cu;
            // 0x269650: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF20u;
    if (runtime->hasFunction(0x2CAF20u)) {
        auto targetFn = runtime->lookupFunction(0x2CAF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269654u; }
        if (ctx->pc != 0x269654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CancelStayVillager__6CSceneFi_0x2caf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269654u; }
        if (ctx->pc != 0x269654u) { return; }
    }
    ctx->pc = 0x269654u;
label_269654:
    // 0x269654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x269654u;
    {
        const bool branch_taken_0x269654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269654u;
            // 0x269658: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269654) {
            ctx->pc = 0x26966Cu;
            goto label_26966c;
        }
    }
    ctx->pc = 0x26965Cu;
label_26965c:
    // 0x26965c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x26965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x269660: 0xc0b2bb8  jal         func_2CAEE0
    ctx->pc = 0x269660u;
    SET_GPR_U32(ctx, 31, 0x269668u);
    ctx->pc = 0x269664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x269660u;
            // 0x269664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAEE0u;
    if (runtime->hasFunction(0x2CAEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2CAEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269668u; }
        if (ctx->pc != 0x269668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StayVillager__6CSceneFi_0x2caee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x269668u; }
        if (ctx->pc != 0x269668u) { return; }
    }
    ctx->pc = 0x269668u;
label_269668:
    // 0x269668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x269668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26966c:
    // 0x26966c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269670: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x269670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269674: 0x3e00008  jr          $ra
    ctx->pc = 0x269674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269674u;
            // 0x269678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26967Cu;
}
