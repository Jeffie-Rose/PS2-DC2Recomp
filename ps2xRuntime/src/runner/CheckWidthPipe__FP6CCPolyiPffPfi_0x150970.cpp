#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckWidthPipe__FP6CCPolyiPffPfi
// Address: 0x150970 - 0x150df0
void CheckWidthPipe__FP6CCPolyiPffPfi_0x150970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckWidthPipe__FP6CCPolyiPffPfi_0x150970");
#endif

    switch (ctx->pc) {
        case 0x1509d8u: goto label_1509d8;
        case 0x150a04u: goto label_150a04;
        case 0x150a64u: goto label_150a64;
        case 0x150a98u: goto label_150a98;
        case 0x150b14u: goto label_150b14;
        case 0x150b48u: goto label_150b48;
        case 0x150c38u: goto label_150c38;
        case 0x150c6cu: goto label_150c6c;
        case 0x150ce8u: goto label_150ce8;
        case 0x150d1cu: goto label_150d1c;
        default: break;
    }

    ctx->pc = 0x150970u;

    // 0x150970: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x150974: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x150978: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x150978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x15097c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15097cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x150980: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x150980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x150984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150988: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x150988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x15098c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x150990: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x150990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x150994: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x150994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x150998: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x150998u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15099c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x15099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1509a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1509a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509a4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1509a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1509a8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1509a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1509acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1509b0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1509b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1509b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1509b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1509b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509bc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1509bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1509c0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1509c4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1509c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1509c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1509c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509cc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1509ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1509d0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1509D0u;
    SET_GPR_U32(ctx, 31, 0x1509D8u);
    ctx->pc = 0x1509D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1509D0u;
            // 0x1509d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509D8u; }
        if (ctx->pc != 0x1509D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1509D8u; }
        if (ctx->pc != 0x1509D8u) { return; }
    }
    ctx->pc = 0x1509D8u;
label_1509d8:
    // 0x1509d8: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1509d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1509dc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1509e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1509e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1509e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1509e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1509e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509ec: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1509ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1509f0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1509f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1509f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1509f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1509f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1509f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1509fc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1509FCu;
    SET_GPR_U32(ctx, 31, 0x150A04u);
    ctx->pc = 0x150A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1509FCu;
            // 0x150a00: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A04u; }
        if (ctx->pc != 0x150A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A04u; }
        if (ctx->pc != 0x150A04u) { return; }
    }
    ctx->pc = 0x150A04u;
label_150a04:
    // 0x150a04: 0xc7a100fc  lwc1        $f1, 0xFC($sp)
    ctx->pc = 0x150a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a08: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x150a0c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x150a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a10: 0x27b700f8  addiu       $s7, $sp, 0xF8
    ctx->pc = 0x150a10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x150a14: 0x27be00c8  addiu       $fp, $sp, 0xC8
    ctx->pc = 0x150a14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x150a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a20: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150a24: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150a28: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x150a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150a2c: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x150a30: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x150a34: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x150a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x150a38: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150a38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150a3c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x150a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a44: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150a48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150a48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150a4c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x150a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x150a50: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x150a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x150a54: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x150a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150a58: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x150a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x150a5c: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x150A5Cu;
    SET_GPR_U32(ctx, 31, 0x150A64u);
    ctx->pc = 0x150A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A5Cu;
            // 0x150a60: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A64u; }
        if (ctx->pc != 0x150A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A64u; }
        if (ctx->pc != 0x150A64u) { return; }
    }
    ctx->pc = 0x150A64u;
label_150a64:
    // 0x150a64: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x150A64u;
    {
        const bool branch_taken_0x150a64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150A64u;
            // 0x150a68: 0x27a20190  addiu       $v0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a64) {
            ctx->pc = 0x150AD8u;
            goto label_150ad8;
        }
    }
    ctx->pc = 0x150A6Cu;
    // 0x150a6c: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150a70: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x150a70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150a74: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x150a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x150a78: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x150a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x150a7c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150a80: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x150a80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x150a84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x150a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150a88: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150a8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150a90: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150A90u;
    SET_GPR_U32(ctx, 31, 0x150A98u);
    ctx->pc = 0x150A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150A90u;
            // 0x150a94: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A98u; }
        if (ctx->pc != 0x150A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150A98u; }
        if (ctx->pc != 0x150A98u) { return; }
    }
    ctx->pc = 0x150A98u;
label_150a98:
    // 0x150a98: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x150a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150aa4: 0x0  nop
    ctx->pc = 0x150aa4u;
    // NOP
    // 0x150aa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150aac: 0x0  nop
    ctx->pc = 0x150aacu;
    // NOP
    // 0x150ab0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150AB0u;
    {
        const bool branch_taken_0x150ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150AB0u;
            // 0x150ab4: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ab0) {
            ctx->pc = 0x150AD8u;
            goto label_150ad8;
        }
    }
    ctx->pc = 0x150AB8u;
    // 0x150ab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150abc: 0x0  nop
    ctx->pc = 0x150abcu;
    // NOP
    // 0x150ac0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150ac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150ac4: 0x0  nop
    ctx->pc = 0x150ac4u;
    // NOP
    // 0x150ac8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150AC8u;
    {
        const bool branch_taken_0x150ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150ac8) {
            ctx->pc = 0x150AD8u;
            goto label_150ad8;
        }
    }
    ctx->pc = 0x150AD0u;
    // 0x150ad0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150ad4: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x150ad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_150ad8:
    // 0x150ad8: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x150ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150adc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ae0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150ae4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x150ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150ae8: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150aec: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x150aecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150af0: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x150af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x150af4: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x150af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x150af8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150afc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x150afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x150b00: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x150b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x150b04: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x150b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b08: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x150b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x150b0c: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x150B0Cu;
    SET_GPR_U32(ctx, 31, 0x150B14u);
    ctx->pc = 0x150B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B0Cu;
            // 0x150b10: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B14u; }
        if (ctx->pc != 0x150B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B14u; }
        if (ctx->pc != 0x150B14u) { return; }
    }
    ctx->pc = 0x150B14u;
label_150b14:
    // 0x150b14: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x150B14u;
    {
        const bool branch_taken_0x150b14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B14u;
            // 0x150b18: 0x27a20190  addiu       $v0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b14) {
            ctx->pc = 0x150B88u;
            goto label_150b88;
        }
    }
    ctx->pc = 0x150B1Cu;
    // 0x150b1c: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150b20: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x150b20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150b24: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x150b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x150b28: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x150b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x150b2c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150b30: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x150b30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x150b34: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x150b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150b38: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150b3c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150b40: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150B40u;
    SET_GPR_U32(ctx, 31, 0x150B48u);
    ctx->pc = 0x150B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150B40u;
            // 0x150b44: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B48u; }
        if (ctx->pc != 0x150B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150B48u; }
        if (ctx->pc != 0x150B48u) { return; }
    }
    ctx->pc = 0x150B48u;
label_150b48:
    // 0x150b48: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x150b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150b4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b54: 0x0  nop
    ctx->pc = 0x150b54u;
    // NOP
    // 0x150b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150b5c: 0x0  nop
    ctx->pc = 0x150b5cu;
    // NOP
    // 0x150b60: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150B60u;
    {
        const bool branch_taken_0x150b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150B60u;
            // 0x150b64: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b60) {
            ctx->pc = 0x150B88u;
            goto label_150b88;
        }
    }
    ctx->pc = 0x150B68u;
    // 0x150b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b6c: 0x0  nop
    ctx->pc = 0x150b6cu;
    // NOP
    // 0x150b70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150b70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150b74: 0x0  nop
    ctx->pc = 0x150b74u;
    // NOP
    // 0x150b78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150B78u;
    {
        const bool branch_taken_0x150b78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150b78) {
            ctx->pc = 0x150B88u;
            goto label_150b88;
        }
    }
    ctx->pc = 0x150B80u;
    // 0x150b80: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x150b80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    // 0x150b84: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150b88:
    // 0x150b88: 0x12c0000c  beqz        $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x150B88u;
    {
        const bool branch_taken_0x150b88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b88) {
            ctx->pc = 0x150BBCu;
            goto label_150bbc;
        }
    }
    ctx->pc = 0x150B90u;
    // 0x150b90: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x150B90u;
    {
        const bool branch_taken_0x150b90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b90) {
            ctx->pc = 0x150BBCu;
            goto label_150bbc;
        }
    }
    ctx->pc = 0x150B98u;
    // 0x150b98: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x150b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150b9c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150ba0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x150ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ba8: 0x0  nop
    ctx->pc = 0x150ba8u;
    // NOP
    // 0x150bac: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x150bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x150bb0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150bb4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150BB4u;
    {
        const bool branch_taken_0x150bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150BB4u;
            // 0x150bb8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150bb4) {
            ctx->pc = 0x150BE4u;
            goto label_150be4;
        }
    }
    ctx->pc = 0x150BBCu;
label_150bbc:
    // 0x150bbc: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BBCu;
    {
        const bool branch_taken_0x150bbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bbc) {
            ctx->pc = 0x150BD0u;
            goto label_150bd0;
        }
    }
    ctx->pc = 0x150BC4u;
    // 0x150bc4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x150bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150bc8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x150bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x150bcc: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_150bd0:
    // 0x150bd0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150BD0u;
    {
        const bool branch_taken_0x150bd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bd0) {
            ctx->pc = 0x150BE4u;
            goto label_150be4;
        }
    }
    ctx->pc = 0x150BD8u;
    // 0x150bd8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x150bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150bdc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150be0: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x150be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_150be4:
    // 0x150be4: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x150be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150be8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150bf0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150bf4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150bf8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x150bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150bfc: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x150bfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x150c00: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x150c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x150c04: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150c04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150c08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150c08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150c10: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x150c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x150c14: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x150c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c18: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x150c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x150c1c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x150c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c20: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x150c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x150c24: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x150c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150c28: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150c2c: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x150c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x150c30: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x150C30u;
    SET_GPR_U32(ctx, 31, 0x150C38u);
    ctx->pc = 0x150C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150C30u;
            // 0x150c34: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C38u; }
        if (ctx->pc != 0x150C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C38u; }
        if (ctx->pc != 0x150C38u) { return; }
    }
    ctx->pc = 0x150C38u;
label_150c38:
    // 0x150c38: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x150C38u;
    {
        const bool branch_taken_0x150c38 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C38u;
            // 0x150c3c: 0x27a20190  addiu       $v0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c38) {
            ctx->pc = 0x150CACu;
            goto label_150cac;
        }
    }
    ctx->pc = 0x150C40u;
    // 0x150c40: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150c44: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x150c44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150c48: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x150c4c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x150c50: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150c54: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x150c54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x150c58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150c5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150c60: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150c64: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150C64u;
    SET_GPR_U32(ctx, 31, 0x150C6Cu);
    ctx->pc = 0x150C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150C64u;
            // 0x150c68: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C6Cu; }
        if (ctx->pc != 0x150C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150C6Cu; }
        if (ctx->pc != 0x150C6Cu) { return; }
    }
    ctx->pc = 0x150C6Cu;
label_150c6c:
    // 0x150c6c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x150c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150c70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c78: 0x0  nop
    ctx->pc = 0x150c78u;
    // NOP
    // 0x150c7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150c80: 0x0  nop
    ctx->pc = 0x150c80u;
    // NOP
    // 0x150c84: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150C84u;
    {
        const bool branch_taken_0x150c84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150C84u;
            // 0x150c88: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150c84) {
            ctx->pc = 0x150CACu;
            goto label_150cac;
        }
    }
    ctx->pc = 0x150C8Cu;
    // 0x150c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c90: 0x0  nop
    ctx->pc = 0x150c90u;
    // NOP
    // 0x150c94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150c94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150c98: 0x0  nop
    ctx->pc = 0x150c98u;
    // NOP
    // 0x150c9c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150C9Cu;
    {
        const bool branch_taken_0x150c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150c9c) {
            ctx->pc = 0x150CACu;
            goto label_150cac;
        }
    }
    ctx->pc = 0x150CA4u;
    // 0x150ca4: 0x36100004  ori         $s0, $s0, 0x4
    ctx->pc = 0x150ca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
    // 0x150ca8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x150ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150cac:
    // 0x150cac: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x150cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x150cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150cb8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x150cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x150cbc: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x150cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150cc0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x150cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x150cc4: 0x27a90110  addiu       $t1, $sp, 0x110
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x150cc8: 0x27aa0190  addiu       $t2, $sp, 0x190
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x150ccc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150cd0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x150cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x150cd4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x150cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150cd8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x150cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x150cdc: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x150cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x150ce0: 0xc053b3c  jal         func_14ECF0
    ctx->pc = 0x150CE0u;
    SET_GPR_U32(ctx, 31, 0x150CE8u);
    ctx->pc = 0x150CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150CE0u;
            // 0x150ce4: 0xffb20000  sd          $s2, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF0u;
    if (runtime->hasFunction(0x14ECF0u)) {
        auto targetFn = runtime->lookupFunction(0x14ECF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE8u; }
        if (ctx->pc != 0x150CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipe__FP6CCPolyiPfPfiPiPA4_fii_0x14ecf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150CE8u; }
        if (ctx->pc != 0x150CE8u) { return; }
    }
    ctx->pc = 0x150CE8u;
label_150ce8:
    // 0x150ce8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x150CE8u;
    {
        const bool branch_taken_0x150ce8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150CE8u;
            // 0x150cec: 0x27a20190  addiu       $v0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ce8) {
            ctx->pc = 0x150D5Cu;
            goto label_150d5c;
        }
    }
    ctx->pc = 0x150CF0u;
    // 0x150cf0: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x150cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x150cf4: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x150cf4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150cf8: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x150cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x150cfc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x150cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x150d00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150d04: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x150d04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x150d08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x150d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x150d0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x150d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x150d10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x150d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x150d14: 0xc041be0  jal         func_106F80
    ctx->pc = 0x150D14u;
    SET_GPR_U32(ctx, 31, 0x150D1Cu);
    ctx->pc = 0x150D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150D14u;
            // 0x150d18: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D1Cu; }
        if (ctx->pc != 0x150D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x150D1Cu; }
        if (ctx->pc != 0x150D1Cu) { return; }
    }
    ctx->pc = 0x150D1Cu;
label_150d1c:
    // 0x150d1c: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x150d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150d20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d28: 0x0  nop
    ctx->pc = 0x150d28u;
    // NOP
    // 0x150d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x150d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150d30: 0x0  nop
    ctx->pc = 0x150d30u;
    // NOP
    // 0x150d34: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x150D34u;
    {
        const bool branch_taken_0x150d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150D34u;
            // 0x150d38: 0x3c02bf00  lui         $v0, 0xBF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d34) {
            ctx->pc = 0x150D5Cu;
            goto label_150d5c;
        }
    }
    ctx->pc = 0x150D3Cu;
    // 0x150d3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d40: 0x0  nop
    ctx->pc = 0x150d40u;
    // NOP
    // 0x150d44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x150d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150d48: 0x0  nop
    ctx->pc = 0x150d48u;
    // NOP
    // 0x150d4c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x150D4Cu;
    {
        const bool branch_taken_0x150d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x150d4c) {
            ctx->pc = 0x150D5Cu;
            goto label_150d5c;
        }
    }
    ctx->pc = 0x150D54u;
    // 0x150d54: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x150d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
    // 0x150d58: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150d5c:
    // 0x150d5c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x150D5Cu;
    {
        const bool branch_taken_0x150d5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d5c) {
            ctx->pc = 0x150D90u;
            goto label_150d90;
        }
    }
    ctx->pc = 0x150D64u;
    // 0x150d64: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x150D64u;
    {
        const bool branch_taken_0x150d64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d64) {
            ctx->pc = 0x150D90u;
            goto label_150d90;
        }
    }
    ctx->pc = 0x150D6Cu;
    // 0x150d6c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x150d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x150d70: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x150d74: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x150d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150d78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d7c: 0x0  nop
    ctx->pc = 0x150d7cu;
    // NOP
    // 0x150d80: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x150d80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x150d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150d88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x150D88u;
    {
        const bool branch_taken_0x150d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150D88u;
            // 0x150d8c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d88) {
            ctx->pc = 0x150DB8u;
            goto label_150db8;
        }
    }
    ctx->pc = 0x150D90u;
label_150d90:
    // 0x150d90: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x150D90u;
    {
        const bool branch_taken_0x150d90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x150d90) {
            ctx->pc = 0x150DA4u;
            goto label_150da4;
        }
    }
    ctx->pc = 0x150D98u;
    // 0x150d98: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x150d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150d9c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x150d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x150da0: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x150da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_150da4:
    // 0x150da4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x150DA4u;
    {
        const bool branch_taken_0x150da4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150DA4u;
            // 0x150da8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150da4) {
            ctx->pc = 0x150DBCu;
            goto label_150dbc;
        }
    }
    ctx->pc = 0x150DACu;
    // 0x150dac: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x150dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150db0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x150db0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x150db4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x150db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_150db8:
    // 0x150db8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_150dbc:
    // 0x150dbc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x150dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x150dc0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x150dc0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x150dc4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x150dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x150dc8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x150dc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x150dcc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x150dccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x150dd0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x150dd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x150dd4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x150dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x150dd8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x150dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150ddc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x150ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150de0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x150de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150de4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x150de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150de8: 0x3e00008  jr          $ra
    ctx->pc = 0x150DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150DE8u;
            // 0x150dec: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x150DF0u;
}
