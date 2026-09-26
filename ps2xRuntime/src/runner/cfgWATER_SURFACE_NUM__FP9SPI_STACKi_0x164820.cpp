#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgWATER_SURFACE_NUM__FP9SPI_STACKi
// Address: 0x164820 - 0x1648d8
void cfgWATER_SURFACE_NUM__FP9SPI_STACKi_0x164820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgWATER_SURFACE_NUM__FP9SPI_STACKi_0x164820");
#endif

    switch (ctx->pc) {
        case 0x164830u: goto label_164830;
        case 0x164850u: goto label_164850;
        case 0x16485cu: goto label_16485c;
        case 0x164870u: goto label_164870;
        case 0x164898u: goto label_164898;
        default: break;
    }

    ctx->pc = 0x164820u;

    // 0x164820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164828: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x164828u;
    SET_GPR_U32(ctx, 31, 0x164830u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164830u; }
        if (ctx->pc != 0x164830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164830u; }
        if (ctx->pc != 0x164830u) { return; }
    }
    ctx->pc = 0x164830u;
label_164830:
    // 0x164830: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164834: 0xac620cec  sw          $v0, 0xCEC($v1)
    ctx->pc = 0x164834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 2));
    // 0x164838: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16483c: 0x8c420cec  lw          $v0, 0xCEC($v0)
    ctx->pc = 0x16483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3308)));
    // 0x164840: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x164840u;
    {
        const bool branch_taken_0x164840 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x164844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164840u;
            // 0x164844: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164840) {
            ctx->pc = 0x1648C4u;
            goto label_1648c4;
        }
    }
    ctx->pc = 0x164848u;
    // 0x164848: 0xc05878c  jal         func_161E30
    ctx->pc = 0x164848u;
    SET_GPR_U32(ctx, 31, 0x164850u);
    ctx->pc = 0x161E30u;
    if (runtime->hasFunction(0x161E30u)) {
        auto targetFn = runtime->lookupFunction(0x161E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164850u; }
        if (ctx->pc != 0x164850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        algn16_size__FUi_0x161e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164850u; }
        if (ctx->pc != 0x164850u) { return; }
    }
    ctx->pc = 0x164850u;
label_164850:
    // 0x164850: 0x8f848920  lw          $a0, -0x76E0($gp)
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x164854: 0xc04e748  jal         func_139D20
    ctx->pc = 0x164854u;
    SET_GPR_U32(ctx, 31, 0x16485Cu);
    ctx->pc = 0x164858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164854u;
            // 0x164858: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16485Cu; }
        if (ctx->pc != 0x16485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16485Cu; }
        if (ctx->pc != 0x16485Cu) { return; }
    }
    ctx->pc = 0x16485Cu;
label_16485c:
    // 0x16485c: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164864: 0x8c620cec  lw          $v0, 0xCEC($v1)
    ctx->pc = 0x164864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3308)));
    // 0x164868: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x164868u;
    SET_GPR_U32(ctx, 31, 0x164870u);
    ctx->pc = 0x16486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164868u;
            // 0x16486c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164870u; }
        if (ctx->pc != 0x164870u) { return; }
    }
    ctx->pc = 0x164870u;
label_164870:
    // 0x164870: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164874: 0xac620cf0  sw          $v0, 0xCF0($v1)
    ctx->pc = 0x164874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3312), GPR_U32(ctx, 2));
    // 0x164878: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x164878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16487c: 0x8c620cf0  lw          $v0, 0xCF0($v1)
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3312)));
    // 0x164880: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x164880u;
    {
        const bool branch_taken_0x164880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164880) {
            ctx->pc = 0x16488Cu;
            goto label_16488c;
        }
    }
    ctx->pc = 0x164888u;
    // 0x164888: 0xac600cec  sw          $zero, 0xCEC($v1)
    ctx->pc = 0x164888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3308), GPR_U32(ctx, 0));
label_16488c:
    // 0x16488c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x16488cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164890: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164890u;
    {
        const bool branch_taken_0x164890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164890u;
            // 0x164894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164890) {
            ctx->pc = 0x1648ACu;
            goto label_1648ac;
        }
    }
    ctx->pc = 0x164898u;
label_164898:
    // 0x164898: 0x8ca20cf0  lw          $v0, 0xCF0($a1)
    ctx->pc = 0x164898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3312)));
    // 0x16489c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1648a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1648a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1648a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1648a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1648a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1648a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1648ac:
    // 0x1648ac: 0x0  nop
    ctx->pc = 0x1648acu;
    // NOP
    // 0x1648b0: 0x8f858914  lw          $a1, -0x76EC($gp)
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x1648b4: 0x8ca20cec  lw          $v0, 0xCEC($a1)
    ctx->pc = 0x1648b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3308)));
    // 0x1648b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1648b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1648bc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1648BCu;
    {
        const bool branch_taken_0x1648bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1648bc) {
            ctx->pc = 0x164898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164898;
        }
    }
    ctx->pc = 0x1648C4u;
label_1648c4:
    // 0x1648c4: 0x0  nop
    ctx->pc = 0x1648c4u;
    // NOP
    // 0x1648c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1648c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1648cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1648ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1648d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1648D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1648D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1648D0u;
            // 0x1648d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1648D8u;
}
