#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSetMonster__FiPfPfi
// Address: 0x28f2a0 - 0x28f320
void AutoSetMonster__FiPfPfi_0x28f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSetMonster__FiPfPfi_0x28f2a0");
#endif

    switch (ctx->pc) {
        case 0x28f2dcu: goto label_28f2dc;
        case 0x28f2fcu: goto label_28f2fc;
        default: break;
    }

    ctx->pc = 0x28f2a0u;

    // 0x28f2a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28f2a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28f2a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28f2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f2b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28f2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f2b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28f2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2bc: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f2c0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F2C0u;
    {
        const bool branch_taken_0x28f2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2C0u;
            // 0x28f2c4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2c0) {
            ctx->pc = 0x28F308u;
            goto label_28f308;
        }
    }
    ctx->pc = 0x28F2C8u;
    // 0x28f2c8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x28f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28f2cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28f2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2d0: 0xac402fec  sw          $zero, 0x2FEC($v0)
    ctx->pc = 0x28f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12268), GPR_U32(ctx, 0));
    // 0x28f2d4: 0xc076db0  jal         func_1DB6C0
    ctx->pc = 0x28F2D4u;
    SET_GPR_U32(ctx, 31, 0x28F2DCu);
    ctx->pc = 0x28F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2D4u;
            // 0x28f2d8: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2DCu; }
        if (ctx->pc != 0x28F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2DCu; }
        if (ctx->pc != 0x28F2DCu) { return; }
    }
    ctx->pc = 0x28F2DCu;
label_28f2dc:
    // 0x28f2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28f2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2e0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x28f2e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f2e4: 0x10a80008  beq         $a1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F2E4u;
    {
        const bool branch_taken_0x28f2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x28f2e4) {
            ctx->pc = 0x28F308u;
            goto label_28f308;
        }
    }
    ctx->pc = 0x28F2ECu;
    // 0x28f2ec: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28f2f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28f2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2f4: 0xc076eec  jal         func_1DBBB0
    ctx->pc = 0x28F2F4u;
    SET_GPR_U32(ctx, 31, 0x28F2FCu);
    ctx->pc = 0x28F2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2F4u;
            // 0x28f2f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBB0u;
    if (runtime->hasFunction(0x1DBBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DBBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2FCu; }
        if (ctx->pc != 0x28F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveMonster__11CMonsterManFiPfPfi_0x1dbbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F2FCu; }
        if (ctx->pc != 0x28F2FCu) { return; }
    }
    ctx->pc = 0x28F2FCu;
label_28f2fc:
    // 0x28f2fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F2FCu;
    {
        const bool branch_taken_0x28f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2fc) {
            ctx->pc = 0x28F308u;
            goto label_28f308;
        }
    }
    ctx->pc = 0x28F304u;
    // 0x28f304: 0xac501350  sw          $s0, 0x1350($v0)
    ctx->pc = 0x28f304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4944), GPR_U32(ctx, 16));
label_28f308:
    // 0x28f308: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28f308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f30c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f318: 0x3e00008  jr          $ra
    ctx->pc = 0x28F318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F318u;
            // 0x28f31c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28F320u;
}
