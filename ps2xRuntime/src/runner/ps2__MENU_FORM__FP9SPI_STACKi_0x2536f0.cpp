#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM__FP9SPI_STACKi
// Address: 0x2536f0 - 0x253784
void ps2__MENU_FORM__FP9SPI_STACKi_0x2536f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM__FP9SPI_STACKi_0x2536f0");
#endif

    switch (ctx->pc) {
        case 0x25370cu: goto label_25370c;
        case 0x253720u: goto label_253720;
        case 0x253734u: goto label_253734;
        case 0x253740u: goto label_253740;
        case 0x253754u: goto label_253754;
        default: break;
    }

    ctx->pc = 0x2536f0u;

    // 0x2536f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2536f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2536f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2536f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2536f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2536f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2536fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2536fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253704: 0xc089828  jal         func_2260A0
    ctx->pc = 0x253704u;
    SET_GPR_U32(ctx, 31, 0x25370Cu);
    ctx->pc = 0x253708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253704u;
            // 0x253708: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25370Cu; }
        if (ctx->pc != 0x25370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25370Cu; }
        if (ctx->pc != 0x25370Cu) { return; }
    }
    ctx->pc = 0x25370Cu;
label_25370c:
    // 0x25370c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25370cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x253710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253714: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253718: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253718u;
    SET_GPR_U32(ctx, 31, 0x253720u);
    ctx->pc = 0x25371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253718u;
            // 0x25371c: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253720u; }
        if (ctx->pc != 0x253720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253720u; }
        if (ctx->pc != 0x253720u) { return; }
    }
    ctx->pc = 0x253720u;
label_253720:
    // 0x253720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253724: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x253724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x253728: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25372c: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x25372Cu;
    SET_GPR_U32(ctx, 31, 0x253734u);
    ctx->pc = 0x253730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25372Cu;
            // 0x253730: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253734u; }
        if (ctx->pc != 0x253734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253734u; }
        if (ctx->pc != 0x253734u) { return; }
    }
    ctx->pc = 0x253734u;
label_253734:
    // 0x253734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253738: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253738u;
    SET_GPR_U32(ctx, 31, 0x253740u);
    ctx->pc = 0x25373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253738u;
            // 0x25373c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253740u; }
        if (ctx->pc != 0x253740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253740u; }
        if (ctx->pc != 0x253740u) { return; }
    }
    ctx->pc = 0x253740u;
label_253740:
    // 0x253740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253748: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25374c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25374Cu;
    SET_GPR_U32(ctx, 31, 0x253754u);
    ctx->pc = 0x253750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25374Cu;
            // 0x253750: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253754u; }
        if (ctx->pc != 0x253754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253754u; }
        if (ctx->pc != 0x253754u) { return; }
    }
    ctx->pc = 0x253754u;
label_253754:
    // 0x253754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253758: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x253758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x25375c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25375cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253764: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x253764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x253768: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x253768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x25376c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x25376cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x253770: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x253778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25377c: 0x3e00008  jr          $ra
    ctx->pc = 0x25377Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25377Cu;
            // 0x253780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253784u;
}
