#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _WMAP_AREA__FP9SPI_STACKi
// Address: 0x2ab730 - 0x2ab904
void ps2__WMAP_AREA__FP9SPI_STACKi_0x2ab730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__WMAP_AREA__FP9SPI_STACKi_0x2ab730");
#endif

    switch (ctx->pc) {
        case 0x2ab74cu: goto label_2ab74c;
        case 0x2ab75cu: goto label_2ab75c;
        case 0x2ab78cu: goto label_2ab78c;
        case 0x2ab79cu: goto label_2ab79c;
        case 0x2ab7acu: goto label_2ab7ac;
        case 0x2ab7bcu: goto label_2ab7bc;
        case 0x2ab7ccu: goto label_2ab7cc;
        case 0x2ab7d8u: goto label_2ab7d8;
        case 0x2ab7e4u: goto label_2ab7e4;
        case 0x2ab804u: goto label_2ab804;
        case 0x2ab868u: goto label_2ab868;
        case 0x2ab880u: goto label_2ab880;
        case 0x2ab8c4u: goto label_2ab8c4;
        default: break;
    }

    ctx->pc = 0x2ab730u;

    // 0x2ab730: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ab734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ab738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ab738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ab73c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab740: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2ab740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ab744: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB744u;
    SET_GPR_U32(ctx, 31, 0x2AB74Cu);
    ctx->pc = 0x2AB748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB744u;
            // 0x2ab748: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB74Cu; }
        if (ctx->pc != 0x2AB74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB74Cu; }
        if (ctx->pc != 0x2AB74Cu) { return; }
    }
    ctx->pc = 0x2AB74Cu;
label_2ab74c:
    // 0x2ab74c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ab750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab754: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB754u;
    SET_GPR_U32(ctx, 31, 0x2AB75Cu);
    ctx->pc = 0x2AB758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB754u;
            // 0x2ab758: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB75Cu; }
        if (ctx->pc != 0x2AB75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB75Cu; }
        if (ctx->pc != 0x2AB75Cu) { return; }
    }
    ctx->pc = 0x2AB75Cu;
label_2ab75c:
    // 0x2ab75c: 0x8f839ad4  lw          $v1, -0x652C($gp)
    ctx->pc = 0x2ab75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941396)));
    // 0x2ab760: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2ab760u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ab764: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ab768: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2ab768u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ab76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab770: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2ab770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2ab774: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2ab774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2ab778: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ab778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab77c: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x2ab77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab780: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2ab780u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2ab784: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB784u;
    SET_GPR_U32(ctx, 31, 0x2AB78Cu);
    ctx->pc = 0x2AB788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB784u;
            // 0x2ab788: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB78Cu; }
        if (ctx->pc != 0x2AB78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB78Cu; }
        if (ctx->pc != 0x2AB78Cu) { return; }
    }
    ctx->pc = 0x2AB78Cu;
label_2ab78c:
    // 0x2ab78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab790: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2ab790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2ab794: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB794u;
    SET_GPR_U32(ctx, 31, 0x2AB79Cu);
    ctx->pc = 0x2AB798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB794u;
            // 0x2ab798: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB79Cu; }
        if (ctx->pc != 0x2AB79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB79Cu; }
        if (ctx->pc != 0x2AB79Cu) { return; }
    }
    ctx->pc = 0x2AB79Cu;
label_2ab79c:
    // 0x2ab79c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7a0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2ab7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2ab7a4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB7A4u;
    SET_GPR_U32(ctx, 31, 0x2AB7ACu);
    ctx->pc = 0x2AB7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7A4u;
            // 0x2ab7a8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7ACu; }
        if (ctx->pc != 0x2AB7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7ACu; }
        if (ctx->pc != 0x2AB7ACu) { return; }
    }
    ctx->pc = 0x2AB7ACu;
label_2ab7ac:
    // 0x2ab7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7b0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2ab7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x2ab7b4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB7B4u;
    SET_GPR_U32(ctx, 31, 0x2AB7BCu);
    ctx->pc = 0x2AB7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7B4u;
            // 0x2ab7b8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7BCu; }
        if (ctx->pc != 0x2AB7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7BCu; }
        if (ctx->pc != 0x2AB7BCu) { return; }
    }
    ctx->pc = 0x2AB7BCu;
label_2ab7bc:
    // 0x2ab7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7c0: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2ab7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2ab7c4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AB7C4u;
    SET_GPR_U32(ctx, 31, 0x2AB7CCu);
    ctx->pc = 0x2AB7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7C4u;
            // 0x2ab7c8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7CCu; }
        if (ctx->pc != 0x2AB7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7CCu; }
        if (ctx->pc != 0x2AB7CCu) { return; }
    }
    ctx->pc = 0x2AB7CCu;
label_2ab7cc:
    // 0x2ab7cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ab7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7d0: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AB7D0u;
    SET_GPR_U32(ctx, 31, 0x2AB7D8u);
    ctx->pc = 0x2AB7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7D0u;
            // 0x2ab7d4: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7D8u; }
        if (ctx->pc != 0x2AB7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7D8u; }
        if (ctx->pc != 0x2AB7D8u) { return; }
    }
    ctx->pc = 0x2AB7D8u;
label_2ab7d8:
    // 0x2ab7d8: 0x8f859acc  lw          $a1, -0x6534($gp)
    ctx->pc = 0x2ab7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941388)));
    // 0x2ab7dc: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2AB7DCu;
    SET_GPR_U32(ctx, 31, 0x2AB7E4u);
    ctx->pc = 0x2AB7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7DCu;
            // 0x2ab7e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7E4u; }
        if (ctx->pc != 0x2AB7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB7E4u; }
        if (ctx->pc != 0x2AB7E4u) { return; }
    }
    ctx->pc = 0x2AB7E4u;
label_2ab7e4:
    // 0x2ab7e4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2ab7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2ab7e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ab7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7ec: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2ab7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x2ab7f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ab7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab7f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab7fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2AB7FCu;
    {
        const bool branch_taken_0x2ab7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB7FCu;
            // 0x2ab800: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab7fc) {
            ctx->pc = 0x2AB840u;
            goto label_2ab840;
        }
    }
    ctx->pc = 0x2AB804u;
label_2ab804:
    // 0x2ab804: 0x8f829adc  lw          $v0, -0x6524($gp)
    ctx->pc = 0x2ab804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941404)));
    // 0x2ab808: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x2ab808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ab80c: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x2ab80cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x2ab810: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AB810u;
    {
        const bool branch_taken_0x2ab810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB810u;
            // 0x2ab814: 0x2261021  addu        $v0, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab810) {
            ctx->pc = 0x2AB838u;
            goto label_2ab838;
        }
    }
    ctx->pc = 0x2AB818u;
    // 0x2ab818: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2ab818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2ab81c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2ab81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab820: 0x8042000f  lb          $v0, 0xF($v0)
    ctx->pc = 0x2ab820u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x2ab824: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB824u;
    {
        const bool branch_taken_0x2ab824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab824) {
            ctx->pc = 0x2AB830u;
            goto label_2ab830;
        }
    }
    ctx->pc = 0x2AB82Cu;
    // 0x2ab82c: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x2ab82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_2ab830:
    // 0x2ab830: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2ab834: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ab834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ab838:
    // 0x2ab838: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2ab838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2ab83c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ab83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ab840:
    // 0x2ab840: 0x87829ad8  lh          $v0, -0x6528($gp)
    ctx->pc = 0x2ab840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941400)));
    // 0x2ab844: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ab844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ab848: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2AB848u;
    {
        const bool branch_taken_0x2ab848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab848) {
            ctx->pc = 0x2AB804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ab804;
        }
    }
    ctx->pc = 0x2AB850u;
    // 0x2ab850: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ab850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab854: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ab854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ab858: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AB858u;
    {
        const bool branch_taken_0x2ab858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AB85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB858u;
            // 0x2ab85c: 0x24040320  addiu       $a0, $zero, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab858) {
            ctx->pc = 0x2AB878u;
            goto label_2ab878;
        }
    }
    ctx->pc = 0x2AB860u;
    // 0x2ab860: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2AB860u;
    SET_GPR_U32(ctx, 31, 0x2AB868u);
    ctx->pc = 0x2AB864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB860u;
            // 0x2ab864: 0x24040268  addiu       $a0, $zero, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB868u; }
        if (ctx->pc != 0x2AB868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB868u; }
        if (ctx->pc != 0x2AB868u) { return; }
    }
    ctx->pc = 0x2AB868u;
label_2ab868:
    // 0x2ab868: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB868u;
    {
        const bool branch_taken_0x2ab868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab868) {
            ctx->pc = 0x2AB874u;
            goto label_2ab874;
        }
    }
    ctx->pc = 0x2AB870u;
    // 0x2ab870: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2ab870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2ab874:
    // 0x2ab874: 0x24040320  addiu       $a0, $zero, 0x320
    ctx->pc = 0x2ab874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
label_2ab878:
    // 0x2ab878: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2AB878u;
    SET_GPR_U32(ctx, 31, 0x2AB880u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB880u; }
        if (ctx->pc != 0x2AB880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB880u; }
        if (ctx->pc != 0x2AB880u) { return; }
    }
    ctx->pc = 0x2AB880u;
label_2ab880:
    // 0x2ab880: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB880u;
    {
        const bool branch_taken_0x2ab880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ab880) {
            ctx->pc = 0x2AB8A4u;
            goto label_2ab8a4;
        }
    }
    ctx->pc = 0x2AB888u;
    // 0x2ab888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ab888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab88c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ab88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab890: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB890u;
    {
        const bool branch_taken_0x2ab890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AB894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB890u;
            // 0x2ab894: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab890) {
            ctx->pc = 0x2AB8A0u;
            goto label_2ab8a0;
        }
    }
    ctx->pc = 0x2AB898u;
    // 0x2ab898: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB898u;
    {
        const bool branch_taken_0x2ab898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ab898) {
            ctx->pc = 0x2AB8A4u;
            goto label_2ab8a4;
        }
    }
    ctx->pc = 0x2AB8A0u;
label_2ab8a0:
    // 0x2ab8a0: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2ab8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_2ab8a4:
    // 0x2ab8a4: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x2ab8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x2ab8a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB8A8u;
    {
        const bool branch_taken_0x2ab8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8A8u;
            // 0x2ab8ac: 0x2a410008  slti        $at, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8a8) {
            ctx->pc = 0x2AB8BCu;
            goto label_2ab8bc;
        }
    }
    ctx->pc = 0x2AB8B0u;
    // 0x2ab8b0: 0x87829ae0  lh          $v0, -0x6520($gp)
    ctx->pc = 0x2ab8b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294941408)));
    // 0x2ab8b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ab8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ab8b8: 0xa7829ae0  sh          $v0, -0x6520($gp)
    ctx->pc = 0x2ab8b8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941408), (uint16_t)GPR_U32(ctx, 2));
label_2ab8bc:
    // 0x2ab8bc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AB8BCu;
    {
        const bool branch_taken_0x2ab8bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8BCu;
            // 0x2ab8c0: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab8bc) {
            ctx->pc = 0x2AB8E4u;
            goto label_2ab8e4;
        }
    }
    ctx->pc = 0x2AB8C4u;
label_2ab8c4:
    // 0x2ab8c4: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2ab8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ab8c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ab8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2ab8cc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ab8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ab8d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2ab8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2ab8d4: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2ab8d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ab8d8: 0x0  nop
    ctx->pc = 0x2ab8d8u;
    // NOP
    // 0x2ab8dc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AB8DCu;
    {
        const bool branch_taken_0x2ab8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab8dc) {
            ctx->pc = 0x2AB8C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ab8c4;
        }
    }
    ctx->pc = 0x2AB8E4u;
label_2ab8e4:
    // 0x2ab8e4: 0x0  nop
    ctx->pc = 0x2ab8e4u;
    // NOP
    // 0x2ab8e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ab8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab8ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ab8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ab8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB8FCu;
            // 0x2ab900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB904u;
}
