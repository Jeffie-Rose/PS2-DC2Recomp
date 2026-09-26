#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetMotion__12CActionCharaFv
// Address: 0x16b800 - 0x16b848
void ResetMotion__12CActionCharaFv_0x16b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetMotion__12CActionCharaFv_0x16b800");
#endif

    switch (ctx->pc) {
        case 0x16b814u: goto label_16b814;
        case 0x16b81cu: goto label_16b81c;
        default: break;
    }

    ctx->pc = 0x16b800u;

    // 0x16b800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b80c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B80Cu;
    {
        const bool branch_taken_0x16b80c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B80Cu;
            // 0x16b810: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b80c) {
            ctx->pc = 0x16B834u;
            goto label_16b834;
        }
    }
    ctx->pc = 0x16B814u;
label_16b814:
    // 0x16b814: 0xc05ce1c  jal         func_173870
    ctx->pc = 0x16B814u;
    SET_GPR_U32(ctx, 31, 0x16B81Cu);
    ctx->pc = 0x16B818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B814u;
            // 0x16b818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173870u;
    if (runtime->hasFunction(0x173870u)) {
        auto targetFn = runtime->lookupFunction(0x173870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B81Cu; }
        if (ctx->pc != 0x16B81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMotion__11CCharacter2Fv_0x173870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B81Cu; }
        if (ctx->pc != 0x16B81Cu) { return; }
    }
    ctx->pc = 0x16B81Cu;
label_16b81c:
    // 0x16b81c: 0x8e100678  lw          $s0, 0x678($s0)
    ctx->pc = 0x16b81cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1656)));
    // 0x16b820: 0x0  nop
    ctx->pc = 0x16b820u;
    // NOP
    // 0x16b824: 0x0  nop
    ctx->pc = 0x16b824u;
    // NOP
    // 0x16b828: 0x0  nop
    ctx->pc = 0x16b828u;
    // NOP
    // 0x16b82c: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16B82Cu;
    {
        const bool branch_taken_0x16b82c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b82c) {
            ctx->pc = 0x16B814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16b814;
        }
    }
    ctx->pc = 0x16B834u;
label_16b834:
    // 0x16b834: 0x0  nop
    ctx->pc = 0x16b834u;
    // NOP
    // 0x16b838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b840: 0x3e00008  jr          $ra
    ctx->pc = 0x16B840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B840u;
            // 0x16b844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B848u;
}
