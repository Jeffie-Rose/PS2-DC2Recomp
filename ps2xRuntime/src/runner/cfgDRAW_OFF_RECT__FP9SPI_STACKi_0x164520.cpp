#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgDRAW_OFF_RECT__FP9SPI_STACKi
// Address: 0x164520 - 0x16458c
void cfgDRAW_OFF_RECT__FP9SPI_STACKi_0x164520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgDRAW_OFF_RECT__FP9SPI_STACKi_0x164520");
#endif

    switch (ctx->pc) {
        case 0x16453cu: goto label_16453c;
        case 0x164548u: goto label_164548;
        case 0x164554u: goto label_164554;
        case 0x164560u: goto label_164560;
        case 0x164578u: goto label_164578;
        default: break;
    }

    ctx->pc = 0x164520u;

    // 0x164520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x164524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16452c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164530: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x164530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x164534: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164534u;
    SET_GPR_U32(ctx, 31, 0x16453Cu);
    ctx->pc = 0x164538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164534u;
            // 0x164538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16453Cu; }
        if (ctx->pc != 0x16453Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16453Cu; }
        if (ctx->pc != 0x16453Cu) { return; }
    }
    ctx->pc = 0x16453Cu;
label_16453c:
    // 0x16453c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x164540: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164540u;
    SET_GPR_U32(ctx, 31, 0x164548u);
    ctx->pc = 0x164544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164540u;
            // 0x164544: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164548u; }
        if (ctx->pc != 0x164548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164548u; }
        if (ctx->pc != 0x164548u) { return; }
    }
    ctx->pc = 0x164548u;
label_164548:
    // 0x164548: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x164548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16454c: 0xc051928  jal         func_1464A0
    ctx->pc = 0x16454Cu;
    SET_GPR_U32(ctx, 31, 0x164554u);
    ctx->pc = 0x164550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16454Cu;
            // 0x164550: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164554u; }
        if (ctx->pc != 0x164554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164554u; }
        if (ctx->pc != 0x164554u) { return; }
    }
    ctx->pc = 0x164554u;
label_164554:
    // 0x164554: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x164554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x164558: 0xc051928  jal         func_1464A0
    ctx->pc = 0x164558u;
    SET_GPR_U32(ctx, 31, 0x164560u);
    ctx->pc = 0x16455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164558u;
            // 0x16455c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164560u; }
        if (ctx->pc != 0x164560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164560u; }
        if (ctx->pc != 0x164560u) { return; }
    }
    ctx->pc = 0x164560u;
label_164560:
    // 0x164560: 0x8f848914  lw          $a0, -0x76EC($gp)
    ctx->pc = 0x164560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164564: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x164564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x164568: 0x8f858920  lw          $a1, -0x76E0($gp)
    ctx->pc = 0x164568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x16456c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x16456cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x164570: 0xc057380  jal         func_15CE00
    ctx->pc = 0x164570u;
    SET_GPR_U32(ctx, 31, 0x164578u);
    ctx->pc = 0x164574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164570u;
            // 0x164574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE00u;
    if (runtime->hasFunction(0x15CE00u)) {
        auto targetFn = runtime->lookupFunction(0x15CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164578u; }
        if (ctx->pc != 0x164578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateDrawRect__4CMapFP9mgCMemoryP9mgVu0FBOXP9mgVu0FBOXi_0x15ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164578u; }
        if (ctx->pc != 0x164578u) { return; }
    }
    ctx->pc = 0x164578u;
label_164578:
    // 0x164578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16457c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164584: 0x3e00008  jr          $ra
    ctx->pc = 0x164584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164584u;
            // 0x164588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16458Cu;
}
