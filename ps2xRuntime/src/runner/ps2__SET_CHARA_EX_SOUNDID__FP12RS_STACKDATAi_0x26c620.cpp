#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CHARA_EX_SOUNDID__FP12RS_STACKDATAi
// Address: 0x26c620 - 0x26c678
void ps2__SET_CHARA_EX_SOUNDID__FP12RS_STACKDATAi_0x26c620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CHARA_EX_SOUNDID__FP12RS_STACKDATAi_0x26c620");
#endif

    switch (ctx->pc) {
        case 0x26c638u: goto label_26c638;
        case 0x26c640u: goto label_26c640;
        case 0x26c65cu: goto label_26c65c;
        default: break;
    }

    ctx->pc = 0x26c620u;

    // 0x26c620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26c628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26c62c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26c62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26c630: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C630u;
    SET_GPR_U32(ctx, 31, 0x26C638u);
    ctx->pc = 0x26C634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C630u;
            // 0x26c634: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C638u; }
        if (ctx->pc != 0x26C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C638u; }
        if (ctx->pc != 0x26C638u) { return; }
    }
    ctx->pc = 0x26C638u;
label_26c638:
    // 0x26c638: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26C638u;
    SET_GPR_U32(ctx, 31, 0x26C640u);
    ctx->pc = 0x26C63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C638u;
            // 0x26c63c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C640u; }
        if (ctx->pc != 0x26C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C640u; }
        if (ctx->pc != 0x26C640u) { return; }
    }
    ctx->pc = 0x26C640u;
label_26c640:
    // 0x26c640: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c644: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C644u;
    {
        const bool branch_taken_0x26c644 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C644u;
            // 0x26c648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c644) {
            ctx->pc = 0x26C654u;
            goto label_26c654;
        }
    }
    ctx->pc = 0x26C64Cu;
    // 0x26c64c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26C64Cu;
    {
        const bool branch_taken_0x26c64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C64Cu;
            // 0x26c650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c64c) {
            ctx->pc = 0x26C664u;
            goto label_26c664;
        }
    }
    ctx->pc = 0x26C654u;
label_26c654:
    // 0x26c654: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C654u;
    SET_GPR_U32(ctx, 31, 0x26C65Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C65Cu; }
        if (ctx->pc != 0x26C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C65Cu; }
        if (ctx->pc != 0x26C65Cu) { return; }
    }
    ctx->pc = 0x26C65Cu;
label_26c65c:
    // 0x26c65c: 0xae02058c  sw          $v0, 0x58C($s0)
    ctx->pc = 0x26c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 2));
    // 0x26c660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c664:
    // 0x26c664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26c664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26c668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c670: 0x3e00008  jr          $ra
    ctx->pc = 0x26C670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C670u;
            // 0x26c674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C678u;
}
