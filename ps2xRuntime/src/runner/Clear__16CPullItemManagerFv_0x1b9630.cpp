#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Clear__16CPullItemManagerFv
// Address: 0x1b9630 - 0x1b9698
void Clear__16CPullItemManagerFv_0x1b9630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__16CPullItemManagerFv_0x1b9630");
#endif

    switch (ctx->pc) {
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9668u: goto label_1b9668;
        default: break;
    }

    ctx->pc = 0x1b9630u;

    // 0x1b9630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b9634: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b9634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b9638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b963c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b963cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9644: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9648: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9648u;
    {
        const bool branch_taken_0x1b9648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9648u;
            // 0x1b964c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9648) {
            ctx->pc = 0x1B9680u;
            goto label_1b9680;
        }
    }
    ctx->pc = 0x1B9650u;
    // 0x1b9650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b9650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9654u;
    {
        const bool branch_taken_0x1b9654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9654u;
            // 0x1b9658: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9654) {
            ctx->pc = 0x1B9670u;
            goto label_1b9670;
        }
    }
    ctx->pc = 0x1B965Cu;
label_1b965c:
    // 0x1b965c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b9660: 0xc06e564  jal         func_1B9590
    ctx->pc = 0x1B9660u;
    SET_GPR_U32(ctx, 31, 0x1B9668u);
    ctx->pc = 0x1B9664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9660u;
            // 0x1b9664: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9590u;
    if (runtime->hasFunction(0x1B9590u)) {
        auto targetFn = runtime->lookupFunction(0x1B9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9668u; }
        if (ctx->pc != 0x1B9668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CPullItemFv_0x1b9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9668u; }
        if (ctx->pc != 0x1B9668u) { return; }
    }
    ctx->pc = 0x1B9668u;
label_1b9668:
    // 0x1b9668: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x1b9668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x1b966c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b966cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b9670:
    // 0x1b9670: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1b9670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b9674: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1b9674u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b9678: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B9678u;
    {
        const bool branch_taken_0x1b9678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9678) {
            ctx->pc = 0x1B965Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b965c;
        }
    }
    ctx->pc = 0x1B9680u;
label_1b9680:
    // 0x1b9680: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b9680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9684: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b9684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b968c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b968cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9690: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9690u;
            // 0x1b9694: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9698u;
}
