#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditStepChara__FP6CScene
// Address: 0x1a76c0 - 0x1a7744
void EditStepChara__FP6CScene_0x1a76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditStepChara__FP6CScene_0x1a76c0");
#endif

    switch (ctx->pc) {
        case 0x1a76dcu: goto label_1a76dc;
        case 0x1a76e0u: goto label_1a76e0;
        case 0x1a76ecu: goto label_1a76ec;
        case 0x1a770cu: goto label_1a770c;
        case 0x1a7718u: goto label_1a7718;
        case 0x1a7724u: goto label_1a7724;
        case 0x1a7730u: goto label_1a7730;
        default: break;
    }

    ctx->pc = 0x1a76c0u;

    // 0x1a76c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a76c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a76c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a76c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a76c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a76c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a76cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a76ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a76d0: 0x8c852e50  lw          $a1, 0x2E50($a0)
    ctx->pc = 0x1a76d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
    // 0x1a76d4: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A76D4u;
    SET_GPR_U32(ctx, 31, 0x1A76DCu);
    ctx->pc = 0x1A76D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76D4u;
            // 0x1a76d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76DCu; }
        if (ctx->pc != 0x1A76DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76DCu; }
        if (ctx->pc != 0x1A76DCu) { return; }
    }
    ctx->pc = 0x1A76DCu;
label_1a76dc:
    // 0x1a76dc: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a76e0:
    // 0x1a76e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a76e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76e4: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A76E4u;
    SET_GPR_U32(ctx, 31, 0x1A76ECu);
    ctx->pc = 0x1A76E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76E4u;
            // 0x1a76e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76ECu; }
        if (ctx->pc != 0x1A76ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A76ECu; }
        if (ctx->pc != 0x1A76ECu) { return; }
    }
    ctx->pc = 0x1A76ECu;
label_1a76ec:
    // 0x1a76ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a76ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a76f0: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x1a76f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1a76f4: 0x0  nop
    ctx->pc = 0x1a76f4u;
    // NOP
    // 0x1a76f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A76F8u;
    {
        const bool branch_taken_0x1a76f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a76f8) {
            ctx->pc = 0x1A76E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a76e0;
        }
    }
    ctx->pc = 0x1A7700u;
    // 0x1a7700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7704: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A7704u;
    SET_GPR_U32(ctx, 31, 0x1A770Cu);
    ctx->pc = 0x1A7708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7704u;
            // 0x1a7708: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A770Cu; }
        if (ctx->pc != 0x1A770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A770Cu; }
        if (ctx->pc != 0x1A770Cu) { return; }
    }
    ctx->pc = 0x1A770Cu;
label_1a770c:
    // 0x1a770c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7710: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A7710u;
    SET_GPR_U32(ctx, 31, 0x1A7718u);
    ctx->pc = 0x1A7714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7710u;
            // 0x1a7714: 0x24050079  addiu       $a1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7718u; }
        if (ctx->pc != 0x1A7718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7718u; }
        if (ctx->pc != 0x1A7718u) { return; }
    }
    ctx->pc = 0x1A7718u;
label_1a7718:
    // 0x1a7718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a771c: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A771Cu;
    SET_GPR_U32(ctx, 31, 0x1A7724u);
    ctx->pc = 0x1A7720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A771Cu;
            // 0x1a7720: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7724u; }
        if (ctx->pc != 0x1A7724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7724u; }
        if (ctx->pc != 0x1A7724u) { return; }
    }
    ctx->pc = 0x1A7724u;
label_1a7724:
    // 0x1a7724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a7724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7728: 0xc0b231c  jal         func_2C8C70
    ctx->pc = 0x1A7728u;
    SET_GPR_U32(ctx, 31, 0x1A7730u);
    ctx->pc = 0x1A772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7728u;
            // 0x1a772c: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8C70u;
    if (runtime->hasFunction(0x2C8C70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7730u; }
        if (ctx->pc != 0x1A7730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepChara__6CSceneFi_0x2c8c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7730u; }
        if (ctx->pc != 0x1A7730u) { return; }
    }
    ctx->pc = 0x1A7730u;
label_1a7730:
    // 0x1a7730: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a7730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7738: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a773c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A773Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A773Cu;
            // 0x1a7740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A7744u;
}
