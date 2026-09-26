#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9sndCSeSeqFv
// Address: 0x190600 - 0x190678
void ps2___ct__9sndCSeSeqFv_0x190600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9sndCSeSeqFv_0x190600");
#endif

    switch (ctx->pc) {
        case 0x19061cu: goto label_19061c;
        case 0x190620u: goto label_190620;
        case 0x190644u: goto label_190644;
        case 0x190660u: goto label_190660;
        default: break;
    }

    ctx->pc = 0x190600u;

    // 0x190600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x190608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19060c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x190610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190614: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x190618: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x190618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_19061c:
    // 0x19061c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_190620:
    // 0x190620: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x190620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x190624: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x190628: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x190628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19062c: 0x0  nop
    ctx->pc = 0x19062cu;
    // NOP
    // 0x190630: 0x0  nop
    ctx->pc = 0x190630u;
    // NOP
    // 0x190634: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190634u;
    {
        const bool branch_taken_0x190634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190634) {
            ctx->pc = 0x190620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190620;
        }
    }
    ctx->pc = 0x19063Cu;
    // 0x19063c: 0xc062d2c  jal         func_18B4B0
    ctx->pc = 0x19063Cu;
    SET_GPR_U32(ctx, 31, 0x190644u);
    ctx->pc = 0x190640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19063Cu;
            // 0x190640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B4B0u;
    if (runtime->hasFunction(0x18B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190644u; }
        if (ctx->pc != 0x190644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8sndTrackFv_0x18b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190644u; }
        if (ctx->pc != 0x190644u) { return; }
    }
    ctx->pc = 0x190644u;
label_190644:
    // 0x190644: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190648: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x190648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x19064c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19064cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190650: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x190650u;
    {
        const bool branch_taken_0x190650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x190654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190650u;
            // 0x190654: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190650) {
            ctx->pc = 0x19061Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19061c;
        }
    }
    ctx->pc = 0x190658u;
    // 0x190658: 0xc062e20  jal         func_18B880
    ctx->pc = 0x190658u;
    SET_GPR_U32(ctx, 31, 0x190660u);
    ctx->pc = 0x19065Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190658u;
            // 0x19065c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B880u;
    if (runtime->hasFunction(0x18B880u)) {
        auto targetFn = runtime->lookupFunction(0x18B880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190660u; }
        if (ctx->pc != 0x190660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9sndCSeSeqFv_0x18b880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190660u; }
        if (ctx->pc != 0x190660u) { return; }
    }
    ctx->pc = 0x190660u;
label_190660:
    // 0x190660: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x190660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x190664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190668: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190668u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19066c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19066cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190670: 0x3e00008  jr          $ra
    ctx->pc = 0x190670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190670u;
            // 0x190674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190678u;
}
