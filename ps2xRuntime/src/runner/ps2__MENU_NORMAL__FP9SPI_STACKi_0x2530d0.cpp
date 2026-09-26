#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_NORMAL__FP9SPI_STACKi
// Address: 0x2530d0 - 0x2531d0
void ps2__MENU_NORMAL__FP9SPI_STACKi_0x2530d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_NORMAL__FP9SPI_STACKi_0x2530d0");
#endif

    switch (ctx->pc) {
        case 0x253104u: goto label_253104;
        case 0x253118u: goto label_253118;
        case 0x253124u: goto label_253124;
        case 0x253138u: goto label_253138;
        case 0x253144u: goto label_253144;
        case 0x25315cu: goto label_25315c;
        case 0x25317cu: goto label_25317c;
        case 0x253190u: goto label_253190;
        case 0x2531acu: goto label_2531ac;
        default: break;
    }

    ctx->pc = 0x2530d0u;

    // 0x2530d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2530d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2530d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2530d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2530d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2530dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2530dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2530e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2530e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2530e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2530e8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2530e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2530ec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2530ECu;
    {
        const bool branch_taken_0x2530ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2530F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530ECu;
            // 0x2530f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530ec) {
            ctx->pc = 0x2530FCu;
            goto label_2530fc;
        }
    }
    ctx->pc = 0x2530F4u;
    // 0x2530f4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2530F4u;
    {
        const bool branch_taken_0x2530f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2530F4u;
            // 0x2530f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530f4) {
            ctx->pc = 0x2531B8u;
            goto label_2531b8;
        }
    }
    ctx->pc = 0x2530FCu;
label_2530fc:
    // 0x2530fc: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2530FCu;
    SET_GPR_U32(ctx, 31, 0x253104u);
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253104u; }
        if (ctx->pc != 0x253104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253104u; }
        if (ctx->pc != 0x253104u) { return; }
    }
    ctx->pc = 0x253104u;
label_253104:
    // 0x253104: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253108: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25310c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25310cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253110: 0xc05191c  jal         func_146470
    ctx->pc = 0x253110u;
    SET_GPR_U32(ctx, 31, 0x253118u);
    ctx->pc = 0x253114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253110u;
            // 0x253114: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253118u; }
        if (ctx->pc != 0x253118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253118u; }
        if (ctx->pc != 0x253118u) { return; }
    }
    ctx->pc = 0x253118u;
label_253118:
    // 0x253118: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x253118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x25311c: 0xc08aa10  jal         func_22A840
    ctx->pc = 0x25311Cu;
    SET_GPR_U32(ctx, 31, 0x253124u);
    ctx->pc = 0x253120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25311Cu;
            // 0x253120: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A840u;
    if (runtime->hasFunction(0x22A840u)) {
        auto targetFn = runtime->lookupFunction(0x22A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253124u; }
        if (ctx->pc != 0x253124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfoTblNo__14CPosDataManageFPc_0x22a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253124u; }
        if (ctx->pc != 0x253124u) { return; }
    }
    ctx->pc = 0x253124u;
label_253124:
    // 0x253124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253128: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x25312c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25312cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253130: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x253130u;
    SET_GPR_U32(ctx, 31, 0x253138u);
    ctx->pc = 0x253134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253130u;
            // 0x253134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253138u; }
        if (ctx->pc != 0x253138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253138u; }
        if (ctx->pc != 0x253138u) { return; }
    }
    ctx->pc = 0x253138u;
label_253138:
    // 0x253138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25313c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25313Cu;
    SET_GPR_U32(ctx, 31, 0x253144u);
    ctx->pc = 0x253140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25313Cu;
            // 0x253140: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253144u; }
        if (ctx->pc != 0x253144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253144u; }
        if (ctx->pc != 0x253144u) { return; }
    }
    ctx->pc = 0x253144u;
label_253144:
    // 0x253144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25314c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25314cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253154: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253154u;
    SET_GPR_U32(ctx, 31, 0x25315Cu);
    ctx->pc = 0x253158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253154u;
            // 0x253158: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25315Cu; }
        if (ctx->pc != 0x25315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25315Cu; }
        if (ctx->pc != 0x25315Cu) { return; }
    }
    ctx->pc = 0x25315Cu;
label_25315c:
    // 0x25315c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25315cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253160: 0x2a210005  slti        $at, $s1, 0x5
    ctx->pc = 0x253160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x253164: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253168: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x253168u;
    {
        const bool branch_taken_0x253168 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x25316Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253168u;
            // 0x25316c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253168) {
            ctx->pc = 0x2531A4u;
            goto label_2531a4;
        }
    }
    ctx->pc = 0x253170u;
    // 0x253170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253174: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253174u;
    SET_GPR_U32(ctx, 31, 0x25317Cu);
    ctx->pc = 0x253178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253174u;
            // 0x253178: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25317Cu; }
        if (ctx->pc != 0x25317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25317Cu; }
        if (ctx->pc != 0x25317Cu) { return; }
    }
    ctx->pc = 0x25317Cu;
label_25317c:
    // 0x25317c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25317cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253188: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253188u;
    SET_GPR_U32(ctx, 31, 0x253190u);
    ctx->pc = 0x25318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253188u;
            // 0x25318c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253190u; }
        if (ctx->pc != 0x253190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253190u; }
        if (ctx->pc != 0x253190u) { return; }
    }
    ctx->pc = 0x253190u;
label_253190:
    // 0x253190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253194: 0x0  nop
    ctx->pc = 0x253194u;
    // NOP
    // 0x253198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25319c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25319Cu;
    {
        const bool branch_taken_0x25319c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2531A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25319Cu;
            // 0x2531a0: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25319c) {
            ctx->pc = 0x2531ACu;
            goto label_2531ac;
        }
    }
    ctx->pc = 0x2531A4u;
label_2531a4:
    // 0x2531a4: 0xc0948c0  jal         func_252300
    ctx->pc = 0x2531A4u;
    SET_GPR_U32(ctx, 31, 0x2531ACu);
    ctx->pc = 0x2531A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2531A4u;
            // 0x2531a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252300u;
    if (runtime->hasFunction(0x252300u)) {
        auto targetFn = runtime->lookupFunction(0x252300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531ACu; }
        if (ctx->pc != 0x2531ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE_0x252300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2531ACu; }
        if (ctx->pc != 0x2531ACu) { return; }
    }
    ctx->pc = 0x2531ACu;
label_2531ac:
    // 0x2531ac: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2531acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2531b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2531b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2531b4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2531b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_2531b8:
    // 0x2531b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2531b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2531bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2531bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2531c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2531c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2531c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2531c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2531c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2531C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2531CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2531C8u;
            // 0x2531cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2531D0u;
}
