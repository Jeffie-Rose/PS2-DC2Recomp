#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: dynVERTEX__FP9SPI_STACKi
// Address: 0x17b250 - 0x17b2fc
void dynVERTEX__FP9SPI_STACKi_0x17b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dynVERTEX__FP9SPI_STACKi_0x17b250");
#endif

    switch (ctx->pc) {
        case 0x17b268u: goto label_17b268;
        case 0x17b278u: goto label_17b278;
        case 0x17b284u: goto label_17b284;
        case 0x17b294u: goto label_17b294;
        case 0x17b2e4u: goto label_17b2e4;
        default: break;
    }

    ctx->pc = 0x17b250u;

    // 0x17b250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17b254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b25c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x17b25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x17b260: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x17B260u;
    SET_GPR_U32(ctx, 31, 0x17B268u);
    ctx->pc = 0x17B264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B260u;
            // 0x17b264: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B268u; }
        if (ctx->pc != 0x17B268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B268u; }
        if (ctx->pc != 0x17B268u) { return; }
    }
    ctx->pc = 0x17B268u;
label_17b268:
    // 0x17b268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17b268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b26c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b270: 0xc051928  jal         func_1464A0
    ctx->pc = 0x17B270u;
    SET_GPR_U32(ctx, 31, 0x17B278u);
    ctx->pc = 0x17B274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B270u;
            // 0x17b274: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B278u; }
        if (ctx->pc != 0x17B278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B278u; }
        if (ctx->pc != 0x17B278u) { return; }
    }
    ctx->pc = 0x17B278u;
label_17b278:
    // 0x17b278: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b27c: 0xc05ea3c  jal         func_17A8F0
    ctx->pc = 0x17B27Cu;
    SET_GPR_U32(ctx, 31, 0x17B284u);
    ctx->pc = 0x17B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B27Cu;
            // 0x17b280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A8F0u;
    if (runtime->hasFunction(0x17A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B284u; }
        if (ctx->pc != 0x17B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__13CDynamicAnimeFi_0x17a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B284u; }
        if (ctx->pc != 0x17B284u) { return; }
    }
    ctx->pc = 0x17B284u;
label_17b284:
    // 0x17b284: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B284u;
    {
        const bool branch_taken_0x17b284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B284u;
            // 0x17b288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b284) {
            ctx->pc = 0x17B2E4u;
            goto label_17b2e4;
        }
    }
    ctx->pc = 0x17B28Cu;
    // 0x17b28c: 0xc04de0c  jal         func_137830
    ctx->pc = 0x17B28Cu;
    SET_GPR_U32(ctx, 31, 0x17B294u);
    ctx->pc = 0x17B290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B28Cu;
            // 0x17b290: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B294u; }
        if (ctx->pc != 0x17B294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B294u; }
        if (ctx->pc != 0x17B294u) { return; }
    }
    ctx->pc = 0x17B294u;
label_17b294:
    // 0x17b294: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x17b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17b298: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17b29c: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x17b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17b2a0: 0x8f858a20  lw          $a1, -0x75E0($gp)
    ctx->pc = 0x17b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x17b2a4: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x17b2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17b2a8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x17b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x17b2ac: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x17b2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17b2b0: 0x8f848a10  lw          $a0, -0x75F0($gp)
    ctx->pc = 0x17b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x17b2b4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x17b2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b2b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x17b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b2bc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b2c0: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x17b2c0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x17b2c4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17b2c8: 0xaf828a20  sw          $v0, -0x75E0($gp)
    ctx->pc = 0x17b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937120), GPR_U32(ctx, 2));
    // 0x17b2cc: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x17b2ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x17b2d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b2d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17b2d4: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x17b2d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17b2d8: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x17b2d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17b2dc: 0xc05ea68  jal         func_17A9A0
    ctx->pc = 0x17B2DCu;
    SET_GPR_U32(ctx, 31, 0x17B2E4u);
    ctx->pc = 0x17B2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2DCu;
            // 0x17b2e0: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A9A0u;
    if (runtime->hasFunction(0x17A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2E4u; }
        if (ctx->pc != 0x17B2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetInitVertex__13CDynamicAnimeFiPf_0x17a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2E4u; }
        if (ctx->pc != 0x17B2E4u) { return; }
    }
    ctx->pc = 0x17B2E4u;
label_17b2e4:
    // 0x17b2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b2e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2F4u;
            // 0x17b2f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B2FCu;
}
