#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndDeletePort__Fi
// Address: 0x18df30 - 0x18dfc0
void sndDeletePort__Fi_0x18df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndDeletePort__Fi_0x18df30");
#endif

    switch (ctx->pc) {
        case 0x18df58u: goto label_18df58;
        case 0x18df68u: goto label_18df68;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfb0u: goto label_18dfb0;
        default: break;
    }

    ctx->pc = 0x18df30u;

    // 0x18df30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18df34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18df38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18df38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18df3c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x18df40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18df40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18df44: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x18df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18df48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18df48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df4c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x18df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x18df50: 0xc063638  jal         func_18D8E0
    ctx->pc = 0x18DF50u;
    SET_GPR_U32(ctx, 31, 0x18DF58u);
    ctx->pc = 0x18DF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF50u;
            // 0x18df54: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D8E0u;
    if (runtime->hasFunction(0x18D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x18D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF58u; }
        if (ctx->pc != 0x18DF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCSndPortNo__FiPiPiPi_0x18d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF58u; }
        if (ctx->pc != 0x18DF58u) { return; }
    }
    ctx->pc = 0x18DF58u;
label_18df58:
    // 0x18df58: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18DF58u;
    {
        const bool branch_taken_0x18df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF58u;
            // 0x18df5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df58) {
            ctx->pc = 0x18DFA8u;
            goto label_18dfa8;
        }
    }
    ctx->pc = 0x18DF60u;
    // 0x18df60: 0xc063334  jal         func_18CCD0
    ctx->pc = 0x18DF60u;
    SET_GPR_U32(ctx, 31, 0x18DF68u);
    ctx->pc = 0x18CCD0u;
    if (runtime->hasFunction(0x18CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x18CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF68u; }
        if (ctx->pc != 0x18DF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitSema__Fv_0x18ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF68u; }
        if (ctx->pc != 0x18DF68u) { return; }
    }
    ctx->pc = 0x18DF68u;
label_18df68:
    // 0x18df68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x18df68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18df6c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DF6Cu;
    {
        const bool branch_taken_0x18df6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x18DF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF6Cu;
            // 0x18df70: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df6c) {
            ctx->pc = 0x18DF7Cu;
            goto label_18df7c;
        }
    }
    ctx->pc = 0x18DF74u;
    // 0x18df74: 0xc0625c4  jal         func_189710
    ctx->pc = 0x18DF74u;
    SET_GPR_U32(ctx, 31, 0x18DF7Cu);
    ctx->pc = 0x189710u;
    if (runtime->hasFunction(0x189710u)) {
        auto targetFn = runtime->lookupFunction(0x189710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF7Cu; }
        if (ctx->pc != 0x18DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DEL_PORT__6CSoundFi_0x189710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF7Cu; }
        if (ctx->pc != 0x18DF7Cu) { return; }
    }
    ctx->pc = 0x18DF7Cu;
label_18df7c:
    // 0x18df7c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x18df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x18df80: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DF80u;
    {
        const bool branch_taken_0x18df80 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18df80) {
            ctx->pc = 0x18DF9Cu;
            goto label_18df9c;
        }
    }
    ctx->pc = 0x18DF88u;
    // 0x18df88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x18df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18df8c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18DF8Cu;
    {
        const bool branch_taken_0x18df8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x18DF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DF8Cu;
            // 0x18df90: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df8c) {
            ctx->pc = 0x18DF9Cu;
            goto label_18df9c;
        }
    }
    ctx->pc = 0x18DF94u;
    // 0x18df94: 0xc0625c4  jal         func_189710
    ctx->pc = 0x18DF94u;
    SET_GPR_U32(ctx, 31, 0x18DF9Cu);
    ctx->pc = 0x189710u;
    if (runtime->hasFunction(0x189710u)) {
        auto targetFn = runtime->lookupFunction(0x189710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF9Cu; }
        if (ctx->pc != 0x18DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DEL_PORT__6CSoundFi_0x189710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF9Cu; }
        if (ctx->pc != 0x18DF9Cu) { return; }
    }
    ctx->pc = 0x18DF9Cu;
label_18df9c:
    // 0x18df9c: 0xc063340  jal         func_18CD00
    ctx->pc = 0x18DF9Cu;
    SET_GPR_U32(ctx, 31, 0x18DFA4u);
    ctx->pc = 0x18CD00u;
    if (runtime->hasFunction(0x18CD00u)) {
        auto targetFn = runtime->lookupFunction(0x18CD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFA4u; }
        if (ctx->pc != 0x18DFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSignalSema__Fv_0x18cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFA4u; }
        if (ctx->pc != 0x18DFA4u) { return; }
    }
    ctx->pc = 0x18DFA4u;
label_18dfa4:
    // 0x18dfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18dfa8:
    // 0x18dfa8: 0xc06334c  jal         func_18CD30
    ctx->pc = 0x18DFA8u;
    SET_GPR_U32(ctx, 31, 0x18DFB0u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFB0u; }
        if (ctx->pc != 0x18DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DFB0u; }
        if (ctx->pc != 0x18DFB0u) { return; }
    }
    ctx->pc = 0x18DFB0u;
label_18dfb0:
    // 0x18dfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dfb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18dfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x18DFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DFB8u;
            // 0x18dfbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DFC0u;
}
