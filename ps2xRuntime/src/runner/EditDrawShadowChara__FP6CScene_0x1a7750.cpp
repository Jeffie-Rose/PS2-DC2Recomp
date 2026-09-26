#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDrawShadowChara__FP6CScene
// Address: 0x1a7750 - 0x1a77a4
void EditDrawShadowChara__FP6CScene_0x1a7750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDrawShadowChara__FP6CScene_0x1a7750");
#endif

    switch (ctx->pc) {
        case 0x1a776cu: goto label_1a776c;
        case 0x1a7770u: goto label_1a7770;
        case 0x1a777cu: goto label_1a777c;
        default: break;
    }

    ctx->pc = 0x1a7750u;

    // 0x1a7750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a775c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7760: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
    // 0x1a7764: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x1A7764u;
    SET_GPR_U32(ctx, 31, 0x1A776Cu);
    ctx->pc = 0x1A7768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7764u;
            // 0x1a7768: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A776Cu; }
        if (ctx->pc != 0x1A776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A776Cu; }
        if (ctx->pc != 0x1A776Cu) { return; }
    }
    ctx->pc = 0x1A776Cu;
label_1a776c:
    // 0x1a776c: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a776cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a7770:
    // 0x1a7770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7774: 0xc0b24a0  jal         func_2C9280
    ctx->pc = 0x1A7774u;
    SET_GPR_U32(ctx, 31, 0x1A777Cu);
    ctx->pc = 0x1A7778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7774u;
            // 0x1a7778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9280u;
    if (runtime->hasFunction(0x2C9280u)) {
        auto targetFn = runtime->lookupFunction(0x2C9280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A777Cu; }
        if (ctx->pc != 0x1A777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawCharaShadow__6CSceneFi_0x2c9280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A777Cu; }
        if (ctx->pc != 0x1A777Cu) { return; }
    }
    ctx->pc = 0x1A777Cu;
label_1a777c:
    // 0x1a777c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a777cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a7780: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1a7780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a7784: 0x0  nop
    ctx->pc = 0x1a7784u;
    // NOP
    // 0x1a7788: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A7788u;
    {
        const bool branch_taken_0x1a7788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7788) {
            ctx->pc = 0x1A7770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7770;
        }
    }
    ctx->pc = 0x1A7790u;
    // 0x1a7790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a779c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A779Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A779Cu;
            // 0x1a77a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A77A4u;
}
