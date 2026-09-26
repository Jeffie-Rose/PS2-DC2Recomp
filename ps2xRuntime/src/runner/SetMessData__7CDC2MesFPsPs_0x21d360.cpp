#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMessData__7CDC2MesFPsPs
// Address: 0x21d360 - 0x21d39c
void SetMessData__7CDC2MesFPsPs_0x21d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMessData__7CDC2MesFPsPs_0x21d360");
#endif

    switch (ctx->pc) {
        case 0x21d37cu: goto label_21d37c;
        case 0x21d388u: goto label_21d388;
        default: break;
    }

    ctx->pc = 0x21d360u;

    // 0x21d360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d364: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21d368: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d36c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21d370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d374: 0xc054bac  jal         func_152EB0
    ctx->pc = 0x21D374u;
    SET_GPR_U32(ctx, 31, 0x21D37Cu);
    ctx->pc = 0x21D378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D374u;
            // 0x21d378: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D37Cu; }
        if (ctx->pc != 0x21D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D37Cu; }
        if (ctx->pc != 0x21D37Cu) { return; }
    }
    ctx->pc = 0x21D37Cu;
label_21d37c:
    // 0x21d37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d380: 0xc054ba8  jal         func_152EA0
    ctx->pc = 0x21D380u;
    SET_GPR_U32(ctx, 31, 0x21D388u);
    ctx->pc = 0x21D384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D380u;
            // 0x21d384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D388u; }
        if (ctx->pc != 0x21D388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D388u; }
        if (ctx->pc != 0x21D388u) { return; }
    }
    ctx->pc = 0x21D388u;
label_21d388:
    // 0x21d388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21d388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d38c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21d390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d394: 0x3e00008  jr          $ra
    ctx->pc = 0x21D394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D394u;
            // 0x21d398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21D39Cu;
}
