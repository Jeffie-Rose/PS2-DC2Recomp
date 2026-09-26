#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWidth__FP6CCPolyiPffPfi
// Address: 0x150170 - 0x15096c
void CheckWidth__FP6CCPolyiPffPfi_0x150170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWidth__FP6CCPolyiPffPfi_0x150170");
#endif

    switch (ctx->pc) {
        case 0x1501e8u: goto label_1501e8;
        case 0x1501f4u: goto label_1501f4;
        case 0x15024cu: goto label_15024c;
        case 0x15026cu: goto label_15026c;
        case 0x1502f4u: goto label_1502f4;
        case 0x150314u: goto label_150314;
        case 0x1503e4u: goto label_1503e4;
        case 0x150434u: goto label_150434;
        case 0x150454u: goto label_150454;
        case 0x1504dcu: goto label_1504dc;
        case 0x1504fcu: goto label_1504fc;
        case 0x1505ccu: goto label_1505cc;
        case 0x150618u: goto label_150618;
        case 0x150638u: goto label_150638;
        case 0x1506bcu: goto label_1506bc;
        case 0x1506dcu: goto label_1506dc;
        case 0x150784u: goto label_150784;
        case 0x1507d0u: goto label_1507d0;
        case 0x1507f0u: goto label_1507f0;
        case 0x150874u: goto label_150874;
        case 0x150894u: goto label_150894;
        default: break;
    }

    ctx->pc = 0x150170u;

    // 0x150170: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x150170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x150174: 0x3c023fb5  lui         $v0, 0x3FB5
    ctx->pc = 0x150174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16309 << 16));
    // 0x150178: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x150178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15017c: 0x344204f3  ori         $v0, $v0, 0x4F3
    ctx->pc = 0x15017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1267);
    // 0x150180: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x150180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x150184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150188: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x150188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x15018c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x15018cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x150190: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x150190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x150194: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x150194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x150198: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x150198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15019c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15019cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1501a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1501a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501a4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1501a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1501a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1501a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1501acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1501b0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1501b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1501b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1501b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1501bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1501c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1501c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1501c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1501c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1501c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1501c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501cc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1501ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1501d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1501d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501d4: 0x4600ad03  div.s       $f20, $f21, $f0
    ctx->pc = 0x1501d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1501d8: 0x0  nop
    ctx->pc = 0x1501d8u;
    // NOP
    // 0x1501dc: 0x0  nop
    ctx->pc = 0x1501dcu;
    // NOP
    // 0x1501e0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1501E0u;
    SET_GPR_U32(ctx, 31, 0x1501E8u);
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501E8u; }
        if (ctx->pc != 0x1501E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501E8u; }
        if (ctx->pc != 0x1501E8u) { return; }
    }
    ctx->pc = 0x1501E8u;
label_1501e8:
    // 0x1501e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1501e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501ec: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1501ECu;
    SET_GPR_U32(ctx, 31, 0x1501F4u);
    ctx->pc = 0x1501F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1501ECu;
            // 0x1501f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501F4u; }
        if (ctx->pc != 0x1501F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1501F4u; }
        if (ctx->pc != 0x1501F4u) { return; }
    }
    ctx->pc = 0x1501F4u;
label_1501f4:
    // 0x1501f4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1501f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1501f8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1501f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1501fc: 0x27be00e8  addiu       $fp, $sp, 0xE8
    ctx->pc = 0x1501fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x150200: 0x27b700b8  addiu       $s7, $sp, 0xB8
    ctx->pc = 0x150200u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x150204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150208: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15020c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x150210: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x150210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150214: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x150214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150218: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15021c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x15021cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150224: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150228: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15022c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15022cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150230: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150234: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x150238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15023c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x15023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150240: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150244: 0xc053794  jal         func_14DE50
    ctx->pc = 0x150244u;
    SET_GPR_U32(ctx, 31, 0x15024Cu);
    ctx->pc = 0x150248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150244u;
            // 0x150248: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15024Cu; }
        if (ctx->pc != 0x15024Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15024Cu; }
        if (ctx->pc != 0x15024Cu) { return; }
    }
    ctx->pc = 0x15024Cu;
label_15024c:
    // 0x15024c: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15024Cu;
    {
        const bool branch_taken_0x15024c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15024Cu;
            // 0x150250: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15024c) {
            ctx->pc = 0x1502ACu;
            goto label_1502ac;
        }
    }
    ctx->pc = 0x150254u;
    // 0x150254: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x150254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150258: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15025c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15025cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150260: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150264: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150264u;
    SET_GPR_U32(ctx, 31, 0x15026Cu);
    ctx->pc = 0x150268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150264u;
            // 0x150268: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15026Cu; }
        if (ctx->pc != 0x15026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15026Cu; }
        if (ctx->pc != 0x15026Cu) { return; }
    }
    ctx->pc = 0x15026Cu;
label_15026c:
    // 0x15026c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x15026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150270: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150278: 0x0  nop
    ctx->pc = 0x150278u;
    // NOP
    // 0x15027c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15027cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150280: 0x0  nop
    ctx->pc = 0x150280u;
    // NOP
    // 0x150284: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150284u;
    {
        const bool branch_taken_0x150284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150284u;
            // 0x150288: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150284) {
            ctx->pc = 0x1502ACu;
            goto label_1502ac;
        }
    }
    ctx->pc = 0x15028Cu;
    // 0x15028c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15028cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150290: 0x0  nop
    ctx->pc = 0x150290u;
    // NOP
    // 0x150294: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150294u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150298: 0x0  nop
    ctx->pc = 0x150298u;
    // NOP
    // 0x15029c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15029Cu;
    {
        const bool branch_taken_0x15029c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15029c) {
            ctx->pc = 0x1502ACu;
            goto label_1502ac;
        }
    }
    ctx->pc = 0x1502A4u;
    // 0x1502a4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1502a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1502a8: 0x36100005  ori         $s0, $s0, 0x5
    ctx->pc = 0x1502a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)5);
label_1502ac:
    // 0x1502ac: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1502acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502b0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1502b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1502b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1502b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1502b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502bc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1502bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1502c0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1502c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1502c4: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x1502c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1502c8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1502c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1502cc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1502ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1502d0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1502d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1502d4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1502d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1502d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1502d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502dc: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1502dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1502e0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1502e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1502e4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1502e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1502e8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1502e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1502ec: 0xc053794  jal         func_14DE50
    ctx->pc = 0x1502ECu;
    SET_GPR_U32(ctx, 31, 0x1502F4u);
    ctx->pc = 0x1502F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1502ECu;
            // 0x1502f0: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502F4u; }
        if (ctx->pc != 0x1502F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1502F4u; }
        if (ctx->pc != 0x1502F4u) { return; }
    }
    ctx->pc = 0x1502F4u;
label_1502f4:
    // 0x1502f4: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1502F4u;
    {
        const bool branch_taken_0x1502f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1502F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1502F4u;
            // 0x1502f8: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1502f4) {
            ctx->pc = 0x150354u;
            goto label_150354;
        }
    }
    ctx->pc = 0x1502FCu;
    // 0x1502fc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1502fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150300: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150308: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15030c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x15030Cu;
    SET_GPR_U32(ctx, 31, 0x150314u);
    ctx->pc = 0x150310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15030Cu;
            // 0x150310: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150314u; }
        if (ctx->pc != 0x150314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150314u; }
        if (ctx->pc != 0x150314u) { return; }
    }
    ctx->pc = 0x150314u;
label_150314:
    // 0x150314: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x150314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150318: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15031c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15031cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150320: 0x0  nop
    ctx->pc = 0x150320u;
    // NOP
    // 0x150324: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150328: 0x0  nop
    ctx->pc = 0x150328u;
    // NOP
    // 0x15032c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15032Cu;
    {
        const bool branch_taken_0x15032c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15032Cu;
            // 0x150330: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15032c) {
            ctx->pc = 0x150354u;
            goto label_150354;
        }
    }
    ctx->pc = 0x150334u;
    // 0x150334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150338: 0x0  nop
    ctx->pc = 0x150338u;
    // NOP
    // 0x15033c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15033cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150340: 0x0  nop
    ctx->pc = 0x150340u;
    // NOP
    // 0x150344: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150344u;
    {
        const bool branch_taken_0x150344 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150344) {
            ctx->pc = 0x150354u;
            goto label_150354;
        }
    }
    ctx->pc = 0x15034Cu;
    // 0x15034c: 0x3610000a  ori         $s0, $s0, 0xA
    ctx->pc = 0x15034cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)10);
    // 0x150350: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x150350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150354:
    // 0x150354: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x150354u;
    {
        const bool branch_taken_0x150354 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150354) {
            ctx->pc = 0x150398u;
            goto label_150398;
        }
    }
    ctx->pc = 0x15035Cu;
    // 0x15035c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x15035Cu;
    {
        const bool branch_taken_0x15035c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15035c) {
            ctx->pc = 0x150398u;
            goto label_150398;
        }
    }
    ctx->pc = 0x150364u;
    // 0x150364: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x150364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150368: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15036c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x15036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150370: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x150370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x150374: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150378: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x150378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x15037c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x15037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x150380: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x150380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150384: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x150384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150388: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15038c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x15038cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x150390: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x150390u;
    {
        const bool branch_taken_0x150390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150390u;
            // 0x150394: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150390) {
            ctx->pc = 0x1503D8u;
            goto label_1503d8;
        }
    }
    ctx->pc = 0x150398u;
label_150398:
    // 0x150398: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x150398u;
    {
        const bool branch_taken_0x150398 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150398) {
            ctx->pc = 0x1503B8u;
            goto label_1503b8;
        }
    }
    ctx->pc = 0x1503A0u;
    // 0x1503a0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1503a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503a4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1503a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1503a8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1503a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1503ac: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x1503acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503b0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1503b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1503b4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1503b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1503b8:
    // 0x1503b8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1503B8u;
    {
        const bool branch_taken_0x1503b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1503B8u;
            // 0x1503bc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503b8) {
            ctx->pc = 0x1503DCu;
            goto label_1503dc;
        }
    }
    ctx->pc = 0x1503C0u;
    // 0x1503c0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1503c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1503c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1503c8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1503c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1503cc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1503ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1503d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1503d4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1503d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1503d8:
    // 0x1503d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1503d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1503dc:
    // 0x1503dc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1503DCu;
    SET_GPR_U32(ctx, 31, 0x1503E4u);
    ctx->pc = 0x1503E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1503DCu;
            // 0x1503e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503E4u; }
        if (ctx->pc != 0x1503E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503E4u; }
        if (ctx->pc != 0x1503E4u) { return; }
    }
    ctx->pc = 0x1503E4u;
label_1503e4:
    // 0x1503e4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1503e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1503e8: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1503ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1503ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1503f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503f4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1503f8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1503f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1503fc: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x1503fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150400: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x150400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150404: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x150404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150408: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150408u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15040c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15040cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150410: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150414: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x150414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15041c: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x15041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x150420: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x150424: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x150424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150428: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x150428u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x15042c: 0xc053794  jal         func_14DE50
    ctx->pc = 0x15042Cu;
    SET_GPR_U32(ctx, 31, 0x150434u);
    ctx->pc = 0x150430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15042Cu;
            // 0x150430: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150434u; }
        if (ctx->pc != 0x150434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150434u; }
        if (ctx->pc != 0x150434u) { return; }
    }
    ctx->pc = 0x150434u;
label_150434:
    // 0x150434: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150434u;
    {
        const bool branch_taken_0x150434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150434u;
            // 0x150438: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150434) {
            ctx->pc = 0x150494u;
            goto label_150494;
        }
    }
    ctx->pc = 0x15043Cu;
    // 0x15043c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150440: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150444: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150448: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15044c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x15044Cu;
    SET_GPR_U32(ctx, 31, 0x150454u);
    ctx->pc = 0x150450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15044Cu;
            // 0x150450: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150454u; }
        if (ctx->pc != 0x150454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150454u; }
        if (ctx->pc != 0x150454u) { return; }
    }
    ctx->pc = 0x150454u;
label_150454:
    // 0x150454: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x150454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150458: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15045c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15045cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150460: 0x0  nop
    ctx->pc = 0x150460u;
    // NOP
    // 0x150464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150468: 0x0  nop
    ctx->pc = 0x150468u;
    // NOP
    // 0x15046c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15046Cu;
    {
        const bool branch_taken_0x15046c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15046Cu;
            // 0x150470: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15046c) {
            ctx->pc = 0x150494u;
            goto label_150494;
        }
    }
    ctx->pc = 0x150474u;
    // 0x150474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150478: 0x0  nop
    ctx->pc = 0x150478u;
    // NOP
    // 0x15047c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15047cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150480: 0x0  nop
    ctx->pc = 0x150480u;
    // NOP
    // 0x150484: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150484u;
    {
        const bool branch_taken_0x150484 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150484) {
            ctx->pc = 0x150494u;
            goto label_150494;
        }
    }
    ctx->pc = 0x15048Cu;
    // 0x15048c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15048cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150490: 0x36100009  ori         $s0, $s0, 0x9
    ctx->pc = 0x150490u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9);
label_150494:
    // 0x150494: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x150494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150498: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x150498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x15049c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1504a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504a4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1504a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1504a8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1504a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1504ac: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x1504acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1504b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1504b4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1504b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1504b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1504bc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1504bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1504c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1504c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504c4: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1504c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1504c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1504c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1504cc: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1504ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1504d0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1504d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1504d4: 0xc053794  jal         func_14DE50
    ctx->pc = 0x1504D4u;
    SET_GPR_U32(ctx, 31, 0x1504DCu);
    ctx->pc = 0x1504D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1504D4u;
            // 0x1504d8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504DCu; }
        if (ctx->pc != 0x1504DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504DCu; }
        if (ctx->pc != 0x1504DCu) { return; }
    }
    ctx->pc = 0x1504DCu;
label_1504dc:
    // 0x1504dc: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1504DCu;
    {
        const bool branch_taken_0x1504dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1504E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1504DCu;
            // 0x1504e0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504dc) {
            ctx->pc = 0x15053Cu;
            goto label_15053c;
        }
    }
    ctx->pc = 0x1504E4u;
    // 0x1504e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1504e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1504e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1504ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1504ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1504f0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1504f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1504f4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1504F4u;
    SET_GPR_U32(ctx, 31, 0x1504FCu);
    ctx->pc = 0x1504F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1504F4u;
            // 0x1504f8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504FCu; }
        if (ctx->pc != 0x1504FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1504FCu; }
        if (ctx->pc != 0x1504FCu) { return; }
    }
    ctx->pc = 0x1504FCu;
label_1504fc:
    // 0x1504fc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1504fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150500: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150508: 0x0  nop
    ctx->pc = 0x150508u;
    // NOP
    // 0x15050c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15050cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150510: 0x0  nop
    ctx->pc = 0x150510u;
    // NOP
    // 0x150514: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150514u;
    {
        const bool branch_taken_0x150514 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150514u;
            // 0x150518: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150514) {
            ctx->pc = 0x15053Cu;
            goto label_15053c;
        }
    }
    ctx->pc = 0x15051Cu;
    // 0x15051c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15051cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150520: 0x0  nop
    ctx->pc = 0x150520u;
    // NOP
    // 0x150524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150528: 0x0  nop
    ctx->pc = 0x150528u;
    // NOP
    // 0x15052c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15052Cu;
    {
        const bool branch_taken_0x15052c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15052c) {
            ctx->pc = 0x15053Cu;
            goto label_15053c;
        }
    }
    ctx->pc = 0x150534u;
    // 0x150534: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x150534u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
    // 0x150538: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15053c:
    // 0x15053c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15053Cu;
    {
        const bool branch_taken_0x15053c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15053c) {
            ctx->pc = 0x150580u;
            goto label_150580;
        }
    }
    ctx->pc = 0x150544u;
    // 0x150544: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x150544u;
    {
        const bool branch_taken_0x150544 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150544) {
            ctx->pc = 0x150580u;
            goto label_150580;
        }
    }
    ctx->pc = 0x15054Cu;
    // 0x15054c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x15054cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150550: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150554: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x150554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150558: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x150558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15055c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15055cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150560: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x150560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x150564: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x150568: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x150568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15056c: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x15056cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150570: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x150570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x150574: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x150574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x150578: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x150578u;
    {
        const bool branch_taken_0x150578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150578u;
            // 0x15057c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150578) {
            ctx->pc = 0x1505C0u;
            goto label_1505c0;
        }
    }
    ctx->pc = 0x150580u;
label_150580:
    // 0x150580: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x150580u;
    {
        const bool branch_taken_0x150580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150580) {
            ctx->pc = 0x1505A0u;
            goto label_1505a0;
        }
    }
    ctx->pc = 0x150588u;
    // 0x150588: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x150588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15058c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x15058cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x150590: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x150594: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x150594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150598: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150598u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15059c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x15059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1505a0:
    // 0x1505a0: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1505A0u;
    {
        const bool branch_taken_0x1505a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1505A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1505A0u;
            // 0x1505a4: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1505a0) {
            ctx->pc = 0x1505C4u;
            goto label_1505c4;
        }
    }
    ctx->pc = 0x1505A8u;
    // 0x1505a8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1505a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1505ac: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1505acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1505b0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1505b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1505b4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1505b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1505b8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1505b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1505bc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1505bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1505c0:
    // 0x1505c0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1505c4:
    // 0x1505c4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1505C4u;
    SET_GPR_U32(ctx, 31, 0x1505CCu);
    ctx->pc = 0x1505C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1505C4u;
            // 0x1505c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505CCu; }
        if (ctx->pc != 0x1505CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1505CCu; }
        if (ctx->pc != 0x1505CCu) { return; }
    }
    ctx->pc = 0x1505CCu;
label_1505cc:
    // 0x1505cc: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1505ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1505d0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1505d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1505d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1505d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505dc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1505e0: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x1505e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1505e4: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x1505e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1505e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1505ec: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1505ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1505f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1505f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1505f8: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1505f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1505fc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1505fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150600: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150604: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x150604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x150608: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15060c: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x15060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150610: 0xc053794  jal         func_14DE50
    ctx->pc = 0x150610u;
    SET_GPR_U32(ctx, 31, 0x150618u);
    ctx->pc = 0x150614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150610u;
            // 0x150614: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150618u; }
        if (ctx->pc != 0x150618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150618u; }
        if (ctx->pc != 0x150618u) { return; }
    }
    ctx->pc = 0x150618u;
label_150618:
    // 0x150618: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150618u;
    {
        const bool branch_taken_0x150618 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15061Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150618u;
            // 0x15061c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150618) {
            ctx->pc = 0x150678u;
            goto label_150678;
        }
    }
    ctx->pc = 0x150620u;
    // 0x150620: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x150620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150624: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150628: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15062c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x15062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150630: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150630u;
    SET_GPR_U32(ctx, 31, 0x150638u);
    ctx->pc = 0x150634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150630u;
            // 0x150634: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150638u; }
        if (ctx->pc != 0x150638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150638u; }
        if (ctx->pc != 0x150638u) { return; }
    }
    ctx->pc = 0x150638u;
label_150638:
    // 0x150638: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x150638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15063c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x15063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150644: 0x0  nop
    ctx->pc = 0x150644u;
    // NOP
    // 0x150648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15064c: 0x0  nop
    ctx->pc = 0x15064cu;
    // NOP
    // 0x150650: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150650u;
    {
        const bool branch_taken_0x150650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150650u;
            // 0x150654: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150650) {
            ctx->pc = 0x150678u;
            goto label_150678;
        }
    }
    ctx->pc = 0x150658u;
    // 0x150658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15065c: 0x0  nop
    ctx->pc = 0x15065cu;
    // NOP
    // 0x150660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150664: 0x0  nop
    ctx->pc = 0x150664u;
    // NOP
    // 0x150668: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150668u;
    {
        const bool branch_taken_0x150668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150668) {
            ctx->pc = 0x150678u;
            goto label_150678;
        }
    }
    ctx->pc = 0x150670u;
    // 0x150670: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150674: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x150674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_150678:
    // 0x150678: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x150678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15067c: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x15067cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x150680: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150684: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150688: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x150688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15068c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x15068cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150690: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x150690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x150694: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150698: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x150698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15069c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15069cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x1506a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1506a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1506a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1506a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1506a8: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1506ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1506acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1506b0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1506b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1506b4: 0xc053794  jal         func_14DE50
    ctx->pc = 0x1506B4u;
    SET_GPR_U32(ctx, 31, 0x1506BCu);
    ctx->pc = 0x1506B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1506B4u;
            // 0x1506b8: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506BCu; }
        if (ctx->pc != 0x1506BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506BCu; }
        if (ctx->pc != 0x1506BCu) { return; }
    }
    ctx->pc = 0x1506BCu;
label_1506bc:
    // 0x1506bc: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1506BCu;
    {
        const bool branch_taken_0x1506bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1506C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1506BCu;
            // 0x1506c0: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506bc) {
            ctx->pc = 0x15071Cu;
            goto label_15071c;
        }
    }
    ctx->pc = 0x1506C4u;
    // 0x1506c4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1506c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1506c8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1506d0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1506d4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1506D4u;
    SET_GPR_U32(ctx, 31, 0x1506DCu);
    ctx->pc = 0x1506D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1506D4u;
            // 0x1506d8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506DCu; }
        if (ctx->pc != 0x1506DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1506DCu; }
        if (ctx->pc != 0x1506DCu) { return; }
    }
    ctx->pc = 0x1506DCu;
label_1506dc:
    // 0x1506dc: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1506dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1506e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1506e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1506e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1506e8: 0x0  nop
    ctx->pc = 0x1506e8u;
    // NOP
    // 0x1506ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1506ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1506f0: 0x0  nop
    ctx->pc = 0x1506f0u;
    // NOP
    // 0x1506f4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1506F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1506F4u;
            // 0x1506f8: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x15071Cu;
            goto label_15071c;
        }
    }
    ctx->pc = 0x1506FCu;
    // 0x1506fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1506fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150700: 0x0  nop
    ctx->pc = 0x150700u;
    // NOP
    // 0x150704: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150704u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150708: 0x0  nop
    ctx->pc = 0x150708u;
    // NOP
    // 0x15070c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15070Cu;
    {
        const bool branch_taken_0x15070c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15070c) {
            ctx->pc = 0x15071Cu;
            goto label_15071c;
        }
    }
    ctx->pc = 0x150714u;
    // 0x150714: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x150714u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x150718: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15071c:
    // 0x15071c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x15071Cu;
    {
        const bool branch_taken_0x15071c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15071c) {
            ctx->pc = 0x150750u;
            goto label_150750;
        }
    }
    ctx->pc = 0x150724u;
    // 0x150724: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x150724u;
    {
        const bool branch_taken_0x150724 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150724) {
            ctx->pc = 0x150750u;
            goto label_150750;
        }
    }
    ctx->pc = 0x15072Cu;
    // 0x15072c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x15072cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150730: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150734: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x150734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15073c: 0x0  nop
    ctx->pc = 0x15073cu;
    // NOP
    // 0x150740: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x150740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x150744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150748u;
    {
        const bool branch_taken_0x150748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15074Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150748u;
            // 0x15074c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150748) {
            ctx->pc = 0x150778u;
            goto label_150778;
        }
    }
    ctx->pc = 0x150750u;
label_150750:
    // 0x150750: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150750u;
    {
        const bool branch_taken_0x150750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150750) {
            ctx->pc = 0x150764u;
            goto label_150764;
        }
    }
    ctx->pc = 0x150758u;
    // 0x150758: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x150758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15075c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x15075cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x150760: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_150764:
    // 0x150764: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x150764u;
    {
        const bool branch_taken_0x150764 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x150768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150764u;
            // 0x150768: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150764) {
            ctx->pc = 0x15077Cu;
            goto label_15077c;
        }
    }
    ctx->pc = 0x15076Cu;
    // 0x15076c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x15076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150770: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x150770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x150774: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_150778:
    // 0x150778: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15077c:
    // 0x15077c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x15077Cu;
    SET_GPR_U32(ctx, 31, 0x150784u);
    ctx->pc = 0x150780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15077Cu;
            // 0x150780: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150784u; }
        if (ctx->pc != 0x150784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150784u; }
        if (ctx->pc != 0x150784u) { return; }
    }
    ctx->pc = 0x150784u;
label_150784:
    // 0x150784: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x150784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150788: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x150788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x15078c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150790: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150794: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x150794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x150798: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x150798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15079c: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x15079cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1507a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1507a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1507a4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x1507a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1507a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1507acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507b0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1507b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1507b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1507b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507b8: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x1507b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1507bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1507bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1507c0: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x1507c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1507c4: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x1507c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x1507c8: 0xc053794  jal         func_14DE50
    ctx->pc = 0x1507C8u;
    SET_GPR_U32(ctx, 31, 0x1507D0u);
    ctx->pc = 0x1507CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1507C8u;
            // 0x1507cc: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1507D0u; }
        if (ctx->pc != 0x1507D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1507D0u; }
        if (ctx->pc != 0x1507D0u) { return; }
    }
    ctx->pc = 0x1507D0u;
label_1507d0:
    // 0x1507d0: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1507D0u;
    {
        const bool branch_taken_0x1507d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1507D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1507D0u;
            // 0x1507d4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507d0) {
            ctx->pc = 0x150830u;
            goto label_150830;
        }
    }
    ctx->pc = 0x1507D8u;
    // 0x1507d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1507d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1507dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1507dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1507e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1507e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1507e4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1507e8: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1507E8u;
    SET_GPR_U32(ctx, 31, 0x1507F0u);
    ctx->pc = 0x1507ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1507E8u;
            // 0x1507ec: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1507F0u; }
        if (ctx->pc != 0x1507F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1507F0u; }
        if (ctx->pc != 0x1507F0u) { return; }
    }
    ctx->pc = 0x1507F0u;
label_1507f0:
    // 0x1507f0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1507f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1507f4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1507f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1507f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507fc: 0x0  nop
    ctx->pc = 0x1507fcu;
    // NOP
    // 0x150800: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150800u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150804: 0x0  nop
    ctx->pc = 0x150804u;
    // NOP
    // 0x150808: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150808u;
    {
        const bool branch_taken_0x150808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15080Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150808u;
            // 0x15080c: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150808) {
            ctx->pc = 0x150830u;
            goto label_150830;
        }
    }
    ctx->pc = 0x150810u;
    // 0x150810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150814: 0x0  nop
    ctx->pc = 0x150814u;
    // NOP
    // 0x150818: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15081c: 0x0  nop
    ctx->pc = 0x15081cu;
    // NOP
    // 0x150820: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150820u;
    {
        const bool branch_taken_0x150820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150820) {
            ctx->pc = 0x150830u;
            goto label_150830;
        }
    }
    ctx->pc = 0x150828u;
    // 0x150828: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x150828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x15082c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15082cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150830:
    // 0x150830: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x150830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150834: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x150834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x150838: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15083c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x15083cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150840: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150844: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x150844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x150848: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x150848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x15084c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x150850: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x150850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150854: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x150854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150858: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x150858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15085c: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x150860: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x150860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x150864: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x150864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150868: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x150868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x15086c: 0xc053794  jal         func_14DE50
    ctx->pc = 0x15086Cu;
    SET_GPR_U32(ctx, 31, 0x150874u);
    ctx->pc = 0x150870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15086Cu;
            // 0x150870: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150874u; }
        if (ctx->pc != 0x150874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150874u; }
        if (ctx->pc != 0x150874u) { return; }
    }
    ctx->pc = 0x150874u;
label_150874:
    // 0x150874: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x150874u;
    {
        const bool branch_taken_0x150874 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x150878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150874u;
            // 0x150878: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150874) {
            ctx->pc = 0x1508D4u;
            goto label_1508d4;
        }
    }
    ctx->pc = 0x15087Cu;
    // 0x15087c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150880: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150884: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150888: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15088c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x15088Cu;
    SET_GPR_U32(ctx, 31, 0x150894u);
    ctx->pc = 0x150890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15088Cu;
            // 0x150890: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150894u; }
        if (ctx->pc != 0x150894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150894u; }
        if (ctx->pc != 0x150894u) { return; }
    }
    ctx->pc = 0x150894u;
label_150894:
    // 0x150894: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x150894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150898: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x15089c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15089cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1508a0: 0x0  nop
    ctx->pc = 0x1508a0u;
    // NOP
    // 0x1508a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1508a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508a8: 0x0  nop
    ctx->pc = 0x1508a8u;
    // NOP
    // 0x1508ac: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1508ACu;
    {
        const bool branch_taken_0x1508ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1508B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1508ACu;
            // 0x1508b0: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1508ac) {
            ctx->pc = 0x1508D4u;
            goto label_1508d4;
        }
    }
    ctx->pc = 0x1508B4u;
    // 0x1508b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1508b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1508b8: 0x0  nop
    ctx->pc = 0x1508b8u;
    // NOP
    // 0x1508bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1508bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1508c0: 0x0  nop
    ctx->pc = 0x1508c0u;
    // NOP
    // 0x1508c4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1508C4u;
    {
        const bool branch_taken_0x1508c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1508c4) {
            ctx->pc = 0x1508D4u;
            goto label_1508d4;
        }
    }
    ctx->pc = 0x1508CCu;
    // 0x1508cc: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x1508ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x1508d0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1508d4:
    // 0x1508d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1508D4u;
    {
        const bool branch_taken_0x1508d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508d4) {
            ctx->pc = 0x150908u;
            goto label_150908;
        }
    }
    ctx->pc = 0x1508DCu;
    // 0x1508dc: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x1508DCu;
    {
        const bool branch_taken_0x1508dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1508dc) {
            ctx->pc = 0x150908u;
            goto label_150908;
        }
    }
    ctx->pc = 0x1508E4u;
    // 0x1508e4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1508e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1508e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1508ec: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1508ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1508f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1508f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1508f4: 0x0  nop
    ctx->pc = 0x1508f4u;
    // NOP
    // 0x1508f8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1508f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1508fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1508fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150900: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150900u;
    {
        const bool branch_taken_0x150900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150900u;
            // 0x150904: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150900) {
            ctx->pc = 0x150930u;
            goto label_150930;
        }
    }
    ctx->pc = 0x150908u;
label_150908:
    // 0x150908: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150908u;
    {
        const bool branch_taken_0x150908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150908) {
            ctx->pc = 0x15091Cu;
            goto label_15091c;
        }
    }
    ctx->pc = 0x150910u;
    // 0x150910: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x150910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150914: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x150914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x150918: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x150918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_15091c:
    // 0x15091c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x15091Cu;
    {
        const bool branch_taken_0x15091c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x150920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15091Cu;
            // 0x150920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15091c) {
            ctx->pc = 0x150934u;
            goto label_150934;
        }
    }
    ctx->pc = 0x150924u;
    // 0x150924: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x150924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150928: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x150928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x15092c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x15092cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_150930:
    // 0x150930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150934:
    // 0x150934: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x150934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150938: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x150938u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15093c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x15093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x150940: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x150940u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150944: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x150944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150948: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x150948u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15094c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x15094cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150950: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x150950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150954: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x150954u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150958: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x150958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15095c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15095cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150960: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150964: 0x3e00008  jr          $ra
    ctx->pc = 0x150964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150964u;
            // 0x150968: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15096Cu;
}
