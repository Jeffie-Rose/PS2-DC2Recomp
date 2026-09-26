#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEventNum__14CFuncPointMngrFi
// Address: 0x29d780 - 0x29d804
void GetEventNum__14CFuncPointMngrFi_0x29d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEventNum__14CFuncPointMngrFi_0x29d780");
#endif

    switch (ctx->pc) {
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7e8u: goto label_29d7e8;
        default: break;
    }

    ctx->pc = 0x29d780u;

    // 0x29d780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29d784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29d784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29d788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29d788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29d78c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29d790: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29d790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d794: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29d794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d79c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29d7a0: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29D7A0u;
    SET_GPR_U32(ctx, 31, 0x29D7A8u);
    ctx->pc = 0x29D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7A0u;
            // 0x29d7a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7A8u; }
        if (ctx->pc != 0x29D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7A8u; }
        if (ctx->pc != 0x29D7A8u) { return; }
    }
    ctx->pc = 0x29D7A8u;
label_29d7a8:
    // 0x29d7a8: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29D7A8u;
    SET_GPR_U32(ctx, 31, 0x29D7B0u);
    ctx->pc = 0x29D7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7A8u;
            // 0x29d7ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7B0u; }
        if (ctx->pc != 0x29D7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7B0u; }
        if (ctx->pc != 0x29D7B0u) { return; }
    }
    ctx->pc = 0x29D7B0u;
label_29d7b0:
    // 0x29d7b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29D7B0u;
    {
        const bool branch_taken_0x29d7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7b0) {
            ctx->pc = 0x29D7E0u;
            goto label_29d7e0;
        }
    }
    ctx->pc = 0x29D7B8u;
label_29d7b8:
    // 0x29d7b8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x29d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29d7bc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x29d7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x29d7c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D7C0u;
    {
        const bool branch_taken_0x29d7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d7c0) {
            ctx->pc = 0x29D7CCu;
            goto label_29d7cc;
        }
    }
    ctx->pc = 0x29D7C8u;
    // 0x29d7c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29d7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29d7cc:
    // 0x29d7cc: 0x0  nop
    ctx->pc = 0x29d7ccu;
    // NOP
    // 0x29d7d0: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29D7D0u;
    SET_GPR_U32(ctx, 31, 0x29D7D8u);
    ctx->pc = 0x29D7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7D0u;
            // 0x29d7d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7D8u; }
        if (ctx->pc != 0x29D7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7D8u; }
        if (ctx->pc != 0x29D7D8u) { return; }
    }
    ctx->pc = 0x29D7D8u;
label_29d7d8:
    // 0x29d7d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29D7D8u;
    {
        const bool branch_taken_0x29d7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d7d8) {
            ctx->pc = 0x29D7B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d7b8;
        }
    }
    ctx->pc = 0x29D7E0u;
label_29d7e0:
    // 0x29d7e0: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29D7E0u;
    SET_GPR_U32(ctx, 31, 0x29D7E8u);
    ctx->pc = 0x29D7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7E0u;
            // 0x29d7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7E8u; }
        if (ctx->pc != 0x29D7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D7E8u; }
        if (ctx->pc != 0x29D7E8u) { return; }
    }
    ctx->pc = 0x29D7E8u;
label_29d7e8:
    // 0x29d7e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29d7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29d7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d7f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29d7f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d7f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D7FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D7FCu;
            // 0x29d800: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D804u;
}
