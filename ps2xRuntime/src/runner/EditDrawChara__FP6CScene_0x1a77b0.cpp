#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDrawChara__FP6CScene
// Address: 0x1a77b0 - 0x1a7824
void EditDrawChara__FP6CScene_0x1a77b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDrawChara__FP6CScene_0x1a77b0");
#endif

    switch (ctx->pc) {
        case 0x1a77d0u: goto label_1a77d0;
        case 0x1a77d8u: goto label_1a77d8;
        case 0x1a77e4u: goto label_1a77e4;
        case 0x1a77fcu: goto label_1a77fc;
        default: break;
    }

    ctx->pc = 0x1a77b0u;

    // 0x1a77b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a77b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a77b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a77b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a77b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a77bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a77bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a77c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a77c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a77c4: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
    // 0x1a77c8: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x1A77C8u;
    SET_GPR_U32(ctx, 31, 0x1A77D0u);
    ctx->pc = 0x1A77CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77C8u;
            // 0x1a77cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77D0u; }
        if (ctx->pc != 0x1A77D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77D0u; }
        if (ctx->pc != 0x1A77D0u) { return; }
    }
    ctx->pc = 0x1A77D0u;
label_1a77d0:
    // 0x1a77d0: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a77d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a77d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a77d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a77d8:
    // 0x1a77d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a77d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a77dc: 0xc0a1208  jal         func_284820
    ctx->pc = 0x1A77DCu;
    SET_GPR_U32(ctx, 31, 0x1A77E4u);
    ctx->pc = 0x1A77E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77DCu;
            // 0x1a77e0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E4u; }
        if (ctx->pc != 0x1A77E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77E4u; }
        if (ctx->pc != 0x1A77E4u) { return; }
    }
    ctx->pc = 0x1A77E4u;
label_1a77e4:
    // 0x1a77e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a77e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a77e8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A77E8u;
    {
        const bool branch_taken_0x1a77e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A77ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77E8u;
            // 0x1a77ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77e8) {
            ctx->pc = 0x1A77FCu;
            goto label_1a77fc;
        }
    }
    ctx->pc = 0x1A77F0u;
    // 0x1a77f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a77f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77f4: 0xc0b23e0  jal         func_2C8F80
    ctx->pc = 0x1A77F4u;
    SET_GPR_U32(ctx, 31, 0x1A77FCu);
    ctx->pc = 0x1A77F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77F4u;
            // 0x1a77f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8F80u;
    if (runtime->hasFunction(0x2C8F80u)) {
        auto targetFn = runtime->lookupFunction(0x2C8F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77FCu; }
        if (ctx->pc != 0x1A77FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawChara__6CSceneFii_0x2c8f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A77FCu; }
        if (ctx->pc != 0x1A77FCu) { return; }
    }
    ctx->pc = 0x1A77FCu;
label_1a77fc:
    // 0x1a77fc: 0x0  nop
    ctx->pc = 0x1a77fcu;
    // NOP
    // 0x1a7800: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a7800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a7804: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x1a7804u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a7808: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1A7808u;
    {
        const bool branch_taken_0x1a7808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A780Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7808u;
            // 0x1a780c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7808) {
            ctx->pc = 0x1A77D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a77d8;
        }
    }
    ctx->pc = 0x1A7810u;
    // 0x1a7810: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a781c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A781Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A781Cu;
            // 0x1a7820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7824u;
}
