#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__17CHealingEffectManFv
// Address: 0x1c1940 - 0x1c1a60
void Initialize__17CHealingEffectManFv_0x1c1940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__17CHealingEffectManFv_0x1c1940");
#endif

    switch (ctx->pc) {
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a28u: goto label_1c1a28;
        default: break;
    }

    ctx->pc = 0x1c1940u;

    // 0x1c1940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c1944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c1944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c194c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c194cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c1950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1954: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x1c1954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c1958: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1c1958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c195c: 0xa4800314  sh          $zero, 0x314($a0)
    ctx->pc = 0x1c195cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 788), (uint16_t)GPR_U32(ctx, 0));
label_1c1960:
    // 0x1c1960: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1c1964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1968: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C1968u;
    SET_GPR_U32(ctx, 31, 0x1C1970u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1970u; }
        if (ctx->pc != 0x1C1970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1970u; }
        if (ctx->pc != 0x1C1970u) { return; }
    }
    ctx->pc = 0x1C1970u;
label_1c1970:
    // 0x1c1970: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1c1970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1c1974: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c1974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1978: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c1978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c197c: 0x0  nop
    ctx->pc = 0x1c197cu;
    // NOP
    // 0x1c1980: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x1c1980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c1984: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c1984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1988: 0x0  nop
    ctx->pc = 0x1c1988u;
    // NOP
    // 0x1c198c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C198Cu;
    {
        const bool branch_taken_0x1c198c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C198Cu;
            // 0x1c1990: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c198c) {
            ctx->pc = 0x1C19ACu;
            goto label_1c19ac;
        }
    }
    ctx->pc = 0x1C1994u;
    // 0x1c1994: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c1994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c1998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c199c: 0x0  nop
    ctx->pc = 0x1c199cu;
    // NOP
    // 0x1c19a0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1c19a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1c19a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C19A4u;
    {
        const bool branch_taken_0x1c19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19A4u;
            // 0x1c19a8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19a4) {
            ctx->pc = 0x1C19C4u;
            goto label_1c19c4;
        }
    }
    ctx->pc = 0x1C19ACu;
label_1c19ac:
    // 0x1c19ac: 0x0  nop
    ctx->pc = 0x1c19acu;
    // NOP
    // 0x1c19b0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1c19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1c19b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c19b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c19b8: 0x0  nop
    ctx->pc = 0x1c19b8u;
    // NOP
    // 0x1c19bc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1c19bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c19c0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1c19c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_1c19c4:
    // 0x1c19c4: 0x0  nop
    ctx->pc = 0x1c19c4u;
    // NOP
    // 0x1c19c8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c19c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c19cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c19d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c19d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c19d4: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C19D4u;
    SET_GPR_U32(ctx, 31, 0x1C19DCu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19DCu; }
        if (ctx->pc != 0x1C19DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19DCu; }
        if (ctx->pc != 0x1C19DCu) { return; }
    }
    ctx->pc = 0x1C19DCu;
label_1c19dc:
    // 0x1c19dc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1c19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1c19e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c19e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c19e4: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C19E4u;
    SET_GPR_U32(ctx, 31, 0x1C19ECu);
    ctx->pc = 0x1C19E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19E4u;
            // 0x1c19e8: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19ECu; }
        if (ctx->pc != 0x1C19ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C19ECu; }
        if (ctx->pc != 0x1C19ECu) { return; }
    }
    ctx->pc = 0x1C19ECu;
label_1c19ec:
    // 0x1c19ec: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1c19f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c19f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c19f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c19f8: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C19F8u;
    SET_GPR_U32(ctx, 31, 0x1C1A00u);
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19F8u;
            // 0x1c19fc: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A00u; }
        if (ctx->pc != 0x1C1A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A00u; }
        if (ctx->pc != 0x1C1A00u) { return; }
    }
    ctx->pc = 0x1C1A00u;
label_1c1a00:
    // 0x1c1a00: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1c1a04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c1a08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1a0c: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C1A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A14u);
    ctx->pc = 0x1C1A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A0Cu;
            // 0x1c1a10: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A14u; }
        if (ctx->pc != 0x1C1A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A14u; }
        if (ctx->pc != 0x1C1A14u) { return; }
    }
    ctx->pc = 0x1C1A14u;
label_1c1a14:
    // 0x1c1a14: 0x3c023d86  lui         $v0, 0x3D86
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15750 << 16));
    // 0x1c1a18: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1c1a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1c1a1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c1a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1a20: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C1A20u;
    SET_GPR_U32(ctx, 31, 0x1C1A28u);
    ctx->pc = 0x1C1A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A20u;
            // 0x1c1a24: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A28u; }
        if (ctx->pc != 0x1C1A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1A28u; }
        if (ctx->pc != 0x1C1A28u) { return; }
    }
    ctx->pc = 0x1C1A28u;
label_1c1a28:
    // 0x1c1a28: 0x3c033d06  lui         $v1, 0x3D06
    ctx->pc = 0x1c1a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15622 << 16));
    // 0x1c1a2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c1a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c1a30: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x1c1a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1c1a34: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1c1a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1a38: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x1c1a38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1c1a3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c1a3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c1a40: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c1a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c1a44: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C1A44u;
    {
        const bool branch_taken_0x1c1a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A44u;
            // 0x1c1a48: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1a44) {
            ctx->pc = 0x1C1960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1960;
        }
    }
    ctx->pc = 0x1C1A4Cu;
    // 0x1c1a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1a50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c1a50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1a54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1a58: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1A58u;
            // 0x1c1a5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1A60u;
}
