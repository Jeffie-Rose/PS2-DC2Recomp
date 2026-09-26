#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapFIX_EPARTS_START__FP9SPI_STACKi
// Address: 0x1b4820 - 0x1b48ac
void emapFIX_EPARTS_START__FP9SPI_STACKi_0x1b4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapFIX_EPARTS_START__FP9SPI_STACKi_0x1b4820");
#endif

    switch (ctx->pc) {
        case 0x1b4834u: goto label_1b4834;
        case 0x1b4868u: goto label_1b4868;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b4888u: goto label_1b4888;
        default: break;
    }

    ctx->pc = 0x1b4820u;

    // 0x1b4820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b4824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b4828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b482c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1B482Cu;
    SET_GPR_U32(ctx, 31, 0x1B4834u);
    ctx->pc = 0x1B4830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B482Cu;
            // 0x1b4830: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4834u; }
        if (ctx->pc != 0x1B4834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4834u; }
        if (ctx->pc != 0x1B4834u) { return; }
    }
    ctx->pc = 0x1B4834u;
label_1b4834:
    // 0x1b4834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4838: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4838u;
    {
        const bool branch_taken_0x1b4838 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1B483Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4838u;
            // 0x1b483c: 0x108940  sll         $s1, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4838) {
            ctx->pc = 0x1B4848u;
            goto label_1b4848;
        }
    }
    ctx->pc = 0x1B4840u;
    // 0x1b4840: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B4840u;
    {
        const bool branch_taken_0x1b4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4840u;
            // 0x1b4844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4840) {
            ctx->pc = 0x1B4898u;
            goto label_1b4898;
        }
    }
    ctx->pc = 0x1B4848u;
label_1b4848:
    // 0x1b4848: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1b484c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B484Cu;
    {
        const bool branch_taken_0x1b484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B484Cu;
            // 0x1b4850: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b484c) {
            ctx->pc = 0x1B485Cu;
            goto label_1b485c;
        }
    }
    ctx->pc = 0x1B4854u;
    // 0x1b4854: 0x111102  srl         $v0, $s1, 4
    ctx->pc = 0x1b4854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
    // 0x1b4858: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b485c:
    // 0x1b485c: 0x8f848d20  lw          $a0, -0x72E0($gp)
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1b4860: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1B4860u;
    SET_GPR_U32(ctx, 31, 0x1B4868u);
    ctx->pc = 0x1B4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4860u;
            // 0x1b4864: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4868u; }
        if (ctx->pc != 0x1B4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4868u; }
        if (ctx->pc != 0x1B4868u) { return; }
    }
    ctx->pc = 0x1B4868u;
label_1b4868:
    // 0x1b4868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b486c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x1B486Cu;
    SET_GPR_U32(ctx, 31, 0x1B4874u);
    ctx->pc = 0x1B4870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B486Cu;
            // 0x1b4870: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4874u; }
        if (ctx->pc != 0x1B4874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4874u; }
        if (ctx->pc != 0x1B4874u) { return; }
    }
    ctx->pc = 0x1B4874u;
label_1b4874:
    // 0x1b4874: 0x8f848d1c  lw          $a0, -0x72E4($gp)
    ctx->pc = 0x1b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937884)));
    // 0x1b4878: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b487c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4880: 0xc0a937c  jal         func_2A4DF0
    ctx->pc = 0x1B4880u;
    SET_GPR_U32(ctx, 31, 0x1B4888u);
    ctx->pc = 0x1B4884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4880u;
            // 0x1b4884: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DF0u;
    if (runtime->hasFunction(0x2A4DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4888u; }
        if (ctx->pc != 0x1B4888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeteFixPartsTable__13CEditInfoMngrFP10ePlaceDatai_0x2a4df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4888u; }
        if (ctx->pc != 0x1B4888u) { return; }
    }
    ctx->pc = 0x1B4888u;
label_1b4888:
    // 0x1b4888: 0xaf908d38  sw          $s0, -0x72C8($gp)
    ctx->pc = 0x1b4888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 16));
    // 0x1b488c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4890: 0xaf918d48  sw          $s1, -0x72B8($gp)
    ctx->pc = 0x1b4890u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 17));
    // 0x1b4894: 0xaf808d40  sw          $zero, -0x72C0($gp)
    ctx->pc = 0x1b4894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937920), GPR_U32(ctx, 0));
label_1b4898:
    // 0x1b4898: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b489c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b489cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b48a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b48a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b48a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B48A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B48A4u;
            // 0x1b48a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B48ACu;
}
