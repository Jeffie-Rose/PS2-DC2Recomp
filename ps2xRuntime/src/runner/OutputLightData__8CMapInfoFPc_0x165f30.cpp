#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: OutputLightData__8CMapInfoFPc
// Address: 0x165f30 - 0x166248
void OutputLightData__8CMapInfoFPc_0x165f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OutputLightData__8CMapInfoFPc_0x165f30");
#endif

    switch (ctx->pc) {
        case 0x165f80u: goto label_165f80;
        case 0x165f90u: goto label_165f90;
        case 0x165fb4u: goto label_165fb4;
        case 0x165fc8u: goto label_165fc8;
        case 0x165fd4u: goto label_165fd4;
        case 0x165fe0u: goto label_165fe0;
        case 0x165fecu: goto label_165fec;
        case 0x166008u: goto label_166008;
        case 0x166014u: goto label_166014;
        case 0x166020u: goto label_166020;
        case 0x16602cu: goto label_16602c;
        case 0x166048u: goto label_166048;
        case 0x166054u: goto label_166054;
        case 0x166060u: goto label_166060;
        case 0x166070u: goto label_166070;
        case 0x166094u: goto label_166094;
        case 0x1660a4u: goto label_1660a4;
        case 0x1660d8u: goto label_1660d8;
        case 0x1660e4u: goto label_1660e4;
        case 0x1660f0u: goto label_1660f0;
        case 0x1660fcu: goto label_1660fc;
        case 0x166108u: goto label_166108;
        case 0x166114u: goto label_166114;
        case 0x166140u: goto label_166140;
        case 0x16616cu: goto label_16616c;
        case 0x166178u: goto label_166178;
        case 0x166184u: goto label_166184;
        case 0x166190u: goto label_166190;
        case 0x16619cu: goto label_16619c;
        case 0x1661c8u: goto label_1661c8;
        case 0x1661dcu: goto label_1661dc;
        default: break;
    }

    ctx->pc = 0x165f30u;

    // 0x165f30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x165f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x165f34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x165f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x165f38: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x165f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x165f3c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x165f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x165f40: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x165f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x165f44: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x165f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x165f48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x165f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x165f4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x165f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x165f50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x165f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x165f54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x165f58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x165f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x165f5c: 0xafa400ec  sw          $a0, 0xEC($sp)
    ctx->pc = 0x165f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 4));
    // 0x165f60: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x165f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x165f64: 0xafa500e8  sw          $a1, 0xE8($sp)
    ctx->pc = 0x165f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 5));
    // 0x165f68: 0x8fb100e8  lw          $s1, 0xE8($sp)
    ctx->pc = 0x165f68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x165f6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x165f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x165f70: 0x24a53380  addiu       $a1, $a1, 0x3380
    ctx->pc = 0x165f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13184));
    // 0x165f74: 0x8c460098  lw          $a2, 0x98($v0)
    ctx->pc = 0x165f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x165f78: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x165F78u;
    SET_GPR_U32(ctx, 31, 0x165F80u);
    ctx->pc = 0x165F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165F78u;
            // 0x165f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F80u; }
        if (ctx->pc != 0x165F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165F80u; }
        if (ctx->pc != 0x165F80u) { return; }
    }
    ctx->pc = 0x165F80u;
label_165f80:
    // 0x165f80: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x165f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x165f84: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x165f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x165f88: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x165F88u;
    {
        const bool branch_taken_0x165f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165F88u;
            // 0x165f8c: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165f88) {
            ctx->pc = 0x1661F8u;
            goto label_1661f8;
        }
    }
    ctx->pc = 0x165F90u;
label_165f90:
    // 0x165f90: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x165f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x165f94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x165f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x165f98: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x165f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x165f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fa0: 0x24a533a0  addiu       $a1, $a1, 0x33A0
    ctx->pc = 0x165fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13216));
    // 0x165fa4: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x165fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x165fa8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x165fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x165fac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x165FACu;
    SET_GPR_U32(ctx, 31, 0x165FB4u);
    ctx->pc = 0x165FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FACu;
            // 0x165fb0: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FB4u; }
        if (ctx->pc != 0x165FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FB4u; }
        if (ctx->pc != 0x165FB4u) { return; }
    }
    ctx->pc = 0x165FB4u;
label_165fb4:
    // 0x165fb4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x165fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x165fb8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x165fbc: 0x24a533b8  addiu       $a1, $a1, 0x33B8
    ctx->pc = 0x165fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13240));
    // 0x165fc0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x165FC0u;
    SET_GPR_U32(ctx, 31, 0x165FC8u);
    ctx->pc = 0x165FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FC0u;
            // 0x165fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FC8u; }
        if (ctx->pc != 0x165FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FC8u; }
        if (ctx->pc != 0x165FC8u) { return; }
    }
    ctx->pc = 0x165FC8u;
label_165fc8:
    // 0x165fc8: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x165fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165fcc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x165FCCu;
    SET_GPR_U32(ctx, 31, 0x165FD4u);
    ctx->pc = 0x165FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FCCu;
            // 0x165fd0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FD4u; }
        if (ctx->pc != 0x165FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FD4u; }
        if (ctx->pc != 0x165FD4u) { return; }
    }
    ctx->pc = 0x165FD4u;
label_165fd4:
    // 0x165fd4: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x165fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165fd8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x165FD8u;
    SET_GPR_U32(ctx, 31, 0x165FE0u);
    ctx->pc = 0x165FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FD8u;
            // 0x165fdc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FE0u; }
        if (ctx->pc != 0x165FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FE0u; }
        if (ctx->pc != 0x165FE0u) { return; }
    }
    ctx->pc = 0x165FE0u;
label_165fe0:
    // 0x165fe0: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x165fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x165fe4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x165FE4u;
    SET_GPR_U32(ctx, 31, 0x165FECu);
    ctx->pc = 0x165FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165FE4u;
            // 0x165fe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FECu; }
        if (ctx->pc != 0x165FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165FECu; }
        if (ctx->pc != 0x165FECu) { return; }
    }
    ctx->pc = 0x165FECu;
label_165fec:
    // 0x165fec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x165fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x165ff0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x165ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ff4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x165ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ffc: 0x24a533d0  addiu       $a1, $a1, 0x33D0
    ctx->pc = 0x165ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13264));
    // 0x166000: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x166000u;
    SET_GPR_U32(ctx, 31, 0x166008u);
    ctx->pc = 0x166004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166000u;
            // 0x166004: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166008u; }
        if (ctx->pc != 0x166008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166008u; }
        if (ctx->pc != 0x166008u) { return; }
    }
    ctx->pc = 0x166008u;
label_166008:
    // 0x166008: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x166008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16600c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x16600Cu;
    SET_GPR_U32(ctx, 31, 0x166014u);
    ctx->pc = 0x166010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16600Cu;
            // 0x166010: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166014u; }
        if (ctx->pc != 0x166014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166014u; }
        if (ctx->pc != 0x166014u) { return; }
    }
    ctx->pc = 0x166014u;
label_166014:
    // 0x166014: 0xc66c0024  lwc1        $f12, 0x24($s3)
    ctx->pc = 0x166014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166018: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166018u;
    SET_GPR_U32(ctx, 31, 0x166020u);
    ctx->pc = 0x16601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166018u;
            // 0x16601c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166020u; }
        if (ctx->pc != 0x166020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166020u; }
        if (ctx->pc != 0x166020u) { return; }
    }
    ctx->pc = 0x166020u;
label_166020:
    // 0x166020: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x166020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166024: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166024u;
    SET_GPR_U32(ctx, 31, 0x16602Cu);
    ctx->pc = 0x166028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166024u;
            // 0x166028: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16602Cu; }
        if (ctx->pc != 0x16602Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16602Cu; }
        if (ctx->pc != 0x16602Cu) { return; }
    }
    ctx->pc = 0x16602Cu;
label_16602c:
    // 0x16602c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16602cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x166030: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x166030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166034: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x166034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16603c: 0x24a533f0  addiu       $a1, $a1, 0x33F0
    ctx->pc = 0x16603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13296));
    // 0x166040: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x166040u;
    SET_GPR_U32(ctx, 31, 0x166048u);
    ctx->pc = 0x166044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166040u;
            // 0x166044: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166048u; }
        if (ctx->pc != 0x166048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166048u; }
        if (ctx->pc != 0x166048u) { return; }
    }
    ctx->pc = 0x166048u;
label_166048:
    // 0x166048: 0xc66c0180  lwc1        $f12, 0x180($s3)
    ctx->pc = 0x166048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16604c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x16604Cu;
    SET_GPR_U32(ctx, 31, 0x166054u);
    ctx->pc = 0x166050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16604Cu;
            // 0x166050: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166054u; }
        if (ctx->pc != 0x166054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166054u; }
        if (ctx->pc != 0x166054u) { return; }
    }
    ctx->pc = 0x166054u;
label_166054:
    // 0x166054: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x166054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x166058: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166058u;
    SET_GPR_U32(ctx, 31, 0x166060u);
    ctx->pc = 0x16605Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166058u;
            // 0x16605c: 0xc66c0184  lwc1        $f12, 0x184($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166060u; }
        if (ctx->pc != 0x166060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166060u; }
        if (ctx->pc != 0x166060u) { return; }
    }
    ctx->pc = 0x166060u;
label_166060:
    // 0x166060: 0x27b00104  addiu       $s0, $sp, 0x104
    ctx->pc = 0x166060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x166064: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x166064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x166068: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166068u;
    SET_GPR_U32(ctx, 31, 0x166070u);
    ctx->pc = 0x16606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166068u;
            // 0x16606c: 0xc66c0188  lwc1        $f12, 0x188($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166070u; }
        if (ctx->pc != 0x166070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166070u; }
        if (ctx->pc != 0x166070u) { return; }
    }
    ctx->pc = 0x166070u;
label_166070:
    // 0x166070: 0x27a30108  addiu       $v1, $sp, 0x108
    ctx->pc = 0x166070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x166074: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x166074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x166078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x166078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16607c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166080: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x166084: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x166084u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x166088: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x166088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16608c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x16608Cu;
    SET_GPR_U32(ctx, 31, 0x166094u);
    ctx->pc = 0x166090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16608Cu;
            // 0x166090: 0x24a53410  addiu       $a1, $a1, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166094u; }
        if (ctx->pc != 0x166094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166094u; }
        if (ctx->pc != 0x166094u) { return; }
    }
    ctx->pc = 0x166094u;
label_166094:
    // 0x166094: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x166094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x166098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x166098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16609c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16609cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1660a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1660a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1660a4:
    // 0x1660a4: 0x0  nop
    ctx->pc = 0x1660a4u;
    // NOP
    // 0x1660a8: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x1660a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x1660ac: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1660acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1660b0: 0x27b700f4  addiu       $s7, $sp, 0xF4
    ctx->pc = 0x1660b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1660b4: 0x27be00f8  addiu       $fp, $sp, 0xF8
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x1660b8: 0x2758021  addu        $s0, $s3, $s5
    ctx->pc = 0x1660b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x1660bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1660bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1660c0: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x1660c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1660c4: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x1660c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x1660c8: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1660c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1660cc: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x1660ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x1660d0: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1660D0u;
    SET_GPR_U32(ctx, 31, 0x1660D8u);
    ctx->pc = 0x1660D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1660D0u;
            // 0x1660d4: 0xc60c0030  lwc1        $f12, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660D8u; }
        if (ctx->pc != 0x1660D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660D8u; }
        if (ctx->pc != 0x1660D8u) { return; }
    }
    ctx->pc = 0x1660D8u;
label_1660d8:
    // 0x1660d8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1660d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1660dc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1660DCu;
    SET_GPR_U32(ctx, 31, 0x1660E4u);
    ctx->pc = 0x1660E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1660DCu;
            // 0x1660e0: 0xc60c0040  lwc1        $f12, 0x40($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660E4u; }
        if (ctx->pc != 0x1660E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660E4u; }
        if (ctx->pc != 0x1660E4u) { return; }
    }
    ctx->pc = 0x1660E4u;
label_1660e4:
    // 0x1660e4: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x1660e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1660e8: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1660E8u;
    SET_GPR_U32(ctx, 31, 0x1660F0u);
    ctx->pc = 0x1660ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1660E8u;
            // 0x1660ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660F0u; }
        if (ctx->pc != 0x1660F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660F0u; }
        if (ctx->pc != 0x1660F0u) { return; }
    }
    ctx->pc = 0x1660F0u;
label_1660f0:
    // 0x1660f0: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x1660f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1660f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1660F4u;
    SET_GPR_U32(ctx, 31, 0x1660FCu);
    ctx->pc = 0x1660F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1660F4u;
            // 0x1660f8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660FCu; }
        if (ctx->pc != 0x1660FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1660FCu; }
        if (ctx->pc != 0x1660FCu) { return; }
    }
    ctx->pc = 0x1660FCu;
label_1660fc:
    // 0x1660fc: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x1660fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166100: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166100u;
    SET_GPR_U32(ctx, 31, 0x166108u);
    ctx->pc = 0x166104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166100u;
            // 0x166104: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166108u; }
        if (ctx->pc != 0x166108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166108u; }
        if (ctx->pc != 0x166108u) { return; }
    }
    ctx->pc = 0x166108u;
label_166108:
    // 0x166108: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x166108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16610c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x16610Cu;
    SET_GPR_U32(ctx, 31, 0x166114u);
    ctx->pc = 0x166110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16610Cu;
            // 0x166110: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166114u; }
        if (ctx->pc != 0x166114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166114u; }
        if (ctx->pc != 0x166114u) { return; }
    }
    ctx->pc = 0x166114u;
label_166114:
    // 0x166114: 0x7ba700b0  lq          $a3, 0xB0($sp)
    ctx->pc = 0x166114u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x166118: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x166118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x16611c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x16611cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166120: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x166120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166124: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166128: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x166128u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16612c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166130: 0x24a53430  addiu       $a1, $a1, 0x3430
    ctx->pc = 0x166130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13360));
    // 0x166134: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x166134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166138: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x166138u;
    SET_GPR_U32(ctx, 31, 0x166140u);
    ctx->pc = 0x16613Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166138u;
            // 0x16613c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166140u; }
        if (ctx->pc != 0x166140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166140u; }
        if (ctx->pc != 0x166140u) { return; }
    }
    ctx->pc = 0x166140u;
label_166140:
    // 0x166140: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x166140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x166144: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x166144u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x166148: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x166148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16614c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x16614cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x166150: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x166150u;
    {
        const bool branch_taken_0x166150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166150u;
            // 0x166154: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166150) {
            ctx->pc = 0x1660A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1660a4;
        }
    }
    ctx->pc = 0x166158u;
    // 0x166158: 0x8e660190  lw          $a2, 0x190($s3)
    ctx->pc = 0x166158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 400)));
    // 0x16615c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16615cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x166160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x166160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166164: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x166164u;
    SET_GPR_U32(ctx, 31, 0x16616Cu);
    ctx->pc = 0x166168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166164u;
            // 0x166168: 0x24a53460  addiu       $a1, $a1, 0x3460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16616Cu; }
        if (ctx->pc != 0x16616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16616Cu; }
        if (ctx->pc != 0x16616Cu) { return; }
    }
    ctx->pc = 0x16616Cu;
label_16616c:
    // 0x16616c: 0xc66c01a0  lwc1        $f12, 0x1A0($s3)
    ctx->pc = 0x16616cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166170: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x166170u;
    SET_GPR_U32(ctx, 31, 0x166178u);
    ctx->pc = 0x166174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166170u;
            // 0x166174: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166178u; }
        if (ctx->pc != 0x166178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166178u; }
        if (ctx->pc != 0x166178u) { return; }
    }
    ctx->pc = 0x166178u;
label_166178:
    // 0x166178: 0xc66c01a4  lwc1        $f12, 0x1A4($s3)
    ctx->pc = 0x166178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16617c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x16617Cu;
    SET_GPR_U32(ctx, 31, 0x166184u);
    ctx->pc = 0x166180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16617Cu;
            // 0x166180: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166184u; }
        if (ctx->pc != 0x166184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166184u; }
        if (ctx->pc != 0x166184u) { return; }
    }
    ctx->pc = 0x166184u;
label_166184:
    // 0x166184: 0xc66c01b0  lwc1        $f12, 0x1B0($s3)
    ctx->pc = 0x166184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166188: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166188u;
    SET_GPR_U32(ctx, 31, 0x166190u);
    ctx->pc = 0x16618Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166188u;
            // 0x16618c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166190u; }
        if (ctx->pc != 0x166190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166190u; }
        if (ctx->pc != 0x166190u) { return; }
    }
    ctx->pc = 0x166190u;
label_166190:
    // 0x166190: 0xc66c01b4  lwc1        $f12, 0x1B4($s3)
    ctx->pc = 0x166190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x166194: 0xc0a248c  jal         func_289230
    ctx->pc = 0x166194u;
    SET_GPR_U32(ctx, 31, 0x16619Cu);
    ctx->pc = 0x166198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166194u;
            // 0x166198: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16619Cu; }
        if (ctx->pc != 0x16619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16619Cu; }
        if (ctx->pc != 0x16619Cu) { return; }
    }
    ctx->pc = 0x16619Cu;
label_16619c:
    // 0x16619c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x16619cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1661a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1661a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1661a4: 0x926801a8  lbu         $t0, 0x1A8($s3)
    ctx->pc = 0x1661a4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 424)));
    // 0x1661a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1661a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661ac: 0x926901a9  lbu         $t1, 0x1A9($s3)
    ctx->pc = 0x1661acu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 425)));
    // 0x1661b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1661b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661b4: 0x926a01aa  lbu         $t2, 0x1AA($s3)
    ctx->pc = 0x1661b4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 426)));
    // 0x1661b8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x1661b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1661bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661c0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1661C0u;
    SET_GPR_U32(ctx, 31, 0x1661C8u);
    ctx->pc = 0x1661C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661C0u;
            // 0x1661c4: 0x24a53480  addiu       $a1, $a1, 0x3480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C8u; }
        if (ctx->pc != 0x1661C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661C8u; }
        if (ctx->pc != 0x1661C8u) { return; }
    }
    ctx->pc = 0x1661C8u;
label_1661c8:
    // 0x1661c8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1661c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1661cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1661ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1661d0: 0x24a534a0  addiu       $a1, $a1, 0x34A0
    ctx->pc = 0x1661d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13472));
    // 0x1661d4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1661D4u;
    SET_GPR_U32(ctx, 31, 0x1661DCu);
    ctx->pc = 0x1661D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1661D4u;
            // 0x1661d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661DCu; }
        if (ctx->pc != 0x1661DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1661DCu; }
        if (ctx->pc != 0x1661DCu) { return; }
    }
    ctx->pc = 0x1661DCu;
label_1661dc:
    // 0x1661dc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1661dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1661e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1661e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1661e4: 0x244201d0  addiu       $v0, $v0, 0x1D0
    ctx->pc = 0x1661e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x1661e8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1661e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1661ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1661ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1661f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1661f4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1661f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1661f8:
    // 0x1661f8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1661f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1661fc: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1661fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x166200: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x166200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x166204: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x166204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x166208: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
    ctx->pc = 0x166208u;
    {
        const bool branch_taken_0x166208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166208) {
            ctx->pc = 0x165F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_165f90;
        }
    }
    ctx->pc = 0x166210u;
    // 0x166210: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x166210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x166214: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x166214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x166218: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x166218u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16621c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x16621cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166220: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x166220u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166224: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x166224u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166228: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x166228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16622c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16622cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x166230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x166234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x166238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16623c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16623cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166240: 0x3e00008  jr          $ra
    ctx->pc = 0x166240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166240u;
            // 0x166244: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x166248u;
}
