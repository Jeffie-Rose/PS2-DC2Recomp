#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDrawEffectChara__FP6CScene
// Address: 0x1a7830 - 0x1a7894
void EditDrawEffectChara__FP6CScene_0x1a7830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDrawEffectChara__FP6CScene_0x1a7830");
#endif

    switch (ctx->pc) {
        case 0x1a784cu: goto label_1a784c;
        case 0x1a7858u: goto label_1a7858;
        case 0x1a7870u: goto label_1a7870;
        default: break;
    }

    ctx->pc = 0x1a7830u;

    // 0x1a7830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a7834: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a7838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a783c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a7840: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a7840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7844: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a7844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a7848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a784c:
    // 0x1a784c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7850: 0xc0a1208  jal         func_284820
    ctx->pc = 0x1A7850u;
    SET_GPR_U32(ctx, 31, 0x1A7858u);
    ctx->pc = 0x1A7854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7850u;
            // 0x1a7854: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7858u; }
        if (ctx->pc != 0x1A7858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7858u; }
        if (ctx->pc != 0x1A7858u) { return; }
    }
    ctx->pc = 0x1A7858u;
label_1a7858:
    // 0x1a7858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a7858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a785c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A785Cu;
    {
        const bool branch_taken_0x1a785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A7860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A785Cu;
            // 0x1a7860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a785c) {
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7864u;
    // 0x1a7864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7868: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x1A7868u;
    SET_GPR_U32(ctx, 31, 0x1A7870u);
    ctx->pc = 0x1A786Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7868u;
            // 0x1a786c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7870u; }
        if (ctx->pc != 0x1A7870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7870u; }
        if (ctx->pc != 0x1A7870u) { return; }
    }
    ctx->pc = 0x1A7870u;
label_1a7870:
    // 0x1a7870: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a7874: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1a7874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a7878: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A7878u;
    {
        const bool branch_taken_0x1a7878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A787Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7878u;
            // 0x1a787c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7878) {
            ctx->pc = 0x1A784Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a784c;
        }
    }
    ctx->pc = 0x1A7880u;
    // 0x1a7880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a788c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A788Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A788Cu;
            // 0x1a7890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7894u;
}
