#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyParam__14CCameraControlFR14CCameraControl
// Address: 0x2ed320 - 0x2ed3cc
void CopyParam__14CCameraControlFR14CCameraControl_0x2ed320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyParam__14CCameraControlFR14CCameraControl_0x2ed320");
#endif

    switch (ctx->pc) {
        case 0x2ed340u: goto label_2ed340;
        case 0x2ed34cu: goto label_2ed34c;
        default: break;
    }

    ctx->pc = 0x2ed320u;

    // 0x2ed320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ed320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ed324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ed324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ed328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ed328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ed32c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ed32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ed330: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ed330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed334: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ed334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed338: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2ED338u;
    SET_GPR_U32(ctx, 31, 0x2ED340u);
    ctx->pc = 0x2ED33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED338u;
            // 0x2ed33c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED340u; }
        if (ctx->pc != 0x2ED340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED340u; }
        if (ctx->pc != 0x2ED340u) { return; }
    }
    ctx->pc = 0x2ED340u;
label_2ed340:
    // 0x2ed340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed344: 0xc0bafe8  jal         func_2EBFA0
    ctx->pc = 0x2ED344u;
    SET_GPR_U32(ctx, 31, 0x2ED34Cu);
    ctx->pc = 0x2ED348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED344u;
            // 0x2ed348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED34Cu; }
        if (ctx->pc != 0x2ED34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED34Cu; }
        if (ctx->pc != 0x2ED34Cu) { return; }
    }
    ctx->pc = 0x2ED34Cu;
label_2ed34c:
    // 0x2ed34c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2ed34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed350: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ed350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ed354: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2ed354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed358: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2ed358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ed35c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2ed35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed360: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ed360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ed364: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ed364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed368: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ed368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ed36c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2ed36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed370: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ed370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ed374: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2ed374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed378: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ed378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2ed37c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2ed37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed380: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2ed380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2ed384: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2ed384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed388: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ed388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2ed38c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2ed38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed390: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2ed390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2ed394: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2ed394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed398: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2ed398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2ed39c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2ed39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2ed3a0: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2ed3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2ed3a4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x2ed3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x2ed3a8: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x2ed3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x2ed3ac: 0x7a430080  lq          $v1, 0x80($s2)
    ctx->pc = 0x2ed3acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x2ed3b0: 0x7e230080  sq          $v1, 0x80($s1)
    ctx->pc = 0x2ed3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 3));
    // 0x2ed3b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ed3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed3b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ed3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed3bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ed3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed3c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ed3c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED3C4u;
            // 0x2ed3c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED3CCu;
}
