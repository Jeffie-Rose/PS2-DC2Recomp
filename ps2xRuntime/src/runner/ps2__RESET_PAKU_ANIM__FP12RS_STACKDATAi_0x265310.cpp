#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_PAKU_ANIM__FP12RS_STACKDATAi
// Address: 0x265310 - 0x265358
void ps2__RESET_PAKU_ANIM__FP12RS_STACKDATAi_0x265310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_PAKU_ANIM__FP12RS_STACKDATAi_0x265310");
#endif

    switch (ctx->pc) {
        case 0x265334u: goto label_265334;
        case 0x265348u: goto label_265348;
        default: break;
    }

    ctx->pc = 0x265310u;

    // 0x265310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265314: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26531c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265320: 0xaf8297f8  sw          $v0, -0x6808($gp)
    ctx->pc = 0x265320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940664), GPR_U32(ctx, 2));
    // 0x265324: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x265324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x265328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26532c: 0xc049c86  jal         func_127218
    ctx->pc = 0x26532Cu;
    SET_GPR_U32(ctx, 31, 0x265334u);
    ctx->pc = 0x265330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26532Cu;
            // 0x265330: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265334u; }
        if (ctx->pc != 0x265334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265334u; }
        if (ctx->pc != 0x265334u) { return; }
    }
    ctx->pc = 0x265334u;
label_265334:
    // 0x265334: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x265334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x265338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26533c: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x26533cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x265340: 0xc049c86  jal         func_127218
    ctx->pc = 0x265340u;
    SET_GPR_U32(ctx, 31, 0x265348u);
    ctx->pc = 0x265344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265340u;
            // 0x265344: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265348u; }
        if (ctx->pc != 0x265348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265348u; }
        if (ctx->pc != 0x265348u) { return; }
    }
    ctx->pc = 0x265348u;
label_265348:
    // 0x265348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26534c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265350: 0x3e00008  jr          $ra
    ctx->pc = 0x265350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265350u;
            // 0x265354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265358u;
}
