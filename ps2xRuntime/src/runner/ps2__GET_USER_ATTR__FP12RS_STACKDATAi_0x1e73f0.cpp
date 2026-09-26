#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_USER_ATTR__FP12RS_STACKDATAi
// Address: 0x1e73f0 - 0x1e7440
void ps2__GET_USER_ATTR__FP12RS_STACKDATAi_0x1e73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_USER_ATTR__FP12RS_STACKDATAi_0x1e73f0");
#endif

    switch (ctx->pc) {
        case 0x1e7418u: goto label_1e7418;
        case 0x1e7420u: goto label_1e7420;
        case 0x1e742cu: goto label_1e742c;
        default: break;
    }

    ctx->pc = 0x1e73f0u;

    // 0x1e73f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e73f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e73f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e73f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e73f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e73f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e73fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e73fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7400: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E7400u;
    {
        const bool branch_taken_0x1e7400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7400u;
            // 0x1e7404: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7400) {
            ctx->pc = 0x1E7410u;
            goto label_1e7410;
        }
    }
    ctx->pc = 0x1E7408u;
    // 0x1e7408: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7408u;
    {
        const bool branch_taken_0x1e7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7408u;
            // 0x1e740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7408) {
            ctx->pc = 0x1E7430u;
            goto label_1e7430;
        }
    }
    ctx->pc = 0x1E7410u;
label_1e7410:
    // 0x1e7410: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E7410u;
    SET_GPR_U32(ctx, 31, 0x1E7418u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7418u; }
        if (ctx->pc != 0x1E7418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7418u; }
        if (ctx->pc != 0x1E7418u) { return; }
    }
    ctx->pc = 0x1E7418u;
label_1e7418:
    // 0x1e7418: 0xc068140  jal         func_1A0500
    ctx->pc = 0x1E7418u;
    SET_GPR_U32(ctx, 31, 0x1E7420u);
    ctx->pc = 0x1E741Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7418u;
            // 0x1e741c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7420u; }
        if (ctx->pc != 0x1E7420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7420u; }
        if (ctx->pc != 0x1E7420u) { return; }
    }
    ctx->pc = 0x1E7420u;
label_1e7420:
    // 0x1e7420: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e7420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7424: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E7424u;
    SET_GPR_U32(ctx, 31, 0x1E742Cu);
    ctx->pc = 0x1E7428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7424u;
            // 0x1e7428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E742Cu; }
        if (ctx->pc != 0x1E742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E742Cu; }
        if (ctx->pc != 0x1E742Cu) { return; }
    }
    ctx->pc = 0x1E742Cu;
label_1e742c:
    // 0x1e742c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e7430:
    // 0x1e7430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7438: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7438u;
            // 0x1e743c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7440u;
}
