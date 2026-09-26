#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StopVoice__16CRoboVoiceSystemFi
// Address: 0x1b9710 - 0x1b977c
void StopVoice__16CRoboVoiceSystemFi_0x1b9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StopVoice__16CRoboVoiceSystemFi_0x1b9710");
#endif

    switch (ctx->pc) {
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9738u: goto label_1b9738;
        case 0x1b975cu: goto label_1b975c;
        default: break;
    }

    ctx->pc = 0x1b9710u;

    // 0x1b9710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b9718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b971c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b971cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9720: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9724: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1b9724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b9728: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9728u;
    {
        const bool branch_taken_0x1b9728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9728u;
            // 0x1b972c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9728) {
            ctx->pc = 0x1B975Cu;
            goto label_1b975c;
        }
    }
    ctx->pc = 0x1B9730u;
label_1b9730:
    // 0x1b9730: 0xc0a2bec  jal         func_28AFB0
    ctx->pc = 0x1B9730u;
    SET_GPR_U32(ctx, 31, 0x1B9738u);
    ctx->pc = 0x1B9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9730u;
            // 0x1b9734: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9738u; }
        if (ctx->pc != 0x1B9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9738u; }
        if (ctx->pc != 0x1B9738u) { return; }
    }
    ctx->pc = 0x1B9738u;
label_1b9738:
    // 0x1b9738: 0x0  nop
    ctx->pc = 0x1b9738u;
    // NOP
    // 0x1b973c: 0x0  nop
    ctx->pc = 0x1b973cu;
    // NOP
    // 0x1b9740: 0x0  nop
    ctx->pc = 0x1b9740u;
    // NOP
    // 0x1b9744: 0x0  nop
    ctx->pc = 0x1b9744u;
    // NOP
    // 0x1b9748: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9748u;
    {
        const bool branch_taken_0x1b9748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9748) {
            ctx->pc = 0x1B9730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9730;
        }
    }
    ctx->pc = 0x1B9750u;
    // 0x1b9750: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x1b9750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x1b9754: 0xc062bf8  jal         func_18AFE0
    ctx->pc = 0x1B9754u;
    SET_GPR_U32(ctx, 31, 0x1B975Cu);
    ctx->pc = 0x1B9758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9754u;
            // 0x1b9758: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B975Cu; }
        if (ctx->pc != 0x1B975Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B975Cu; }
        if (ctx->pc != 0x1B975Cu) { return; }
    }
    ctx->pc = 0x1B975Cu;
label_1b975c:
    // 0x1b975c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1b975cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1b9760: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1b9760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b9764: 0xa6300016  sh          $s0, 0x16($s1)
    ctx->pc = 0x1b9764u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 16));
    // 0x1b9768: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b9768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b976c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b976cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9774: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9774u;
            // 0x1b9778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B977Cu;
}
