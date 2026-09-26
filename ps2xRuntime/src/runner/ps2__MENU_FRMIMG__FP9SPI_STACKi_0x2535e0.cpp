#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FRMIMG__FP9SPI_STACKi
// Address: 0x2535e0 - 0x2536ec
void ps2__MENU_FRMIMG__FP9SPI_STACKi_0x2535e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FRMIMG__FP9SPI_STACKi_0x2535e0");
#endif

    switch (ctx->pc) {
        case 0x2535fcu: goto label_2535fc;
        case 0x253610u: goto label_253610;
        case 0x253620u: goto label_253620;
        case 0x253630u: goto label_253630;
        case 0x25363cu: goto label_25363c;
        case 0x253650u: goto label_253650;
        case 0x25365cu: goto label_25365c;
        case 0x253674u: goto label_253674;
        case 0x25368cu: goto label_25368c;
        case 0x2536a0u: goto label_2536a0;
        default: break;
    }

    ctx->pc = 0x2535e0u;

    // 0x2535e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2535e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2535e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2535e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2535e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2535e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2535ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2535ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2535f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2535f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2535f4: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2535F4u;
    SET_GPR_U32(ctx, 31, 0x2535FCu);
    ctx->pc = 0x2535F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2535F4u;
            // 0x2535f8: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2535FCu; }
        if (ctx->pc != 0x2535FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2535FCu; }
        if (ctx->pc != 0x2535FCu) { return; }
    }
    ctx->pc = 0x2535FCu;
label_2535fc:
    // 0x2535fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2535fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253600: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253604: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253608: 0xc05191c  jal         func_146470
    ctx->pc = 0x253608u;
    SET_GPR_U32(ctx, 31, 0x253610u);
    ctx->pc = 0x25360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253608u;
            // 0x25360c: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253610u; }
        if (ctx->pc != 0x253610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253610u; }
        if (ctx->pc != 0x253610u) { return; }
    }
    ctx->pc = 0x253610u;
label_253610:
    // 0x253610: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x253610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x253614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x253614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253618: 0xc0948d4  jal         func_252350
    ctx->pc = 0x253618u;
    SET_GPR_U32(ctx, 31, 0x253620u);
    ctx->pc = 0x25361Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253618u;
            // 0x25361c: 0x24841600  addiu       $a0, $a0, 0x1600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253620u; }
        if (ctx->pc != 0x253620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253620u; }
        if (ctx->pc != 0x253620u) { return; }
    }
    ctx->pc = 0x253620u;
label_253620:
    // 0x253620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253624: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x253624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x253628: 0xc05191c  jal         func_146470
    ctx->pc = 0x253628u;
    SET_GPR_U32(ctx, 31, 0x253630u);
    ctx->pc = 0x25362Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253628u;
            // 0x25362c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253630u; }
        if (ctx->pc != 0x253630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253630u; }
        if (ctx->pc != 0x253630u) { return; }
    }
    ctx->pc = 0x253630u;
label_253630:
    // 0x253630: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x253634: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x253634u;
    SET_GPR_U32(ctx, 31, 0x25363Cu);
    ctx->pc = 0x253638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253634u;
            // 0x253638: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25363Cu; }
        if (ctx->pc != 0x25363Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25363Cu; }
        if (ctx->pc != 0x25363Cu) { return; }
    }
    ctx->pc = 0x25363Cu;
label_25363c:
    // 0x25363c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253640: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x253644: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253648: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253648u;
    SET_GPR_U32(ctx, 31, 0x253650u);
    ctx->pc = 0x25364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253648u;
            // 0x25364c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253650u; }
        if (ctx->pc != 0x253650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253650u; }
        if (ctx->pc != 0x253650u) { return; }
    }
    ctx->pc = 0x253650u;
label_253650:
    // 0x253650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253654: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253654u;
    SET_GPR_U32(ctx, 31, 0x25365Cu);
    ctx->pc = 0x253658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253654u;
            // 0x253658: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25365Cu; }
        if (ctx->pc != 0x25365Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25365Cu; }
        if (ctx->pc != 0x25365Cu) { return; }
    }
    ctx->pc = 0x25365Cu;
label_25365c:
    // 0x25365c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253664: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25366c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25366Cu;
    SET_GPR_U32(ctx, 31, 0x253674u);
    ctx->pc = 0x253670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25366Cu;
            // 0x253670: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253674u; }
        if (ctx->pc != 0x253674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253674u; }
        if (ctx->pc != 0x253674u) { return; }
    }
    ctx->pc = 0x253674u;
label_253674:
    // 0x253674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25367c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x25367cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253684: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253684u;
    SET_GPR_U32(ctx, 31, 0x25368Cu);
    ctx->pc = 0x253688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253684u;
            // 0x253688: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25368Cu; }
        if (ctx->pc != 0x25368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25368Cu; }
        if (ctx->pc != 0x25368Cu) { return; }
    }
    ctx->pc = 0x25368Cu;
label_25368c:
    // 0x25368c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253698: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253698u;
    SET_GPR_U32(ctx, 31, 0x2536A0u);
    ctx->pc = 0x25369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253698u;
            // 0x25369c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2536A0u; }
        if (ctx->pc != 0x2536A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2536A0u; }
        if (ctx->pc != 0x2536A0u) { return; }
    }
    ctx->pc = 0x2536A0u;
label_2536a0:
    // 0x2536a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2536a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2536a4: 0x0  nop
    ctx->pc = 0x2536a4u;
    // NOP
    // 0x2536a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2536a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2536ac: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2536acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2536b0: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x2536b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x2536b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2536B4u;
    {
        const bool branch_taken_0x2536b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2536b4) {
            ctx->pc = 0x2536C8u;
            goto label_2536c8;
        }
    }
    ctx->pc = 0x2536BCu;
    // 0x2536bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2536bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2536c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2536C0u;
    {
        const bool branch_taken_0x2536c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2536C0u;
            // 0x2536c4: 0xa2020019  sb          $v0, 0x19($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536c0) {
            ctx->pc = 0x2536D0u;
            goto label_2536d0;
        }
    }
    ctx->pc = 0x2536C8u;
label_2536c8:
    // 0x2536c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2536c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2536cc: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x2536ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
label_2536d0:
    // 0x2536d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2536d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2536d4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2536d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2536d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2536d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2536dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2536dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2536e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2536e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2536e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2536E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2536E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2536E4u;
            // 0x2536e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2536ECu;
}
