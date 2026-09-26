#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_CURSOR__FP9SPI_STACKi
// Address: 0x2532c0 - 0x253348
void ps2__MENU_CURSOR__FP9SPI_STACKi_0x2532c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_CURSOR__FP9SPI_STACKi_0x2532c0");
#endif

    switch (ctx->pc) {
        case 0x2532dcu: goto label_2532dc;
        case 0x2532f4u: goto label_2532f4;
        case 0x253300u: goto label_253300;
        case 0x253314u: goto label_253314;
        default: break;
    }

    ctx->pc = 0x2532c0u;

    // 0x2532c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2532c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2532c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2532c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2532c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2532c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2532cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2532ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2532d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2532d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532d4: 0xc089828  jal         func_2260A0
    ctx->pc = 0x2532D4u;
    SET_GPR_U32(ctx, 31, 0x2532DCu);
    ctx->pc = 0x2532D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532D4u;
            // 0x2532d8: 0x8f8497bc  lw          $a0, -0x6844($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2260A0u;
    if (runtime->hasFunction(0x2260A0u)) {
        auto targetFn = runtime->lookupFunction(0x2260A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532DCu; }
        if (ctx->pc != 0x2532DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableEnterPart__16CMenuPosDataFormFv_0x2260a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532DCu; }
        if (ctx->pc != 0x2532DCu) { return; }
    }
    ctx->pc = 0x2532DCu;
label_2532dc:
    // 0x2532dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2532dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2532e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532e4: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2532e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2532e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2532e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532ec: 0xc094bcc  jal         func_252F30
    ctx->pc = 0x2532ECu;
    SET_GPR_U32(ctx, 31, 0x2532F4u);
    ctx->pc = 0x2532F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532ECu;
            // 0x2532f0: 0xaf9097c0  sw          $s0, -0x6840($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940608), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252F30u;
    if (runtime->hasFunction(0x252F30u)) {
        auto targetFn = runtime->lookupFunction(0x252F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532F4u; }
        if (ctx->pc != 0x2532F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakePartsName__FP9SPI_STACKP18MENUFORMPARTS_TYPE_0x252f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2532F4u; }
        if (ctx->pc != 0x2532F4u) { return; }
    }
    ctx->pc = 0x2532F4u;
label_2532f4:
    // 0x2532f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2532f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2532f8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2532F8u;
    SET_GPR_U32(ctx, 31, 0x253300u);
    ctx->pc = 0x2532FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2532F8u;
            // 0x2532fc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253300u; }
        if (ctx->pc != 0x253300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253300u; }
        if (ctx->pc != 0x253300u) { return; }
    }
    ctx->pc = 0x253300u;
label_253300:
    // 0x253300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x253304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253308: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x253308u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25330c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x25330Cu;
    SET_GPR_U32(ctx, 31, 0x253314u);
    ctx->pc = 0x253310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25330Cu;
            // 0x253310: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253314u; }
        if (ctx->pc != 0x253314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253314u; }
        if (ctx->pc != 0x253314u) { return; }
    }
    ctx->pc = 0x253314u;
label_253314:
    // 0x253314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x253314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253318: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x253318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25331c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25331cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x253320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253324: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x253324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x253328: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x253328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x25332c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x25332cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x253330: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x253330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x253334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x253338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25333c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25333cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253340: 0x3e00008  jr          $ra
    ctx->pc = 0x253340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x253340u;
            // 0x253344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x253348u;
}
