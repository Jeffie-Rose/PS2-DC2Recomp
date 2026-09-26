#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get__9CEditGridFii
// Address: 0x297900 - 0x297954
void Get__9CEditGridFii_0x297900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get__9CEditGridFii_0x297900");
#endif

    switch (ctx->pc) {
        case 0x297924u: goto label_297924;
        case 0x29793cu: goto label_29793c;
        default: break;
    }

    ctx->pc = 0x297900u;

    // 0x297900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x297904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x297908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29790c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297910: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297910u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x297918: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29791c: 0xc0a5e2c  jal         func_2978B0
    ctx->pc = 0x29791Cu;
    SET_GPR_U32(ctx, 31, 0x297924u);
    ctx->pc = 0x297920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29791Cu;
            // 0x297920: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2978B0u;
    if (runtime->hasFunction(0x2978B0u)) {
        auto targetFn = runtime->lookupFunction(0x2978B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297924u; }
        if (ctx->pc != 0x297924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__9CEditGridFii_0x2978b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297924u; }
        if (ctx->pc != 0x297924u) { return; }
    }
    ctx->pc = 0x297924u;
label_297924:
    // 0x297924: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297924u;
    {
        const bool branch_taken_0x297924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297924u;
            // 0x297928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297924) {
            ctx->pc = 0x29793Cu;
            goto label_29793c;
        }
    }
    ctx->pc = 0x29792Cu;
    // 0x29792c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297930: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x297930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297934: 0xc0a5e58  jal         func_297960
    ctx->pc = 0x297934u;
    SET_GPR_U32(ctx, 31, 0x29793Cu);
    ctx->pc = 0x297938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297934u;
            // 0x297938: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297960u;
    if (runtime->hasFunction(0x297960u)) {
        auto targetFn = runtime->lookupFunction(0x297960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29793Cu; }
        if (ctx->pc != 0x29793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFast__9CEditGridFii_0x297960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29793Cu; }
        if (ctx->pc != 0x29793Cu) { return; }
    }
    ctx->pc = 0x29793Cu;
label_29793c:
    // 0x29793c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29793cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297940: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x297940u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297944: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x297944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297948: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x297948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29794c: 0x3e00008  jr          $ra
    ctx->pc = 0x29794Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29794Cu;
            // 0x297950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x297954u;
}
