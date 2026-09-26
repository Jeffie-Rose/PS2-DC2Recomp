#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFootPoly__FPffP6CCPolyPfP6CCPolyii
// Address: 0x14fc00 - 0x14ff30
void GetFootPoly__FPffP6CCPolyPfP6CCPolyii_0x14fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFootPoly__FPffP6CCPolyPfP6CCPolyii_0x14fc00");
#endif

    switch (ctx->pc) {
        case 0x14fc58u: goto label_14fc58;
        case 0x14fc64u: goto label_14fc64;
        case 0x14fca0u: goto label_14fca0;
        case 0x14fcd0u: goto label_14fcd0;
        case 0x14fcf4u: goto label_14fcf4;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe70u: goto label_14fe70;
        default: break;
    }

    ctx->pc = 0x14fc00u;

    // 0x14fc00: 0x27bdfa50  addiu       $sp, $sp, -0x5B0
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965840));
    // 0x14fc04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x14fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x14fc08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x14fc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x14fc0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x14fc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x14fc10: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x14fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x14fc14: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x14fc14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x14fc1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14fc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x14fc20: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14fc20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x14fc28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14fc2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14fc30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14fc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14fc38: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x14fc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14fc3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14fc40: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x14fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14fc44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x14fc48: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x14fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x14fc4c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x14fc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14fc50: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14FC50u;
    SET_GPR_U32(ctx, 31, 0x14FC58u);
    ctx->pc = 0x14FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC50u;
            // 0x14fc54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC58u; }
        if (ctx->pc != 0x14FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC58u; }
        if (ctx->pc != 0x14FC58u) { return; }
    }
    ctx->pc = 0x14FC58u;
label_14fc58:
    // 0x14fc58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14fc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc5c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14FC5Cu;
    SET_GPR_U32(ctx, 31, 0x14FC64u);
    ctx->pc = 0x14FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC5Cu;
            // 0x14fc60: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC64u; }
        if (ctx->pc != 0x14FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC64u; }
        if (ctx->pc != 0x14FC64u) { return; }
    }
    ctx->pc = 0x14FC64u;
label_14fc64:
    // 0x14fc64: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x14fc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fc68: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x14fc6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14fc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc70: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x14fc70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc74: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x14fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x14fc78: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x14fc78u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    // 0x14fc7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14fc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fc80: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x14fc84: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x14fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14fc88: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x14fc88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14fc8c: 0x27a90190  addiu       $t1, $sp, 0x190
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x14fc90: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x14fc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fc94: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x14fc94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x14fc98: 0xc053a08  jal         func_14E820
    ctx->pc = 0x14FC98u;
    SET_GPR_U32(ctx, 31, 0x14FCA0u);
    ctx->pc = 0x14FC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC98u;
            // 0x14fc9c: 0xe7a00184  swc1        $f0, 0x184($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E820u;
    if (runtime->hasFunction(0x14E820u)) {
        auto targetFn = runtime->lookupFunction(0x14E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCA0u; }
        if (ctx->pc != 0x14FCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHitsPipeY__FP6CCPolyiPffiPiPA4_fii_0x14e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCA0u; }
        if (ctx->pc != 0x14FCA0u) { return; }
    }
    ctx->pc = 0x14FCA0u;
label_14fca0:
    // 0x14fca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14fca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fca4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FCA4u;
    {
        const bool branch_taken_0x14fca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCA4u;
            // 0x14fca8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fca4) {
            ctx->pc = 0x14FCB4u;
            goto label_14fcb4;
        }
    }
    ctx->pc = 0x14FCACu;
    // 0x14fcac: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x14FCACu;
    {
        const bool branch_taken_0x14fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCACu;
            // 0x14fcb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcac) {
            ctx->pc = 0x14FEFCu;
            goto label_14fefc;
        }
    }
    ctx->pc = 0x14FCB4u;
label_14fcb4:
    // 0x14fcb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14fcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14fcb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14fcbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcc0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x14fcc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcc4: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x14FCC4u;
    {
        const bool branch_taken_0x14fcc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCC4u;
            // 0x14fcc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fcc4) {
            ctx->pc = 0x14FE60u;
            goto label_14fe60;
        }
    }
    ctx->pc = 0x14FCCCu;
    // 0x14fccc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fcd0:
    // 0x14fcd0: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x14fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x14fcd4: 0x27a405a0  addiu       $a0, $sp, 0x5A0
    ctx->pc = 0x14fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1440));
    // 0x14fcd8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x14fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x14fcdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fce0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fce4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fce8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x14fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x14fcec: 0xc041be0  jal         func_106F80
    ctx->pc = 0x14FCECu;
    SET_GPR_U32(ctx, 31, 0x14FCF4u);
    ctx->pc = 0x14FCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCECu;
            // 0x14fcf0: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF4u; }
        if (ctx->pc != 0x14FCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF4u; }
        if (ctx->pc != 0x14FCF4u) { return; }
    }
    ctx->pc = 0x14FCF4u;
label_14fcf4:
    // 0x14fcf4: 0xc7a105a4  lwc1        $f1, 0x5A4($sp)
    ctx->pc = 0x14fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14fcf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcfc: 0x0  nop
    ctx->pc = 0x14fcfcu;
    // NOP
    // 0x14fd00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd04: 0x0  nop
    ctx->pc = 0x14fd04u;
    // NOP
    // 0x14fd08: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x14FD08u;
    {
        const bool branch_taken_0x14fd08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fd08) {
            ctx->pc = 0x14FD14u;
            goto label_14fd14;
        }
    }
    ctx->pc = 0x14FD10u;
    // 0x14fd10: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14fd10u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_14fd14:
    // 0x14fd14: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x14fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x14fd18: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x14fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x14fd1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd20: 0x0  nop
    ctx->pc = 0x14fd20u;
    // NOP
    // 0x14fd24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14fd24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fd28: 0x0  nop
    ctx->pc = 0x14fd28u;
    // NOP
    // 0x14fd2c: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x14FD2Cu;
    {
        const bool branch_taken_0x14fd2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14FD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD2Cu;
            // 0x14fd30: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd2c) {
            ctx->pc = 0x14FE50u;
            goto label_14fe50;
        }
    }
    ctx->pc = 0x14FD34u;
    // 0x14fd34: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x14fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14fd38: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x14fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x14fd3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14fd40: 0x8c6300f0  lw          $v1, 0xF0($v1)
    ctx->pc = 0x14fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x14fd44: 0x24450190  addiu       $a1, $v0, 0x190
    ctx->pc = 0x14fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x14fd48: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x14fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fd4c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fd54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fd58: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x14fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x14fd5c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x14fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fd60: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x14fd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd64: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x14fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd68: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x14fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd6c: 0xe6a30000  swc1        $f3, 0x0($s5)
    ctx->pc = 0x14fd6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x14fd70: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x14fd70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x14fd74: 0xe6a10008  swc1        $f1, 0x8($s5)
    ctx->pc = 0x14fd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x14fd78: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x14fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x14fd7c: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x14fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fd80: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x14fd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd84: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x14fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd88: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x14fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd8c: 0xe6a30010  swc1        $f3, 0x10($s5)
    ctx->pc = 0x14fd8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x14fd90: 0xe6a20014  swc1        $f2, 0x14($s5)
    ctx->pc = 0x14fd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x14fd94: 0xe6a10018  swc1        $f1, 0x18($s5)
    ctx->pc = 0x14fd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x14fd98: 0xe6a0001c  swc1        $f0, 0x1C($s5)
    ctx->pc = 0x14fd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
    // 0x14fd9c: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x14fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fda0: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x14fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fda4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x14fda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fda8: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x14fda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fdac: 0xe6a30020  swc1        $f3, 0x20($s5)
    ctx->pc = 0x14fdacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x14fdb0: 0xe6a20024  swc1        $f2, 0x24($s5)
    ctx->pc = 0x14fdb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x14fdb4: 0xe6a10028  swc1        $f1, 0x28($s5)
    ctx->pc = 0x14fdb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x14fdb8: 0xe6a0002c  swc1        $f0, 0x2C($s5)
    ctx->pc = 0x14fdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 44), bits); }
    // 0x14fdbc: 0xc4430030  lwc1        $f3, 0x30($v0)
    ctx->pc = 0x14fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fdc0: 0xc4420034  lwc1        $f2, 0x34($v0)
    ctx->pc = 0x14fdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fdc4: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x14fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fdc8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x14fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fdcc: 0xe6a30030  swc1        $f3, 0x30($s5)
    ctx->pc = 0x14fdccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x14fdd0: 0xe6a20034  swc1        $f2, 0x34($s5)
    ctx->pc = 0x14fdd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
    // 0x14fdd4: 0xe6a10038  swc1        $f1, 0x38($s5)
    ctx->pc = 0x14fdd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 56), bits); }
    // 0x14fdd8: 0xe6a0003c  swc1        $f0, 0x3C($s5)
    ctx->pc = 0x14fdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 60), bits); }
    // 0x14fddc: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x14fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fde0: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x14fde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fde4: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x14fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fde8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x14fde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fdec: 0xe6a30040  swc1        $f3, 0x40($s5)
    ctx->pc = 0x14fdecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x14fdf0: 0xe6a20044  swc1        $f2, 0x44($s5)
    ctx->pc = 0x14fdf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 68), bits); }
    // 0x14fdf4: 0xe6a10048  swc1        $f1, 0x48($s5)
    ctx->pc = 0x14fdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x14fdf8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x14FDF8u;
    SET_GPR_U32(ctx, 31, 0x14FE00u);
    ctx->pc = 0x14FDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FDF8u;
            // 0x14fdfc: 0xe6a0004c  swc1        $f0, 0x4C($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE00u; }
        if (ctx->pc != 0x14FE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FE00u; }
        if (ctx->pc != 0x14FE00u) { return; }
    }
    ctx->pc = 0x14FE00u;
label_14fe00:
    // 0x14fe00: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x14fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe04: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fe08: 0x27a3059c  addiu       $v1, $sp, 0x59C
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
    // 0x14fe0c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x14fe0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fe10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x14fe10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x14fe14: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x14fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe18: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x14fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14fe1c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14fe1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14fe20: 0x86b20040  lh          $s2, 0x40($s5)
    ctx->pc = 0x14fe20u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x14fe24: 0x86b30042  lh          $s3, 0x42($s5)
    ctx->pc = 0x14fe24u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 66)));
    // 0x14fe28: 0x86b40044  lh          $s4, 0x44($s5)
    ctx->pc = 0x14fe28u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x14fe2c: 0x86a20046  lh          $v0, 0x46($s5)
    ctx->pc = 0x14fe2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 70)));
    // 0x14fe30: 0xa7a200b0  sh          $v0, 0xB0($sp)
    ctx->pc = 0x14fe30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe34: 0x96a20048  lhu         $v0, 0x48($s5)
    ctx->pc = 0x14fe34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x14fe38: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x14fe38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe3c: 0x86a2004a  lh          $v0, 0x4A($s5)
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 74)));
    // 0x14fe40: 0xa7a200d0  sh          $v0, 0xD0($sp)
    ctx->pc = 0x14fe40u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 208), (uint16_t)GPR_U32(ctx, 2));
    // 0x14fe44: 0xc6a0004c  lwc1        $f0, 0x4C($s5)
    ctx->pc = 0x14fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fe48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FE48u;
    {
        const bool branch_taken_0x14fe48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE48u;
            // 0x14fe4c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe48) {
            ctx->pc = 0x14FE60u;
            goto label_14fe60;
        }
    }
    ctx->pc = 0x14FE50u;
label_14fe50:
    // 0x14fe50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14fe50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14fe54: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x14fe54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14fe58: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x14FE58u;
    {
        const bool branch_taken_0x14fe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE58u;
            // 0x14fe5c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe58) {
            ctx->pc = 0x14FCD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fcd0;
        }
    }
    ctx->pc = 0x14FE60u;
label_14fe60:
    // 0x14fe60: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14fe64: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x14FE64u;
    {
        const bool branch_taken_0x14fe64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE64u;
            // 0x14fe68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe64) {
            ctx->pc = 0x14FEC8u;
            goto label_14fec8;
        }
    }
    ctx->pc = 0x14FE6Cu;
    // 0x14fe6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14fe70:
    // 0x14fe70: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x14fe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x14fe74: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x14fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x14fe78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fe7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fe80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x14fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fe84: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x14fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x14fe88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FE88u;
    {
        const bool branch_taken_0x14fe88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FE88u;
            // 0x14fe8c: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe88) {
            ctx->pc = 0x14FE98u;
            goto label_14fe98;
        }
    }
    ctx->pc = 0x14FE90u;
    // 0x14fe90: 0x84520000  lh          $s2, 0x0($v0)
    ctx->pc = 0x14fe90u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fe94: 0x0  nop
    ctx->pc = 0x14fe94u;
    // NOP
label_14fe98:
    // 0x14fe98: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FE98u;
    {
        const bool branch_taken_0x14fe98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fe98) {
            ctx->pc = 0x14FEA8u;
            goto label_14fea8;
        }
    }
    ctx->pc = 0x14FEA0u;
    // 0x14fea0: 0x84530002  lh          $s3, 0x2($v0)
    ctx->pc = 0x14fea0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x14fea4: 0x0  nop
    ctx->pc = 0x14fea4u;
    // NOP
label_14fea8:
    // 0x14fea8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FEA8u;
    {
        const bool branch_taken_0x14fea8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fea8) {
            ctx->pc = 0x14FEB8u;
            goto label_14feb8;
        }
    }
    ctx->pc = 0x14FEB0u;
    // 0x14feb0: 0x84540004  lh          $s4, 0x4($v0)
    ctx->pc = 0x14feb0u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14feb4: 0x0  nop
    ctx->pc = 0x14feb4u;
    // NOP
label_14feb8:
    // 0x14feb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14feb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14febc: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x14febcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x14fec0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14FEC0u;
    {
        const bool branch_taken_0x14fec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FEC0u;
            // 0x14fec4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fec0) {
            ctx->pc = 0x14FE70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14fe70;
        }
    }
    ctx->pc = 0x14FEC8u;
label_14fec8:
    // 0x14fec8: 0xa6b20040  sh          $s2, 0x40($s5)
    ctx->pc = 0x14fec8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 18));
    // 0x14fecc: 0xa6b30042  sh          $s3, 0x42($s5)
    ctx->pc = 0x14feccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x14fed0: 0x27a4059c  addiu       $a0, $sp, 0x59C
    ctx->pc = 0x14fed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1436));
    // 0x14fed4: 0xa6b40044  sh          $s4, 0x44($s5)
    ctx->pc = 0x14fed4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 68), (uint16_t)GPR_U32(ctx, 20));
    // 0x14fed8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x14fed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fedc: 0x87a300b0  lh          $v1, 0xB0($sp)
    ctx->pc = 0x14fedcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14fee0: 0xa6a30046  sh          $v1, 0x46($s5)
    ctx->pc = 0x14fee0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x14fee4: 0x97a300c0  lhu         $v1, 0xC0($sp)
    ctx->pc = 0x14fee4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14fee8: 0xa6a30048  sh          $v1, 0x48($s5)
    ctx->pc = 0x14fee8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 3));
    // 0x14feec: 0x87a300d0  lh          $v1, 0xD0($sp)
    ctx->pc = 0x14feecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14fef0: 0xa6a3004a  sh          $v1, 0x4A($s5)
    ctx->pc = 0x14fef0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 3));
    // 0x14fef4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x14fef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fef8: 0xe6a0004c  swc1        $f0, 0x4C($s5)
    ctx->pc = 0x14fef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 76), bits); }
label_14fefc:
    // 0x14fefc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x14fefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14ff00: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ff04: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x14ff04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14ff08: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x14ff08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14ff0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x14ff0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ff10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14ff10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ff14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14ff14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ff18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14ff18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ff1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ff1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ff20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ff20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ff24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ff24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ff28: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FF28u;
            // 0x14ff2c: 0x27bd05b0  addiu       $sp, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14FF30u;
}
