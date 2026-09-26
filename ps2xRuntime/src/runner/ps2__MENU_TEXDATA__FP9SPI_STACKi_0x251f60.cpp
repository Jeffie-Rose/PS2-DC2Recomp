#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_TEXDATA__FP9SPI_STACKi
// Address: 0x251f60 - 0x252094
void ps2__MENU_TEXDATA__FP9SPI_STACKi_0x251f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_TEXDATA__FP9SPI_STACKi_0x251f60");
#endif

    switch (ctx->pc) {
        case 0x251f8cu: goto label_251f8c;
        case 0x251f9cu: goto label_251f9c;
        case 0x251facu: goto label_251fac;
        case 0x251fbcu: goto label_251fbc;
        case 0x251fc8u: goto label_251fc8;
        case 0x251fe4u: goto label_251fe4;
        case 0x252004u: goto label_252004;
        case 0x252024u: goto label_252024;
        case 0x252040u: goto label_252040;
        case 0x25205cu: goto label_25205c;
        default: break;
    }

    ctx->pc = 0x251f60u;

    // 0x251f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x251f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x251f64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x251f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x251f68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x251f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x251f6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x251f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x251f70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x251f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x251f74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x251f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x251f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x251f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251f80: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x251f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x251f84: 0xc05191c  jal         func_146470
    ctx->pc = 0x251F84u;
    SET_GPR_U32(ctx, 31, 0x251F8Cu);
    ctx->pc = 0x251F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251F84u;
            // 0x251f88: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F8Cu; }
        if (ctx->pc != 0x251F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F8Cu; }
        if (ctx->pc != 0x251F8Cu) { return; }
    }
    ctx->pc = 0x251F8Cu;
label_251f8c:
    // 0x251f8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251f94: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251F94u;
    SET_GPR_U32(ctx, 31, 0x251F9Cu);
    ctx->pc = 0x251F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251F94u;
            // 0x251f98: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F9Cu; }
        if (ctx->pc != 0x251F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251F9Cu; }
        if (ctx->pc != 0x251F9Cu) { return; }
    }
    ctx->pc = 0x251F9Cu;
label_251f9c:
    // 0x251f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fa0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x251fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fa4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251FA4u;
    SET_GPR_U32(ctx, 31, 0x251FACu);
    ctx->pc = 0x251FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251FA4u;
            // 0x251fa8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FACu; }
        if (ctx->pc != 0x251FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FACu; }
        if (ctx->pc != 0x251FACu) { return; }
    }
    ctx->pc = 0x251FACu;
label_251fac:
    // 0x251fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x251fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fb4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251FB4u;
    SET_GPR_U32(ctx, 31, 0x251FBCu);
    ctx->pc = 0x251FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251FB4u;
            // 0x251fb8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FBCu; }
        if (ctx->pc != 0x251FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FBCu; }
        if (ctx->pc != 0x251FBCu) { return; }
    }
    ctx->pc = 0x251FBCu;
label_251fbc:
    // 0x251fbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fc0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251FC0u;
    SET_GPR_U32(ctx, 31, 0x251FC8u);
    ctx->pc = 0x251FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251FC0u;
            // 0x251fc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FC8u; }
        if (ctx->pc != 0x251FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FC8u; }
        if (ctx->pc != 0x251FC8u) { return; }
    }
    ctx->pc = 0x251FC8u;
label_251fc8:
    // 0x251fc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x251fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fcc: 0x978397a4  lhu         $v1, -0x685C($gp)
    ctx->pc = 0x251fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940580)));
    // 0x251fd0: 0x978297a8  lhu         $v0, -0x6858($gp)
    ctx->pc = 0x251fd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940584)));
    // 0x251fd4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251fd8: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x251fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251fdc: 0xc08a9d4  jal         func_22A750
    ctx->pc = 0x251FDCu;
    SET_GPR_U32(ctx, 31, 0x251FE4u);
    ctx->pc = 0x251FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251FDCu;
            // 0x251fe0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FE4u; }
        if (ctx->pc != 0x251FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251FE4u; }
        if (ctx->pc != 0x251FE4u) { return; }
    }
    ctx->pc = 0x251FE4u;
label_251fe4:
    // 0x251fe4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x251fe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251fe8: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x251FE8u;
    {
        const bool branch_taken_0x251fe8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x251FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251FE8u;
            // 0x251fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251fe8) {
            ctx->pc = 0x251FF8u;
            goto label_251ff8;
        }
    }
    ctx->pc = 0x251FF0u;
    // 0x251ff0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x251FF0u;
    {
        const bool branch_taken_0x251ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251FF0u;
            // 0x251ff4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ff0) {
            ctx->pc = 0x252070u;
            goto label_252070;
        }
    }
    ctx->pc = 0x251FF8u;
label_251ff8:
    // 0x251ff8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251ffc: 0xc08a9e4  jal         func_22A790
    ctx->pc = 0x251FFCu;
    SET_GPR_U32(ctx, 31, 0x252004u);
    ctx->pc = 0x252000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251FFCu;
            // 0x252000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A790u;
    if (runtime->hasFunction(0x22A790u)) {
        auto targetFn = runtime->lookupFunction(0x22A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252004u; }
        if (ctx->pc != 0x252004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFPc_0x22a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252004u; }
        if (ctx->pc != 0x252004u) { return; }
    }
    ctx->pc = 0x252004u;
label_252004:
    // 0x252004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252004u;
    {
        const bool branch_taken_0x252004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252004u;
            // 0x252008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252004) {
            ctx->pc = 0x252014u;
            goto label_252014;
        }
    }
    ctx->pc = 0x25200Cu;
    // 0x25200c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25200Cu;
    {
        const bool branch_taken_0x25200c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25200c) {
            ctx->pc = 0x25206Cu;
            goto label_25206c;
        }
    }
    ctx->pc = 0x252014u;
label_252014:
    // 0x252014: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x252014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x252018: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x252018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25201c: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x25201Cu;
    SET_GPR_U32(ctx, 31, 0x252024u);
    ctx->pc = 0x252020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25201Cu;
            // 0x252020: 0x2484e340  addiu       $a0, $a0, -0x1CC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252024u; }
        if (ctx->pc != 0x252024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252024u; }
        if (ctx->pc != 0x252024u) { return; }
    }
    ctx->pc = 0x252024u;
label_252024:
    // 0x252024: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x252024u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x252028: 0x838297ac  lb          $v0, -0x6854($gp)
    ctx->pc = 0x252028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940588)));
    // 0x25202c: 0xa2a20018  sb          $v0, 0x18($s5)
    ctx->pc = 0x25202cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x252030: 0xa6b4001a  sh          $s4, 0x1A($s5)
    ctx->pc = 0x252030u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 20));
    // 0x252034: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x252034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x252038: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x252038u;
    SET_GPR_U32(ctx, 31, 0x252040u);
    ctx->pc = 0x25203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252038u;
            // 0x25203c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252040u; }
        if (ctx->pc != 0x252040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252040u; }
        if (ctx->pc != 0x252040u) { return; }
    }
    ctx->pc = 0x252040u;
label_252040:
    // 0x252040: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x252040u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x252044: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x252044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252048: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x252048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25204c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25204cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252050: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252054: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x252054u;
    SET_GPR_U32(ctx, 31, 0x25205Cu);
    ctx->pc = 0x252058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252054u;
            // 0x252058: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25205Cu; }
        if (ctx->pc != 0x25205Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25205Cu; }
        if (ctx->pc != 0x25205Cu) { return; }
    }
    ctx->pc = 0x25205Cu;
label_25205c:
    // 0x25205c: 0x978397a8  lhu         $v1, -0x6858($gp)
    ctx->pc = 0x25205cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940584)));
    // 0x252060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252064: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x252064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x252068: 0xa78397a8  sh          $v1, -0x6858($gp)
    ctx->pc = 0x252068u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940584), (uint16_t)GPR_U32(ctx, 3));
label_25206c:
    // 0x25206c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x25206cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_252070:
    // 0x252070: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x252070u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x252074: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x252074u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x252078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x252078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25207c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25207cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x252080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252084: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252084u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25208c: 0x3e00008  jr          $ra
    ctx->pc = 0x25208Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25208Cu;
            // 0x252090: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252094u;
}
