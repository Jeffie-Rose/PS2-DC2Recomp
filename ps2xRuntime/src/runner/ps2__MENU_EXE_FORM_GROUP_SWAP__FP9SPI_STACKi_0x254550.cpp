#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_EXE_FORM_GROUP_SWAP__FP9SPI_STACKi
// Address: 0x254550 - 0x2545e0
void ps2__MENU_EXE_FORM_GROUP_SWAP__FP9SPI_STACKi_0x254550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_EXE_FORM_GROUP_SWAP__FP9SPI_STACKi_0x254550");
#endif

    switch (ctx->pc) {
        case 0x254580u: goto label_254580;
        case 0x254590u: goto label_254590;
        case 0x2545a0u: goto label_2545a0;
        case 0x2545acu: goto label_2545ac;
        case 0x2545c4u: goto label_2545c4;
        default: break;
    }

    ctx->pc = 0x254550u;

    // 0x254550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x254554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254558: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25455c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25455cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254560: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254564: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254568u;
    {
        const bool branch_taken_0x254568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254568u;
            // 0x25456c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254568) {
            ctx->pc = 0x254578u;
            goto label_254578;
        }
    }
    ctx->pc = 0x254570u;
    // 0x254570: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x254570u;
    {
        const bool branch_taken_0x254570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254570u;
            // 0x254574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254570) {
            ctx->pc = 0x2545C8u;
            goto label_2545c8;
        }
    }
    ctx->pc = 0x254578u;
label_254578:
    // 0x254578: 0xc05191c  jal         func_146470
    ctx->pc = 0x254578u;
    SET_GPR_U32(ctx, 31, 0x254580u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254580u; }
        if (ctx->pc != 0x254580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254580u; }
        if (ctx->pc != 0x254580u) { return; }
    }
    ctx->pc = 0x254580u;
label_254580:
    // 0x254580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254588: 0xc05191c  jal         func_146470
    ctx->pc = 0x254588u;
    SET_GPR_U32(ctx, 31, 0x254590u);
    ctx->pc = 0x25458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254588u;
            // 0x25458c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254590u; }
        if (ctx->pc != 0x254590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254590u; }
        if (ctx->pc != 0x254590u) { return; }
    }
    ctx->pc = 0x254590u;
label_254590:
    // 0x254590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x254590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254598: 0xc05191c  jal         func_146470
    ctx->pc = 0x254598u;
    SET_GPR_U32(ctx, 31, 0x2545A0u);
    ctx->pc = 0x25459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254598u;
            // 0x25459c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545A0u; }
        if (ctx->pc != 0x2545A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545A0u; }
        if (ctx->pc != 0x2545A0u) { return; }
    }
    ctx->pc = 0x2545A0u;
label_2545a0:
    // 0x2545a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2545a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x2545A4u;
    SET_GPR_U32(ctx, 31, 0x2545ACu);
    ctx->pc = 0x2545A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2545A4u;
            // 0x2545a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545ACu; }
        if (ctx->pc != 0x2545ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545ACu; }
        if (ctx->pc != 0x2545ACu) { return; }
    }
    ctx->pc = 0x2545ACu;
label_2545ac:
    // 0x2545ac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2545acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x2545b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2545b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2545b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2545b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545bc: 0xc08ac78  jal         func_22B1E0
    ctx->pc = 0x2545BCu;
    SET_GPR_U32(ctx, 31, 0x2545C4u);
    ctx->pc = 0x2545C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2545BCu;
            // 0x2545c0: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B1E0u;
    if (runtime->hasFunction(0x22B1E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545C4u; }
        if (ctx->pc != 0x2545C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormReLink2__14CPosDataManageFPcPcPcPc_0x22b1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2545C4u; }
        if (ctx->pc != 0x2545C4u) { return; }
    }
    ctx->pc = 0x2545C4u;
label_2545c4:
    // 0x2545c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2545c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2545c8:
    // 0x2545c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2545c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2545cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2545ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2545d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2545d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2545d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2545d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2545D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2545DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2545D8u;
            // 0x2545dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2545E0u;
}
