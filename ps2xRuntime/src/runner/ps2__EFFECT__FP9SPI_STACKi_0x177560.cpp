#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EFFECT__FP9SPI_STACKi
// Address: 0x177560 - 0x17797c
void ps2__EFFECT__FP9SPI_STACKi_0x177560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EFFECT__FP9SPI_STACKi_0x177560");
#endif

    switch (ctx->pc) {
        case 0x1775acu: goto label_1775ac;
        case 0x1775bcu: goto label_1775bc;
        case 0x1775ccu: goto label_1775cc;
        case 0x1775dcu: goto label_1775dc;
        case 0x1775ecu: goto label_1775ec;
        case 0x1775fcu: goto label_1775fc;
        case 0x17760cu: goto label_17760c;
        case 0x177634u: goto label_177634;
        case 0x177640u: goto label_177640;
        case 0x177654u: goto label_177654;
        case 0x177674u: goto label_177674;
        case 0x177684u: goto label_177684;
        case 0x177690u: goto label_177690;
        case 0x1776a8u: goto label_1776a8;
        case 0x1776c0u: goto label_1776c0;
        case 0x1776d0u: goto label_1776d0;
        case 0x1776dcu: goto label_1776dc;
        case 0x177720u: goto label_177720;
        case 0x177730u: goto label_177730;
        case 0x17773cu: goto label_17773c;
        case 0x17776cu: goto label_17776c;
        case 0x17777cu: goto label_17777c;
        case 0x17779cu: goto label_17779c;
        case 0x1777ccu: goto label_1777cc;
        case 0x1777d4u: goto label_1777d4;
        case 0x177814u: goto label_177814;
        case 0x177830u: goto label_177830;
        case 0x177850u: goto label_177850;
        case 0x17786cu: goto label_17786c;
        case 0x177884u: goto label_177884;
        case 0x177894u: goto label_177894;
        case 0x1778a8u: goto label_1778a8;
        case 0x1778c0u: goto label_1778c0;
        case 0x1778d4u: goto label_1778d4;
        case 0x1778e8u: goto label_1778e8;
        case 0x1778f8u: goto label_1778f8;
        case 0x177918u: goto label_177918;
        default: break;
    }

    ctx->pc = 0x177560u;

    // 0x177560: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x177560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x177564: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x177564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x177568: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x177568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17756c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x177570: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x177570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x177574: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x177574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x177578: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x177578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17757c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x177580: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x177580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x177584: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x177588: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17758c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17758cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x177590: 0x8f828a00  lw          $v0, -0x7600($gp)
    ctx->pc = 0x177590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x177594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177594u;
    {
        const bool branch_taken_0x177594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177594u;
            // 0x177598: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177594) {
            ctx->pc = 0x1775A4u;
            goto label_1775a4;
        }
    }
    ctx->pc = 0x17759Cu;
    // 0x17759c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x17759Cu;
    {
        const bool branch_taken_0x17759c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1775A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17759Cu;
            // 0x1775a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17759c) {
            ctx->pc = 0x177948u;
            goto label_177948;
        }
    }
    ctx->pc = 0x1775A4u;
label_1775a4:
    // 0x1775a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1775A4u;
    SET_GPR_U32(ctx, 31, 0x1775ACu);
    ctx->pc = 0x1775A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775A4u;
            // 0x1775a8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ACu; }
        if (ctx->pc != 0x1775ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ACu; }
        if (ctx->pc != 0x1775ACu) { return; }
    }
    ctx->pc = 0x1775ACu;
label_1775ac:
    // 0x1775ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1775b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775b4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1775B4u;
    SET_GPR_U32(ctx, 31, 0x1775BCu);
    ctx->pc = 0x1775B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775B4u;
            // 0x1775b8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775BCu; }
        if (ctx->pc != 0x1775BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775BCu; }
        if (ctx->pc != 0x1775BCu) { return; }
    }
    ctx->pc = 0x1775BCu;
label_1775bc:
    // 0x1775bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775c0: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x1775c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x1775c4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1775C4u;
    SET_GPR_U32(ctx, 31, 0x1775CCu);
    ctx->pc = 0x1775C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775C4u;
            // 0x1775c8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775CCu; }
        if (ctx->pc != 0x1775CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775CCu; }
        if (ctx->pc != 0x1775CCu) { return; }
    }
    ctx->pc = 0x1775CCu;
label_1775cc:
    // 0x1775cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775d0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1775d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775d4: 0xc05191c  jal         func_146470
    ctx->pc = 0x1775D4u;
    SET_GPR_U32(ctx, 31, 0x1775DCu);
    ctx->pc = 0x1775D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775D4u;
            // 0x1775d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775DCu; }
        if (ctx->pc != 0x1775DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775DCu; }
        if (ctx->pc != 0x1775DCu) { return; }
    }
    ctx->pc = 0x1775DCu;
label_1775dc:
    // 0x1775dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1775e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775e4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1775E4u;
    SET_GPR_U32(ctx, 31, 0x1775ECu);
    ctx->pc = 0x1775E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775E4u;
            // 0x1775e8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ECu; }
        if (ctx->pc != 0x1775ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775ECu; }
        if (ctx->pc != 0x1775ECu) { return; }
    }
    ctx->pc = 0x1775ECu;
label_1775ec:
    // 0x1775ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1775f0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1775f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1775f4: 0xc05190c  jal         func_146430
    ctx->pc = 0x1775F4u;
    SET_GPR_U32(ctx, 31, 0x1775FCu);
    ctx->pc = 0x1775F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1775F4u;
            // 0x1775f8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775FCu; }
        if (ctx->pc != 0x1775FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1775FCu; }
        if (ctx->pc != 0x1775FCu) { return; }
    }
    ctx->pc = 0x1775FCu;
label_1775fc:
    // 0x1775fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1775fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177600: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x177600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x177604: 0xc05190c  jal         func_146430
    ctx->pc = 0x177604u;
    SET_GPR_U32(ctx, 31, 0x17760Cu);
    ctx->pc = 0x177608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177604u;
            // 0x177608: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17760Cu; }
        if (ctx->pc != 0x17760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17760Cu; }
        if (ctx->pc != 0x17760Cu) { return; }
    }
    ctx->pc = 0x17760Cu;
label_17760c:
    // 0x17760c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x177610: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x177610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x177614: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x177614u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x177618: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x177618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17761c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x17761cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x177620: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x177620u;
    {
        const bool branch_taken_0x177620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177620u;
            // 0x177624: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177620) {
            ctx->pc = 0x177644u;
            goto label_177644;
        }
    }
    ctx->pc = 0x177628u;
    // 0x177628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x177628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17762c: 0xc05191c  jal         func_146470
    ctx->pc = 0x17762Cu;
    SET_GPR_U32(ctx, 31, 0x177634u);
    ctx->pc = 0x177630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17762Cu;
            // 0x177630: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177634u; }
        if (ctx->pc != 0x177634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177634u; }
        if (ctx->pc != 0x177634u) { return; }
    }
    ctx->pc = 0x177634u;
label_177634:
    // 0x177634: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x177634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177638: 0xc05190c  jal         func_146430
    ctx->pc = 0x177638u;
    SET_GPR_U32(ctx, 31, 0x177640u);
    ctx->pc = 0x17763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177638u;
            // 0x17763c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177640u; }
        if (ctx->pc != 0x177640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177640u; }
        if (ctx->pc != 0x177640u) { return; }
    }
    ctx->pc = 0x177640u;
label_177640:
    // 0x177640: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177640u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177644:
    // 0x177644: 0x8f848a00  lw          $a0, -0x7600($gp)
    ctx->pc = 0x177644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x177648: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17764c: 0xc052734  jal         func_149CD0
    ctx->pc = 0x17764Cu;
    SET_GPR_U32(ctx, 31, 0x177654u);
    ctx->pc = 0x177650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17764Cu;
            // 0x177650: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177654u; }
        if (ctx->pc != 0x177654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177654u; }
        if (ctx->pc != 0x177654u) { return; }
    }
    ctx->pc = 0x177654u;
label_177654:
    // 0x177654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x177654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177658: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177658u;
    {
        const bool branch_taken_0x177658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17765Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177658u;
            // 0x17765c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177658) {
            ctx->pc = 0x177668u;
            goto label_177668;
        }
    }
    ctx->pc = 0x177660u;
    // 0x177660: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x177660u;
    {
        const bool branch_taken_0x177660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177660u;
            // 0x177664: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177660) {
            ctx->pc = 0x17794Cu;
            goto label_17794c;
        }
    }
    ctx->pc = 0x177668u;
label_177668:
    // 0x177668: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x177668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x17766c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x17766Cu;
    SET_GPR_U32(ctx, 31, 0x177674u);
    ctx->pc = 0x177670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17766Cu;
            // 0x177670: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177674u; }
        if (ctx->pc != 0x177674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177674u; }
        if (ctx->pc != 0x177674u) { return; }
    }
    ctx->pc = 0x177674u;
label_177674:
    // 0x177674: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x177674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x177678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x177678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17767c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x17767Cu;
    SET_GPR_U32(ctx, 31, 0x177684u);
    ctx->pc = 0x177680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17767Cu;
            // 0x177680: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177684u; }
        if (ctx->pc != 0x177684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177684u; }
        if (ctx->pc != 0x177684u) { return; }
    }
    ctx->pc = 0x177684u;
label_177684:
    // 0x177684: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x177684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177688: 0xc060ab4  jal         func_182AD0
    ctx->pc = 0x177688u;
    SET_GPR_U32(ctx, 31, 0x177690u);
    ctx->pc = 0x17768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177688u;
            // 0x17768c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182AD0u;
    if (runtime->hasFunction(0x182AD0u)) {
        auto targetFn = runtime->lookupFunction(0x182AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177690u; }
        if (ctx->pc != 0x177690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEffectManagerFv_0x182ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177690u; }
        if (ctx->pc != 0x177690u) { return; }
    }
    ctx->pc = 0x177690u;
label_177690:
    // 0x177690: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x177690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x177694: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x177694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177698: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17769c: 0x27a700d4  addiu       $a3, $sp, 0xD4
    ctx->pc = 0x17769cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x1776a0: 0xc060be8  jal         func_182FA0
    ctx->pc = 0x1776A0u;
    SET_GPR_U32(ctx, 31, 0x1776A8u);
    ctx->pc = 0x1776A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776A0u;
            // 0x1776a4: 0x27a800d8  addiu       $t0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182FA0u;
    if (runtime->hasFunction(0x182FA0u)) {
        auto targetFn = runtime->lookupFunction(0x182FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776A8u; }
        if (ctx->pc != 0x1776A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBufferNums__14CEffectManagerFPciPiPi_0x182fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776A8u; }
        if (ctx->pc != 0x1776A8u) { return; }
    }
    ctx->pc = 0x1776A8u;
label_1776a8:
    // 0x1776a8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1776a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1776ac: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x1776acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x1776b0: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x1776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x1776b4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1776b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1776b8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1776B8u;
    SET_GPR_U32(ctx, 31, 0x1776C0u);
    ctx->pc = 0x1776BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776B8u;
            // 0x1776bc: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776C0u; }
        if (ctx->pc != 0x1776C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776C0u; }
        if (ctx->pc != 0x1776C0u) { return; }
    }
    ctx->pc = 0x1776C0u;
label_1776c0:
    // 0x1776c0: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x1776c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x1776c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1776c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1776c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1776C8u;
    {
        const bool branch_taken_0x1776c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1776CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1776C8u;
            // 0x1776cc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1776c8) {
            ctx->pc = 0x1776E4u;
            goto label_1776e4;
        }
    }
    ctx->pc = 0x1776D0u;
label_1776d0:
    // 0x1776d0: 0x8e42018c  lw          $v0, 0x18C($s2)
    ctx->pc = 0x1776d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
    // 0x1776d4: 0xc05fdc0  jal         func_17F700
    ctx->pc = 0x1776D4u;
    SET_GPR_U32(ctx, 31, 0x1776DCu);
    ctx->pc = 0x1776D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1776D4u;
            // 0x1776d8: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F700u;
    if (runtime->hasFunction(0x17F700u)) {
        auto targetFn = runtime->lookupFunction(0x17F700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776DCu; }
        if (ctx->pc != 0x1776DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CEffectFv_0x17f700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1776DCu; }
        if (ctx->pc != 0x1776DCu) { return; }
    }
    ctx->pc = 0x1776DCu;
label_1776dc:
    // 0x1776dc: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x1776dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x1776e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1776e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1776e4:
    // 0x1776e4: 0x0  nop
    ctx->pc = 0x1776e4u;
    // NOP
    // 0x1776e8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x1776e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x1776ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1776ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1776f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1776F0u;
    {
        const bool branch_taken_0x1776f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1776f0) {
            ctx->pc = 0x1776D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1776d0;
        }
    }
    ctx->pc = 0x1776F8u;
    // 0x1776f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1776f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1776fc: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x1776fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x177700: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x177700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x177704: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x177704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177708: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x177708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x17770c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17770cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177710: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x177710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x177714: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x177714u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x177718: 0xc04e748  jal         func_139D20
    ctx->pc = 0x177718u;
    SET_GPR_U32(ctx, 31, 0x177720u);
    ctx->pc = 0x17771Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177718u;
            // 0x17771c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177720u; }
        if (ctx->pc != 0x177720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177720u; }
        if (ctx->pc != 0x177720u) { return; }
    }
    ctx->pc = 0x177720u;
label_177720:
    // 0x177720: 0xae420184  sw          $v0, 0x184($s2)
    ctx->pc = 0x177720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 2));
    // 0x177724: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x177724u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177728: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x177728u;
    {
        const bool branch_taken_0x177728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177728u;
            // 0x17772c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177728) {
            ctx->pc = 0x177744u;
            goto label_177744;
        }
    }
    ctx->pc = 0x177730u;
label_177730:
    // 0x177730: 0x8e420184  lw          $v0, 0x184($s2)
    ctx->pc = 0x177730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x177734: 0xc060398  jal         func_180E60
    ctx->pc = 0x177734u;
    SET_GPR_U32(ctx, 31, 0x17773Cu);
    ctx->pc = 0x177738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177734u;
            // 0x177738: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E60u;
    if (runtime->hasFunction(0x180E60u)) {
        auto targetFn = runtime->lookupFunction(0x180E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17773Cu; }
        if (ctx->pc != 0x17773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CEffectCtrlFv_0x180e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17773Cu; }
        if (ctx->pc != 0x17773Cu) { return; }
    }
    ctx->pc = 0x17773Cu;
label_17773c:
    // 0x17773c: 0x26730310  addiu       $s3, $s3, 0x310
    ctx->pc = 0x17773cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
    // 0x177740: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x177740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_177744:
    // 0x177744: 0x0  nop
    ctx->pc = 0x177744u;
    // NOP
    // 0x177748: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x177748u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x17774c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x17774cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x177750: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x177750u;
    {
        const bool branch_taken_0x177750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177750) {
            ctx->pc = 0x177730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177730;
        }
    }
    ctx->pc = 0x177758u;
    // 0x177758: 0x8e45018c  lw          $a1, 0x18C($s2)
    ctx->pc = 0x177758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
    // 0x17775c: 0x8fa600d4  lw          $a2, 0xD4($sp)
    ctx->pc = 0x17775cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x177760: 0x8e470184  lw          $a3, 0x184($s2)
    ctx->pc = 0x177760u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x177764: 0xc060ae8  jal         func_182BA0
    ctx->pc = 0x177764u;
    SET_GPR_U32(ctx, 31, 0x17776Cu);
    ctx->pc = 0x177768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177764u;
            // 0x177768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BA0u;
    if (runtime->hasFunction(0x182BA0u)) {
        auto targetFn = runtime->lookupFunction(0x182BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17776Cu; }
        if (ctx->pc != 0x17776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryEffCtrls__14CEffectManagerFP7CEffectiP11CEffectCtrli_0x182ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17776Cu; }
        if (ctx->pc != 0x17776Cu) { return; }
    }
    ctx->pc = 0x17776Cu;
label_17776c:
    // 0x17776c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x17776cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x177770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177774: 0xc060c10  jal         func_183040
    ctx->pc = 0x177774u;
    SET_GPR_U32(ctx, 31, 0x17777Cu);
    ctx->pc = 0x177778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177774u;
            // 0x177778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183040u;
    if (runtime->hasFunction(0x183040u)) {
        auto targetFn = runtime->lookupFunction(0x183040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17777Cu; }
        if (ctx->pc != 0x17777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Load__14CEffectManagerFPci_0x183040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17777Cu; }
        if (ctx->pc != 0x17777Cu) { return; }
    }
    ctx->pc = 0x17777Cu;
label_17777c:
    // 0x17777c: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x17777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x177780: 0x8c4205e4  lw          $v0, 0x5E4($v0)
    ctx->pc = 0x177780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1508)));
    // 0x177784: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x177784u;
    {
        const bool branch_taken_0x177784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177784u;
            // 0x177788: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177784) {
            ctx->pc = 0x177888u;
            goto label_177888;
        }
    }
    ctx->pc = 0x17778Cu;
    // 0x17778c: 0x8f848a00  lw          $a0, -0x7600($gp)
    ctx->pc = 0x17778cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937088)));
    // 0x177790: 0x26450164  addiu       $a1, $s2, 0x164
    ctx->pc = 0x177790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    // 0x177794: 0xc052734  jal         func_149CD0
    ctx->pc = 0x177794u;
    SET_GPR_U32(ctx, 31, 0x17779Cu);
    ctx->pc = 0x177798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177794u;
            // 0x177798: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17779Cu; }
        if (ctx->pc != 0x17779Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17779Cu; }
        if (ctx->pc != 0x17779Cu) { return; }
    }
    ctx->pc = 0x17779Cu;
label_17779c:
    // 0x17779c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17779cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1777a0: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1777A0u;
    {
        const bool branch_taken_0x1777a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777a0) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x1777A8u;
    // 0x1777a8: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1777a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x1777ac: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1777acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x1777b0: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x1777b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
    // 0x1777b4: 0x2453064c  addiu       $s3, $v0, 0x64C
    ctx->pc = 0x1777b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1612));
    // 0x1777b8: 0x8c42064c  lw          $v0, 0x64C($v0)
    ctx->pc = 0x1777b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1612)));
    // 0x1777bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1777BCu;
    {
        const bool branch_taken_0x1777bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777BCu;
            // 0x1777c0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777bc) {
            ctx->pc = 0x1777FCu;
            goto label_1777fc;
        }
    }
    ctx->pc = 0x1777C4u;
    // 0x1777c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1777C4u;
    {
        const bool branch_taken_0x1777c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1777c4) {
            ctx->pc = 0x1777ECu;
            goto label_1777ec;
        }
    }
    ctx->pc = 0x1777CCu;
label_1777cc:
    // 0x1777cc: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x1777CCu;
    SET_GPR_U32(ctx, 31, 0x1777D4u);
    ctx->pc = 0x1777D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1777CCu;
            // 0x1777d0: 0x26450164  addiu       $a1, $s2, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1777D4u; }
        if (ctx->pc != 0x1777D4u) { return; }
    }
    ctx->pc = 0x1777D4u;
label_1777d4:
    // 0x1777d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1777D4u;
    {
        const bool branch_taken_0x1777d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1777d4) {
            ctx->pc = 0x1777E4u;
            goto label_1777e4;
        }
    }
    ctx->pc = 0x1777DCu;
    // 0x1777dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1777DCu;
    {
        const bool branch_taken_0x1777dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1777E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777DCu;
            // 0x1777e0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777dc) {
            ctx->pc = 0x1777FCu;
            goto label_1777fc;
        }
    }
    ctx->pc = 0x1777E4u;
label_1777e4:
    // 0x1777e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1777e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1777e8: 0x24530024  addiu       $s3, $v0, 0x24
    ctx->pc = 0x1777e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_1777ec:
    // 0x1777ec: 0x0  nop
    ctx->pc = 0x1777ecu;
    // NOP
    // 0x1777f0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1777f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1777f4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1777F4u;
    {
        const bool branch_taken_0x1777f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1777F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1777F4u;
            // 0x1777f8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1777f4) {
            ctx->pc = 0x1777CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1777cc;
        }
    }
    ctx->pc = 0x1777FCu;
label_1777fc:
    // 0x1777fc: 0x0  nop
    ctx->pc = 0x1777fcu;
    // NOP
    // 0x177800: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
    ctx->pc = 0x177800u;
    {
        const bool branch_taken_0x177800 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x177800) {
            ctx->pc = 0x177884u;
            goto label_177884;
        }
    }
    ctx->pc = 0x177808u;
    // 0x177808: 0x8f8489e8  lw          $a0, -0x7618($gp)
    ctx->pc = 0x177808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x17780c: 0xc04e704  jal         func_139C10
    ctx->pc = 0x17780Cu;
    SET_GPR_U32(ctx, 31, 0x177814u);
    ctx->pc = 0x177810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17780Cu;
            // 0x177810: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177814u; }
        if (ctx->pc != 0x177814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177814u; }
        if (ctx->pc != 0x177814u) { return; }
    }
    ctx->pc = 0x177814u;
label_177814:
    // 0x177814: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x177814u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x177818: 0x26450164  addiu       $a1, $s2, 0x164
    ctx->pc = 0x177818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    // 0x17781c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x17781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177820: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x177820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x177824: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x177824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177828: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x177828u;
    SET_GPR_U32(ctx, 31, 0x177830u);
    ctx->pc = 0x17782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177828u;
            // 0x17782c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177830u; }
        if (ctx->pc != 0x177830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177830u; }
        if (ctx->pc != 0x177830u) { return; }
    }
    ctx->pc = 0x177830u;
label_177830:
    // 0x177830: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x177830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x177834: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177834u;
    {
        const bool branch_taken_0x177834 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x177838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177834u;
            // 0x177838: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177834) {
            ctx->pc = 0x177844u;
            goto label_177844;
        }
    }
    ctx->pc = 0x17783Cu;
    // 0x17783c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x17783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x177840: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x177840u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_177844:
    // 0x177844: 0x8f8489e4  lw          $a0, -0x761C($gp)
    ctx->pc = 0x177844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x177848: 0xc04e748  jal         func_139D20
    ctx->pc = 0x177848u;
    SET_GPR_U32(ctx, 31, 0x177850u);
    ctx->pc = 0x17784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177848u;
            // 0x17784c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177850u; }
        if (ctx->pc != 0x177850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177850u; }
        if (ctx->pc != 0x177850u) { return; }
    }
    ctx->pc = 0x177850u;
label_177850:
    // 0x177850: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x177850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x177854: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x177854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x177858: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x177858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17785c: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x17785cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x177860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x177860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177864: 0xc049c18  jal         func_127060
    ctx->pc = 0x177864u;
    SET_GPR_U32(ctx, 31, 0x17786Cu);
    ctx->pc = 0x177868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x177864u;
            // 0x177868: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17786Cu; }
        if (ctx->pc != 0x17786Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17786Cu; }
        if (ctx->pc != 0x17786Cu) { return; }
    }
    ctx->pc = 0x17786Cu;
label_17786c:
    // 0x17786c: 0x8f8689ec  lw          $a2, -0x7614($gp)
    ctx->pc = 0x17786cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x177870: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x177870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177874: 0x8f8789e4  lw          $a3, -0x761C($gp)
    ctx->pc = 0x177874u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x177878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x177878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17787c: 0xc04b6a4  jal         func_12DA90
    ctx->pc = 0x17787Cu;
    SET_GPR_U32(ctx, 31, 0x177884u);
    ctx->pc = 0x177880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17787Cu;
            // 0x177880: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177884u; }
        if (ctx->pc != 0x177884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177884u; }
        if (ctx->pc != 0x177884u) { return; }
    }
    ctx->pc = 0x177884u;
label_177884:
    // 0x177884: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x177884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_177888:
    // 0x177888: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x177888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17788c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x17788Cu;
    SET_GPR_U32(ctx, 31, 0x177894u);
    ctx->pc = 0x177890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17788Cu;
            // 0x177890: 0xae5e0198  sw          $fp, 0x198($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177894u; }
        if (ctx->pc != 0x177894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177894u; }
        if (ctx->pc != 0x177894u) { return; }
    }
    ctx->pc = 0x177894u;
label_177894:
    // 0x177894: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x177894u;
    {
        const bool branch_taken_0x177894 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x177898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177894u;
            // 0x177898: 0xe65401dc  swc1        $f20, 0x1DC($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x177894) {
            ctx->pc = 0x1778B0u;
            goto label_1778b0;
        }
    }
    ctx->pc = 0x17789Cu;
    // 0x17789c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17789cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778a0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1778A0u;
    SET_GPR_U32(ctx, 31, 0x1778A8u);
    ctx->pc = 0x1778A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778A0u;
            // 0x1778a4: 0x2644019c  addiu       $a0, $s2, 0x19C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778A8u; }
        if (ctx->pc != 0x1778A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778A8u; }
        if (ctx->pc != 0x1778A8u) { return; }
    }
    ctx->pc = 0x1778A8u;
label_1778a8:
    // 0x1778a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1778A8u;
    {
        const bool branch_taken_0x1778a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1778a8) {
            ctx->pc = 0x1778C0u;
            goto label_1778c0;
        }
    }
    ctx->pc = 0x1778B0u;
label_1778b0:
    // 0x1778b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1778b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1778b4: 0x2644019c  addiu       $a0, $s2, 0x19C
    ctx->pc = 0x1778b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x1778b8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1778B8u;
    SET_GPR_U32(ctx, 31, 0x1778C0u);
    ctx->pc = 0x1778BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778B8u;
            // 0x1778bc: 0x24a53988  addiu       $a1, $a1, 0x3988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778C0u; }
        if (ctx->pc != 0x1778C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778C0u; }
        if (ctx->pc != 0x1778C0u) { return; }
    }
    ctx->pc = 0x1778C0u;
label_1778c0:
    // 0x1778c0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1778C0u;
    {
        const bool branch_taken_0x1778c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778C0u;
            // 0x1778c4: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778c0) {
            ctx->pc = 0x1778DCu;
            goto label_1778dc;
        }
    }
    ctx->pc = 0x1778C8u;
    // 0x1778c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1778c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1778cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1778CCu;
    SET_GPR_U32(ctx, 31, 0x1778D4u);
    ctx->pc = 0x1778D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778CCu;
            // 0x1778d0: 0x264401bc  addiu       $a0, $s2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778D4u; }
        if (ctx->pc != 0x1778D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778D4u; }
        if (ctx->pc != 0x1778D4u) { return; }
    }
    ctx->pc = 0x1778D4u;
label_1778d4:
    // 0x1778d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1778D4u;
    {
        const bool branch_taken_0x1778d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1778D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1778D4u;
            // 0x1778d8: 0xae320020  sw          $s2, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1778d4) {
            ctx->pc = 0x1778ECu;
            goto label_1778ec;
        }
    }
    ctx->pc = 0x1778DCu;
label_1778dc:
    // 0x1778dc: 0x264401bc  addiu       $a0, $s2, 0x1BC
    ctx->pc = 0x1778dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
    // 0x1778e0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1778E0u;
    SET_GPR_U32(ctx, 31, 0x1778E8u);
    ctx->pc = 0x1778E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778E0u;
            // 0x1778e4: 0x24a53988  addiu       $a1, $a1, 0x3988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778E8u; }
        if (ctx->pc != 0x1778E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778E8u; }
        if (ctx->pc != 0x1778E8u) { return; }
    }
    ctx->pc = 0x1778E8u;
label_1778e8:
    // 0x1778e8: 0xae320020  sw          $s2, 0x20($s1)
    ctx->pc = 0x1778e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 18));
label_1778ec:
    // 0x1778ec: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x1778ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1778f0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1778F0u;
    SET_GPR_U32(ctx, 31, 0x1778F8u);
    ctx->pc = 0x1778F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1778F0u;
            // 0x1778f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778F8u; }
        if (ctx->pc != 0x1778F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1778F8u; }
        if (ctx->pc != 0x1778F8u) { return; }
    }
    ctx->pc = 0x1778F8u;
label_1778f8:
    // 0x1778f8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1778f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1778fc: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x1778fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x177900: 0x244305e8  addiu       $v1, $v0, 0x5E8
    ctx->pc = 0x177900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1512));
    // 0x177904: 0x8c4205e8  lw          $v0, 0x5E8($v0)
    ctx->pc = 0x177904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1512)));
    // 0x177908: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x177908u;
    {
        const bool branch_taken_0x177908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177908) {
            ctx->pc = 0x177940u;
            goto label_177940;
        }
    }
    ctx->pc = 0x177910u;
    // 0x177910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177910u;
    {
        const bool branch_taken_0x177910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x177910) {
            ctx->pc = 0x17791Cu;
            goto label_17791c;
        }
    }
    ctx->pc = 0x177918u;
label_177918:
    // 0x177918: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x177918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17791c:
    // 0x17791c: 0x0  nop
    ctx->pc = 0x17791cu;
    // NOP
    // 0x177920: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x177920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x177924: 0x0  nop
    ctx->pc = 0x177924u;
    // NOP
    // 0x177928: 0x0  nop
    ctx->pc = 0x177928u;
    // NOP
    // 0x17792c: 0x0  nop
    ctx->pc = 0x17792cu;
    // NOP
    // 0x177930: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177930u;
    {
        const bool branch_taken_0x177930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177930) {
            ctx->pc = 0x177918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_177918;
        }
    }
    ctx->pc = 0x177938u;
    // 0x177938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177938u;
    {
        const bool branch_taken_0x177938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177938u;
            // 0x17793c: 0xac510024  sw          $s1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177938) {
            ctx->pc = 0x177944u;
            goto label_177944;
        }
    }
    ctx->pc = 0x177940u;
label_177940:
    // 0x177940: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x177940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_177944:
    // 0x177944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_177948:
    // 0x177948: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x177948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_17794c:
    // 0x17794c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x177950: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x177950u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x177954: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x177954u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x177958: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x177958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x17795c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17795cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x177960: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x177960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177964: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x177964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x177968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17796c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17796cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x177970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177974: 0x3e00008  jr          $ra
    ctx->pc = 0x177974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177974u;
            // 0x177978: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17797Cu;
}
