#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_CALCRGBAPARAM__FP9SPI_STACKi
// Address: 0x254100 - 0x2541a4
void ps2__MENU_EXE_FORM_CALCRGBAPARAM__FP9SPI_STACKi_0x254100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_CALCRGBAPARAM__FP9SPI_STACKi_0x254100");
#endif

    switch (ctx->pc) {
        case 0x254130u: goto label_254130;
        case 0x25413cu: goto label_25413c;
        case 0x254158u: goto label_254158;
        case 0x254168u: goto label_254168;
        case 0x254174u: goto label_254174;
        case 0x254188u: goto label_254188;
        default: break;
    }

    ctx->pc = 0x254100u;

    // 0x254100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x254104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25410c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254114: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254118u;
    {
        const bool branch_taken_0x254118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254118u;
            // 0x25411c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254118) {
            ctx->pc = 0x254128u;
            goto label_254128;
        }
    }
    ctx->pc = 0x254120u;
    // 0x254120: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x254120u;
    {
        const bool branch_taken_0x254120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254120u;
            // 0x254124: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254120) {
            ctx->pc = 0x25418Cu;
            goto label_25418c;
        }
    }
    ctx->pc = 0x254128u;
label_254128:
    // 0x254128: 0xc05191c  jal         func_146470
    ctx->pc = 0x254128u;
    SET_GPR_U32(ctx, 31, 0x254130u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254130u; }
        if (ctx->pc != 0x254130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254130u; }
        if (ctx->pc != 0x254130u) { return; }
    }
    ctx->pc = 0x254130u;
label_254130:
    // 0x254130: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x254130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x254134: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x254134u;
    SET_GPR_U32(ctx, 31, 0x25413Cu);
    ctx->pc = 0x254138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254134u;
            // 0x254138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25413Cu; }
        if (ctx->pc != 0x25413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25413Cu; }
        if (ctx->pc != 0x25413Cu) { return; }
    }
    ctx->pc = 0x25413Cu;
label_25413c:
    // 0x25413c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254140: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254140u;
    {
        const bool branch_taken_0x254140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x254144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254140u;
            // 0x254144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254140) {
            ctx->pc = 0x254150u;
            goto label_254150;
        }
    }
    ctx->pc = 0x254148u;
    // 0x254148: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x254148u;
    {
        const bool branch_taken_0x254148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254148u;
            // 0x25414c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254148) {
            ctx->pc = 0x25418Cu;
            goto label_25418c;
        }
    }
    ctx->pc = 0x254150u;
label_254150:
    // 0x254150: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254150u;
    SET_GPR_U32(ctx, 31, 0x254158u);
    ctx->pc = 0x254154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254150u;
            // 0x254154: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254158u; }
        if (ctx->pc != 0x254158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254158u; }
        if (ctx->pc != 0x254158u) { return; }
    }
    ctx->pc = 0x254158u;
label_254158:
    // 0x254158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25415c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25415cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254160: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254160u;
    SET_GPR_U32(ctx, 31, 0x254168u);
    ctx->pc = 0x254164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254160u;
            // 0x254164: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254168u; }
        if (ctx->pc != 0x254168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254168u; }
        if (ctx->pc != 0x254168u) { return; }
    }
    ctx->pc = 0x254168u;
label_254168:
    // 0x254168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25416c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25416Cu;
    SET_GPR_U32(ctx, 31, 0x254174u);
    ctx->pc = 0x254170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25416Cu;
            // 0x254170: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254174u; }
        if (ctx->pc != 0x254174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254174u; }
        if (ctx->pc != 0x254174u) { return; }
    }
    ctx->pc = 0x254174u;
label_254174:
    // 0x254174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x254178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25417c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x25417cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254180: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x254180u;
    SET_GPR_U32(ctx, 31, 0x254188u);
    ctx->pc = 0x254184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254180u;
            // 0x254184: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254188u; }
        if (ctx->pc != 0x254188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254188u; }
        if (ctx->pc != 0x254188u) { return; }
    }
    ctx->pc = 0x254188u;
label_254188:
    // 0x254188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25418c:
    // 0x25418c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25418cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25419c: 0x3e00008  jr          $ra
    ctx->pc = 0x25419Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2541A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25419Cu;
            // 0x2541a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2541A4u;
}
