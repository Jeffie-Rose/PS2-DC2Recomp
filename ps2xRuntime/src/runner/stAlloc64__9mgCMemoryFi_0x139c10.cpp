#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: stAlloc64__9mgCMemoryFi
// Address: 0x139c10 - 0x139c4c
void stAlloc64__9mgCMemoryFi_0x139c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("stAlloc64__9mgCMemoryFi_0x139c10");
#endif

    switch (ctx->pc) {
        case 0x139c2cu: goto label_139c2c;
        case 0x139c38u: goto label_139c38;
        default: break;
    }

    ctx->pc = 0x139c10u;

    // 0x139c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c24: 0xc04e764  jal         func_139D90
    ctx->pc = 0x139C24u;
    SET_GPR_U32(ctx, 31, 0x139C2Cu);
    ctx->pc = 0x139C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139C24u;
            // 0x139c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D90u;
    if (runtime->hasFunction(0x139D90u)) {
        auto targetFn = runtime->lookupFunction(0x139D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C2Cu; }
        if (ctx->pc != 0x139C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlign64__9mgCMemoryFv_0x139d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C2Cu; }
        if (ctx->pc != 0x139C2Cu) { return; }
    }
    ctx->pc = 0x139C2Cu;
label_139c2c:
    // 0x139c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c30: 0xc04e72c  jal         func_139CB0
    ctx->pc = 0x139C30u;
    SET_GPR_U32(ctx, 31, 0x139C38u);
    ctx->pc = 0x139C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139C30u;
            // 0x139c34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CB0u;
    if (runtime->hasFunction(0x139CB0u)) {
        auto targetFn = runtime->lookupFunction(0x139CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C38u; }
        if (ctx->pc != 0x139C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc__9mgCMemoryFi_0x139cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139C38u; }
        if (ctx->pc != 0x139C38u) { return; }
    }
    ctx->pc = 0x139C38u;
label_139c38:
    // 0x139c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139c44: 0x3e00008  jr          $ra
    ctx->pc = 0x139C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C44u;
            // 0x139c48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139C4Cu;
}
