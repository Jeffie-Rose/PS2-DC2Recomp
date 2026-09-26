#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetFuncPLight__4CMapFi
// Address: 0x15e1f0 - 0x15e244
void ResetFuncPLight__4CMapFi_0x15e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetFuncPLight__4CMapFi_0x15e1f0");
#endif

    switch (ctx->pc) {
        case 0x15e210u: goto label_15e210;
        case 0x15e220u: goto label_15e220;
        default: break;
    }

    ctx->pc = 0x15e1f0u;

    // 0x15e1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e1f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e1fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x15e1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e200: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e204: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15e204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15e208: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15E208u;
    {
        const bool branch_taken_0x15e208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E208u;
            // 0x15e20c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e208) {
            ctx->pc = 0x15E230u;
            goto label_15e230;
        }
    }
    ctx->pc = 0x15E210u;
label_15e210:
    // 0x15e210: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e218: 0xc050e04  jal         func_143810
    ctx->pc = 0x15E218u;
    SET_GPR_U32(ctx, 31, 0x15E220u);
    ctx->pc = 0x15E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E218u;
            // 0x15e21c: 0x502023  subu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143810u;
    if (runtime->hasFunction(0x143810u)) {
        auto targetFn = runtime->lookupFunction(0x143810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E220u; }
        if (ctx->pc != 0x15E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E220u; }
        if (ctx->pc != 0x15E220u) { return; }
    }
    ctx->pc = 0x15E220u;
label_15e220:
    // 0x15e220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15e224: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x15e224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x15e228: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15E228u;
    {
        const bool branch_taken_0x15e228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e228) {
            ctx->pc = 0x15E210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15e210;
        }
    }
    ctx->pc = 0x15E230u;
label_15e230:
    // 0x15e230: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15e230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e23c: 0x3e00008  jr          $ra
    ctx->pc = 0x15E23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E23Cu;
            // 0x15e240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E244u;
}
