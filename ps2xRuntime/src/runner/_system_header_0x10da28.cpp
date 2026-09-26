#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _system_header
// Address: 0x10da28 - 0x10da94
void _system_header_0x10da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_system_header_0x10da28");
#endif

    switch (ctx->pc) {
        case 0x10da44u: goto label_10da44;
        case 0x10da54u: goto label_10da54;
        case 0x10da60u: goto label_10da60;
        case 0x10da6cu: goto label_10da6c;
        case 0x10da78u: goto label_10da78;
        default: break;
    }

    ctx->pc = 0x10da28u;

    // 0x10da28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10da2c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x10da2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x10da30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10da30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10da34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10da34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10da38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10da38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10da3c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DA3Cu;
    SET_GPR_U32(ctx, 31, 0x10DA44u);
    ctx->pc = 0x10DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA3Cu;
            // 0x10da40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA44u; }
        if (ctx->pc != 0x10DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA44u; }
        if (ctx->pc != 0x10DA44u) { return; }
    }
    ctx->pc = 0x10DA44u;
label_10da44:
    // 0x10da44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x10da44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10da48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da4c: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DA4Cu;
    SET_GPR_U32(ctx, 31, 0x10DA54u);
    ctx->pc = 0x10DA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA4Cu;
            // 0x10da50: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA54u; }
        if (ctx->pc != 0x10DA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA54u; }
        if (ctx->pc != 0x10DA54u) { return; }
    }
    ctx->pc = 0x10DA54u;
label_10da54:
    // 0x10da54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10DA54u;
    {
        const bool branch_taken_0x10da54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA54u;
            // 0x10da58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da54) {
            ctx->pc = 0x10DA70u;
            goto label_10da70;
        }
    }
    ctx->pc = 0x10DA5Cu;
    // 0x10da5c: 0x0  nop
    ctx->pc = 0x10da5cu;
    // NOP
label_10da60:
    // 0x10da60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da64: 0xc043448  jal         func_10D120
    ctx->pc = 0x10DA64u;
    SET_GPR_U32(ctx, 31, 0x10DA6Cu);
    ctx->pc = 0x10DA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA64u;
            // 0x10da68: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D120u;
    if (runtime->hasFunction(0x10D120u)) {
        auto targetFn = runtime->lookupFunction(0x10D120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA6Cu; }
        if (ctx->pc != 0x10DA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitGet_0x10d120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA6Cu; }
        if (ctx->pc != 0x10DA6Cu) { return; }
    }
    ctx->pc = 0x10DA6Cu;
label_10da6c:
    // 0x10da6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10da6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10da70:
    // 0x10da70: 0xc04341a  jal         func_10D068
    ctx->pc = 0x10DA70u;
    SET_GPR_U32(ctx, 31, 0x10DA78u);
    ctx->pc = 0x10DA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA70u;
            // 0x10da74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D068u;
    if (runtime->hasFunction(0x10D068u)) {
        auto targetFn = runtime->lookupFunction(0x10D068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA78u; }
        if (ctx->pc != 0x10DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sysbitNext_0x10d068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DA78u; }
        if (ctx->pc != 0x10DA78u) { return; }
    }
    ctx->pc = 0x10DA78u;
label_10da78:
    // 0x10da78: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10DA78u;
    {
        const bool branch_taken_0x10da78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10DA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA78u;
            // 0x10da7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da78) {
            ctx->pc = 0x10DA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10da60;
        }
    }
    ctx->pc = 0x10DA80u;
    // 0x10da80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10da84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10da84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10da88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10da88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10da8c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DA8Cu;
            // 0x10da90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DA94u;
}
