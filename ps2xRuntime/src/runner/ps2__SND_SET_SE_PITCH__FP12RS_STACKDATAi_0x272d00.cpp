#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SND_SET_SE_PITCH__FP12RS_STACKDATAi
// Address: 0x272d00 - 0x272d60
void ps2__SND_SET_SE_PITCH__FP12RS_STACKDATAi_0x272d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SND_SET_SE_PITCH__FP12RS_STACKDATAi_0x272d00");
#endif

    switch (ctx->pc) {
        case 0x272d18u: goto label_272d18;
        case 0x272d28u: goto label_272d28;
        case 0x272d34u: goto label_272d34;
        case 0x272d48u: goto label_272d48;
        default: break;
    }

    ctx->pc = 0x272d00u;

    // 0x272d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x272d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x272d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x272d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272d0c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x272d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272d10: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272D10u;
    SET_GPR_U32(ctx, 31, 0x272D18u);
    ctx->pc = 0x272D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272D10u;
            // 0x272d14: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D18u; }
        if (ctx->pc != 0x272D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D18u; }
        if (ctx->pc != 0x272D18u) { return; }
    }
    ctx->pc = 0x272D18u;
label_272d18:
    // 0x272d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d20: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272D20u;
    SET_GPR_U32(ctx, 31, 0x272D28u);
    ctx->pc = 0x272D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272D20u;
            // 0x272d24: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D28u; }
        if (ctx->pc != 0x272D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D28u; }
        if (ctx->pc != 0x272D28u) { return; }
    }
    ctx->pc = 0x272D28u;
label_272d28:
    // 0x272d28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272D2Cu;
    SET_GPR_U32(ctx, 31, 0x272D34u);
    ctx->pc = 0x272D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272D2Cu;
            // 0x272d30: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D34u; }
        if (ctx->pc != 0x272D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D34u; }
        if (ctx->pc != 0x272D34u) { return; }
    }
    ctx->pc = 0x272D34u;
label_272d34:
    // 0x272d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x272d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x272d3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272d40: 0xc063b78  jal         func_18EDE0
    ctx->pc = 0x272D40u;
    SET_GPR_U32(ctx, 31, 0x272D48u);
    ctx->pc = 0x272D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272D40u;
            // 0x272d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EDE0u;
    if (runtime->hasFunction(0x18EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x18EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D48u; }
        if (ctx->pc != 0x272D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePitch__FUiiii_0x18ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272D48u; }
        if (ctx->pc != 0x272D48u) { return; }
    }
    ctx->pc = 0x272D48u;
label_272d48:
    // 0x272d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x272d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x272d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272d58: 0x3e00008  jr          $ra
    ctx->pc = 0x272D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272D58u;
            // 0x272d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272D60u;
}
