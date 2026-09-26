#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _REGISTER_VILLAGER2__FP12RS_STACKDATAi
// Address: 0x2742a0 - 0x27431c
void ps2__REGISTER_VILLAGER2__FP12RS_STACKDATAi_0x2742a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__REGISTER_VILLAGER2__FP12RS_STACKDATAi_0x2742a0");
#endif

    switch (ctx->pc) {
        case 0x2742b8u: goto label_2742b8;
        case 0x2742c8u: goto label_2742c8;
        case 0x2742d4u: goto label_2742d4;
        case 0x2742e0u: goto label_2742e0;
        case 0x274304u: goto label_274304;
        default: break;
    }

    ctx->pc = 0x2742a0u;

    // 0x2742a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2742a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2742a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2742a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2742a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2742a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2742ac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2742acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2742b0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2742B0u;
    SET_GPR_U32(ctx, 31, 0x2742B8u);
    ctx->pc = 0x2742B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742B0u;
            // 0x2742b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B8u; }
        if (ctx->pc != 0x2742B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742B8u; }
        if (ctx->pc != 0x2742B8u) { return; }
    }
    ctx->pc = 0x2742B8u;
label_2742b8:
    // 0x2742b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2742b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2742bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742c0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2742C0u;
    SET_GPR_U32(ctx, 31, 0x2742C8u);
    ctx->pc = 0x2742C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742C0u;
            // 0x2742c4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742C8u; }
        if (ctx->pc != 0x2742C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742C8u; }
        if (ctx->pc != 0x2742C8u) { return; }
    }
    ctx->pc = 0x2742C8u;
label_2742c8:
    // 0x2742c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2742c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2742CCu;
    SET_GPR_U32(ctx, 31, 0x2742D4u);
    ctx->pc = 0x2742D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742CCu;
            // 0x2742d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742D4u; }
        if (ctx->pc != 0x2742D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742D4u; }
        if (ctx->pc != 0x2742D4u) { return; }
    }
    ctx->pc = 0x2742D4u;
label_2742d4:
    // 0x2742d4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2742d8: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x2742D8u;
    SET_GPR_U32(ctx, 31, 0x2742E0u);
    ctx->pc = 0x2742DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742D8u;
            // 0x2742dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742E0u; }
        if (ctx->pc != 0x2742E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742E0u; }
        if (ctx->pc != 0x2742E0u) { return; }
    }
    ctx->pc = 0x2742E0u;
label_2742e0:
    // 0x2742e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2742E0u;
    {
        const bool branch_taken_0x2742e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2742e0) {
            ctx->pc = 0x2742F0u;
            goto label_2742f0;
        }
    }
    ctx->pc = 0x2742E8u;
    // 0x2742e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2742E8u;
    {
        const bool branch_taken_0x2742e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2742ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2742E8u;
            // 0x2742ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2742e8) {
            ctx->pc = 0x274308u;
            goto label_274308;
        }
    }
    ctx->pc = 0x2742F0u;
label_2742f0:
    // 0x2742f0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2742f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2742f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2742f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2742f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2742fc: 0xc0b2914  jal         func_2CA450
    ctx->pc = 0x2742FCu;
    SET_GPR_U32(ctx, 31, 0x274304u);
    ctx->pc = 0x274300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742FCu;
            // 0x274300: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA450u;
    if (runtime->hasFunction(0x2CA450u)) {
        auto targetFn = runtime->lookupFunction(0x2CA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274304u; }
        if (ctx->pc != 0x274304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274304u; }
        if (ctx->pc != 0x274304u) { return; }
    }
    ctx->pc = 0x274304u;
label_274304:
    // 0x274304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_274308:
    // 0x274308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27430c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27430cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274314: 0x3e00008  jr          $ra
    ctx->pc = 0x274314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274314u;
            // 0x274318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27431Cu;
}
