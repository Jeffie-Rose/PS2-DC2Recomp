#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _INITIALIZE__FP12RS_STACKDATAi
// Address: 0x262e30 - 0x262e70
void ps2__INITIALIZE__FP12RS_STACKDATAi_0x262e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__INITIALIZE__FP12RS_STACKDATAi_0x262e30");
#endif

    switch (ctx->pc) {
        case 0x262e40u: goto label_262e40;
        case 0x262e48u: goto label_262e48;
        case 0x262e60u: goto label_262e60;
        default: break;
    }

    ctx->pc = 0x262e30u;

    // 0x262e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x262e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x262e38: 0xc09853c  jal         func_2614F0
    ctx->pc = 0x262E38u;
    SET_GPR_U32(ctx, 31, 0x262E40u);
    ctx->pc = 0x2614F0u;
    if (runtime->hasFunction(0x2614F0u)) {
        auto targetFn = runtime->lookupFunction(0x2614F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E40u; }
        if (ctx->pc != 0x262E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventInit__Fv_0x2614f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E40u; }
        if (ctx->pc != 0x262E40u) { return; }
    }
    ctx->pc = 0x262E40u;
label_262e40:
    // 0x262e40: 0xc0956c8  jal         func_255B20
    ctx->pc = 0x262E40u;
    SET_GPR_U32(ctx, 31, 0x262E48u);
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E48u; }
        if (ctx->pc != 0x262E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E48u; }
        if (ctx->pc != 0x262E48u) { return; }
    }
    ctx->pc = 0x262E48u;
label_262e48:
    // 0x262e48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262E48u;
    {
        const bool branch_taken_0x262e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E48u;
            // 0x262e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e48) {
            ctx->pc = 0x262E58u;
            goto label_262e58;
        }
    }
    ctx->pc = 0x262E50u;
    // 0x262e50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x262E50u;
    {
        const bool branch_taken_0x262e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E50u;
            // 0x262e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e50) {
            ctx->pc = 0x262E64u;
            goto label_262e64;
        }
    }
    ctx->pc = 0x262E58u;
label_262e58:
    // 0x262e58: 0xc04c66c  jal         func_1319B0
    ctx->pc = 0x262E58u;
    SET_GPR_U32(ctx, 31, 0x262E60u);
    ctx->pc = 0x1319B0u;
    if (runtime->hasFunction(0x1319B0u)) {
        auto targetFn = runtime->lookupFunction(0x1319B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E60u; }
        if (ctx->pc != 0x262E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FollowOff__15mgCCameraFollowFv_0x1319b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262E60u; }
        if (ctx->pc != 0x262E60u) { return; }
    }
    ctx->pc = 0x262E60u;
label_262e60:
    // 0x262e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262e64:
    // 0x262e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262e68: 0x3e00008  jr          $ra
    ctx->pc = 0x262E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262E68u;
            // 0x262e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262E70u;
}
