#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_NUMBER1__FP9SPI_STACKi
// Address: 0x2533e0 - 0x2534d8
void ps2__MENU_NUMBER1__FP9SPI_STACKi_0x2533e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_NUMBER1__FP9SPI_STACKi_0x2533e0");
#endif

    switch (ctx->pc) {
        case 0x253404u: goto label_253404;
        case 0x253418u: goto label_253418;
        case 0x253424u: goto label_253424;
        case 0x253438u: goto label_253438;
        case 0x253444u: goto label_253444;
        case 0x253454u: goto label_253454;
        case 0x25346cu: goto label_25346c;
        case 0x25348cu: goto label_25348c;
        case 0x2534a0u: goto label_2534a0;
        default: break;
    }

    ctx->pc = 0x2533e0u;

    // 0x2533e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2533e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2533e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2533e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2533e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2533e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2533ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2533ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2533f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2533f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2533f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2533f8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2533f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2533fc: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2533FCu;
    SET_GPR_U32(ctx, 31, 0x253404u);
    ctx->pc = 0x253400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2533FCu;
            // 0x253400: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253404u; }
        if (ctx->pc != 0x253404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253404u; }
        if (ctx->pc != 0x253404u) { return; }
    }
    ctx->pc = 0x253404u;
label_253404:
    // 0x253404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25340c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25340cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253410: 0xc05191c  jal         func_146470
    ctx->pc = 0x253410u;
    SET_GPR_U32(ctx, 31, 0x253418u);
    ctx->pc = 0x253414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253410u;
            // 0x253414: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253418u; }
        if (ctx->pc != 0x253418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253418u; }
        if (ctx->pc != 0x253418u) { return; }
    }
    ctx->pc = 0x253418u;
label_253418:
    // 0x253418: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x25341c: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x25341Cu;
    SET_GPR_U32(ctx, 31, 0x253424u);
    ctx->pc = 0x253420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25341Cu;
            // 0x253420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253424u; }
        if (ctx->pc != 0x253424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253424u; }
        if (ctx->pc != 0x253424u) { return; }
    }
    ctx->pc = 0x253424u;
label_253424:
    // 0x253424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253428: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x25342c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25342cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253430: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253430u;
    SET_GPR_U32(ctx, 31, 0x253438u);
    ctx->pc = 0x253434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253430u;
            // 0x253434: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253438u; }
        if (ctx->pc != 0x253438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253438u; }
        if (ctx->pc != 0x253438u) { return; }
    }
    ctx->pc = 0x253438u;
label_253438:
    // 0x253438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25343c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25343Cu;
    SET_GPR_U32(ctx, 31, 0x253444u);
    ctx->pc = 0x253440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25343Cu;
            // 0x253440: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253444u; }
        if (ctx->pc != 0x253444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253444u; }
        if (ctx->pc != 0x253444u) { return; }
    }
    ctx->pc = 0x253444u;
label_253444:
    // 0x253444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253448: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x253448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x25344c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25344Cu;
    SET_GPR_U32(ctx, 31, 0x253454u);
    ctx->pc = 0x253450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25344Cu;
            // 0x253450: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253454u; }
        if (ctx->pc != 0x253454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253454u; }
        if (ctx->pc != 0x253454u) { return; }
    }
    ctx->pc = 0x253454u;
label_253454:
    // 0x253454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25345c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25345cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253460: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253464: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253464u;
    SET_GPR_U32(ctx, 31, 0x25346Cu);
    ctx->pc = 0x253468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253464u;
            // 0x253468: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25346Cu; }
        if (ctx->pc != 0x25346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25346Cu; }
        if (ctx->pc != 0x25346Cu) { return; }
    }
    ctx->pc = 0x25346Cu;
label_25346c:
    // 0x25346c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25346cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253470: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x253470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x253474: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253478: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x253478u;
    {
        const bool branch_taken_0x253478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25347Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253478u;
            // 0x25347c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253478) {
            ctx->pc = 0x2534B0u;
            goto label_2534b0;
        }
    }
    ctx->pc = 0x253480u;
    // 0x253480: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253484: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253484u;
    SET_GPR_U32(ctx, 31, 0x25348Cu);
    ctx->pc = 0x253488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253484u;
            // 0x253488: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25348Cu; }
        if (ctx->pc != 0x25348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25348Cu; }
        if (ctx->pc != 0x25348Cu) { return; }
    }
    ctx->pc = 0x25348Cu;
label_25348c:
    // 0x25348c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253494: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253498: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253498u;
    SET_GPR_U32(ctx, 31, 0x2534A0u);
    ctx->pc = 0x25349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253498u;
            // 0x25349c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2534A0u; }
        if (ctx->pc != 0x2534A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2534A0u; }
        if (ctx->pc != 0x2534A0u) { return; }
    }
    ctx->pc = 0x2534A0u;
label_2534a0:
    // 0x2534a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2534a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2534a4: 0x0  nop
    ctx->pc = 0x2534a4u;
    // NOP
    // 0x2534a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2534a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2534ac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2534acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2534b0:
    // 0x2534b0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2534b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2534b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2534b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2534b8: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x2534b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2534bc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2534bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2534c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2534c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2534c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2534c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2534c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2534c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2534cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2534ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2534d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2534D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2534D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2534D0u;
            // 0x2534d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2534D8u;
}
