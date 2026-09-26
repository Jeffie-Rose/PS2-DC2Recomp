#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawLifeGage__11CMonsterManFii
// Address: 0x1dc790 - 0x1dc99c
void DrawLifeGage__11CMonsterManFii_0x1dc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawLifeGage__11CMonsterManFii_0x1dc790");
#endif

    switch (ctx->pc) {
        case 0x1dc7d4u: goto label_1dc7d4;
        case 0x1dc7fcu: goto label_1dc7fc;
        case 0x1dc848u: goto label_1dc848;
        case 0x1dc85cu: goto label_1dc85c;
        case 0x1dc874u: goto label_1dc874;
        case 0x1dc8b4u: goto label_1dc8b4;
        case 0x1dc8d4u: goto label_1dc8d4;
        case 0x1dc8e0u: goto label_1dc8e0;
        case 0x1dc8f0u: goto label_1dc8f0;
        case 0x1dc948u: goto label_1dc948;
        case 0x1dc958u: goto label_1dc958;
        case 0x1dc96cu: goto label_1dc96c;
        default: break;
    }

    ctx->pc = 0x1dc790u;

    // 0x1dc790: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dc790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dc794: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1dc794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1dc798: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1dc798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1dc79c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1dc79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1dc7a0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1dc7a0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1dc7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1dc7a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1dc7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1dc7ac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1dc7acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dc7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1dc7b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dc7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1dc7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dc7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dc7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dc7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dc7c0: 0x14c0006a  bnez        $a2, . + 4 + (0x6A << 2)
    ctx->pc = 0x1DC7C0u;
    {
        const bool branch_taken_0x1dc7c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7C0u;
            // 0x1dc7c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7c0) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC7C8u;
    // 0x1dc7c8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1dc7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dc7cc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1DC7CCu;
    SET_GPR_U32(ctx, 31, 0x1DC7D4u);
    ctx->pc = 0x1DC7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7CCu;
            // 0x1dc7d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7D4u; }
        if (ctx->pc != 0x1DC7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7D4u; }
        if (ctx->pc != 0x1DC7D4u) { return; }
    }
    ctx->pc = 0x1DC7D4u;
label_1dc7d4:
    // 0x1dc7d4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1DC7D4u;
    {
        const bool branch_taken_0x1dc7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc7d4) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC7DCu;
    // 0x1dc7dc: 0x84430772  lh          $v1, 0x772($v0)
    ctx->pc = 0x1dc7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1906)));
    // 0x1dc7e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7E0u;
    {
        const bool branch_taken_0x1dc7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7E0u;
            // 0x1dc7e4: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7e0) {
            ctx->pc = 0x1DC7F0u;
            goto label_1dc7f0;
        }
    }
    ctx->pc = 0x1DC7E8u;
    // 0x1dc7e8: 0x84570770  lh          $s7, 0x770($v0)
    ctx->pc = 0x1dc7e8u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1904)));
    // 0x1dc7ec: 0x0  nop
    ctx->pc = 0x1dc7ecu;
    // NOP
label_1dc7f0:
    // 0x1dc7f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dc7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dc7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dc7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dc7fc:
    // 0x1dc7fc: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x1dc7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1dc800: 0x8c640484  lw          $a0, 0x484($v1)
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
    // 0x1dc804: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1DC804u;
    {
        const bool branch_taken_0x1dc804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC804u;
            // 0x1dc808: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc804) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC80Cu;
    // 0x1dc80c: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x1dc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x1dc810: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1DC810u;
    {
        const bool branch_taken_0x1dc810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc810) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC818u;
    // 0x1dc818: 0xc48112f4  lwc1        $f1, 0x12F4($a0)
    ctx->pc = 0x1dc818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc81c: 0xc48012fc  lwc1        $f0, 0x12FC($a0)
    ctx->pc = 0x1dc81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc820: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dc820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dc824: 0x0  nop
    ctx->pc = 0x1dc824u;
    // NOP
    // 0x1dc828: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x1DC828u;
    {
        const bool branch_taken_0x1dc828 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dc828) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC830u;
    // 0x1dc830: 0x26220018  addiu       $v0, $s1, 0x18
    ctx->pc = 0x1dc830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1dc834: 0x14570006  bne         $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC834u;
    {
        const bool branch_taken_0x1dc834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1dc834) {
            ctx->pc = 0x1DC850u;
            goto label_1dc850;
        }
    }
    ctx->pc = 0x1DC83Cu;
    // 0x1dc83c: 0x24841220  addiu       $a0, $a0, 0x1220
    ctx->pc = 0x1dc83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    // 0x1dc840: 0xc07282c  jal         func_1CA0B0
    ctx->pc = 0x1DC840u;
    SET_GPR_U32(ctx, 31, 0x1DC848u);
    ctx->pc = 0x1DC844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC840u;
            // 0x1dc844: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0B0u;
    if (runtime->hasFunction(0x1CA0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC848u; }
        if (ctx->pc != 0x1DC848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetView__14CEnemyLifeGageFi_0x1ca0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC848u; }
        if (ctx->pc != 0x1DC848u) { return; }
    }
    ctx->pc = 0x1DC848u;
label_1dc848:
    // 0x1dc848: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC848u;
    {
        const bool branch_taken_0x1dc848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc848) {
            ctx->pc = 0x1DC85Cu;
            goto label_1dc85c;
        }
    }
    ctx->pc = 0x1DC850u;
label_1dc850:
    // 0x1dc850: 0x24841220  addiu       $a0, $a0, 0x1220
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4640));
    // 0x1dc854: 0xc07282c  jal         func_1CA0B0
    ctx->pc = 0x1DC854u;
    SET_GPR_U32(ctx, 31, 0x1DC85Cu);
    ctx->pc = 0x1DC858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC854u;
            // 0x1dc858: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0B0u;
    if (runtime->hasFunction(0x1CA0B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC85Cu; }
        if (ctx->pc != 0x1DC85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetView__14CEnemyLifeGageFi_0x1ca0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC85Cu; }
        if (ctx->pc != 0x1DC85Cu) { return; }
    }
    ctx->pc = 0x1DC85Cu;
label_1dc85c:
    // 0x1dc85c: 0x0  nop
    ctx->pc = 0x1dc85cu;
    // NOP
    // 0x1dc860: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dc860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dc868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc86c: 0xc05d420  jal         func_175080
    ctx->pc = 0x1DC86Cu;
    SET_GPR_U32(ctx, 31, 0x1DC874u);
    ctx->pc = 0x1DC870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC86Cu;
            // 0x1dc870: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC874u; }
        if (ctx->pc != 0x1DC874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC874u; }
        if (ctx->pc != 0x1DC874u) { return; }
    }
    ctx->pc = 0x1DC874u;
label_1dc874:
    // 0x1dc874: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1dc874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc878: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dc878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc87c: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1dc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dc880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dc884: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dc884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dc888: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x1dc888u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc88c: 0x8ea31150  lw          $v1, 0x1150($s5)
    ctx->pc = 0x1dc88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4432)));
    // 0x1dc890: 0x8074006a  lb          $s4, 0x6A($v1)
    ctx->pc = 0x1dc890u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 106)));
    // 0x1dc894: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DC894u;
    {
        const bool branch_taken_0x1dc894 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc894) {
            ctx->pc = 0x1DC8F8u;
            goto label_1dc8f8;
        }
    }
    ctx->pc = 0x1DC89Cu;
    // 0x1dc89c: 0xc6a1131c  lwc1        $f1, 0x131C($s5)
    ctx->pc = 0x1dc89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc8a0: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1dc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1dc8a4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1dc8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1dc8a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dc8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc8ac: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1DC8ACu;
    SET_GPR_U32(ctx, 31, 0x1DC8B4u);
    ctx->pc = 0x1DC8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8ACu;
            // 0x1dc8b0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8B4u; }
        if (ctx->pc != 0x1DC8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8B4u; }
        if (ctx->pc != 0x1DC8B4u) { return; }
    }
    ctx->pc = 0x1DC8B4u;
label_1dc8b4:
    // 0x1dc8b4: 0x8ea61310  lw          $a2, 0x1310($s5)
    ctx->pc = 0x1dc8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4880)));
    // 0x1dc8b8: 0x144e3c  dsll32      $t1, $s4, 24
    ctx->pc = 0x1dc8b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 24));
    // 0x1dc8bc: 0x8ea71314  lw          $a3, 0x1314($s5)
    ctx->pc = 0x1dc8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4884)));
    // 0x1dc8c0: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1dc8c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
    // 0x1dc8c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1dc8c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc8c8: 0x26a41220  addiu       $a0, $s5, 0x1220
    ctx->pc = 0x1dc8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4640));
    // 0x1dc8cc: 0xc07283c  jal         func_1CA0F0
    ctx->pc = 0x1DC8CCu;
    SET_GPR_U32(ctx, 31, 0x1DC8D4u);
    ctx->pc = 0x1DC8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8CCu;
            // 0x1dc8d0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0F0u;
    if (runtime->hasFunction(0x1CA0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8D4u; }
        if (ctx->pc != 0x1DC8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__14CEnemyLifeGageFPfiiii_0x1ca0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8D4u; }
        if (ctx->pc != 0x1DC8D4u) { return; }
    }
    ctx->pc = 0x1DC8D4u;
label_1dc8d4:
    // 0x1dc8d4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dc8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc8d8: 0xc0729f0  jal         func_1CA7C0
    ctx->pc = 0x1DC8D8u;
    SET_GPR_U32(ctx, 31, 0x1DC8E0u);
    ctx->pc = 0x1DC8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8D8u;
            // 0x1dc8dc: 0x24441220  addiu       $a0, $v0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7C0u;
    if (runtime->hasFunction(0x1CA7C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8E0u; }
        if (ctx->pc != 0x1DC8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CEnemyLifeGageFv_0x1ca7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8E0u; }
        if (ctx->pc != 0x1DC8E0u) { return; }
    }
    ctx->pc = 0x1DC8E0u;
label_1dc8e0:
    // 0x1dc8e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1dc8e4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1dc8e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc8e8: 0xc072864  jal         func_1CA190
    ctx->pc = 0x1DC8E8u;
    SET_GPR_U32(ctx, 31, 0x1DC8F0u);
    ctx->pc = 0x1DC8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC8E8u;
            // 0x1dc8ec: 0x24441220  addiu       $a0, $v0, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA190u;
    if (runtime->hasFunction(0x1CA190u)) {
        auto targetFn = runtime->lookupFunction(0x1CA190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8F0u; }
        if (ctx->pc != 0x1DC8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CEnemyLifeGageFi_0x1ca190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC8F0u; }
        if (ctx->pc != 0x1DC8F0u) { return; }
    }
    ctx->pc = 0x1DC8F0u;
label_1dc8f0:
    // 0x1dc8f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC8F0u;
    {
        const bool branch_taken_0x1dc8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc8f0) {
            ctx->pc = 0x1DC900u;
            goto label_1dc900;
        }
    }
    ctx->pc = 0x1DC8F8u;
label_1dc8f8:
    // 0x1dc8f8: 0x8ea31314  lw          $v1, 0x1314($s5)
    ctx->pc = 0x1dc8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4884)));
    // 0x1dc8fc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1dc8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1dc900:
    // 0x1dc900: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dc900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dc904: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x1dc904u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1dc908: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1DC908u;
    {
        const bool branch_taken_0x1dc908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC908u;
            // 0x1dc90c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc908) {
            ctx->pc = 0x1DC7FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc7fc;
        }
    }
    ctx->pc = 0x1DC910u;
    // 0x1dc910: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC910u;
    {
        const bool branch_taken_0x1dc910 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1DC914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC910u;
            // 0x1dc914: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc910) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC918u;
    // 0x1dc918: 0x2c10821  addu        $at, $s6, $at
    ctx->pc = 0x1dc918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
    // 0x1dc91c: 0x8c2600e0  lw          $a2, 0xE0($at)
    ctx->pc = 0x1dc91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 224)));
    // 0x1dc920: 0x18c00012  blez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DC920u;
    {
        const bool branch_taken_0x1dc920 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1dc920) {
            ctx->pc = 0x1DC96Cu;
            goto label_1dc96c;
        }
    }
    ctx->pc = 0x1DC928u;
    // 0x1dc928: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1dc928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1dc92c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dc92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc930: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x1dc930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    // 0x1dc934: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1dc934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dc938: 0x2c22021  addu        $a0, $s6, $v0
    ctx->pc = 0x1dc938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1dc93c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc93cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc940: 0xc07283c  jal         func_1CA0F0
    ctx->pc = 0x1DC940u;
    SET_GPR_U32(ctx, 31, 0x1DC948u);
    ctx->pc = 0x1DC944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC940u;
            // 0x1dc944: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA0F0u;
    if (runtime->hasFunction(0x1CA0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC948u; }
        if (ctx->pc != 0x1DC948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__14CEnemyLifeGageFPfiiii_0x1ca0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC948u; }
        if (ctx->pc != 0x1DC948u) { return; }
    }
    ctx->pc = 0x1DC948u;
label_1dc948:
    // 0x1dc948: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dc948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1dc94c: 0x34210090  ori         $at, $at, 0x90
    ctx->pc = 0x1dc94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)144);
    // 0x1dc950: 0xc0729f0  jal         func_1CA7C0
    ctx->pc = 0x1DC950u;
    SET_GPR_U32(ctx, 31, 0x1DC958u);
    ctx->pc = 0x1DC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC950u;
            // 0x1dc954: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7C0u;
    if (runtime->hasFunction(0x1CA7C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC958u; }
        if (ctx->pc != 0x1DC958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CEnemyLifeGageFv_0x1ca7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC958u; }
        if (ctx->pc != 0x1DC958u) { return; }
    }
    ctx->pc = 0x1DC958u;
label_1dc958:
    // 0x1dc958: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1dc958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1dc95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc960: 0x34210090  ori         $at, $at, 0x90
    ctx->pc = 0x1dc960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)144);
    // 0x1dc964: 0xc072864  jal         func_1CA190
    ctx->pc = 0x1DC964u;
    SET_GPR_U32(ctx, 31, 0x1DC96Cu);
    ctx->pc = 0x1DC968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC964u;
            // 0x1dc968: 0x2c12021  addu        $a0, $s6, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA190u;
    if (runtime->hasFunction(0x1CA190u)) {
        auto targetFn = runtime->lookupFunction(0x1CA190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC96Cu; }
        if (ctx->pc != 0x1DC96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CEnemyLifeGageFi_0x1ca190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC96Cu; }
        if (ctx->pc != 0x1DC96Cu) { return; }
    }
    ctx->pc = 0x1DC96Cu;
label_1dc96c:
    // 0x1dc96c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1dc96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc970: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1dc970u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc974: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1dc974u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc978: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1dc978u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc97c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1dc97cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc980: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dc980u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc984: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dc984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc988: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dc988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc98c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dc98cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc990: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dc990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc994: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC994u;
            // 0x1dc998: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC99Cu;
}
