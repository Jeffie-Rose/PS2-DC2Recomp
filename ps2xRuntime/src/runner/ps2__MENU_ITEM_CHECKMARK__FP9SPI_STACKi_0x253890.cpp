#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ITEM_CHECKMARK__FP9SPI_STACKi
// Address: 0x253890 - 0x253978
void ps2__MENU_ITEM_CHECKMARK__FP9SPI_STACKi_0x253890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ITEM_CHECKMARK__FP9SPI_STACKi_0x253890");
#endif

    switch (ctx->pc) {
        case 0x2538b4u: goto label_2538b4;
        case 0x2538e0u: goto label_2538e0;
        case 0x2538ecu: goto label_2538ec;
        case 0x253904u: goto label_253904;
        case 0x253924u: goto label_253924;
        case 0x253938u: goto label_253938;
        case 0x253954u: goto label_253954;
        default: break;
    }

    ctx->pc = 0x253890u;

    // 0x253890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253894: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x253894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x253898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x253898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25389c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2538a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2538a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2538a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2538a8: 0x8f8497bc  lw          $a0, -0x6844($gp)
    ctx->pc = 0x2538a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2538ac: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2538ACu;
    SET_GPR_U32(ctx, 31, 0x2538B4u);
    ctx->pc = 0x2538B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2538ACu;
            // 0x2538b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538B4u; }
        if (ctx->pc != 0x2538B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538B4u; }
        if (ctx->pc != 0x2538B4u) { return; }
    }
    ctx->pc = 0x2538B4u;
label_2538b4:
    // 0x2538b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2538b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2538b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538bc: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x2538bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2538c0: 0xaf9097c0  sw          $s0, -0x6840($gp)
    ctx->pc = 0x2538c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
    // 0x2538c4: 0xa0430006  sb          $v1, 0x6($v0)
    ctx->pc = 0x2538c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2538c8: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2538c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2538cc: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2538ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2538d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2538d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538d4: 0x8063000c  lb          $v1, 0xC($v1)
    ctx->pc = 0x2538d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2538d8: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x2538D8u;
    SET_GPR_U32(ctx, 31, 0x2538E0u);
    ctx->pc = 0x2538DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2538D8u;
            // 0x2538dc: 0xa0430018  sb          $v1, 0x18($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538E0u; }
        if (ctx->pc != 0x2538E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538E0u; }
        if (ctx->pc != 0x2538E0u) { return; }
    }
    ctx->pc = 0x2538E0u;
label_2538e0:
    // 0x2538e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2538e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538e4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2538E4u;
    SET_GPR_U32(ctx, 31, 0x2538ECu);
    ctx->pc = 0x2538E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2538E4u;
            // 0x2538e8: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538ECu; }
        if (ctx->pc != 0x2538ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2538ECu; }
        if (ctx->pc != 0x2538ECu) { return; }
    }
    ctx->pc = 0x2538ECu;
label_2538ec:
    // 0x2538ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2538ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2538f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2538f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538f4: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x2538f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2538f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2538f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2538fc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2538FCu;
    SET_GPR_U32(ctx, 31, 0x253904u);
    ctx->pc = 0x253900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2538FCu;
            // 0x253900: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253904u; }
        if (ctx->pc != 0x253904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253904u; }
        if (ctx->pc != 0x253904u) { return; }
    }
    ctx->pc = 0x253904u;
label_253904:
    // 0x253904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253908: 0x2a210004  slti        $at, $s1, 0x4
    ctx->pc = 0x253908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25390c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25390cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253910: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x253910u;
    {
        const bool branch_taken_0x253910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x253914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253910u;
            // 0x253914: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253910) {
            ctx->pc = 0x25394Cu;
            goto label_25394c;
        }
    }
    ctx->pc = 0x253918u;
    // 0x253918: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25391c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25391Cu;
    SET_GPR_U32(ctx, 31, 0x253924u);
    ctx->pc = 0x253920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25391Cu;
            // 0x253920: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253924u; }
        if (ctx->pc != 0x253924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253924u; }
        if (ctx->pc != 0x253924u) { return; }
    }
    ctx->pc = 0x253924u;
label_253924:
    // 0x253924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x253928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25392c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25392cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253930: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253930u;
    SET_GPR_U32(ctx, 31, 0x253938u);
    ctx->pc = 0x253934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253930u;
            // 0x253934: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253938u; }
        if (ctx->pc != 0x253938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253938u; }
        if (ctx->pc != 0x253938u) { return; }
    }
    ctx->pc = 0x253938u;
label_253938:
    // 0x253938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25393c: 0x0  nop
    ctx->pc = 0x25393cu;
    // NOP
    // 0x253940: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x253944u;
    {
        const bool branch_taken_0x253944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253944u;
            // 0x253948: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x253944) {
            ctx->pc = 0x253954u;
            goto label_253954;
        }
    }
    ctx->pc = 0x25394Cu;
label_25394c:
    // 0x25394c: 0xc0948c0  jal         func_252300
    ctx->pc = 0x25394Cu;
    SET_GPR_U32(ctx, 31, 0x253954u);
    ctx->pc = 0x253950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25394Cu;
            // 0x253950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252300u;
    if (runtime->hasFunction(0x252300u)) {
        auto targetFn = runtime->lookupFunction(0x252300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253954u; }
        if (ctx->pc != 0x253954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_texdata_to_formpart_copy__FP18MENUFORMPARTS_TYPE_0x252300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253954u; }
        if (ctx->pc != 0x253954u) { return; }
    }
    ctx->pc = 0x253954u;
label_253954:
    // 0x253954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253958: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x253958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x25395c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x25395cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x253960: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x253964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25396c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25396cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253970: 0x3e00008  jr          $ra
    ctx->pc = 0x253970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253970u;
            // 0x253974: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253978u;
}
