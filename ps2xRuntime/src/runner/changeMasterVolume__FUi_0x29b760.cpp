#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: changeMasterVolume__FUi
// Address: 0x29b760 - 0x29b7c4
void changeMasterVolume__FUi_0x29b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("changeMasterVolume__FUi_0x29b760");
#endif

    switch (ctx->pc) {
        case 0x29b77cu: goto label_29b77c;
        case 0x29b78cu: goto label_29b78c;
        case 0x29b7a0u: goto label_29b7a0;
        default: break;
    }

    ctx->pc = 0x29b760u;

    // 0x29b760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29b768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29b76c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b774: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29b774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b778: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x29b778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
label_29b77c:
    // 0x29b77c: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x29b77cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x29b780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b784: 0xc046454  jal         func_119150
    ctx->pc = 0x29B784u;
    SET_GPR_U32(ctx, 31, 0x29B78Cu);
    ctx->pc = 0x29B788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B784u;
            // 0x29b788: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B78Cu; }
        if (ctx->pc != 0x29B78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B78Cu; }
        if (ctx->pc != 0x29B78Cu) { return; }
    }
    ctx->pc = 0x29B78Cu;
label_29b78c:
    // 0x29b78c: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x29b78cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x29b790: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b794: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x29b794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x29b798: 0xc046454  jal         func_119150
    ctx->pc = 0x29B798u;
    SET_GPR_U32(ctx, 31, 0x29B7A0u);
    ctx->pc = 0x29B79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B798u;
            // 0x29b79c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119150u;
    if (runtime->hasFunction(0x119150u)) {
        auto targetFn = runtime->lookupFunction(0x119150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7A0u; }
        if (ctx->pc != 0x29B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x119150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B7A0u; }
        if (ctx->pc != 0x29B7A0u) { return; }
    }
    ctx->pc = 0x29B7A0u;
label_29b7a0:
    // 0x29b7a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29b7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29b7a4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x29b7a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x29b7a8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x29B7A8u;
    {
        const bool branch_taken_0x29b7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7A8u;
            // 0x29b7ac: 0x34058010  ori         $a1, $zero, 0x8010 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7a8) {
            ctx->pc = 0x29B77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B7B0u;
    // 0x29b7b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b7b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b7b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b7b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7BCu;
            // 0x29b7c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29B7C4u;
}
