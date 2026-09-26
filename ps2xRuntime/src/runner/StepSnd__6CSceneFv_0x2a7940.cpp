#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepSnd__6CSceneFv
// Address: 0x2a7940 - 0x2a7efc
void StepSnd__6CSceneFv_0x2a7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepSnd__6CSceneFv_0x2a7940");
#endif

    switch (ctx->pc) {
        case 0x2a7970u: goto label_2a7970;
        case 0x2a79e0u: goto label_2a79e0;
        case 0x2a79ecu: goto label_2a79ec;
        case 0x2a7a00u: goto label_2a7a00;
        case 0x2a7a0cu: goto label_2a7a0c;
        case 0x2a7a2cu: goto label_2a7a2c;
        case 0x2a7a3cu: goto label_2a7a3c;
        case 0x2a7a68u: goto label_2a7a68;
        case 0x2a7a80u: goto label_2a7a80;
        case 0x2a7a94u: goto label_2a7a94;
        case 0x2a7accu: goto label_2a7acc;
        case 0x2a7aecu: goto label_2a7aec;
        case 0x2a7b00u: goto label_2a7b00;
        case 0x2a7b1cu: goto label_2a7b1c;
        case 0x2a7b4cu: goto label_2a7b4c;
        case 0x2a7bf0u: goto label_2a7bf0;
        case 0x2a7c40u: goto label_2a7c40;
        case 0x2a7d88u: goto label_2a7d88;
        case 0x2a7df8u: goto label_2a7df8;
        case 0x2a7e4cu: goto label_2a7e4c;
        case 0x2a7e68u: goto label_2a7e68;
        case 0x2a7e98u: goto label_2a7e98;
        case 0x2a7ea8u: goto label_2a7ea8;
        case 0x2a7ed0u: goto label_2a7ed0;
        default: break;
    }

    ctx->pc = 0x2a7940u;

    // 0x2a7940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a7940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a7944: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a7944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a7948: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2a7948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2a794c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a794cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2a7950: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a7950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a7954: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a7954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7958: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a7958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a795c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a7960: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a7964: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a7964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a7968: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x2A7968u;
    SET_GPR_U32(ctx, 31, 0x2A7970u);
    ctx->pc = 0x2A796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7968u;
            // 0x2a796c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7970u; }
        if (ctx->pc != 0x2A7970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7970u; }
        if (ctx->pc != 0x2A7970u) { return; }
    }
    ctx->pc = 0x2A7970u;
label_2a7970:
    // 0x2a7970: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x2a7970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7974: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a7974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a7978: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x2a7978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a797c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x2a797cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7980: 0x0  nop
    ctx->pc = 0x2a7980u;
    // NOP
    // 0x2a7984: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2A7984u;
    {
        const bool branch_taken_0x2a7984 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7984u;
            // 0x2a7988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7984) {
            ctx->pc = 0x2A79ECu;
            goto label_2a79ec;
        }
    }
    ctx->pc = 0x2A798Cu;
    // 0x2a798c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a798cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a7990: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7998: 0x0  nop
    ctx->pc = 0x2a7998u;
    // NOP
    // 0x2a799c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a799cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a79a0: 0x0  nop
    ctx->pc = 0x2a79a0u;
    // NOP
    // 0x2a79a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A79A4u;
    {
        const bool branch_taken_0x2a79a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a79a4) {
            ctx->pc = 0x2A79B4u;
            goto label_2a79b4;
        }
    }
    ctx->pc = 0x2A79ACu;
    // 0x2a79ac: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2a79acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a79b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a79b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2a79b4:
    // 0x2a79b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a79b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a79b8: 0x0  nop
    ctx->pc = 0x2a79b8u;
    // NOP
    // 0x2a79bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a79bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a79c0: 0x0  nop
    ctx->pc = 0x2a79c0u;
    // NOP
    // 0x2a79c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A79C4u;
    {
        const bool branch_taken_0x2a79c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a79c4) {
            ctx->pc = 0x2A79D4u;
            goto label_2a79d4;
        }
    }
    ctx->pc = 0x2A79CCu;
    // 0x2a79cc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2a79ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2a79d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2a79d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2a79d4:
    // 0x2a79d4: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2a79d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2a79d8: 0xc0a9908  jal         func_2A6420
    ctx->pc = 0x2A79D8u;
    SET_GPR_U32(ctx, 31, 0x2A79E0u);
    ctx->pc = 0x2A79DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79D8u;
            // 0x2a79dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6420u;
    if (runtime->hasFunction(0x2A6420u)) {
        auto targetFn = runtime->lookupFunction(0x2A6420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79E0u; }
        if (ctx->pc != 0x2A79E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVolfBGM__6CSceneFv_0x2a6420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79E0u; }
        if (ctx->pc != 0x2A79E0u) { return; }
    }
    ctx->pc = 0x2A79E0u;
label_2a79e0:
    // 0x2a79e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a79e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a79e4: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x2A79E4u;
    SET_GPR_U32(ctx, 31, 0x2A79ECu);
    ctx->pc = 0x2A79E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79E4u;
            // 0x2a79e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79ECu; }
        if (ctx->pc != 0x2A79ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A79ECu; }
        if (ctx->pc != 0x2A79ECu) { return; }
    }
    ctx->pc = 0x2A79ECu;
label_2a79ec:
    // 0x2a79ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a79f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A79F0u;
    {
        const bool branch_taken_0x2a79f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A79F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79F0u;
            // 0x2a79f4: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a79f0) {
            ctx->pc = 0x2A7A10u;
            goto label_2a7a10;
        }
    }
    ctx->pc = 0x2A79F8u;
    // 0x2a79f8: 0xc0a9e1c  jal         func_2A7870
    ctx->pc = 0x2A79F8u;
    SET_GPR_U32(ctx, 31, 0x2A7A00u);
    ctx->pc = 0x2A79FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A79F8u;
            // 0x2a79fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7870u;
    if (runtime->hasFunction(0x2A7870u)) {
        auto targetFn = runtime->lookupFunction(0x2A7870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A00u; }
        if (ctx->pc != 0x2A7A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBgmVolf__6CSceneFv_0x2a7870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A00u; }
        if (ctx->pc != 0x2A7A00u) { return; }
    }
    ctx->pc = 0x2A7A00u;
label_2a7a00:
    // 0x2a7a00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a7a00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a7a04: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x2A7A04u;
    SET_GPR_U32(ctx, 31, 0x2A7A0Cu);
    ctx->pc = 0x2A7A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A04u;
            // 0x2a7a08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A0Cu; }
        if (ctx->pc != 0x2A7A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A0Cu; }
        if (ctx->pc != 0x2A7A0Cu) { return; }
    }
    ctx->pc = 0x2A7A0Cu;
label_2a7a0c:
    // 0x2a7a0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2a7a10:
    // 0x2a7a10: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7a10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7a14: 0x8c22a490  lw          $v0, -0x5B70($at)
    ctx->pc = 0x2a7a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943888)));
    // 0x2a7a18: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A7A18u;
    {
        const bool branch_taken_0x2a7a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A18u;
            // 0x2a7a1c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a18) {
            ctx->pc = 0x2A7A84u;
            goto label_2a7a84;
        }
    }
    ctx->pc = 0x2A7A20u;
    // 0x2a7a20: 0x8ea52e5c  lw          $a1, 0x2E5C($s5)
    ctx->pc = 0x2a7a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 11868)));
    // 0x2a7a24: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x2A7A24u;
    SET_GPR_U32(ctx, 31, 0x2A7A2Cu);
    ctx->pc = 0x2A7A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A24u;
            // 0x2a7a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A2Cu; }
        if (ctx->pc != 0x2A7A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A2Cu; }
        if (ctx->pc != 0x2A7A2Cu) { return; }
    }
    ctx->pc = 0x2A7A2Cu;
label_2a7a2c:
    // 0x2a7a2c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A7A2Cu;
    {
        const bool branch_taken_0x2a7a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A2Cu;
            // 0x2a7a30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a2c) {
            ctx->pc = 0x2A7A80u;
            goto label_2a7a80;
        }
    }
    ctx->pc = 0x2A7A34u;
    // 0x2a7a34: 0xc05835c  jal         func_160D70
    ctx->pc = 0x2A7A34u;
    SET_GPR_U32(ctx, 31, 0x2A7A3Cu);
    ctx->pc = 0x160D70u;
    if (runtime->hasFunction(0x160D70u)) {
        auto targetFn = runtime->lookupFunction(0x160D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A3Cu; }
        if (ctx->pc != 0x2A7A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeBand__4CMapFv_0x160d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A3Cu; }
        if (ctx->pc != 0x2A7A3Cu) { return; }
    }
    ctx->pc = 0x2A7A3Cu;
label_2a7a3c:
    // 0x2a7a3c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7a40: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7a40u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7a44: 0x8c24a494  lw          $a0, -0x5B6C($at)
    ctx->pc = 0x2a7a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943892)));
    // 0x2a7a48: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7a4c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2a7a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a7a50: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7a50u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7a54: 0x8c23a484  lw          $v1, -0x5B7C($at)
    ctx->pc = 0x2a7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943876)));
    // 0x2a7a58: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7A58u;
    {
        const bool branch_taken_0x2a7a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A7A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A58u;
            // 0x2a7a5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7a58) {
            ctx->pc = 0x2A7A80u;
            goto label_2a7a80;
        }
    }
    ctx->pc = 0x2A7A60u;
    // 0x2a7a60: 0xc0a99f0  jal         func_2A67C0
    ctx->pc = 0x2A7A60u;
    SET_GPR_U32(ctx, 31, 0x2A7A68u);
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A68u; }
        if (ctx->pc != 0x2A7A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A68u; }
        if (ctx->pc != 0x2A7A68u) { return; }
    }
    ctx->pc = 0x2A7A68u;
label_2a7a68:
    // 0x2a7a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7a6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7a70: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7a70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7a74: 0xc42ca48c  lwc1        $f12, -0x5B74($at)
    ctx->pc = 0x2a7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7a78: 0xc0a99a4  jal         func_2A6690
    ctx->pc = 0x2A7A78u;
    SET_GPR_U32(ctx, 31, 0x2A7A80u);
    ctx->pc = 0x2A7A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A78u;
            // 0x2a7a7c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6690u;
    if (runtime->hasFunction(0x2A6690u)) {
        auto targetFn = runtime->lookupFunction(0x2A6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A80u; }
        if (ctx->pc != 0x2A7A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayEnvBGM__6CSceneFif_0x2a6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A80u; }
        if (ctx->pc != 0x2A7A80u) { return; }
    }
    ctx->pc = 0x2A7A80u;
label_2a7a80:
    // 0x2a7a80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2a7a84:
    // 0x2a7a84: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7a84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7a88: 0xc42ca48c  lwc1        $f12, -0x5B74($at)
    ctx->pc = 0x2a7a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294943884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a7a8c: 0xc0a99c8  jal         func_2A6720
    ctx->pc = 0x2A7A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A7A94u);
    ctx->pc = 0x2A7A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7A8Cu;
            // 0x2a7a90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6720u;
    if (runtime->hasFunction(0x2A6720u)) {
        auto targetFn = runtime->lookupFunction(0x2A6720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A94u; }
        if (ctx->pc != 0x2A7A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvBGMVol__6CSceneFf_0x2a6720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7A94u; }
        if (ctx->pc != 0x2A7A94u) { return; }
    }
    ctx->pc = 0x2A7A94u;
label_2a7a94:
    // 0x2a7a94: 0x3402a030  ori         $v0, $zero, 0xA030
    ctx->pc = 0x2a7a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)41008);
    // 0x2a7a98: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7a9c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2a7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a7aa0: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7aa4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a7aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2a7aa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a7aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7aac: 0xac20a034  sw          $zero, -0x5FCC($at)
    ctx->pc = 0x2a7aacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942772), GPR_U32(ctx, 0));
    // 0x2a7ab0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a7ab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ab4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ab8: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7abc: 0xac20a038  sw          $zero, -0x5FC8($at)
    ctx->pc = 0x2a7abcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942776), GPR_U32(ctx, 0));
    // 0x2a7ac0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ac4: 0x2a10821  addu        $at, $s5, $at
    ctx->pc = 0x2a7ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
    // 0x2a7ac8: 0xac20a03c  sw          $zero, -0x5FC4($at)
    ctx->pc = 0x2a7ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942780), GPR_U32(ctx, 0));
label_2a7acc:
    // 0x2a7acc: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x2a7accu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2a7ad0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ad4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x2a7ad8: 0x8c319e00  lw          $s1, -0x6200($at)
    ctx->pc = 0x2a7ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942208)));
    // 0x2a7adc: 0x62000db  bltz        $s1, . + 4 + (0xDB << 2)
    ctx->pc = 0x2A7ADCu;
    {
        const bool branch_taken_0x2a7adc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2A7AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7ADCu;
            // 0x2a7ae0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7adc) {
            ctx->pc = 0x2A7E4Cu;
            goto label_2a7e4c;
        }
    }
    ctx->pc = 0x2A7AE4u;
    // 0x2a7ae4: 0xc0a9dec  jal         func_2A77B0
    ctx->pc = 0x2A7AE4u;
    SET_GPR_U32(ctx, 31, 0x2A7AECu);
    ctx->pc = 0x2A7AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AE4u;
            // 0x2a7ae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A77B0u;
    if (runtime->hasFunction(0x2A77B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A77B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7AECu; }
        if (ctx->pc != 0x2A7AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_se_play__6CSceneFi_0x2a77b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7AECu; }
        if (ctx->pc != 0x2A7AECu) { return; }
    }
    ctx->pc = 0x2A7AECu;
label_2a7aec:
    // 0x2a7aec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2a7aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7af0: 0x6c000d6  bltz        $s6, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2A7AF0u;
    {
        const bool branch_taken_0x2a7af0 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x2A7AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AF0u;
            // 0x2a7af4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7af0) {
            ctx->pc = 0x2A7E4Cu;
            goto label_2a7e4c;
        }
    }
    ctx->pc = 0x2A7AF8u;
    // 0x2a7af8: 0xc0a9a3c  jal         func_2A68F0
    ctx->pc = 0x2A7AF8u;
    SET_GPR_U32(ctx, 31, 0x2A7B00u);
    ctx->pc = 0x2A7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7AF8u;
            // 0x2a7afc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A68F0u;
    if (runtime->hasFunction(0x2A68F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B00u; }
        if (ctx->pc != 0x2A7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcID__6CSceneFi_0x2a68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B00u; }
        if (ctx->pc != 0x2A7B00u) { return; }
    }
    ctx->pc = 0x2A7B00u;
label_2a7b00:
    // 0x2a7b00: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7B00u;
    {
        const bool branch_taken_0x2a7b00 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B00u;
            // 0x2a7b04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b00) {
            ctx->pc = 0x2A7B1Cu;
            goto label_2a7b1c;
        }
    }
    ctx->pc = 0x2A7B08u;
    // 0x2a7b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a7b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7b14: 0xc063820  jal         func_18E080
    ctx->pc = 0x2A7B14u;
    SET_GPR_U32(ctx, 31, 0x2A7B1Cu);
    ctx->pc = 0x2A7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B14u;
            // 0x2a7b18: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (runtime->hasFunction(0x18E080u)) {
        auto targetFn = runtime->lookupFunction(0x18E080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B1Cu; }
        if (ctx->pc != 0x2A7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlayV__FUiiii_0x18e080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7B1Cu; }
        if (ctx->pc != 0x2A7B1Cu) { return; }
    }
    ctx->pc = 0x2A7B1Cu;
label_2a7b1c:
    // 0x2a7b1c: 0x0  nop
    ctx->pc = 0x2a7b1cu;
    // NOP
    // 0x2a7b20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7b24: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x2a7b24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x2a7b28: 0x8c269e04  lw          $a2, -0x61FC($at)
    ctx->pc = 0x2a7b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942212)));
    // 0x2a7b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a7b30: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x2a7b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a7b34: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x2A7B34u;
    {
        const bool branch_taken_0x2a7b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B34u;
            // 0x2a7b38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b34) {
            ctx->pc = 0x2A7C1Cu;
            goto label_2a7c1c;
        }
    }
    ctx->pc = 0x2A7B3Cu;
    // 0x2a7b3c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2a7b3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a7b40: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A7B40u;
    {
        const bool branch_taken_0x2a7b40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7B40u;
            // 0x2a7b44: 0x24c4fff8  addiu       $a0, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b40) {
            ctx->pc = 0x2A7BE4u;
            goto label_2a7be4;
        }
    }
    ctx->pc = 0x2A7B48u;
    // 0x2a7b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b4c:
    // 0x2a7b4c: 0x0  nop
    ctx->pc = 0x2a7b4cu;
    // NOP
    // 0x2a7b50: 0x2853821  addu        $a3, $s4, $a1
    ctx->pc = 0x2a7b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2a7b54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7b58: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a7b5c: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7b60: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2a7b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a7b64: 0xc4209e08  lwc1        $f0, -0x61F8($at)
    ctx->pc = 0x2a7b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7b68: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2a7b6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7b70: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7b74: 0xc4269e0c  lwc1        $f6, -0x61F4($at)
    ctx->pc = 0x2a7b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a7b78: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2a7b78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2a7b7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7b80: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7b80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7b84: 0xc4259e10  lwc1        $f5, -0x61F0($at)
    ctx->pc = 0x2a7b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7b88: 0x46066300  add.s       $f12, $f12, $f6
    ctx->pc = 0x2a7b88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[6]);
    // 0x2a7b8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7b90: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7b90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7b94: 0xc4249e14  lwc1        $f4, -0x61EC($at)
    ctx->pc = 0x2a7b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7b98: 0x46056300  add.s       $f12, $f12, $f5
    ctx->pc = 0x2a7b98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[5]);
    // 0x2a7b9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ba0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7ba4: 0xc4239e18  lwc1        $f3, -0x61E8($at)
    ctx->pc = 0x2a7ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7ba8: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x2a7ba8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2a7bac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7bb0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7bb4: 0xc4229e1c  lwc1        $f2, -0x61E4($at)
    ctx->pc = 0x2a7bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7bb8: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x2a7bb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x2a7bbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7bc0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7bc4: 0xc4219e20  lwc1        $f1, -0x61E0($at)
    ctx->pc = 0x2a7bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7bc8: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x2a7bc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2a7bcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7bd0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x2a7bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
    // 0x2a7bd4: 0xc4209e24  lwc1        $f0, -0x61DC($at)
    ctx->pc = 0x2a7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7bd8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2a7bd8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2a7bdc: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x2A7BDCu;
    {
        const bool branch_taken_0x2a7bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7BDCu;
            // 0x2a7be0: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bdc) {
            ctx->pc = 0x2A7B4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7b4c;
        }
    }
    ctx->pc = 0x2A7BE4u;
label_2a7be4:
    // 0x2a7be4: 0x0  nop
    ctx->pc = 0x2a7be4u;
    // NOP
    // 0x2a7be8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7BE8u;
    {
        const bool branch_taken_0x2a7be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7BE8u;
            // 0x2a7bec: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7be8) {
            ctx->pc = 0x2A7C0Cu;
            goto label_2a7c0c;
        }
    }
    ctx->pc = 0x2A7BF0u;
label_2a7bf0:
    // 0x2a7bf0: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2a7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a7bf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7bf8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2a7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2a7bfc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a7bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a7c00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a7c04: 0xc4209e08  lwc1        $f0, -0x61F8($at)
    ctx->pc = 0x2a7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c08: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2a7c08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2a7c0c:
    // 0x2a7c0c: 0x0  nop
    ctx->pc = 0x2a7c0cu;
    // NOP
    // 0x2a7c10: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2a7c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a7c14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2A7C14u;
    {
        const bool branch_taken_0x2a7c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7c14) {
            ctx->pc = 0x2A7BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7bf0;
        }
    }
    ctx->pc = 0x2A7C1Cu;
label_2a7c1c:
    // 0x2a7c1c: 0x0  nop
    ctx->pc = 0x2a7c1cu;
    // NOP
    // 0x2a7c20: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x2a7c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a7c24: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a7c24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7c28: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x2A7C28u;
    {
        const bool branch_taken_0x2a7c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7C28u;
            // 0x2a7c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c28) {
            ctx->pc = 0x2A7DC4u;
            goto label_2a7dc4;
        }
    }
    ctx->pc = 0x2A7C30u;
    // 0x2a7c30: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x2a7c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2a7c34: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A7C34u;
    {
        const bool branch_taken_0x2a7c34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7C34u;
            // 0x2a7c38: 0x24c3fff8  addiu       $v1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7c34) {
            ctx->pc = 0x2A7D7Cu;
            goto label_2a7d7c;
        }
    }
    ctx->pc = 0x2A7C3Cu;
    // 0x2a7c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a7c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c40:
    // 0x2a7c40: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x2a7c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2a7c44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c48: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2a7c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2a7c4c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c50: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2a7c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2a7c54: 0xc4239e48  lwc1        $f3, -0x61B8($at)
    ctx->pc = 0x2a7c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7c58: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2a7c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a7c5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c60: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c64: 0xc4229e08  lwc1        $f2, -0x61F8($at)
    ctx->pc = 0x2a7c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7c68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c6c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c70: 0xc4219e4c  lwc1        $f1, -0x61B4($at)
    ctx->pc = 0x2a7c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7c74: 0x46021b82  mul.s       $f14, $f3, $f2
    ctx->pc = 0x2a7c74u;
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a7c78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c7c: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c80: 0xc4209e0c  lwc1        $f0, -0x61F4($at)
    ctx->pc = 0x2a7c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7c84: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c88: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c8c: 0xc42b9e50  lwc1        $f11, -0x61B0($at)
    ctx->pc = 0x2a7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2a7c90: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2a7c90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7c94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7c98: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7c98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7c9c: 0xc42a9e10  lwc1        $f10, -0x61F0($at)
    ctx->pc = 0x2a7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a7ca0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ca4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7ca8: 0xc4299e54  lwc1        $f9, -0x61AC($at)
    ctx->pc = 0x2a7ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a7cac: 0x460a5a82  mul.s       $f10, $f11, $f10
    ctx->pc = 0x2a7cacu;
    ctx->f[10] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x2a7cb0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cb4: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7cb8: 0xc4289e14  lwc1        $f8, -0x61EC($at)
    ctx->pc = 0x2a7cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a7cbc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cc0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7cc4: 0xc4279e58  lwc1        $f7, -0x61A8($at)
    ctx->pc = 0x2a7cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a7cc8: 0x46084a02  mul.s       $f8, $f9, $f8
    ctx->pc = 0x2a7cc8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
    // 0x2a7ccc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cd0: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7cd4: 0xc4269e18  lwc1        $f6, -0x61E8($at)
    ctx->pc = 0x2a7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a7cd8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cdc: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7ce0: 0xc4259e5c  lwc1        $f5, -0x61A4($at)
    ctx->pc = 0x2a7ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a7ce4: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x2a7ce4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2a7ce8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cec: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7cf0: 0xc4249e1c  lwc1        $f4, -0x61E4($at)
    ctx->pc = 0x2a7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a7cf4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7cf8: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7cfc: 0xc4239e60  lwc1        $f3, -0x61A0($at)
    ctx->pc = 0x2a7cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a7d00: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2a7d00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2a7d04: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7d08: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7d08u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7d0c: 0xc4229e20  lwc1        $f2, -0x61E0($at)
    ctx->pc = 0x2a7d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7d10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7d14: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7d14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7d18: 0xc4219e64  lwc1        $f1, -0x619C($at)
    ctx->pc = 0x2a7d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7d1c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2a7d1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2a7d20: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7d24: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x2a7d24u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
    // 0x2a7d28: 0xc4209e24  lwc1        $f0, -0x61DC($at)
    ctx->pc = 0x2a7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7d2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7d30: 0x460c7043  div.s       $f1, $f14, $f12
    ctx->pc = 0x2a7d30u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[14], ctx->f[12]); }
    // 0x2a7d34: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d34u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d38: 0x460c6843  div.s       $f1, $f13, $f12
    ctx->pc = 0x2a7d38u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[13], ctx->f[12]); }
    // 0x2a7d3c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d40: 0x460c5043  div.s       $f1, $f10, $f12
    ctx->pc = 0x2a7d40u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[10], ctx->f[12]); }
    // 0x2a7d44: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d48: 0x460c4043  div.s       $f1, $f8, $f12
    ctx->pc = 0x2a7d48u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[8], ctx->f[12]); }
    // 0x2a7d4c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d50: 0x460c3043  div.s       $f1, $f6, $f12
    ctx->pc = 0x2a7d50u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[6], ctx->f[12]); }
    // 0x2a7d54: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d58: 0x460c2043  div.s       $f1, $f4, $f12
    ctx->pc = 0x2a7d58u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[4], ctx->f[12]); }
    // 0x2a7d5c: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d60: 0x460c1043  div.s       $f1, $f2, $f12
    ctx->pc = 0x2a7d60u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[12]); }
    // 0x2a7d64: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2a7d64u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2a7d68: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x2a7d68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x2a7d6c: 0x0  nop
    ctx->pc = 0x2a7d6cu;
    // NOP
    // 0x2a7d70: 0x0  nop
    ctx->pc = 0x2a7d70u;
    // NOP
    // 0x2a7d74: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x2A7D74u;
    {
        const bool branch_taken_0x2a7d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D74u;
            // 0x2a7d78: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d74) {
            ctx->pc = 0x2A7C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7c40;
        }
    }
    ctx->pc = 0x2A7D7Cu;
label_2a7d7c:
    // 0x2a7d7c: 0x0  nop
    ctx->pc = 0x2a7d7cu;
    // NOP
    // 0x2a7d80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A7D80u;
    {
        const bool branch_taken_0x2a7d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7D80u;
            // 0x2a7d84: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d80) {
            ctx->pc = 0x2A7DB8u;
            goto label_2a7db8;
        }
    }
    ctx->pc = 0x2A7D88u;
label_2a7d88:
    // 0x2a7d88: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x2a7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2a7d8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7d90: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2a7d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a7d94: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a7d94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a7d98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2a7d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a7d9c: 0xc4219e48  lwc1        $f1, -0x61B8($at)
    ctx->pc = 0x2a7d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a7da0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7da4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x2a7da4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2a7da8: 0xc4209e08  lwc1        $f0, -0x61F8($at)
    ctx->pc = 0x2a7da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294942216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7dac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a7dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a7db0: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2a7db0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2a7db4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2a7db4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2a7db8:
    // 0x2a7db8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2a7db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2a7dbc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2A7DBCu;
    {
        const bool branch_taken_0x2a7dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a7dbc) {
            ctx->pc = 0x2A7D88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7d88;
        }
    }
    ctx->pc = 0x2A7DC4u;
label_2a7dc4:
    // 0x2a7dc4: 0x0  nop
    ctx->pc = 0x2a7dc4u;
    // NOP
    // 0x2a7dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7dd0: 0x0  nop
    ctx->pc = 0x2a7dd0u;
    // NOP
    // 0x2a7dd4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x2a7dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7dd8: 0x0  nop
    ctx->pc = 0x2a7dd8u;
    // NOP
    // 0x2a7ddc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7DDCu;
    {
        const bool branch_taken_0x2a7ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7ddc) {
            ctx->pc = 0x2A7DE8u;
            goto label_2a7de8;
        }
    }
    ctx->pc = 0x2A7DE4u;
    // 0x2a7de4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a7de4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2a7de8:
    // 0x2a7de8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a7decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7df0: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x2A7DF0u;
    SET_GPR_U32(ctx, 31, 0x2A7DF8u);
    ctx->pc = 0x2A7DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7DF0u;
            // 0x2a7df4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7DF8u; }
        if (ctx->pc != 0x2A7DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7DF8u; }
        if (ctx->pc != 0x2A7DF8u) { return; }
    }
    ctx->pc = 0x2A7DF8u;
label_2a7df8:
    // 0x2a7df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7e00: 0x0  nop
    ctx->pc = 0x2a7e00u;
    // NOP
    // 0x2a7e04: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2a7e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7e08: 0x0  nop
    ctx->pc = 0x2a7e08u;
    // NOP
    // 0x2a7e0c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7E0Cu;
    {
        const bool branch_taken_0x2a7e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7e0c) {
            ctx->pc = 0x2A7E18u;
            goto label_2a7e18;
        }
    }
    ctx->pc = 0x2A7E14u;
    // 0x2a7e14: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a7e14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a7e18:
    // 0x2a7e18: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2a7e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2a7e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a7e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7e20: 0x0  nop
    ctx->pc = 0x2a7e20u;
    // NOP
    // 0x2a7e24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a7e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7e28: 0x0  nop
    ctx->pc = 0x2a7e28u;
    // NOP
    // 0x2a7e2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7E2Cu;
    {
        const bool branch_taken_0x2a7e2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a7e2c) {
            ctx->pc = 0x2A7E38u;
            goto label_2a7e38;
        }
    }
    ctx->pc = 0x2A7E34u;
    // 0x2a7e34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a7e34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2a7e38:
    // 0x2a7e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a7e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a7e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a7e40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a7e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e44: 0xc063b58  jal         func_18ED60
    ctx->pc = 0x2A7E44u;
    SET_GPR_U32(ctx, 31, 0x2A7E4Cu);
    ctx->pc = 0x2A7E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E44u;
            // 0x2a7e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ED60u;
    if (runtime->hasFunction(0x18ED60u)) {
        auto targetFn = runtime->lookupFunction(0x18ED60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E4Cu; }
        if (ctx->pc != 0x2A7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSePanf__FUiifi_0x18ed60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E4Cu; }
        if (ctx->pc != 0x2A7E4Cu) { return; }
    }
    ctx->pc = 0x2A7E4Cu;
label_2a7e4c:
    // 0x2a7e4c: 0x0  nop
    ctx->pc = 0x2a7e4cu;
    // NOP
    // 0x2a7e50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a7e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a7e54: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2a7e54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7e58: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
    ctx->pc = 0x2A7E58u;
    {
        const bool branch_taken_0x2a7e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E58u;
            // 0x2a7e5c: 0x26730088  addiu       $s3, $s3, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e58) {
            ctx->pc = 0x2A7ACCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7acc;
        }
    }
    ctx->pc = 0x2A7E60u;
    // 0x2a7e60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a7e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7e64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a7e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7e68:
    // 0x2a7e68: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x2a7e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2a7e6c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7e70: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2a7e70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a7e74: 0x8c22a030  lw          $v0, -0x5FD0($at)
    ctx->pc = 0x2a7e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942768)));
    // 0x2a7e78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A7E78u;
    {
        const bool branch_taken_0x2a7e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E78u;
            // 0x2a7e7c: 0x3401a020  ori         $at, $zero, 0xA020 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40992);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e78) {
            ctx->pc = 0x2A7EB0u;
            goto label_2a7eb0;
        }
    }
    ctx->pc = 0x2A7E80u;
    // 0x2a7e80: 0x619021  addu        $s2, $v1, $at
    ctx->pc = 0x2a7e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2a7e84: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a7e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a7e88: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7E88u;
    {
        const bool branch_taken_0x2a7e88 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2A7E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7E88u;
            // 0x2a7e8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7e88) {
            ctx->pc = 0x2A7EB0u;
            goto label_2a7eb0;
        }
    }
    ctx->pc = 0x2A7E90u;
    // 0x2a7e90: 0xc0a9a3c  jal         func_2A68F0
    ctx->pc = 0x2A7E90u;
    SET_GPR_U32(ctx, 31, 0x2A7E98u);
    ctx->pc = 0x2A68F0u;
    if (runtime->hasFunction(0x2A68F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A68F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E98u; }
        if (ctx->pc != 0x2A7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSeSrcID__6CSceneFi_0x2a68f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7E98u; }
        if (ctx->pc != 0x2A7E98u) { return; }
    }
    ctx->pc = 0x2A7E98u;
label_2a7e98:
    // 0x2a7e98: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x2a7e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a7e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a7e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7ea0: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x2A7EA0u;
    SET_GPR_U32(ctx, 31, 0x2A7EA8u);
    ctx->pc = 0x2A7EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EA0u;
            // 0x2a7ea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7EA8u; }
        if (ctx->pc != 0x2A7EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7EA8u; }
        if (ctx->pc != 0x2A7EA8u) { return; }
    }
    ctx->pc = 0x2A7EA8u;
label_2a7ea8:
    // 0x2a7ea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7eac: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2a7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2a7eb0:
    // 0x2a7eb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2a7eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2a7eb4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2a7eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2a7eb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2A7EB8u;
    {
        const bool branch_taken_0x2a7eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EB8u;
            // 0x2a7ebc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7eb8) {
            ctx->pc = 0x2A7E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a7e68;
        }
    }
    ctx->pc = 0x2A7EC0u;
    // 0x2a7ec0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2a7ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2a7ec4: 0x34210540  ori         $at, $at, 0x540
    ctx->pc = 0x2a7ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1344);
    // 0x2a7ec8: 0xc0631e4  jal         func_18C790
    ctx->pc = 0x2A7EC8u;
    SET_GPR_U32(ctx, 31, 0x2A7ED0u);
    ctx->pc = 0x2A7ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EC8u;
            // 0x2a7ecc: 0x2a12021  addu        $a0, $s5, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C790u;
    if (runtime->hasFunction(0x18C790u)) {
        auto targetFn = runtime->lookupFunction(0x18C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7ED0u; }
        if (ctx->pc != 0x2A7ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CLoopSeMngrFv_0x18c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A7ED0u; }
        if (ctx->pc != 0x2A7ED0u) { return; }
    }
    ctx->pc = 0x2A7ED0u;
label_2a7ed0:
    // 0x2a7ed0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a7ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a7ed4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7ed8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2a7ed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a7edc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a7edcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a7ee0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a7ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a7ee4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a7ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7ee8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a7ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7eec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a7eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a7ef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a7ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A7EF4u;
            // 0x2a7ef8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A7EFCu;
}
