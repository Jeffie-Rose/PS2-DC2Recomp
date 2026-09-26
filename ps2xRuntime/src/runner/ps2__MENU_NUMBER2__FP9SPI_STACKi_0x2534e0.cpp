#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_NUMBER2__FP9SPI_STACKi
// Address: 0x2534e0 - 0x2535dc
void ps2__MENU_NUMBER2__FP9SPI_STACKi_0x2534e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_NUMBER2__FP9SPI_STACKi_0x2534e0");
#endif

    switch (ctx->pc) {
        case 0x253504u: goto label_253504;
        case 0x253518u: goto label_253518;
        case 0x253524u: goto label_253524;
        case 0x253538u: goto label_253538;
        case 0x253544u: goto label_253544;
        case 0x253554u: goto label_253554;
        case 0x25356cu: goto label_25356c;
        case 0x25358cu: goto label_25358c;
        case 0x2535a0u: goto label_2535a0;
        default: break;
    }

    ctx->pc = 0x2534e0u;

    // 0x2534e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2534e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2534e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2534e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2534e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2534e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2534ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2534ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2534f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2534f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2534f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2534f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2534f8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2534f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2534fc: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2534FCu;
    SET_GPR_U32(ctx, 31, 0x253504u);
    ctx->pc = 0x253500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2534FCu;
            // 0x253500: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253504u; }
        if (ctx->pc != 0x253504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253504u; }
        if (ctx->pc != 0x253504u) { return; }
    }
    ctx->pc = 0x253504u;
label_253504:
    // 0x253504: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253508: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25350c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25350cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253510: 0xc05191c  jal         func_146470
    ctx->pc = 0x253510u;
    SET_GPR_U32(ctx, 31, 0x253518u);
    ctx->pc = 0x253514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253510u;
            // 0x253514: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253518u; }
        if (ctx->pc != 0x253518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253518u; }
        if (ctx->pc != 0x253518u) { return; }
    }
    ctx->pc = 0x253518u;
label_253518:
    // 0x253518: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x25351c: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x25351Cu;
    SET_GPR_U32(ctx, 31, 0x253524u);
    ctx->pc = 0x253520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25351Cu;
            // 0x253520: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253524u; }
        if (ctx->pc != 0x253524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253524u; }
        if (ctx->pc != 0x253524u) { return; }
    }
    ctx->pc = 0x253524u;
label_253524:
    // 0x253524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253528: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x25352c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25352cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253530: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253530u;
    SET_GPR_U32(ctx, 31, 0x253538u);
    ctx->pc = 0x253534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253530u;
            // 0x253534: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253538u; }
        if (ctx->pc != 0x253538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253538u; }
        if (ctx->pc != 0x253538u) { return; }
    }
    ctx->pc = 0x253538u;
label_253538:
    // 0x253538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25353c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25353Cu;
    SET_GPR_U32(ctx, 31, 0x253544u);
    ctx->pc = 0x253540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25353Cu;
            // 0x253540: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253544u; }
        if (ctx->pc != 0x253544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253544u; }
        if (ctx->pc != 0x253544u) { return; }
    }
    ctx->pc = 0x253544u;
label_253544:
    // 0x253544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253548: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x253548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x25354c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25354Cu;
    SET_GPR_U32(ctx, 31, 0x253554u);
    ctx->pc = 0x253550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25354Cu;
            // 0x253550: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253554u; }
        if (ctx->pc != 0x253554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253554u; }
        if (ctx->pc != 0x253554u) { return; }
    }
    ctx->pc = 0x253554u;
label_253554:
    // 0x253554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25355c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25355cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253560: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253564: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253564u;
    SET_GPR_U32(ctx, 31, 0x25356Cu);
    ctx->pc = 0x253568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253564u;
            // 0x253568: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25356Cu; }
        if (ctx->pc != 0x25356Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25356Cu; }
        if (ctx->pc != 0x25356Cu) { return; }
    }
    ctx->pc = 0x25356Cu;
label_25356c:
    // 0x25356c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253570: 0x2a210006  slti        $at, $s1, 0x6
    ctx->pc = 0x253570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x253574: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253578: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x253578u;
    {
        const bool branch_taken_0x253578 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25357Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253578u;
            // 0x25357c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253578) {
            ctx->pc = 0x2535B0u;
            goto label_2535b0;
        }
    }
    ctx->pc = 0x253580u;
    // 0x253580: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253584: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253584u;
    SET_GPR_U32(ctx, 31, 0x25358Cu);
    ctx->pc = 0x253588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253584u;
            // 0x253588: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25358Cu; }
        if (ctx->pc != 0x25358Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25358Cu; }
        if (ctx->pc != 0x25358Cu) { return; }
    }
    ctx->pc = 0x25358Cu;
label_25358c:
    // 0x25358c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25358cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253598: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253598u;
    SET_GPR_U32(ctx, 31, 0x2535A0u);
    ctx->pc = 0x25359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253598u;
            // 0x25359c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2535A0u; }
        if (ctx->pc != 0x2535A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2535A0u; }
        if (ctx->pc != 0x2535A0u) { return; }
    }
    ctx->pc = 0x2535A0u;
label_2535a0:
    // 0x2535a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2535a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2535a4: 0x0  nop
    ctx->pc = 0x2535a4u;
    // NOP
    // 0x2535a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2535a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2535ac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2535acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_2535b0:
    // 0x2535b0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2535b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2535b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2535b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2535b8: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2535b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2535bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2535bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2535c0: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2535c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2535c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2535c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2535c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2535c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2535cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2535ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2535d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2535d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2535d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2535D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2535D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2535D4u;
            // 0x2535d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2535DCu;
}
