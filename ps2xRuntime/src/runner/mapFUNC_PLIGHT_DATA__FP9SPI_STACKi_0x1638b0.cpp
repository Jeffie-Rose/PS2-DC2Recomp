#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_PLIGHT_DATA__FP9SPI_STACKi
// Address: 0x1638b0 - 0x163ad8
void mapFUNC_PLIGHT_DATA__FP9SPI_STACKi_0x1638b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_PLIGHT_DATA__FP9SPI_STACKi_0x1638b0");
#endif

    switch (ctx->pc) {
        case 0x1638e4u: goto label_1638e4;
        case 0x1638f8u: goto label_1638f8;
        case 0x163910u: goto label_163910;
        case 0x163980u: goto label_163980;
        case 0x163988u: goto label_163988;
        case 0x163994u: goto label_163994;
        case 0x1639a0u: goto label_1639a0;
        case 0x1639b0u: goto label_1639b0;
        case 0x1639b8u: goto label_1639b8;
        case 0x1639d8u: goto label_1639d8;
        case 0x1639f4u: goto label_1639f4;
        case 0x163a14u: goto label_163a14;
        case 0x163a34u: goto label_163a34;
        case 0x163a54u: goto label_163a54;
        case 0x163a74u: goto label_163a74;
        case 0x163a94u: goto label_163a94;
        case 0x163ab0u: goto label_163ab0;
        default: break;
    }

    ctx->pc = 0x1638b0u;

    // 0x1638b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1638b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1638b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1638b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1638b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1638b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1638bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1638bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1638c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1638c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1638c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1638c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1638c8: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1638c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1638cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1638CCu;
    {
        const bool branch_taken_0x1638cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1638D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1638CCu;
            // 0x1638d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638cc) {
            ctx->pc = 0x1638DCu;
            goto label_1638dc;
        }
    }
    ctx->pc = 0x1638D4u;
    // 0x1638d4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x1638D4u;
    {
        const bool branch_taken_0x1638d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1638D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1638D4u;
            // 0x1638d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1638d4) {
            ctx->pc = 0x163ABCu;
            goto label_163abc;
        }
    }
    ctx->pc = 0x1638DCu;
label_1638dc:
    // 0x1638dc: 0xc05190c  jal         func_146430
    ctx->pc = 0x1638DCu;
    SET_GPR_U32(ctx, 31, 0x1638E4u);
    ctx->pc = 0x1638E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1638DCu;
            // 0x1638e0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638E4u; }
        if (ctx->pc != 0x1638E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638E4u; }
        if (ctx->pc != 0x1638E4u) { return; }
    }
    ctx->pc = 0x1638E4u;
label_1638e4:
    // 0x1638e4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1638e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1638e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1638e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1638ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1638ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1638f0: 0xc051928  jal         func_1464A0
    ctx->pc = 0x1638F0u;
    SET_GPR_U32(ctx, 31, 0x1638F8u);
    ctx->pc = 0x1638F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1638F0u;
            // 0x1638f4: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638F8u; }
        if (ctx->pc != 0x1638F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1638F8u; }
        if (ctx->pc != 0x1638F8u) { return; }
    }
    ctx->pc = 0x1638F8u;
label_1638f8:
    // 0x1638f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1638f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1638fc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1638fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163900: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x163900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163904: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x163904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163908: 0xc041c4a  jal         func_107128
    ctx->pc = 0x163908u;
    SET_GPR_U32(ctx, 31, 0x163910u);
    ctx->pc = 0x16390Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163908u;
            // 0x16390c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163910u; }
        if (ctx->pc != 0x163910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163910u; }
        if (ctx->pc != 0x163910u) { return; }
    }
    ctx->pc = 0x163910u;
label_163910:
    // 0x163910: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x163910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163914: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x163914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163918: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x163918u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16391c: 0x0  nop
    ctx->pc = 0x16391cu;
    // NOP
    // 0x163920: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x163920u;
    {
        const bool branch_taken_0x163920 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163920u;
            // 0x163924: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163920) {
            ctx->pc = 0x163950u;
            goto label_163950;
        }
    }
    ctx->pc = 0x163928u;
    // 0x163928: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x163928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16392c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x16392cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163930: 0x0  nop
    ctx->pc = 0x163930u;
    // NOP
    // 0x163934: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x163934u;
    {
        const bool branch_taken_0x163934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163934) {
            ctx->pc = 0x163944u;
            goto label_163944;
        }
    }
    ctx->pc = 0x16393Cu;
    // 0x16393c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16393Cu;
    {
        const bool branch_taken_0x16393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16393c) {
            ctx->pc = 0x163948u;
            goto label_163948;
        }
    }
    ctx->pc = 0x163944u;
label_163944:
    // 0x163944: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x163944u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_163948:
    // 0x163948: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x163948u;
    {
        const bool branch_taken_0x163948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16394Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163948u;
            // 0x16394c: 0x8f938940  lw          $s3, -0x76C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163948) {
            ctx->pc = 0x163978u;
            goto label_163978;
        }
    }
    ctx->pc = 0x163950u;
label_163950:
    // 0x163950: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x163950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163954: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x163954u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163958: 0x0  nop
    ctx->pc = 0x163958u;
    // NOP
    // 0x16395c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16395Cu;
    {
        const bool branch_taken_0x16395c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16395c) {
            ctx->pc = 0x16396Cu;
            goto label_16396c;
        }
    }
    ctx->pc = 0x163964u;
    // 0x163964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163964u;
    {
        const bool branch_taken_0x163964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163964u;
            // 0x163968: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163964) {
            ctx->pc = 0x163974u;
            goto label_163974;
        }
    }
    ctx->pc = 0x16396Cu;
label_16396c:
    // 0x16396c: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x16396cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
    // 0x163970: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x163970u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_163974:
    // 0x163974: 0x8f938940  lw          $s3, -0x76C0($gp)
    ctx->pc = 0x163974u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
label_163978:
    // 0x163978: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x163978u;
    SET_GPR_U32(ctx, 31, 0x163980u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163980u; }
        if (ctx->pc != 0x163980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163980u; }
        if (ctx->pc != 0x163980u) { return; }
    }
    ctx->pc = 0x163980u;
label_163980:
    // 0x163980: 0xc047bf2  jal         func_11EFC8
    ctx->pc = 0x163980u;
    SET_GPR_U32(ctx, 31, 0x163988u);
    ctx->pc = 0x163984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163980u;
            // 0x163984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EFC8u;
    if (runtime->hasFunction(0x11EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x11EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163988u; }
        if (ctx->pc != 0x163988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sqrt_0x11efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163988u; }
        if (ctx->pc != 0x163988u) { return; }
    }
    ctx->pc = 0x163988u;
label_163988:
    // 0x163988: 0xc66c0030  lwc1        $f12, 0x30($s3)
    ctx->pc = 0x163988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16398c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x16398Cu;
    SET_GPR_U32(ctx, 31, 0x163994u);
    ctx->pc = 0x163990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16398Cu;
            // 0x163990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163994u; }
        if (ctx->pc != 0x163994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163994u; }
        if (ctx->pc != 0x163994u) { return; }
    }
    ctx->pc = 0x163994u;
label_163994:
    // 0x163994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x163994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163998: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x163998u;
    SET_GPR_U32(ctx, 31, 0x1639A0u);
    ctx->pc = 0x16399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163998u;
            // 0x16399c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639A0u; }
        if (ctx->pc != 0x1639A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639A0u; }
        if (ctx->pc != 0x1639A0u) { return; }
    }
    ctx->pc = 0x1639A0u;
label_1639a0:
    // 0x1639a0: 0x3c033fd0  lui         $v1, 0x3FD0
    ctx->pc = 0x1639a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16336 << 16));
    // 0x1639a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1639a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639a8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1639A8u;
    SET_GPR_U32(ctx, 31, 0x1639B0u);
    ctx->pc = 0x1639ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1639A8u;
            // 0x1639ac: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639B0u; }
        if (ctx->pc != 0x1639B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639B0u; }
        if (ctx->pc != 0x1639B0u) { return; }
    }
    ctx->pc = 0x1639B0u;
label_1639b0:
    // 0x1639b0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1639B0u;
    SET_GPR_U32(ctx, 31, 0x1639B8u);
    ctx->pc = 0x1639B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1639B0u;
            // 0x1639b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639B8u; }
        if (ctx->pc != 0x1639B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639B8u; }
        if (ctx->pc != 0x1639B8u) { return; }
    }
    ctx->pc = 0x1639B8u;
label_1639b8:
    // 0x1639b8: 0xe6600034  swc1        $f0, 0x34($s3)
    ctx->pc = 0x1639b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x1639bc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1639bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1639c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1639c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1639c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1639c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639c8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x1639c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1639cc: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1639ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1639d0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1639D0u;
    SET_GPR_U32(ctx, 31, 0x1639D8u);
    ctx->pc = 0x1639D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1639D0u;
            // 0x1639d4: 0x7c430020  sq          $v1, 0x20($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639D8u; }
        if (ctx->pc != 0x1639D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639D8u; }
        if (ctx->pc != 0x1639D8u) { return; }
    }
    ctx->pc = 0x1639D8u;
label_1639d8:
    // 0x1639d8: 0x8f848940  lw          $a0, -0x76C0($gp)
    ctx->pc = 0x1639d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1639dc: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x1639dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1639e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1639E0u;
    {
        const bool branch_taken_0x1639e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1639E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1639E0u;
            // 0x1639e4: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1639e0) {
            ctx->pc = 0x1639FCu;
            goto label_1639fc;
        }
    }
    ctx->pc = 0x1639E8u;
    // 0x1639e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1639e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1639ec: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x1639ECu;
    SET_GPR_U32(ctx, 31, 0x1639F4u);
    ctx->pc = 0x1639F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1639ECu;
            // 0x1639f0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639F4u; }
        if (ctx->pc != 0x1639F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1639F4u; }
        if (ctx->pc != 0x1639F4u) { return; }
    }
    ctx->pc = 0x1639F4u;
label_1639f4:
    // 0x1639f4: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x1639f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1639f8: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x1639f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_1639fc:
    // 0x1639fc: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x1639fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x163a00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A00u;
    {
        const bool branch_taken_0x163a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A00u;
            // 0x163a04: 0x2a020008  slti        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a00) {
            ctx->pc = 0x163A20u;
            goto label_163a20;
        }
    }
    ctx->pc = 0x163A08u;
    // 0x163a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163A0Cu;
    SET_GPR_U32(ctx, 31, 0x163A14u);
    ctx->pc = 0x163A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A0Cu;
            // 0x163a10: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A14u; }
        if (ctx->pc != 0x163A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A14u; }
        if (ctx->pc != 0x163A14u) { return; }
    }
    ctx->pc = 0x163A14u;
label_163a14:
    // 0x163a14: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163a18: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x163a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x163a1c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x163a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_163a20:
    // 0x163a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A20u;
    {
        const bool branch_taken_0x163a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A20u;
            // 0x163a24: 0x2a020009  slti        $v0, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a20) {
            ctx->pc = 0x163A40u;
            goto label_163a40;
        }
    }
    ctx->pc = 0x163A28u;
    // 0x163a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a2c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163A2Cu;
    SET_GPR_U32(ctx, 31, 0x163A34u);
    ctx->pc = 0x163A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A2Cu;
            // 0x163a30: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A34u; }
        if (ctx->pc != 0x163A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A34u; }
        if (ctx->pc != 0x163A34u) { return; }
    }
    ctx->pc = 0x163A34u;
label_163a34:
    // 0x163a34: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163a38: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x163a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x163a3c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x163a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_163a40:
    // 0x163a40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A40u;
    {
        const bool branch_taken_0x163a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A40u;
            // 0x163a44: 0x2a02000a  slti        $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a40) {
            ctx->pc = 0x163A60u;
            goto label_163a60;
        }
    }
    ctx->pc = 0x163A48u;
    // 0x163a48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a4c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163A4Cu;
    SET_GPR_U32(ctx, 31, 0x163A54u);
    ctx->pc = 0x163A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A4Cu;
            // 0x163a50: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A54u; }
        if (ctx->pc != 0x163A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A54u; }
        if (ctx->pc != 0x163A54u) { return; }
    }
    ctx->pc = 0x163A54u;
label_163a54:
    // 0x163a54: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163a58: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x163a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x163a5c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x163a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_163a60:
    // 0x163a60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A60u;
    {
        const bool branch_taken_0x163a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A60u;
            // 0x163a64: 0x2a02000b  slti        $v0, $s0, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a60) {
            ctx->pc = 0x163A80u;
            goto label_163a80;
        }
    }
    ctx->pc = 0x163A68u;
    // 0x163a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a6c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163A6Cu;
    SET_GPR_U32(ctx, 31, 0x163A74u);
    ctx->pc = 0x163A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A6Cu;
            // 0x163a70: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A74u; }
        if (ctx->pc != 0x163A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A74u; }
        if (ctx->pc != 0x163A74u) { return; }
    }
    ctx->pc = 0x163A74u;
label_163a74:
    // 0x163a74: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163a78: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x163a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x163a7c: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x163a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
label_163a80:
    // 0x163a80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163A80u;
    {
        const bool branch_taken_0x163a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163A80u;
            // 0x163a84: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a80) {
            ctx->pc = 0x163AA0u;
            goto label_163aa0;
        }
    }
    ctx->pc = 0x163A88u;
    // 0x163a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a8c: 0xc05190c  jal         func_146430
    ctx->pc = 0x163A8Cu;
    SET_GPR_U32(ctx, 31, 0x163A94u);
    ctx->pc = 0x163A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163A8Cu;
            // 0x163a90: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A94u; }
        if (ctx->pc != 0x163A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163A94u; }
        if (ctx->pc != 0x163A94u) { return; }
    }
    ctx->pc = 0x163A94u;
label_163a94:
    // 0x163a94: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163a98: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x163a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x163a9c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x163a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_163aa0:
    // 0x163aa0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163AA0u;
    {
        const bool branch_taken_0x163aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AA0u;
            // 0x163aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163aa0) {
            ctx->pc = 0x163ABCu;
            goto label_163abc;
        }
    }
    ctx->pc = 0x163AA8u;
    // 0x163aa8: 0xc05190c  jal         func_146430
    ctx->pc = 0x163AA8u;
    SET_GPR_U32(ctx, 31, 0x163AB0u);
    ctx->pc = 0x163AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163AA8u;
            // 0x163aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AB0u; }
        if (ctx->pc != 0x163AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163AB0u; }
        if (ctx->pc != 0x163AB0u) { return; }
    }
    ctx->pc = 0x163AB0u;
label_163ab0:
    // 0x163ab0: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163ab4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x163ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x163ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163abc:
    // 0x163abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x163ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x163ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x163ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x163AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163AD0u;
            // 0x163ad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x163AD8u;
}
