#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SELP__FP9SPI_STACKi
// Address: 0x177360 - 0x1774fc
void ps2__SELP__FP9SPI_STACKi_0x177360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SELP__FP9SPI_STACKi_0x177360");
#endif

    switch (ctx->pc) {
        case 0x177360u: goto label_177360;
        case 0x177364u: goto label_177364;
        case 0x177368u: goto label_177368;
        case 0x17736cu: goto label_17736c;
        case 0x177370u: goto label_177370;
        case 0x177374u: goto label_177374;
        case 0x177378u: goto label_177378;
        case 0x17737cu: goto label_17737c;
        case 0x177380u: goto label_177380;
        case 0x177384u: goto label_177384;
        case 0x177388u: goto label_177388;
        case 0x17738cu: goto label_17738c;
        case 0x177390u: goto label_177390;
        case 0x177394u: goto label_177394;
        case 0x177398u: goto label_177398;
        case 0x17739cu: goto label_17739c;
        case 0x1773a0u: goto label_1773a0;
        case 0x1773a4u: goto label_1773a4;
        case 0x1773a8u: goto label_1773a8;
        case 0x1773acu: goto label_1773ac;
        case 0x1773b0u: goto label_1773b0;
        case 0x1773b4u: goto label_1773b4;
        case 0x1773b8u: goto label_1773b8;
        case 0x1773bcu: goto label_1773bc;
        case 0x1773c0u: goto label_1773c0;
        case 0x1773c4u: goto label_1773c4;
        case 0x1773c8u: goto label_1773c8;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773d0u: goto label_1773d0;
        case 0x1773d4u: goto label_1773d4;
        case 0x1773d8u: goto label_1773d8;
        case 0x1773dcu: goto label_1773dc;
        case 0x1773e0u: goto label_1773e0;
        case 0x1773e4u: goto label_1773e4;
        case 0x1773e8u: goto label_1773e8;
        case 0x1773ecu: goto label_1773ec;
        case 0x1773f0u: goto label_1773f0;
        case 0x1773f4u: goto label_1773f4;
        case 0x1773f8u: goto label_1773f8;
        case 0x1773fcu: goto label_1773fc;
        case 0x177400u: goto label_177400;
        case 0x177404u: goto label_177404;
        case 0x177408u: goto label_177408;
        case 0x17740cu: goto label_17740c;
        case 0x177410u: goto label_177410;
        case 0x177414u: goto label_177414;
        case 0x177418u: goto label_177418;
        case 0x17741cu: goto label_17741c;
        case 0x177420u: goto label_177420;
        case 0x177424u: goto label_177424;
        case 0x177428u: goto label_177428;
        case 0x17742cu: goto label_17742c;
        case 0x177430u: goto label_177430;
        case 0x177434u: goto label_177434;
        case 0x177438u: goto label_177438;
        case 0x17743cu: goto label_17743c;
        case 0x177440u: goto label_177440;
        case 0x177444u: goto label_177444;
        case 0x177448u: goto label_177448;
        case 0x17744cu: goto label_17744c;
        case 0x177450u: goto label_177450;
        case 0x177454u: goto label_177454;
        case 0x177458u: goto label_177458;
        case 0x17745cu: goto label_17745c;
        case 0x177460u: goto label_177460;
        case 0x177464u: goto label_177464;
        case 0x177468u: goto label_177468;
        case 0x17746cu: goto label_17746c;
        case 0x177470u: goto label_177470;
        case 0x177474u: goto label_177474;
        case 0x177478u: goto label_177478;
        case 0x17747cu: goto label_17747c;
        case 0x177480u: goto label_177480;
        case 0x177484u: goto label_177484;
        case 0x177488u: goto label_177488;
        case 0x17748cu: goto label_17748c;
        case 0x177490u: goto label_177490;
        case 0x177494u: goto label_177494;
        case 0x177498u: goto label_177498;
        case 0x17749cu: goto label_17749c;
        case 0x1774a0u: goto label_1774a0;
        case 0x1774a4u: goto label_1774a4;
        case 0x1774a8u: goto label_1774a8;
        case 0x1774acu: goto label_1774ac;
        case 0x1774b0u: goto label_1774b0;
        case 0x1774b4u: goto label_1774b4;
        case 0x1774b8u: goto label_1774b8;
        case 0x1774bcu: goto label_1774bc;
        case 0x1774c0u: goto label_1774c0;
        case 0x1774c4u: goto label_1774c4;
        case 0x1774c8u: goto label_1774c8;
        case 0x1774ccu: goto label_1774cc;
        case 0x1774d0u: goto label_1774d0;
        case 0x1774d4u: goto label_1774d4;
        case 0x1774d8u: goto label_1774d8;
        case 0x1774dcu: goto label_1774dc;
        case 0x1774e0u: goto label_1774e0;
        case 0x1774e4u: goto label_1774e4;
        case 0x1774e8u: goto label_1774e8;
        case 0x1774ecu: goto label_1774ec;
        case 0x1774f0u: goto label_1774f0;
        case 0x1774f4u: goto label_1774f4;
        case 0x1774f8u: goto label_1774f8;
        default: break;
    }

    ctx->pc = 0x177360u;

label_177360:
    // 0x177360: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_177364:
    // 0x177364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x177364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_177368:
    // 0x177368: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x177368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_17736c:
    // 0x17736c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17736cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_177370:
    // 0x177370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x177370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_177374:
    // 0x177374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x177374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_177378:
    // 0x177378: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x177378u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17737c:
    // 0x17737c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17737cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_177380:
    // 0x177380: 0x8f8289fc  lw          $v0, -0x7604($gp)
    ctx->pc = 0x177380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_177384:
    // 0x177384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_177388:
    if (ctx->pc == 0x177388u) {
        ctx->pc = 0x177388u;
            // 0x177388: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x17738Cu;
        goto label_17738c;
    }
    ctx->pc = 0x177384u;
    {
        const bool branch_taken_0x177384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177384u;
            // 0x177388: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177384) {
            ctx->pc = 0x177394u;
            goto label_177394;
        }
    }
    ctx->pc = 0x17738Cu;
label_17738c:
    // 0x17738c: 0x10000052  b           . + 4 + (0x52 << 2)
label_177390:
    if (ctx->pc == 0x177390u) {
        ctx->pc = 0x177390u;
            // 0x177390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177394u;
        goto label_177394;
    }
    ctx->pc = 0x17738Cu;
    {
        const bool branch_taken_0x17738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17738Cu;
            // 0x177390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17738c) {
            ctx->pc = 0x1774D8u;
            goto label_1774d8;
        }
    }
    ctx->pc = 0x177394u;
label_177394:
    // 0x177394: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_177398:
    if (ctx->pc == 0x177398u) {
        ctx->pc = 0x177398u;
            // 0x177398: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x17739Cu;
        goto label_17739c;
    }
    ctx->pc = 0x177394u;
    {
        const bool branch_taken_0x177394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x177398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177394u;
            // 0x177398: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177394) {
            ctx->pc = 0x1773A4u;
            goto label_1773a4;
        }
    }
    ctx->pc = 0x17739Cu;
label_17739c:
    // 0x17739c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1773a0:
    if (ctx->pc == 0x1773A0u) {
        ctx->pc = 0x1773A0u;
            // 0x1773a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1773A4u;
        goto label_1773a4;
    }
    ctx->pc = 0x17739Cu;
    {
        const bool branch_taken_0x17739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17739Cu;
            // 0x1773a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17739c) {
            ctx->pc = 0x1774D8u;
            goto label_1774d8;
        }
    }
    ctx->pc = 0x1773A4u;
label_1773a4:
    // 0x1773a4: 0xc05191c  jal         func_146470
label_1773a8:
    if (ctx->pc == 0x1773A8u) {
        ctx->pc = 0x1773ACu;
        goto label_1773ac;
    }
    ctx->pc = 0x1773A4u;
    SET_GPR_U32(ctx, 31, 0x1773ACu);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773ACu; }
        if (ctx->pc != 0x1773ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773ACu; }
        if (ctx->pc != 0x1773ACu) { return; }
    }
    ctx->pc = 0x1773ACu;
label_1773ac:
    // 0x1773ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1773acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1773b0:
    // 0x1773b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1773b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1773b4:
    // 0x1773b4: 0xc0518f8  jal         func_1463E0
label_1773b8:
    if (ctx->pc == 0x1773B8u) {
        ctx->pc = 0x1773B8u;
            // 0x1773b8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1773BCu;
        goto label_1773bc;
    }
    ctx->pc = 0x1773B4u;
    SET_GPR_U32(ctx, 31, 0x1773BCu);
    ctx->pc = 0x1773B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773B4u;
            // 0x1773b8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773BCu; }
        if (ctx->pc != 0x1773BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773BCu; }
        if (ctx->pc != 0x1773BCu) { return; }
    }
    ctx->pc = 0x1773BCu;
label_1773bc:
    // 0x1773bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1773bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1773c0:
    // 0x1773c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1773c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1773c4:
    // 0x1773c4: 0xc0518f8  jal         func_1463E0
label_1773c8:
    if (ctx->pc == 0x1773C8u) {
        ctx->pc = 0x1773C8u;
            // 0x1773c8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1773CCu;
        goto label_1773cc;
    }
    ctx->pc = 0x1773C4u;
    SET_GPR_U32(ctx, 31, 0x1773CCu);
    ctx->pc = 0x1773C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773C4u;
            // 0x1773c8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773CCu; }
        if (ctx->pc != 0x1773CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773CCu; }
        if (ctx->pc != 0x1773CCu) { return; }
    }
    ctx->pc = 0x1773CCu;
label_1773cc:
    // 0x1773cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1773ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1773d0:
    // 0x1773d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1773d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1773d4:
    // 0x1773d4: 0xc05190c  jal         func_146430
label_1773d8:
    if (ctx->pc == 0x1773D8u) {
        ctx->pc = 0x1773D8u;
            // 0x1773d8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1773DCu;
        goto label_1773dc;
    }
    ctx->pc = 0x1773D4u;
    SET_GPR_U32(ctx, 31, 0x1773DCu);
    ctx->pc = 0x1773D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773D4u;
            // 0x1773d8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773DCu; }
        if (ctx->pc != 0x1773DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773DCu; }
        if (ctx->pc != 0x1773DCu) { return; }
    }
    ctx->pc = 0x1773DCu;
label_1773dc:
    // 0x1773dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1773dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1773e0:
    // 0x1773e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1773e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1773e4:
    // 0x1773e4: 0xc05190c  jal         func_146430
label_1773e8:
    if (ctx->pc == 0x1773E8u) {
        ctx->pc = 0x1773E8u;
            // 0x1773e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1773ECu;
        goto label_1773ec;
    }
    ctx->pc = 0x1773E4u;
    SET_GPR_U32(ctx, 31, 0x1773ECu);
    ctx->pc = 0x1773E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773E4u;
            // 0x1773e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773ECu; }
        if (ctx->pc != 0x1773ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773ECu; }
        if (ctx->pc != 0x1773ECu) { return; }
    }
    ctx->pc = 0x1773ECu;
label_1773ec:
    // 0x1773ec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1773ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1773f0:
    // 0x1773f0: 0xc0518f8  jal         func_1463E0
label_1773f4:
    if (ctx->pc == 0x1773F4u) {
        ctx->pc = 0x1773F4u;
            // 0x1773f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1773F8u;
        goto label_1773f8;
    }
    ctx->pc = 0x1773F0u;
    SET_GPR_U32(ctx, 31, 0x1773F8u);
    ctx->pc = 0x1773F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1773F0u;
            // 0x1773f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773F8u; }
        if (ctx->pc != 0x1773F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1773F8u; }
        if (ctx->pc != 0x1773F8u) { return; }
    }
    ctx->pc = 0x1773F8u;
label_1773f8:
    // 0x1773f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1773f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1773fc:
    // 0x1773fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1773fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_177400:
    // 0x177400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_177404:
    // 0x177404: 0x0  nop
    ctx->pc = 0x177404u;
    // NOP
label_177408:
    // 0x177408: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x177408u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17740c:
    // 0x17740c: 0x0  nop
    ctx->pc = 0x17740cu;
    // NOP
label_177410:
    // 0x177410: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_177414:
    if (ctx->pc == 0x177414u) {
        ctx->pc = 0x177414u;
            // 0x177414: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x177418u;
        goto label_177418;
    }
    ctx->pc = 0x177410u;
    {
        const bool branch_taken_0x177410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x177414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177410u;
            // 0x177414: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177410) {
            ctx->pc = 0x177430u;
            goto label_177430;
        }
    }
    ctx->pc = 0x177418u;
label_177418:
    // 0x177418: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x177418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_17741c:
    // 0x17741c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17741cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_177420:
    // 0x177420: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x177420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_177424:
    // 0x177424: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x177424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_177428:
    // 0x177428: 0x320f809  jalr        $t9
label_17742c:
    if (ctx->pc == 0x17742Cu) {
        ctx->pc = 0x17742Cu;
            // 0x17742c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177430u;
        goto label_177430;
    }
    ctx->pc = 0x177428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x177430u);
        ctx->pc = 0x17742Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177428u;
            // 0x17742c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177430u; }
            if (ctx->pc != 0x177430u) { return; }
        }
        }
    }
    ctx->pc = 0x177430u;
label_177430:
    // 0x177430: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177430u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_177434:
    // 0x177434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_177438:
    // 0x177438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x177438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17743c:
    // 0x17743c: 0x0  nop
    ctx->pc = 0x17743cu;
    // NOP
label_177440:
    // 0x177440: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x177440u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_177444:
    // 0x177444: 0x0  nop
    ctx->pc = 0x177444u;
    // NOP
label_177448:
    // 0x177448: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_17744c:
    if (ctx->pc == 0x17744Cu) {
        ctx->pc = 0x17744Cu;
            // 0x17744c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x177450u;
        goto label_177450;
    }
    ctx->pc = 0x177448u;
    {
        const bool branch_taken_0x177448 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17744Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177448u;
            // 0x17744c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177448) {
            ctx->pc = 0x177468u;
            goto label_177468;
        }
    }
    ctx->pc = 0x177450u;
label_177450:
    // 0x177450: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x177450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
label_177454:
    // 0x177454: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_177458:
    // 0x177458: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x177458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17745c:
    // 0x17745c: 0x8f3900a8  lw          $t9, 0xA8($t9)
    ctx->pc = 0x17745cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 168)));
label_177460:
    // 0x177460: 0x320f809  jalr        $t9
label_177464:
    if (ctx->pc == 0x177464u) {
        ctx->pc = 0x177464u;
            // 0x177464: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x177468u;
        goto label_177468;
    }
    ctx->pc = 0x177460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x177468u);
        ctx->pc = 0x177464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177460u;
            // 0x177464: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x177468u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177468u; }
            if (ctx->pc != 0x177468u) { return; }
        }
        }
    }
    ctx->pc = 0x177468u;
label_177468:
    // 0x177468: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x177468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17746c:
    // 0x17746c: 0x0  nop
    ctx->pc = 0x17746cu;
    // NOP
label_177470:
    // 0x177470: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x177470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_177474:
    // 0x177474: 0x0  nop
    ctx->pc = 0x177474u;
    // NOP
label_177478:
    // 0x177478: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_17747c:
    if (ctx->pc == 0x17747Cu) {
        ctx->pc = 0x17747Cu;
            // 0x17747c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x177480u;
        goto label_177480;
    }
    ctx->pc = 0x177478u;
    {
        const bool branch_taken_0x177478 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17747Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177478u;
            // 0x17747c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177478) {
            ctx->pc = 0x177490u;
            goto label_177490;
        }
    }
    ctx->pc = 0x177480u;
label_177480:
    // 0x177480: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x177480u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_177484:
    // 0x177484: 0x0  nop
    ctx->pc = 0x177484u;
    // NOP
label_177488:
    // 0x177488: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_17748c:
    if (ctx->pc == 0x17748Cu) {
        ctx->pc = 0x177490u;
        goto label_177490;
    }
    ctx->pc = 0x177488u;
    {
        const bool branch_taken_0x177488 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x177488) {
            ctx->pc = 0x177498u;
            goto label_177498;
        }
    }
    ctx->pc = 0x177490u;
label_177490:
    // 0x177490: 0x10000012  b           . + 4 + (0x12 << 2)
label_177494:
    if (ctx->pc == 0x177494u) {
        ctx->pc = 0x177494u;
            // 0x177494: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x177498u;
        goto label_177498;
    }
    ctx->pc = 0x177490u;
    {
        const bool branch_taken_0x177490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x177490u;
            // 0x177494: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177490) {
            ctx->pc = 0x1774DCu;
            goto label_1774dc;
        }
    }
    ctx->pc = 0x177498u;
label_177498:
    // 0x177498: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x177498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_17749c:
    // 0x17749c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1774a0:
    // 0x1774a0: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x1774a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1774a4:
    // 0x1774a4: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774a8:
    // 0x1774a8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1774a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1774ac:
    // 0x1774ac: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774b0:
    // 0x1774b0: 0xa470000a  sh          $s0, 0xA($v1)
    ctx->pc = 0x1774b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 16));
label_1774b4:
    // 0x1774b4: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774b8:
    // 0x1774b8: 0xa471000c  sh          $s1, 0xC($v1)
    ctx->pc = 0x1774b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 17));
label_1774bc:
    // 0x1774bc: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774c0:
    // 0x1774c0: 0xa4720008  sh          $s2, 0x8($v1)
    ctx->pc = 0x1774c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 18));
label_1774c4:
    // 0x1774c4: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774c8:
    // 0x1774c8: 0xa460000e  sh          $zero, 0xE($v1)
    ctx->pc = 0x1774c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
label_1774cc:
    // 0x1774cc: 0x8f8389fc  lw          $v1, -0x7604($gp)
    ctx->pc = 0x1774ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
label_1774d0:
    // 0x1774d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1774d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1774d4:
    // 0x1774d4: 0xaf8389fc  sw          $v1, -0x7604($gp)
    ctx->pc = 0x1774d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937084), GPR_U32(ctx, 3));
label_1774d8:
    // 0x1774d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1774d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1774dc:
    // 0x1774dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1774dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1774e0:
    // 0x1774e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1774e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1774e4:
    // 0x1774e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1774e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1774e8:
    // 0x1774e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1774e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1774ec:
    // 0x1774ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1774ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1774f0:
    // 0x1774f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1774f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1774f4:
    // 0x1774f4: 0x3e00008  jr          $ra
label_1774f8:
    if (ctx->pc == 0x1774F8u) {
        ctx->pc = 0x1774F8u;
            // 0x1774f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1774FCu;
        goto label_fallthrough_0x1774f4;
    }
    ctx->pc = 0x1774F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1774F4u;
            // 0x1774f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1774f4:
    ctx->pc = 0x1774FCu;
}
