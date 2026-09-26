#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__14CFuncPointMngrFR14CFuncPointMngrP9mgCMemory
// Address: 0x29e180 - 0x29e350
void Copy__14CFuncPointMngrFR14CFuncPointMngrP9mgCMemory_0x29e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__14CFuncPointMngrFR14CFuncPointMngrP9mgCMemory_0x29e180");
#endif

    switch (ctx->pc) {
        case 0x29e1bcu: goto label_29e1bc;
        case 0x29e1c4u: goto label_29e1c4;
        case 0x29e1d4u: goto label_29e1d4;
        case 0x29e1e8u: goto label_29e1e8;
        case 0x29e240u: goto label_29e240;
        case 0x29e28cu: goto label_29e28c;
        case 0x29e298u: goto label_29e298;
        default: break;
    }

    ctx->pc = 0x29e180u;

    // 0x29e180: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29e184: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29e188: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29e188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29e18c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29e190: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29e190u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e194: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29e194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29e198: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29e198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e19c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29e1a0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29e1a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29e1a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29e1b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e1b4: 0xc0a78d4  jal         func_29E350
    ctx->pc = 0x29E1B4u;
    SET_GPR_U32(ctx, 31, 0x29E1BCu);
    ctx->pc = 0x29E1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1B4u;
            // 0x29e1b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E1BCu; }
        if (ctx->pc != 0x29E1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E1BCu; }
        if (ctx->pc != 0x29E1BCu) { return; }
    }
    ctx->pc = 0x29E1BCu;
label_29e1bc:
    // 0x29e1bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29e1c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e1c4:
    // 0x29e1c4: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x29e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x29e1c8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29e1cc: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x29E1CCu;
    {
        const bool branch_taken_0x29e1cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1cc) {
            ctx->pc = 0x29E30Cu;
            goto label_29e30c;
        }
    }
    ctx->pc = 0x29E1D4u;
label_29e1d4:
    // 0x29e1d4: 0x0  nop
    ctx->pc = 0x29e1d4u;
    // NOP
    // 0x29e1d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29e1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1e0: 0xc0a74e8  jal         func_29D3A0
    ctx->pc = 0x29E1E0u;
    SET_GPR_U32(ctx, 31, 0x29E1E8u);
    ctx->pc = 0x29E1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E1E0u;
            // 0x29e1e4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D3A0u;
    if (runtime->hasFunction(0x29D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E1E8u; }
        if (ctx->pc != 0x29E1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__14CFuncPointMngrFiP9mgCMemory_0x29d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E1E8u; }
        if (ctx->pc != 0x29E1E8u) { return; }
    }
    ctx->pc = 0x29E1E8u;
label_29e1e8:
    // 0x29e1e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x29e1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1ec: 0x12400047  beqz        $s2, . + 4 + (0x47 << 2)
    ctx->pc = 0x29E1ECu;
    {
        const bool branch_taken_0x29e1ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1ec) {
            ctx->pc = 0x29E30Cu;
            goto label_29e30c;
        }
    }
    ctx->pc = 0x29E1F4u;
    // 0x29e1f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x29e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29e1f8: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x29e1fc: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x29e200: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x29e200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x29e204: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29e204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29e208: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x29e208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x29e20c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29e210: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x29e210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x29e214: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29e218: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x29e218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x29e21c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x29e220: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x29e220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x29e224: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x29e228: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x29e228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x29e22c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x29e22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e230: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x29e230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x29e234: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x29e234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e238: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x29e238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x29e23c: 0x0  nop
    ctx->pc = 0x29e23cu;
    // NOP
label_29e240:
    // 0x29e240: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x29e240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29e244: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29e244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29e248: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x29e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29e24c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x29e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x29e250: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x29e254: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x29e254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x29e258: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29E258u;
    {
        const bool branch_taken_0x29e258 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x29E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E258u;
            // 0x29e25c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e258) {
            ctx->pc = 0x29E240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e240;
        }
    }
    ctx->pc = 0x29E260u;
    // 0x29e260: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x29e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x29e264: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x29e268: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x29e268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x29e26c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x29e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x29e270: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x29e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x29e274: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x29e274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x29e278: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x29e278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e27c: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x29e27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x29e280: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x29e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e284: 0xc04e624  jal         func_139890
    ctx->pc = 0x29E284u;
    SET_GPR_U32(ctx, 31, 0x29E28Cu);
    ctx->pc = 0x29E288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E284u;
            // 0x29e288: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E28Cu; }
        if (ctx->pc != 0x29E28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E28Cu; }
        if (ctx->pc != 0x29E28Cu) { return; }
    }
    ctx->pc = 0x29E28Cu;
label_29e28c:
    // 0x29e28c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x29e28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x29e290: 0xc04e1b0  jal         func_1386C0
    ctx->pc = 0x29E290u;
    SET_GPR_U32(ctx, 31, 0x29E298u);
    ctx->pc = 0x29E294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E290u;
            // 0x29e294: 0x26650070  addiu       $a1, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E298u; }
        if (ctx->pc != 0x29E298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E298u; }
        if (ctx->pc != 0x29E298u) { return; }
    }
    ctx->pc = 0x29E298u;
label_29e298:
    // 0x29e298: 0xc6630180  lwc1        $f3, 0x180($s3)
    ctx->pc = 0x29e298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e29c: 0xc6620184  lwc1        $f2, 0x184($s3)
    ctx->pc = 0x29e29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e2a0: 0xc6610188  lwc1        $f1, 0x188($s3)
    ctx->pc = 0x29e2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e2a4: 0xc660018c  lwc1        $f0, 0x18C($s3)
    ctx->pc = 0x29e2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e2a8: 0xe6430180  swc1        $f3, 0x180($s2)
    ctx->pc = 0x29e2a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 384), bits); }
    // 0x29e2ac: 0xe6420184  swc1        $f2, 0x184($s2)
    ctx->pc = 0x29e2acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 388), bits); }
    // 0x29e2b0: 0xe6410188  swc1        $f1, 0x188($s2)
    ctx->pc = 0x29e2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 392), bits); }
    // 0x29e2b4: 0xe640018c  swc1        $f0, 0x18C($s2)
    ctx->pc = 0x29e2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 396), bits); }
    // 0x29e2b8: 0xc6630190  lwc1        $f3, 0x190($s3)
    ctx->pc = 0x29e2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e2bc: 0xc6620194  lwc1        $f2, 0x194($s3)
    ctx->pc = 0x29e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e2c0: 0xc6610198  lwc1        $f1, 0x198($s3)
    ctx->pc = 0x29e2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e2c4: 0xc660019c  lwc1        $f0, 0x19C($s3)
    ctx->pc = 0x29e2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e2c8: 0xe6430190  swc1        $f3, 0x190($s2)
    ctx->pc = 0x29e2c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 400), bits); }
    // 0x29e2cc: 0xe6420194  swc1        $f2, 0x194($s2)
    ctx->pc = 0x29e2ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 404), bits); }
    // 0x29e2d0: 0xe6410198  swc1        $f1, 0x198($s2)
    ctx->pc = 0x29e2d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 408), bits); }
    // 0x29e2d4: 0xe640019c  swc1        $f0, 0x19C($s2)
    ctx->pc = 0x29e2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 412), bits); }
    // 0x29e2d8: 0xc66301a0  lwc1        $f3, 0x1A0($s3)
    ctx->pc = 0x29e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e2dc: 0xc66201a4  lwc1        $f2, 0x1A4($s3)
    ctx->pc = 0x29e2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29e2e0: 0xc66101a8  lwc1        $f1, 0x1A8($s3)
    ctx->pc = 0x29e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e2e4: 0xc66001ac  lwc1        $f0, 0x1AC($s3)
    ctx->pc = 0x29e2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e2e8: 0xe64301a0  swc1        $f3, 0x1A0($s2)
    ctx->pc = 0x29e2e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x29e2ec: 0xe64201a4  swc1        $f2, 0x1A4($s2)
    ctx->pc = 0x29e2ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x29e2f0: 0xe64101a8  swc1        $f1, 0x1A8($s2)
    ctx->pc = 0x29e2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x29e2f4: 0xe64001ac  swc1        $f0, 0x1AC($s2)
    ctx->pc = 0x29e2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 428), bits); }
    // 0x29e2f8: 0x8e6201b0  lw          $v0, 0x1B0($s3)
    ctx->pc = 0x29e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x29e2fc: 0xae4201b0  sw          $v0, 0x1B0($s2)
    ctx->pc = 0x29e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 2));
    // 0x29e300: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x29e300u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29e304: 0x1620ffb3  bnez        $s1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x29E304u;
    {
        const bool branch_taken_0x29e304 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e304) {
            ctx->pc = 0x29E1D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e1d4;
        }
    }
    ctx->pc = 0x29E30Cu;
label_29e30c:
    // 0x29e30c: 0x0  nop
    ctx->pc = 0x29e30cu;
    // NOP
    // 0x29e310: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29e314: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x29e314u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29e318: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x29E318u;
    {
        const bool branch_taken_0x29e318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E318u;
            // 0x29e31c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e318) {
            ctx->pc = 0x29E1C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e1c4;
        }
    }
    ctx->pc = 0x29E320u;
    // 0x29e320: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29e320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e328: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29e328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e32c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29e32cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e33c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e33cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e348: 0x3e00008  jr          $ra
    ctx->pc = 0x29E348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E348u;
            // 0x29e34c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E350u;
}
