#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FUNCINFO__FP9SPI_STACKi
// Address: 0x253350 - 0x2533d8
void ps2__MENU_FUNCINFO__FP9SPI_STACKi_0x253350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FUNCINFO__FP9SPI_STACKi_0x253350");
#endif

    switch (ctx->pc) {
        case 0x25336cu: goto label_25336c;
        case 0x253384u: goto label_253384;
        case 0x253390u: goto label_253390;
        case 0x2533a4u: goto label_2533a4;
        default: break;
    }

    ctx->pc = 0x253350u;

    // 0x253350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25335c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25335cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x253360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253364: 0xc089828  jal         func_2260A0
    ctx->pc = 0x253364u;
    SET_GPR_U32(ctx, 31, 0x25336Cu);
    ctx->pc = 0x253368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253364u;
            // 0x253368: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25336Cu; }
        if (ctx->pc != 0x25336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25336Cu; }
        if (ctx->pc != 0x25336Cu) { return; }
    }
    ctx->pc = 0x25336Cu;
label_25336c:
    // 0x25336c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25336cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253374: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x253378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x253378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25337c: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x25337Cu;
    SET_GPR_U32(ctx, 31, 0x253384u);
    ctx->pc = 0x253380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25337Cu;
            // 0x253380: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253384u; }
        if (ctx->pc != 0x253384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253384u; }
        if (ctx->pc != 0x253384u) { return; }
    }
    ctx->pc = 0x253384u;
label_253384:
    // 0x253384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253388: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x253388u;
    SET_GPR_U32(ctx, 31, 0x253390u);
    ctx->pc = 0x25338Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x253388u;
            // 0x25338c: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253390u; }
        if (ctx->pc != 0x253390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253390u; }
        if (ctx->pc != 0x253390u) { return; }
    }
    ctx->pc = 0x253390u;
label_253390:
    // 0x253390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25339c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25339Cu;
    SET_GPR_U32(ctx, 31, 0x2533A4u);
    ctx->pc = 0x2533A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25339Cu;
            // 0x2533a0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2533A4u; }
        if (ctx->pc != 0x2533A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2533A4u; }
        if (ctx->pc != 0x2533A4u) { return; }
    }
    ctx->pc = 0x2533A4u;
label_2533a4:
    // 0x2533a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2533a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2533a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2533a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2533ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2533acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2533b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2533b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2533b4: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2533b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2533b8: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x2533b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2533bc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2533bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2533c0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2533c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2533c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2533c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2533c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2533c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2533cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2533ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2533d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2533D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2533D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2533D0u;
            // 0x2533d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2533D8u;
}
