#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_NORMAL2__FP9SPI_STACKi
// Address: 0x2531d0 - 0x2532c0
void ps2__MENU_NORMAL2__FP9SPI_STACKi_0x2531d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_NORMAL2__FP9SPI_STACKi_0x2531d0");
#endif

    switch (ctx->pc) {
        case 0x2531f4u: goto label_2531f4;
        case 0x253208u: goto label_253208;
        case 0x253214u: goto label_253214;
        case 0x253228u: goto label_253228;
        case 0x253234u: goto label_253234;
        case 0x25324cu: goto label_25324c;
        case 0x25326cu: goto label_25326c;
        case 0x253280u: goto label_253280;
        case 0x25329cu: goto label_25329c;
        default: break;
    }

    ctx->pc = 0x2531d0u;

    // 0x2531d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2531d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2531d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2531d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2531d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2531d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2531dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2531dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2531e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2531e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2531e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2531e8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2531e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2531ec: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2531ECu;
    SET_GPR_U32(ctx, 31, 0x2531F4u);
    ctx->pc = 0x2531F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2531ECu;
            // 0x2531f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531F4u; }
        if (ctx->pc != 0x2531F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531F4u; }
        if (ctx->pc != 0x2531F4u) { return; }
    }
    ctx->pc = 0x2531F4u;
label_2531f4:
    // 0x2531f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2531f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2531f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2531fc: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2531fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253200: 0xc05191c  jal         func_146470
    ctx->pc = 0x253200u;
    SET_GPR_U32(ctx, 31, 0x253208u);
    ctx->pc = 0x253204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253200u;
            // 0x253204: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253208u; }
        if (ctx->pc != 0x253208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253208u; }
        if (ctx->pc != 0x253208u) { return; }
    }
    ctx->pc = 0x253208u;
label_253208:
    // 0x253208: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x25320c: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x25320Cu;
    SET_GPR_U32(ctx, 31, 0x253214u);
    ctx->pc = 0x253210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25320Cu;
            // 0x253210: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253214u; }
        if (ctx->pc != 0x253214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253214u; }
        if (ctx->pc != 0x253214u) { return; }
    }
    ctx->pc = 0x253214u;
label_253214:
    // 0x253214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253218: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x25321c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25321cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253220: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253220u;
    SET_GPR_U32(ctx, 31, 0x253228u);
    ctx->pc = 0x253224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253220u;
            // 0x253224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253228u; }
        if (ctx->pc != 0x253228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253228u; }
        if (ctx->pc != 0x253228u) { return; }
    }
    ctx->pc = 0x253228u;
label_253228:
    // 0x253228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25322c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25322Cu;
    SET_GPR_U32(ctx, 31, 0x253234u);
    ctx->pc = 0x253230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25322Cu;
            // 0x253230: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253234u; }
        if (ctx->pc != 0x253234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253234u; }
        if (ctx->pc != 0x253234u) { return; }
    }
    ctx->pc = 0x253234u;
label_253234:
    // 0x253234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25323c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25323cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253244: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253244u;
    SET_GPR_U32(ctx, 31, 0x25324Cu);
    ctx->pc = 0x253248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253244u;
            // 0x253248: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25324Cu; }
        if (ctx->pc != 0x25324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25324Cu; }
        if (ctx->pc != 0x25324Cu) { return; }
    }
    ctx->pc = 0x25324Cu;
label_25324c:
    // 0x25324c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25324cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253250: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x253250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x253254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253258: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x253258u;
    {
        const bool branch_taken_0x253258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25325Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253258u;
            // 0x25325c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253258) {
            ctx->pc = 0x253294u;
            goto label_253294;
        }
    }
    ctx->pc = 0x253260u;
    // 0x253260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253264: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253264u;
    SET_GPR_U32(ctx, 31, 0x25326Cu);
    ctx->pc = 0x253268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253264u;
            // 0x253268: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25326Cu; }
        if (ctx->pc != 0x25326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25326Cu; }
        if (ctx->pc != 0x25326Cu) { return; }
    }
    ctx->pc = 0x25326Cu;
label_25326c:
    // 0x25326c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25326cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253278: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253278u;
    SET_GPR_U32(ctx, 31, 0x253280u);
    ctx->pc = 0x25327Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253278u;
            // 0x25327c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253280u; }
        if (ctx->pc != 0x253280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253280u; }
        if (ctx->pc != 0x253280u) { return; }
    }
    ctx->pc = 0x253280u;
label_253280:
    // 0x253280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253284: 0x0  nop
    ctx->pc = 0x253284u;
    // NOP
    // 0x253288: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25328c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25328Cu;
    {
        const bool branch_taken_0x25328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25328Cu;
            // 0x253290: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25328c) {
            ctx->pc = 0x25329Cu;
            goto label_25329c;
        }
    }
    ctx->pc = 0x253294u;
label_253294:
    // 0x253294: 0xc0948c0  jal         func_252300
    ctx->pc = 0x253294u;
    SET_GPR_U32(ctx, 31, 0x25329Cu);
    ctx->pc = 0x253298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253294u;
            // 0x253298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252300u;
    if (runtime->hasFunction(0x252300u)) {
        auto targetFn = runtime->lookupFunction(0x252300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25329Cu; }
        if (ctx->pc != 0x25329Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE_0x252300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25329Cu; }
        if (ctx->pc != 0x25329Cu) { return; }
    }
    ctx->pc = 0x25329Cu;
label_25329c:
    // 0x25329c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25329cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2532a0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2532a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2532a4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2532a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2532a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2532a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2532ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2532acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2532b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2532b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2532b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2532b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2532b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2532B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2532BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2532B8u;
            // 0x2532bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2532C0u;
}
