#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: QuestRequestSetFlag__Fii
// Address: 0x31aae0 - 0x31ab24
void QuestRequestSetFlag__Fii_0x31aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuestRequestSetFlag__Fii_0x31aae0");
#endif

    switch (ctx->pc) {
        case 0x31aafcu: goto label_31aafc;
        case 0x31ab10u: goto label_31ab10;
        default: break;
    }

    ctx->pc = 0x31aae0u;

    // 0x31aae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31aae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31aae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31aaec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31aaf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31aaf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aaf4: 0xc0c69ec  jal         func_31A7B0
    ctx->pc = 0x31AAF4u;
    SET_GPR_U32(ctx, 31, 0x31AAFCu);
    ctx->pc = 0x31AAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AAF4u;
            // 0x31aaf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A7B0u;
    if (runtime->hasFunction(0x31A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x31A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AAFCu; }
        if (ctx->pc != 0x31AAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetQuestData__Fv_0x31a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AAFCu; }
        if (ctx->pc != 0x31AAFCu) { return; }
    }
    ctx->pc = 0x31AAFCu;
label_31aafc:
    // 0x31aafc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31aafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ab00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AB00u;
    {
        const bool branch_taken_0x31ab00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB00u;
            // 0x31ab04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ab00) {
            ctx->pc = 0x31AB10u;
            goto label_31ab10;
        }
    }
    ctx->pc = 0x31AB08u;
    // 0x31ab08: 0xc0c6a90  jal         func_31AA40
    ctx->pc = 0x31AB08u;
    SET_GPR_U32(ctx, 31, 0x31AB10u);
    ctx->pc = 0x31AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB08u;
            // 0x31ab0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AA40u;
    if (runtime->hasFunction(0x31AA40u)) {
        auto targetFn = runtime->lookupFunction(0x31AA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB10u; }
        if (ctx->pc != 0x31AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetQuestFlag__10CQuestDataFii_0x31aa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31AB10u; }
        if (ctx->pc != 0x31AB10u) { return; }
    }
    ctx->pc = 0x31AB10u;
label_31ab10:
    // 0x31ab10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ab14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ab14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ab18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ab18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31AB1Cu;
            // 0x31ab20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31AB24u;
}
