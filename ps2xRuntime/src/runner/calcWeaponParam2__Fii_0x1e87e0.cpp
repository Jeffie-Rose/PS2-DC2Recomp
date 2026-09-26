#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: calcWeaponParam2__Fii
// Address: 0x1e87e0 - 0x1e8978
void calcWeaponParam2__Fii_0x1e87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("calcWeaponParam2__Fii_0x1e87e0");
#endif

    switch (ctx->pc) {
        case 0x1e8810u: goto label_1e8810;
        case 0x1e8824u: goto label_1e8824;
        case 0x1e8848u: goto label_1e8848;
        case 0x1e8860u: goto label_1e8860;
        case 0x1e8884u: goto label_1e8884;
        case 0x1e8898u: goto label_1e8898;
        case 0x1e88a4u: goto label_1e88a4;
        case 0x1e88acu: goto label_1e88ac;
        case 0x1e890cu: goto label_1e890c;
        case 0x1e8950u: goto label_1e8950;
        default: break;
    }

    ctx->pc = 0x1e87e0u;

    // 0x1e87e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e87e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e87e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e87e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e87e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e87ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e87f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e87f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e87f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e87fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e87fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8804: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e8804u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8808: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E8808u;
    SET_GPR_U32(ctx, 31, 0x1E8810u);
    ctx->pc = 0x1E880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8808u;
            // 0x1e880c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8810u; }
        if (ctx->pc != 0x1E8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8810u; }
        if (ctx->pc != 0x1E8810u) { return; }
    }
    ctx->pc = 0x1E8810u;
label_1e8810:
    // 0x1e8810: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e881c: 0xc067d20  jal         func_19F480
    ctx->pc = 0x1E881Cu;
    SET_GPR_U32(ctx, 31, 0x1E8824u);
    ctx->pc = 0x1E8820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E881Cu;
            // 0x1e8820: 0x26130034  addiu       $s3, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F480u;
    if (runtime->hasFunction(0x19F480u)) {
        auto targetFn = runtime->lookupFunction(0x19F480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8824u; }
        if (ctx->pc != 0x1E8824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpecialStatus__16CBattleCharaInfoFi_0x19f480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8824u; }
        if (ctx->pc != 0x1E8824u) { return; }
    }
    ctx->pc = 0x1E8824u;
label_1e8824:
    // 0x1e8824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e8824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8828: 0x12830004  beq         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8828u;
    {
        const bool branch_taken_0x1e8828 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E882Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8828u;
            // 0x1e882c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8828) {
            ctx->pc = 0x1E883Cu;
            goto label_1e883c;
        }
    }
    ctx->pc = 0x1E8830u;
    // 0x1e8830: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e8830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e8834: 0x16830046  bne         $s4, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E8834u;
    {
        const bool branch_taken_0x1e8834 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e8834) {
            ctx->pc = 0x1E8950u;
            goto label_1e8950;
        }
    }
    ctx->pc = 0x1E883Cu;
label_1e883c:
    // 0x1e883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8840: 0xc067e98  jal         func_19FA60
    ctx->pc = 0x1E8840u;
    SET_GPR_U32(ctx, 31, 0x1E8848u);
    ctx->pc = 0x1E8844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8840u;
            // 0x1e8844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA60u;
    if (runtime->hasFunction(0x19FA60u)) {
        auto targetFn = runtime->lookupFunction(0x19FA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8848u; }
        if (ctx->pc != 0x1E8848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWhpNowVol__16CBattleCharaInfoFi_0x19fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8848u; }
        if (ctx->pc != 0x1E8848u) { return; }
    }
    ctx->pc = 0x1E8848u;
label_1e8848:
    // 0x1e8848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e884c: 0x8664001e  lh          $a0, 0x1E($s3)
    ctx->pc = 0x1e884cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 30)));
    // 0x1e8850: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8854: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1e8854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e8858: 0xc0a215c  jal         func_288570
    ctx->pc = 0x1E8858u;
    SET_GPR_U32(ctx, 31, 0x1E8860u);
    ctx->pc = 0x1E885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8858u;
            // 0x1e885c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8860u; }
        if (ctx->pc != 0x1E8860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8860u; }
        if (ctx->pc != 0x1E8860u) { return; }
    }
    ctx->pc = 0x1E8860u;
label_1e8860:
    // 0x1e8860: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
    // 0x1e8864: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e8864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54001);
    // 0x1e8868: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e8868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25165);
    // 0x1e886c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1e8870: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e8874: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e8874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43516);
    // 0x1e8878: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e8878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1e887c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1E887Cu;
    SET_GPR_U32(ctx, 31, 0x1E8884u);
    ctx->pc = 0x1E8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E887Cu;
            // 0x1e8880: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8884u; }
        if (ctx->pc != 0x1E8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8884u; }
        if (ctx->pc != 0x1E8884u) { return; }
    }
    ctx->pc = 0x1E8884u;
label_1e8884:
    // 0x1e8884: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e8884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8888: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e888c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e888cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8890: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1E8890u;
    SET_GPR_U32(ctx, 31, 0x1E8898u);
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8898u; }
        if (ctx->pc != 0x1E8898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8898u; }
        if (ctx->pc != 0x1E8898u) { return; }
    }
    ctx->pc = 0x1E8898u;
label_1e8898:
    // 0x1e8898: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e8898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e889c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1E889Cu;
    SET_GPR_U32(ctx, 31, 0x1E88A4u);
    ctx->pc = 0x1E88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E889Cu;
            // 0x1e88a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88A4u; }
        if (ctx->pc != 0x1E88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88A4u; }
        if (ctx->pc != 0x1E88A4u) { return; }
    }
    ctx->pc = 0x1E88A4u;
label_1e88a4:
    // 0x1e88a4: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x1E88A4u;
    SET_GPR_U32(ctx, 31, 0x1E88ACu);
    ctx->pc = 0x1E88A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88A4u;
            // 0x1e88a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88ACu; }
        if (ctx->pc != 0x1E88ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E88ACu; }
        if (ctx->pc != 0x1E88ACu) { return; }
    }
    ctx->pc = 0x1E88ACu;
label_1e88ac:
    // 0x1e88ac: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1e88acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x1e88b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E88B0u;
    {
        const bool branch_taken_0x1e88b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88B0u;
            // 0x1e88b4: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88b0) {
            ctx->pc = 0x1E88CCu;
            goto label_1e88cc;
        }
    }
    ctx->pc = 0x1E88B8u;
    // 0x1e88b8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1e88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x1e88bc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1e88bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1e88c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e88c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e88c4: 0x0  nop
    ctx->pc = 0x1e88c4u;
    // NOP
    // 0x1e88c8: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e88c8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1e88cc:
    // 0x1e88cc: 0x32220040  andi        $v0, $s1, 0x40
    ctx->pc = 0x1e88ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)64);
    // 0x1e88d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E88D0u;
    {
        const bool branch_taken_0x1e88d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E88D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E88D0u;
            // 0x1e88d4: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e88d0) {
            ctx->pc = 0x1E88E8u;
            goto label_1e88e8;
        }
    }
    ctx->pc = 0x1E88D8u;
    // 0x1e88d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e88d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e88dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e88dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e88e0: 0x0  nop
    ctx->pc = 0x1e88e0u;
    // NOP
    // 0x1e88e4: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1e88e4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1e88e8:
    // 0x1e88e8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1e88e8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e88ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e88ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e88f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e88f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e88f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e88f8: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x1e88f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1e88fc: 0x0  nop
    ctx->pc = 0x1e88fcu;
    // NOP
    // 0x1e8900: 0x0  nop
    ctx->pc = 0x1e8900u;
    // NOP
    // 0x1e8904: 0xc067e64  jal         func_19F990
    ctx->pc = 0x1E8904u;
    SET_GPR_U32(ctx, 31, 0x1E890Cu);
    ctx->pc = 0x1E8908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8904u;
            // 0x1e8908: 0x4600ab07  neg.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F990u;
    if (runtime->hasFunction(0x19F990u)) {
        auto targetFn = runtime->lookupFunction(0x19F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E890Cu; }
        if (ctx->pc != 0x1E890Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddWhp__16CBattleCharaInfoFif_0x19f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E890Cu; }
        if (ctx->pc != 0x1E890Cu) { return; }
    }
    ctx->pc = 0x1E890Cu;
label_1e890c:
    // 0x1e890c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e890cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8910: 0x0  nop
    ctx->pc = 0x1e8910u;
    // NOP
    // 0x1e8914: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e8914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8918: 0x0  nop
    ctx->pc = 0x1e8918u;
    // NOP
    // 0x1e891c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1E891Cu;
    {
        const bool branch_taken_0x1e891c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e891c) {
            ctx->pc = 0x1E8950u;
            goto label_1e8950;
        }
    }
    ctx->pc = 0x1E8924u;
    // 0x1e8924: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1e8924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e8928: 0x0  nop
    ctx->pc = 0x1e8928u;
    // NOP
    // 0x1e892c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E892Cu;
    {
        const bool branch_taken_0x1e892c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e892c) {
            ctx->pc = 0x1E8950u;
            goto label_1e8950;
        }
    }
    ctx->pc = 0x1E8934u;
    // 0x1e8934: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x1e8938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e893c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1e8940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8944: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e8948: 0xc067fb8  jal         func_19FEE0
    ctx->pc = 0x1E8948u;
    SET_GPR_U32(ctx, 31, 0x1E8950u);
    ctx->pc = 0x1E894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8948u;
            // 0x1e894c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FEE0u;
    if (runtime->hasFunction(0x19FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8950u; }
        if (ctx->pc != 0x1E8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddAbsRate__16CBattleCharaInfoFifPi_0x19fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8950u; }
        if (ctx->pc != 0x1E8950u) { return; }
    }
    ctx->pc = 0x1E8950u;
label_1e8950:
    // 0x1e8950: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8954: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e8954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e8958: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e8958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e895c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e8960: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e8960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8964: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e8964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8968: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e8968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e896c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e896cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8970: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8970u;
            // 0x1e8974: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8978u;
}
