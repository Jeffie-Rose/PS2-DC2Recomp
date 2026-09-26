#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_CLOSE_CNT__FP12RS_STACKDATAi
// Address: 0x26d3f0 - 0x26d448
void ps2__SET_MES_CLOSE_CNT__FP12RS_STACKDATAi_0x26d3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_CLOSE_CNT__FP12RS_STACKDATAi_0x26d3f0");
#endif

    switch (ctx->pc) {
        case 0x26d408u: goto label_26d408;
        case 0x26d410u: goto label_26d410;
        case 0x26d42cu: goto label_26d42c;
        default: break;
    }

    ctx->pc = 0x26d3f0u;

    // 0x26d3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d3f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d3f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d3fc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d400: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D400u;
    SET_GPR_U32(ctx, 31, 0x26D408u);
    ctx->pc = 0x26D404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D400u;
            // 0x26d404: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D408u; }
        if (ctx->pc != 0x26D408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D408u; }
        if (ctx->pc != 0x26D408u) { return; }
    }
    ctx->pc = 0x26D408u;
label_26d408:
    // 0x26d408: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D408u;
    SET_GPR_U32(ctx, 31, 0x26D410u);
    ctx->pc = 0x26D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D408u;
            // 0x26d40c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D410u; }
        if (ctx->pc != 0x26D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D410u; }
        if (ctx->pc != 0x26D410u) { return; }
    }
    ctx->pc = 0x26D410u;
label_26d410:
    // 0x26d410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d414: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D414u;
    {
        const bool branch_taken_0x26d414 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D414u;
            // 0x26d418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d414) {
            ctx->pc = 0x26D424u;
            goto label_26d424;
        }
    }
    ctx->pc = 0x26D41Cu;
    // 0x26d41c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26D41Cu;
    {
        const bool branch_taken_0x26d41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D41Cu;
            // 0x26d420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d41c) {
            ctx->pc = 0x26D434u;
            goto label_26d434;
        }
    }
    ctx->pc = 0x26D424u;
label_26d424:
    // 0x26d424: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D424u;
    SET_GPR_U32(ctx, 31, 0x26D42Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D42Cu; }
        if (ctx->pc != 0x26D42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D42Cu; }
        if (ctx->pc != 0x26D42Cu) { return; }
    }
    ctx->pc = 0x26D42Cu;
label_26d42c:
    // 0x26d42c: 0xae021b28  sw          $v0, 0x1B28($s0)
    ctx->pc = 0x26d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6952), GPR_U32(ctx, 2));
    // 0x26d430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d434:
    // 0x26d434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d440: 0x3e00008  jr          $ra
    ctx->pc = 0x26D440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D440u;
            // 0x26d444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D448u;
}
