#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_RESET_MOTION__FP12RS_STACKDATAi
// Address: 0x2721e0 - 0x272220
void ps2__OBJS_RESET_MOTION__FP12RS_STACKDATAi_0x2721e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_RESET_MOTION__FP12RS_STACKDATAi_0x2721e0");
#endif

    switch (ctx->pc) {
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f8u: goto label_2721f8;
        case 0x272210u: goto label_272210;
        default: break;
    }

    ctx->pc = 0x2721e0u;

    // 0x2721e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2721e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2721e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2721e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2721e8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2721E8u;
    SET_GPR_U32(ctx, 31, 0x2721F0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721F0u; }
        if (ctx->pc != 0x2721F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721F0u; }
        if (ctx->pc != 0x2721F0u) { return; }
    }
    ctx->pc = 0x2721F0u;
label_2721f0:
    // 0x2721f0: 0xc098a44  jal         func_262910
    ctx->pc = 0x2721F0u;
    SET_GPR_U32(ctx, 31, 0x2721F8u);
    ctx->pc = 0x2721F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2721F0u;
            // 0x2721f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721F8u; }
        if (ctx->pc != 0x2721F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2721F8u; }
        if (ctx->pc != 0x2721F8u) { return; }
    }
    ctx->pc = 0x2721F8u;
label_2721f8:
    // 0x2721f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2721F8u;
    {
        const bool branch_taken_0x2721f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2721FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2721F8u;
            // 0x2721fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721f8) {
            ctx->pc = 0x272208u;
            goto label_272208;
        }
    }
    ctx->pc = 0x272200u;
    // 0x272200: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272200u;
    {
        const bool branch_taken_0x272200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272200u;
            // 0x272204: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272200) {
            ctx->pc = 0x272214u;
            goto label_272214;
        }
    }
    ctx->pc = 0x272208u;
label_272208:
    // 0x272208: 0xc097444  jal         func_25D110
    ctx->pc = 0x272208u;
    SET_GPR_U32(ctx, 31, 0x272210u);
    ctx->pc = 0x25D110u;
    if (runtime->hasFunction(0x25D110u)) {
        auto targetFn = runtime->lookupFunction(0x25D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272210u; }
        if (ctx->pc != 0x272210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMotion__12CSceneObjSeqFv_0x25d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272210u; }
        if (ctx->pc != 0x272210u) { return; }
    }
    ctx->pc = 0x272210u;
label_272210:
    // 0x272210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272214:
    // 0x272214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x272214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272218: 0x3e00008  jr          $ra
    ctx->pc = 0x272218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272218u;
            // 0x27221c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272220u;
}
