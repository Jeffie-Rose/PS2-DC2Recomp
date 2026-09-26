#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ITEM__FP9SPI_STACKi
// Address: 0x253790 - 0x25388c
void ps2__MENU_ITEM__FP9SPI_STACKi_0x253790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ITEM__FP9SPI_STACKi_0x253790");
#endif

    switch (ctx->pc) {
        case 0x2537b4u: goto label_2537b4;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537d8u: goto label_2537d8;
        case 0x2537f0u: goto label_2537f0;
        case 0x2537fcu: goto label_2537fc;
        case 0x253814u: goto label_253814;
        case 0x253844u: goto label_253844;
        case 0x253858u: goto label_253858;
        default: break;
    }

    ctx->pc = 0x253790u;

    // 0x253790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x253794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x253798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25379c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2537a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2537a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2537a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2537a8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2537a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2537ac: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2537ACu;
    SET_GPR_U32(ctx, 31, 0x2537B4u);
    ctx->pc = 0x2537B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537ACu;
            // 0x2537b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537B4u; }
        if (ctx->pc != 0x2537B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537B4u; }
        if (ctx->pc != 0x2537B4u) { return; }
    }
    ctx->pc = 0x2537B4u;
label_2537b4:
    // 0x2537b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2537b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2537b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537bc: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2537c0: 0xc05191c  jal         func_146470
    ctx->pc = 0x2537C0u;
    SET_GPR_U32(ctx, 31, 0x2537C8u);
    ctx->pc = 0x2537C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537C0u;
            // 0x2537c4: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537C8u; }
        if (ctx->pc != 0x2537C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537C8u; }
        if (ctx->pc != 0x2537C8u) { return; }
    }
    ctx->pc = 0x2537C8u;
label_2537c8:
    // 0x2537c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x2537c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x2537cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2537ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537d0: 0xc0948d4  jal         func_252350
    ctx->pc = 0x2537D0u;
    SET_GPR_U32(ctx, 31, 0x2537D8u);
    ctx->pc = 0x2537D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537D0u;
            // 0x2537d4: 0x24841620  addiu       $a0, $a0, 0x1620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537D8u; }
        if (ctx->pc != 0x2537D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537D8u; }
        if (ctx->pc != 0x2537D8u) { return; }
    }
    ctx->pc = 0x2537D8u;
label_2537d8:
    // 0x2537d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2537d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537dc: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2537dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2537e0: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2537e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2537e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2537e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537e8: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x2537E8u;
    SET_GPR_U32(ctx, 31, 0x2537F0u);
    ctx->pc = 0x2537ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537E8u;
            // 0x2537ec: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537F0u; }
        if (ctx->pc != 0x2537F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537F0u; }
        if (ctx->pc != 0x2537F0u) { return; }
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2537f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537f4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2537F4u;
    SET_GPR_U32(ctx, 31, 0x2537FCu);
    ctx->pc = 0x2537F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2537F4u;
            // 0x2537f8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537FCu; }
        if (ctx->pc != 0x2537FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2537FCu; }
        if (ctx->pc != 0x2537FCu) { return; }
    }
    ctx->pc = 0x2537FCu;
label_2537fc:
    // 0x2537fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2537fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253804: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x253804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253808: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25380c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25380Cu;
    SET_GPR_U32(ctx, 31, 0x253814u);
    ctx->pc = 0x253810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25380Cu;
            // 0x253810: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253814u; }
        if (ctx->pc != 0x253814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253814u; }
        if (ctx->pc != 0x253814u) { return; }
    }
    ctx->pc = 0x253814u;
label_253814:
    // 0x253814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253818: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x253818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x25381c: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x25381cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x253820: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253824: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x253824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x253828: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x253828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x25382c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x25382cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x253830: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x253830u;
    {
        const bool branch_taken_0x253830 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x253834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253830u;
            // 0x253834: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253830) {
            ctx->pc = 0x253868u;
            goto label_253868;
        }
    }
    ctx->pc = 0x253838u;
    // 0x253838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25383c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25383Cu;
    SET_GPR_U32(ctx, 31, 0x253844u);
    ctx->pc = 0x253840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25383Cu;
            // 0x253840: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253844u; }
        if (ctx->pc != 0x253844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253844u; }
        if (ctx->pc != 0x253844u) { return; }
    }
    ctx->pc = 0x253844u;
label_253844:
    // 0x253844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25384c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25384cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253850: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253850u;
    SET_GPR_U32(ctx, 31, 0x253858u);
    ctx->pc = 0x253854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253850u;
            // 0x253854: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253858u; }
        if (ctx->pc != 0x253858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253858u; }
        if (ctx->pc != 0x253858u) { return; }
    }
    ctx->pc = 0x253858u;
label_253858:
    // 0x253858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25385c: 0x0  nop
    ctx->pc = 0x25385cu;
    // NOP
    // 0x253860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253864: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x253864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_253868:
    // 0x253868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25386c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x25386cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x253870: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x253870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x253874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x253874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25387c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25387cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253884: 0x3e00008  jr          $ra
    ctx->pc = 0x253884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253884u;
            // 0x253888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25388Cu;
}
