#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ETCINFO_CLEAR__FP9SPI_STACKi
// Address: 0x251a50 - 0x251ae0
void ps2__MENU_ETCINFO_CLEAR__FP9SPI_STACKi_0x251a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ETCINFO_CLEAR__FP9SPI_STACKi_0x251a50");
#endif

    switch (ctx->pc) {
        case 0x251a70u: goto label_251a70;
        case 0x251a88u: goto label_251a88;
        case 0x251ac4u: goto label_251ac4;
        default: break;
    }

    ctx->pc = 0x251a50u;

    // 0x251a50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x251a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x251a54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x251a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x251a58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251a5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251a60: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x251a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x251a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a68: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251A68u;
    SET_GPR_U32(ctx, 31, 0x251A70u);
    ctx->pc = 0x251A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251A68u;
            // 0x251a6c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A70u; }
        if (ctx->pc != 0x251A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A70u; }
        if (ctx->pc != 0x251A70u) { return; }
    }
    ctx->pc = 0x251A70u;
label_251a70:
    // 0x251a70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a74: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251a74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251a78: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x251A78u;
    {
        const bool branch_taken_0x251a78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x251A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A78u;
            // 0x251a7c: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a78) {
            ctx->pc = 0x251A88u;
            goto label_251a88;
        }
    }
    ctx->pc = 0x251A80u;
    // 0x251a80: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251A80u;
    SET_GPR_U32(ctx, 31, 0x251A88u);
    ctx->pc = 0x251A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251A80u;
            // 0x251a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A88u; }
        if (ctx->pc != 0x251A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A88u; }
        if (ctx->pc != 0x251A88u) { return; }
    }
    ctx->pc = 0x251A88u;
label_251a88:
    // 0x251a88: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x251a88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x251a8c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x251A8Cu;
    {
        const bool branch_taken_0x251a8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x251a8c) {
            ctx->pc = 0x251AA8u;
            goto label_251aa8;
        }
    }
    ctx->pc = 0x251A94u;
    // 0x251a94: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x251a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251a98: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x251a98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x251a9c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x251a9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251aa0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x251AA0u;
    {
        const bool branch_taken_0x251aa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x251aa0) {
            ctx->pc = 0x251AB4u;
            goto label_251ab4;
        }
    }
    ctx->pc = 0x251AA8u;
label_251aa8:
    // 0x251aa8: 0x8f829450  lw          $v0, -0x6BB0($gp)
    ctx->pc = 0x251aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251aac: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x251aacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x251ab0: 0x0  nop
    ctx->pc = 0x251ab0u;
    // NOP
label_251ab4:
    // 0x251ab4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251ab8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x251ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251abc: 0xc08aab0  jal         func_22AAC0
    ctx->pc = 0x251ABCu;
    SET_GPR_U32(ctx, 31, 0x251AC4u);
    ctx->pc = 0x251AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251ABCu;
            // 0x251ac0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AAC0u;
    if (runtime->hasFunction(0x22AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AC4u; }
        if (ctx->pc != 0x251AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTblClear__14CPosDataManageFii_0x22aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AC4u; }
        if (ctx->pc != 0x251AC4u) { return; }
    }
    ctx->pc = 0x251AC4u;
label_251ac4:
    // 0x251ac4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x251ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x251AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AD8u;
            // 0x251adc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251AE0u;
}
