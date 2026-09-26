#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMonsterUnitStatusBord__Ff
// Address: 0x1bdf50 - 0x1be5c0
void DrawMonsterUnitStatusBord__Ff_0x1bdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMonsterUnitStatusBord__Ff_0x1bdf50");
#endif

    switch (ctx->pc) {
        case 0x1bdf90u: goto label_1bdf90;
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be008u: goto label_1be008;
        case 0x1be020u: goto label_1be020;
        case 0x1be040u: goto label_1be040;
        case 0x1be060u: goto label_1be060;
        case 0x1be080u: goto label_1be080;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be124u: goto label_1be124;
        case 0x1be148u: goto label_1be148;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be180u: goto label_1be180;
        case 0x1be190u: goto label_1be190;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be200u: goto label_1be200;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be224u: goto label_1be224;
        case 0x1be254u: goto label_1be254;
        case 0x1be28cu: goto label_1be28c;
        case 0x1be2a0u: goto label_1be2a0;
        case 0x1be2b0u: goto label_1be2b0;
        case 0x1be2c4u: goto label_1be2c4;
        case 0x1be2d4u: goto label_1be2d4;
        case 0x1be2e8u: goto label_1be2e8;
        case 0x1be2f8u: goto label_1be2f8;
        case 0x1be30cu: goto label_1be30c;
        case 0x1be314u: goto label_1be314;
        case 0x1be324u: goto label_1be324;
        case 0x1be350u: goto label_1be350;
        case 0x1be35cu: goto label_1be35c;
        case 0x1be368u: goto label_1be368;
        case 0x1be378u: goto label_1be378;
        case 0x1be38cu: goto label_1be38c;
        case 0x1be39cu: goto label_1be39c;
        case 0x1be3b0u: goto label_1be3b0;
        case 0x1be3c0u: goto label_1be3c0;
        case 0x1be3d4u: goto label_1be3d4;
        case 0x1be3e4u: goto label_1be3e4;
        case 0x1be3f8u: goto label_1be3f8;
        case 0x1be400u: goto label_1be400;
        case 0x1be444u: goto label_1be444;
        case 0x1be470u: goto label_1be470;
        case 0x1be488u: goto label_1be488;
        case 0x1be4b4u: goto label_1be4b4;
        case 0x1be4e0u: goto label_1be4e0;
        case 0x1be50cu: goto label_1be50c;
        case 0x1be524u: goto label_1be524;
        case 0x1be550u: goto label_1be550;
        default: break;
    }

    ctx->pc = 0x1bdf50u;

    // 0x1bdf50: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1bdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x1bdf54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bdf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bdf58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bdf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1bdf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bdf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bdf60: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1bdf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1bdf64: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1bdf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1bdf68: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bdf68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bdf6c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1bdf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1bdf70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1bdf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1bdf74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1bdf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1bdf78: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bdf7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bdf80: 0x45010184  bc1t        . + 4 + (0x184 << 2)
    ctx->pc = 0x1BDF80u;
    {
        const bool branch_taken_0x1bdf80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BDF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF80u;
            // 0x1bdf84: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf80) {
            ctx->pc = 0x1BE594u;
            goto label_1be594;
        }
    }
    ctx->pc = 0x1BDF88u;
    // 0x1bdf88: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1BDF88u;
    SET_GPR_U32(ctx, 31, 0x1BDF90u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF90u; }
        if (ctx->pc != 0x1BDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF90u; }
        if (ctx->pc != 0x1BDF90u) { return; }
    }
    ctx->pc = 0x1BDF90u;
label_1bdf90:
    // 0x1bdf90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bdf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdf94: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x1BDF94u;
    SET_GPR_U32(ctx, 31, 0x1BDF9Cu);
    ctx->pc = 0x1BDF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF94u;
            // 0x1bdf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF9Cu; }
        if (ctx->pc != 0x1BDF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDF9Cu; }
        if (ctx->pc != 0x1BDF9Cu) { return; }
    }
    ctx->pc = 0x1BDF9Cu;
label_1bdf9c:
    // 0x1bdf9c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bdf9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfa0: 0xc0680f8  jal         func_1A03E0
    ctx->pc = 0x1BDFA0u;
    SET_GPR_U32(ctx, 31, 0x1BDFA8u);
    ctx->pc = 0x1BDFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFA0u;
            // 0x1bdfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFA8u; }
        if (ctx->pc != 0x1BDFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFA8u; }
        if (ctx->pc != 0x1BDFA8u) { return; }
    }
    ctx->pc = 0x1BDFA8u;
label_1bdfa8:
    // 0x1bdfa8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bdfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfb4: 0xc067e84  jal         func_19FA10
    ctx->pc = 0x1BDFB4u;
    SET_GPR_U32(ctx, 31, 0x1BDFBCu);
    ctx->pc = 0x1BDFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFB4u;
            // 0x1bdfb8: 0x27a60330  addiu       $a2, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FA10u;
    if (runtime->hasFunction(0x19FA10u)) {
        auto targetFn = runtime->lookupFunction(0x19FA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFBCu; }
        if (ctx->pc != 0x1BDFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowWhp__16CBattleCharaInfoFiPi_0x19fa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFBCu; }
        if (ctx->pc != 0x1BDFBCu) { return; }
    }
    ctx->pc = 0x1BDFBCu;
label_1bdfbc:
    // 0x1bdfbc: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BDFBCu;
    SET_GPR_U32(ctx, 31, 0x1BDFC4u);
    ctx->pc = 0x1BDFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFBCu;
            // 0x1bdfc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFC4u; }
        if (ctx->pc != 0x1BDFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFC4u; }
        if (ctx->pc != 0x1BDFC4u) { return; }
    }
    ctx->pc = 0x1BDFC4u;
label_1bdfc4:
    // 0x1bdfc4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BDFC4u;
    SET_GPR_U32(ctx, 31, 0x1BDFCCu);
    ctx->pc = 0x1BDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFC4u;
            // 0x1bdfc8: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFCCu; }
        if (ctx->pc != 0x1BDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFCCu; }
        if (ctx->pc != 0x1BDFCCu) { return; }
    }
    ctx->pc = 0x1BDFCCu;
label_1bdfcc:
    // 0x1bdfcc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bdfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdfd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bdfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdfd4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BDFD4u;
    SET_GPR_U32(ctx, 31, 0x1BDFDCu);
    ctx->pc = 0x1BDFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFD4u;
            // 0x1bdfd8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFDCu; }
        if (ctx->pc != 0x1BDFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFDCu; }
        if (ctx->pc != 0x1BDFDCu) { return; }
    }
    ctx->pc = 0x1BDFDCu;
label_1bdfdc:
    // 0x1bdfdc: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BDFDCu;
    SET_GPR_U32(ctx, 31, 0x1BDFE4u);
    ctx->pc = 0x1BDFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFDCu;
            // 0x1bdfe0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFE4u; }
        if (ctx->pc != 0x1BDFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFE4u; }
        if (ctx->pc != 0x1BDFE4u) { return; }
    }
    ctx->pc = 0x1BDFE4u;
label_1bdfe4:
    // 0x1bdfe4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bdfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdfe8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BDFE8u;
    SET_GPR_U32(ctx, 31, 0x1BDFF0u);
    ctx->pc = 0x1BDFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFE8u;
            // 0x1bdfec: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFF0u; }
        if (ctx->pc != 0x1BDFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFF0u; }
        if (ctx->pc != 0x1BDFF0u) { return; }
    }
    ctx->pc = 0x1BDFF0u;
label_1bdff0:
    // 0x1bdff0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1bdff4: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BDFF4u;
    SET_GPR_U32(ctx, 31, 0x1BDFFCu);
    ctx->pc = 0x1BDFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFF4u;
            // 0x1bdff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFFCu; }
        if (ctx->pc != 0x1BDFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDFFCu; }
        if (ctx->pc != 0x1BDFFCu) { return; }
    }
    ctx->pc = 0x1BDFFCu;
label_1bdffc:
    // 0x1bdffc: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bdffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be000: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BE000u;
    SET_GPR_U32(ctx, 31, 0x1BE008u);
    ctx->pc = 0x1BE004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE000u;
            // 0x1be004: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE008u; }
        if (ctx->pc != 0x1BE008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE008u; }
        if (ctx->pc != 0x1BE008u) { return; }
    }
    ctx->pc = 0x1BE008u;
label_1be008:
    // 0x1be008: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be00c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be010: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1be010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be014: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1be014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be018: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BE018u;
    SET_GPR_U32(ctx, 31, 0x1BE020u);
    ctx->pc = 0x1BE01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE018u;
            // 0x1be01c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE020u; }
        if (ctx->pc != 0x1BE020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE020u; }
        if (ctx->pc != 0x1BE020u) { return; }
    }
    ctx->pc = 0x1BE020u;
label_1be020:
    // 0x1be020: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be024: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1be028: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1be028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be02c: 0x240700ca  addiu       $a3, $zero, 0xCA
    ctx->pc = 0x1be02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1be030: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1be034: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1be034u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be038: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BE038u;
    SET_GPR_U32(ctx, 31, 0x1BE040u);
    ctx->pc = 0x1BE03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE038u;
            // 0x1be03c: 0x240a0052  addiu       $t2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE040u; }
        if (ctx->pc != 0x1BE040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE040u; }
        if (ctx->pc != 0x1BE040u) { return; }
    }
    ctx->pc = 0x1BE040u;
label_1be040:
    // 0x1be040: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be044: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1be048: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1be048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1be04c: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1be050: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x1be050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1be054: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1be054u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be058: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BE058u;
    SET_GPR_U32(ctx, 31, 0x1BE060u);
    ctx->pc = 0x1BE05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE058u;
            // 0x1be05c: 0x240a0068  addiu       $t2, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE060u; }
        if (ctx->pc != 0x1BE060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE060u; }
        if (ctx->pc != 0x1BE060u) { return; }
    }
    ctx->pc = 0x1BE060u;
label_1be060:
    // 0x1be060: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be064: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be068: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1be06c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1be06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1be070: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1be070u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be074: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1be074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1be078: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BE078u;
    SET_GPR_U32(ctx, 31, 0x1BE080u);
    ctx->pc = 0x1BE07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE078u;
            // 0x1be07c: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE080u; }
        if (ctx->pc != 0x1BE080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE080u; }
        if (ctx->pc != 0x1BE080u) { return; }
    }
    ctx->pc = 0x1BE080u;
label_1be080:
    // 0x1be080: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be084: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be088: 0x24050177  addiu       $a1, $zero, 0x177
    ctx->pc = 0x1be088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    // 0x1be08c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1be08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1be090: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1be090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be094: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1be094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1be098: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BE098u;
    SET_GPR_U32(ctx, 31, 0x1BE0A0u);
    ctx->pc = 0x1BE09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE098u;
            // 0x1be09c: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0A0u; }
        if (ctx->pc != 0x1BE0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0A0u; }
        if (ctx->pc != 0x1BE0A0u) { return; }
    }
    ctx->pc = 0x1BE0A0u;
label_1be0a0:
    // 0x1be0a0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BE0A0u;
    SET_GPR_U32(ctx, 31, 0x1BE0A8u);
    ctx->pc = 0x1BE0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0A0u;
            // 0x1be0a4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0A8u; }
        if (ctx->pc != 0x1BE0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0A8u; }
        if (ctx->pc != 0x1BE0A8u) { return; }
    }
    ctx->pc = 0x1BE0A8u;
label_1be0a8:
    // 0x1be0a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0b0: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BE0B0u;
    SET_GPR_U32(ctx, 31, 0x1BE0B8u);
    ctx->pc = 0x1BE0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0B0u;
            // 0x1be0b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0B8u; }
        if (ctx->pc != 0x1BE0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0B8u; }
        if (ctx->pc != 0x1BE0B8u) { return; }
    }
    ctx->pc = 0x1BE0B8u;
label_1be0b8:
    // 0x1be0b8: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BE0B8u;
    SET_GPR_U32(ctx, 31, 0x1BE0C0u);
    ctx->pc = 0x1BE0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0B8u;
            // 0x1be0bc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0C0u; }
        if (ctx->pc != 0x1BE0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0C0u; }
        if (ctx->pc != 0x1BE0C0u) { return; }
    }
    ctx->pc = 0x1BE0C0u;
label_1be0c0:
    // 0x1be0c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be0c4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BE0C4u;
    SET_GPR_U32(ctx, 31, 0x1BE0CCu);
    ctx->pc = 0x1BE0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0C4u;
            // 0x1be0c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0CCu; }
        if (ctx->pc != 0x1BE0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0CCu; }
        if (ctx->pc != 0x1BE0CCu) { return; }
    }
    ctx->pc = 0x1BE0CCu;
label_1be0cc:
    // 0x1be0cc: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1be0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be0d0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BE0D0u;
    SET_GPR_U32(ctx, 31, 0x1BE0D8u);
    ctx->pc = 0x1BE0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0D0u;
            // 0x1be0d4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0D8u; }
        if (ctx->pc != 0x1BE0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0D8u; }
        if (ctx->pc != 0x1BE0D8u) { return; }
    }
    ctx->pc = 0x1BE0D8u;
label_1be0d8:
    // 0x1be0d8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be0dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be0e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1be0e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1be0e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be0e8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BE0E8u;
    SET_GPR_U32(ctx, 31, 0x1BE0F0u);
    ctx->pc = 0x1BE0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0E8u;
            // 0x1be0ec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0F0u; }
        if (ctx->pc != 0x1BE0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0F0u; }
        if (ctx->pc != 0x1BE0F0u) { return; }
    }
    ctx->pc = 0x1BE0F0u;
label_1be0f0:
    // 0x1be0f0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1be0f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be0f4: 0x3c024330  lui         $v0, 0x4330
    ctx->pc = 0x1be0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17200 << 16));
    // 0x1be0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be0fc: 0x0  nop
    ctx->pc = 0x1be0fcu;
    // NOP
    // 0x1be100: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1be100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1be104: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x1be104u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1be108: 0x0  nop
    ctx->pc = 0x1be108u;
    // NOP
    // 0x1be10c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1be10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be110: 0x46011503  div.s       $f20, $f2, $f1
    ctx->pc = 0x1be110u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1be114: 0x0  nop
    ctx->pc = 0x1be114u;
    // NOP
    // 0x1be118: 0x0  nop
    ctx->pc = 0x1be118u;
    // NOP
    // 0x1be11c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BE11Cu;
    SET_GPR_U32(ctx, 31, 0x1BE124u);
    ctx->pc = 0x1BE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE11Cu;
            // 0x1be120: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE124u; }
        if (ctx->pc != 0x1BE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE124u; }
        if (ctx->pc != 0x1BE124u) { return; }
    }
    ctx->pc = 0x1BE124u;
label_1be124:
    // 0x1be124: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1be128: 0x2a4100c9  slti        $at, $s2, 0xC9
    ctx->pc = 0x1be128u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1be12c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE12Cu;
    {
        const bool branch_taken_0x1be12c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE12Cu;
            // 0x1be130: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be12c) {
            ctx->pc = 0x1BE138u;
            goto label_1be138;
        }
    }
    ctx->pc = 0x1BE134u;
    // 0x1be134: 0x241300c8  addiu       $s3, $zero, 0xC8
    ctx->pc = 0x1be134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1be138:
    // 0x1be138: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be13c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be140: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE140u;
    SET_GPR_U32(ctx, 31, 0x1BE148u);
    ctx->pc = 0x1BE144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE140u;
            // 0x1be144: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE148u; }
        if (ctx->pc != 0x1BE148u) { return; }
    }
    ctx->pc = 0x1BE148u;
label_1be148:
    // 0x1be148: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be14c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1be150: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1be154: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE154u;
    SET_GPR_U32(ctx, 31, 0x1BE15Cu);
    ctx->pc = 0x1BE158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE154u;
            // 0x1be158: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE15Cu; }
        if (ctx->pc != 0x1BE15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE15Cu; }
        if (ctx->pc != 0x1BE15Cu) { return; }
    }
    ctx->pc = 0x1BE15Cu;
label_1be15c:
    // 0x1be15c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be160: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be164: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE164u;
    SET_GPR_U32(ctx, 31, 0x1BE16Cu);
    ctx->pc = 0x1BE168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE164u;
            // 0x1be168: 0x240600a2  addiu       $a2, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE16Cu; }
        if (ctx->pc != 0x1BE16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE16Cu; }
        if (ctx->pc != 0x1BE16Cu) { return; }
    }
    ctx->pc = 0x1BE16Cu;
label_1be16c:
    // 0x1be16c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be170: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be174: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1be174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1be178: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE178u;
    SET_GPR_U32(ctx, 31, 0x1BE180u);
    ctx->pc = 0x1BE17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE178u;
            // 0x1be17c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE180u; }
        if (ctx->pc != 0x1BE180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE180u; }
        if (ctx->pc != 0x1BE180u) { return; }
    }
    ctx->pc = 0x1BE180u;
label_1be180:
    // 0x1be180: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be184: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be188: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE188u;
    SET_GPR_U32(ctx, 31, 0x1BE190u);
    ctx->pc = 0x1BE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE188u;
            // 0x1be18c: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE190u; }
        if (ctx->pc != 0x1BE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE190u; }
        if (ctx->pc != 0x1BE190u) { return; }
    }
    ctx->pc = 0x1BE190u;
label_1be190:
    // 0x1be190: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be194: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1be194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1be198: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1be198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1be19c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE19Cu;
    SET_GPR_U32(ctx, 31, 0x1BE1A4u);
    ctx->pc = 0x1BE1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE19Cu;
            // 0x1be1a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1A4u; }
        if (ctx->pc != 0x1BE1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1A4u; }
        if (ctx->pc != 0x1BE1A4u) { return; }
    }
    ctx->pc = 0x1BE1A4u;
label_1be1a4:
    // 0x1be1a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be1a8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be1ac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE1ACu;
    SET_GPR_U32(ctx, 31, 0x1BE1B4u);
    ctx->pc = 0x1BE1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1ACu;
            // 0x1be1b0: 0x240600a7  addiu       $a2, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1B4u; }
        if (ctx->pc != 0x1BE1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1B4u; }
        if (ctx->pc != 0x1BE1B4u) { return; }
    }
    ctx->pc = 0x1BE1B4u;
label_1be1b4:
    // 0x1be1b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1be1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be1bc: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1be1c0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE1C0u;
    SET_GPR_U32(ctx, 31, 0x1BE1C8u);
    ctx->pc = 0x1BE1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1C0u;
            // 0x1be1c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1C8u; }
        if (ctx->pc != 0x1BE1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1C8u; }
        if (ctx->pc != 0x1BE1C8u) { return; }
    }
    ctx->pc = 0x1BE1C8u;
label_1be1c8:
    // 0x1be1c8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BE1C8u;
    SET_GPR_U32(ctx, 31, 0x1BE1D0u);
    ctx->pc = 0x1BE1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1C8u;
            // 0x1be1cc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1D0u; }
        if (ctx->pc != 0x1BE1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1D0u; }
        if (ctx->pc != 0x1BE1D0u) { return; }
    }
    ctx->pc = 0x1BE1D0u;
label_1be1d0:
    // 0x1be1d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be1d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be1d8: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BE1D8u;
    SET_GPR_U32(ctx, 31, 0x1BE1E0u);
    ctx->pc = 0x1BE1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1D8u;
            // 0x1be1dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E0u; }
        if (ctx->pc != 0x1BE1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E0u; }
        if (ctx->pc != 0x1BE1E0u) { return; }
    }
    ctx->pc = 0x1BE1E0u;
label_1be1e0:
    // 0x1be1e0: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BE1E0u;
    SET_GPR_U32(ctx, 31, 0x1BE1E8u);
    ctx->pc = 0x1BE1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1E0u;
            // 0x1be1e4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E8u; }
        if (ctx->pc != 0x1BE1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1E8u; }
        if (ctx->pc != 0x1BE1E8u) { return; }
    }
    ctx->pc = 0x1BE1E8u;
label_1be1e8:
    // 0x1be1e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be1ec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BE1ECu;
    SET_GPR_U32(ctx, 31, 0x1BE1F4u);
    ctx->pc = 0x1BE1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1ECu;
            // 0x1be1f0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1F4u; }
        if (ctx->pc != 0x1BE1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE1F4u; }
        if (ctx->pc != 0x1BE1F4u) { return; }
    }
    ctx->pc = 0x1BE1F4u;
label_1be1f4:
    // 0x1be1f4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be1f8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x1BE1F8u;
    SET_GPR_U32(ctx, 31, 0x1BE200u);
    ctx->pc = 0x1BE1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1F8u;
            // 0x1be1fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE200u; }
        if (ctx->pc != 0x1BE200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE200u; }
        if (ctx->pc != 0x1BE200u) { return; }
    }
    ctx->pc = 0x1BE200u;
label_1be200:
    // 0x1be200: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1be200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be204: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BE204u;
    SET_GPR_U32(ctx, 31, 0x1BE20Cu);
    ctx->pc = 0x1BE208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE204u;
            // 0x1be208: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE20Cu; }
        if (ctx->pc != 0x1BE20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE20Cu; }
        if (ctx->pc != 0x1BE20Cu) { return; }
    }
    ctx->pc = 0x1BE20Cu;
label_1be20c:
    // 0x1be20c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be210: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be214: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1be214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be218: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1be218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be21c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BE21Cu;
    SET_GPR_U32(ctx, 31, 0x1BE224u);
    ctx->pc = 0x1BE220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE21Cu;
            // 0x1be220: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE224u; }
        if (ctx->pc != 0x1BE224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE224u; }
        if (ctx->pc != 0x1BE224u) { return; }
    }
    ctx->pc = 0x1BE224u;
label_1be224:
    // 0x1be224: 0x27b60334  addiu       $s6, $sp, 0x334
    ctx->pc = 0x1be224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 820));
    // 0x1be228: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1be228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x1be22c: 0xc7a10330  lwc1        $f1, 0x330($sp)
    ctx->pc = 0x1be22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be230: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1be230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1be234: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1be234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1be238: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1be238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be23c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1be23cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1be240: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1be240u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1be244: 0x0  nop
    ctx->pc = 0x1be244u;
    // NOP
    // 0x1be248: 0x0  nop
    ctx->pc = 0x1be248u;
    // NOP
    // 0x1be24c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BE24Cu;
    SET_GPR_U32(ctx, 31, 0x1BE254u);
    ctx->pc = 0x1BE250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE24Cu;
            // 0x1be250: 0x46001302  mul.s       $f12, $f2, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE254u; }
        if (ctx->pc != 0x1BE254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE254u; }
        if (ctx->pc != 0x1BE254u) { return; }
    }
    ctx->pc = 0x1BE254u;
label_1be254:
    // 0x1be254: 0x24120157  addiu       $s2, $zero, 0x157
    ctx->pc = 0x1be254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1be258: 0x24530157  addiu       $s3, $v0, 0x157
    ctx->pc = 0x1be258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 343));
    // 0x1be25c: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x1be25cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x1be260: 0x2a410153  slti        $at, $s2, 0x153
    ctx->pc = 0x1be260u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)339) ? 1 : 0);
    // 0x1be264: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE264u;
    {
        const bool branch_taken_0x1be264 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE264u;
            // 0x1be268: 0x26740004  addiu       $s4, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be264) {
            ctx->pc = 0x1BE270u;
            goto label_1be270;
        }
    }
    ctx->pc = 0x1BE26Cu;
    // 0x1be26c: 0x24120153  addiu       $s2, $zero, 0x153
    ctx->pc = 0x1be26cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 339));
label_1be270:
    // 0x1be270: 0x2a8101e2  slti        $at, $s4, 0x1E2
    ctx->pc = 0x1be270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)482) ? 1 : 0);
    // 0x1be274: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE274u;
    {
        const bool branch_taken_0x1be274 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE274u;
            // 0x1be278: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be274) {
            ctx->pc = 0x1BE280u;
            goto label_1be280;
        }
    }
    ctx->pc = 0x1BE27Cu;
    // 0x1be27c: 0x241401e1  addiu       $s4, $zero, 0x1E1
    ctx->pc = 0x1be27cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 481));
label_1be280:
    // 0x1be280: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be284: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE284u;
    SET_GPR_U32(ctx, 31, 0x1BE28Cu);
    ctx->pc = 0x1BE288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE284u;
            // 0x1be288: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE28Cu; }
        if (ctx->pc != 0x1BE28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE28Cu; }
        if (ctx->pc != 0x1BE28Cu) { return; }
    }
    ctx->pc = 0x1BE28Cu;
label_1be28c:
    // 0x1be28c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1be28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be290: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be294: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1be294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1be298: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE298u;
    SET_GPR_U32(ctx, 31, 0x1BE2A0u);
    ctx->pc = 0x1BE29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE298u;
            // 0x1be29c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2A0u; }
        if (ctx->pc != 0x1BE2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2A0u; }
        if (ctx->pc != 0x1BE2A0u) { return; }
    }
    ctx->pc = 0x1BE2A0u;
label_1be2a0:
    // 0x1be2a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be2a4: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be2a8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE2A8u;
    SET_GPR_U32(ctx, 31, 0x1BE2B0u);
    ctx->pc = 0x1BE2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2A8u;
            // 0x1be2ac: 0x240600a8  addiu       $a2, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2B0u; }
        if (ctx->pc != 0x1BE2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2B0u; }
        if (ctx->pc != 0x1BE2B0u) { return; }
    }
    ctx->pc = 0x1BE2B0u;
label_1be2b0:
    // 0x1be2b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1be2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be2b8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1be2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1be2bc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE2BCu;
    SET_GPR_U32(ctx, 31, 0x1BE2C4u);
    ctx->pc = 0x1BE2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2BCu;
            // 0x1be2c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C4u; }
        if (ctx->pc != 0x1BE2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2C4u; }
        if (ctx->pc != 0x1BE2C4u) { return; }
    }
    ctx->pc = 0x1BE2C4u;
label_1be2c4:
    // 0x1be2c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be2c8: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be2cc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE2CCu;
    SET_GPR_U32(ctx, 31, 0x1BE2D4u);
    ctx->pc = 0x1BE2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2CCu;
            // 0x1be2d0: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2D4u; }
        if (ctx->pc != 0x1BE2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2D4u; }
        if (ctx->pc != 0x1BE2D4u) { return; }
    }
    ctx->pc = 0x1BE2D4u;
label_1be2d4:
    // 0x1be2d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be2d8: 0x24050157  addiu       $a1, $zero, 0x157
    ctx->pc = 0x1be2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1be2dc: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1be2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1be2e0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE2E0u;
    SET_GPR_U32(ctx, 31, 0x1BE2E8u);
    ctx->pc = 0x1BE2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2E0u;
            // 0x1be2e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2E8u; }
        if (ctx->pc != 0x1BE2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2E8u; }
        if (ctx->pc != 0x1BE2E8u) { return; }
    }
    ctx->pc = 0x1BE2E8u;
label_1be2e8:
    // 0x1be2e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be2ec: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be2f0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE2F0u;
    SET_GPR_U32(ctx, 31, 0x1BE2F8u);
    ctx->pc = 0x1BE2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE2F0u;
            // 0x1be2f4: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F8u; }
        if (ctx->pc != 0x1BE2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE2F8u; }
        if (ctx->pc != 0x1BE2F8u) { return; }
    }
    ctx->pc = 0x1BE2F8u;
label_1be2f8:
    // 0x1be2f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1be2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be2fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be300: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1be300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1be304: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE304u;
    SET_GPR_U32(ctx, 31, 0x1BE30Cu);
    ctx->pc = 0x1BE308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE304u;
            // 0x1be308: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE30Cu; }
        if (ctx->pc != 0x1BE30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE30Cu; }
        if (ctx->pc != 0x1BE30Cu) { return; }
    }
    ctx->pc = 0x1BE30Cu;
label_1be30c:
    // 0x1be30c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BE30Cu;
    SET_GPR_U32(ctx, 31, 0x1BE314u);
    ctx->pc = 0x1BE310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE30Cu;
            // 0x1be310: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE314u; }
        if (ctx->pc != 0x1BE314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE314u; }
        if (ctx->pc != 0x1BE314u) { return; }
    }
    ctx->pc = 0x1BE314u;
label_1be314:
    // 0x1be314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be31c: 0xc067ff8  jal         func_19FFE0
    ctx->pc = 0x1BE31Cu;
    SET_GPR_U32(ctx, 31, 0x1BE324u);
    ctx->pc = 0x1BE320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE31Cu;
            // 0x1be320: 0x27a60338  addiu       $a2, $sp, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19FFE0u;
    if (runtime->hasFunction(0x19FFE0u)) {
        auto targetFn = runtime->lookupFunction(0x19FFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE324u; }
        if (ctx->pc != 0x1BE324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAbs__16CBattleCharaInfoFiPi_0x19ffe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE324u; }
        if (ctx->pc != 0x1BE324u) { return; }
    }
    ctx->pc = 0x1BE324u;
label_1be324:
    // 0x1be324: 0xc7a20338  lwc1        $f2, 0x338($sp)
    ctx->pc = 0x1be324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1be328: 0x3c024309  lui         $v0, 0x4309
    ctx->pc = 0x1be328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17161 << 16));
    // 0x1be32c: 0xc7a1033c  lwc1        $f1, 0x33C($sp)
    ctx->pc = 0x1be32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1be330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1be330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be334: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1be334u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1be338: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1be338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1be33c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1be33cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1be340: 0x0  nop
    ctx->pc = 0x1be340u;
    // NOP
    // 0x1be344: 0x0  nop
    ctx->pc = 0x1be344u;
    // NOP
    // 0x1be348: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BE348u;
    SET_GPR_U32(ctx, 31, 0x1BE350u);
    ctx->pc = 0x1BE34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE348u;
            // 0x1be34c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE350u; }
        if (ctx->pc != 0x1BE350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE350u; }
        if (ctx->pc != 0x1BE350u) { return; }
    }
    ctx->pc = 0x1BE350u;
label_1be350:
    // 0x1be350: 0x24500157  addiu       $s0, $v0, 0x157
    ctx->pc = 0x1be350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 343));
    // 0x1be354: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BE354u;
    SET_GPR_U32(ctx, 31, 0x1BE35Cu);
    ctx->pc = 0x1BE358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE354u;
            // 0x1be358: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE35Cu; }
        if (ctx->pc != 0x1BE35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE35Cu; }
        if (ctx->pc != 0x1BE35Cu) { return; }
    }
    ctx->pc = 0x1BE35Cu;
label_1be35c:
    // 0x1be35c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be360: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BE360u;
    SET_GPR_U32(ctx, 31, 0x1BE368u);
    ctx->pc = 0x1BE364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE360u;
            // 0x1be364: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE368u; }
        if (ctx->pc != 0x1BE368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE368u; }
        if (ctx->pc != 0x1BE368u) { return; }
    }
    ctx->pc = 0x1BE368u;
label_1be368:
    // 0x1be368: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be36c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be370: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE370u;
    SET_GPR_U32(ctx, 31, 0x1BE378u);
    ctx->pc = 0x1BE374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE370u;
            // 0x1be374: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE378u; }
        if (ctx->pc != 0x1BE378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE378u; }
        if (ctx->pc != 0x1BE378u) { return; }
    }
    ctx->pc = 0x1BE378u;
label_1be378:
    // 0x1be378: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be37c: 0x24050157  addiu       $a1, $zero, 0x157
    ctx->pc = 0x1be37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1be380: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1be380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1be384: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE384u;
    SET_GPR_U32(ctx, 31, 0x1BE38Cu);
    ctx->pc = 0x1BE388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE384u;
            // 0x1be388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE38Cu; }
        if (ctx->pc != 0x1BE38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE38Cu; }
        if (ctx->pc != 0x1BE38Cu) { return; }
    }
    ctx->pc = 0x1BE38Cu;
label_1be38c:
    // 0x1be38c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be390: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be394: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE394u;
    SET_GPR_U32(ctx, 31, 0x1BE39Cu);
    ctx->pc = 0x1BE398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE394u;
            // 0x1be398: 0x240600b6  addiu       $a2, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE39Cu; }
        if (ctx->pc != 0x1BE39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE39Cu; }
        if (ctx->pc != 0x1BE39Cu) { return; }
    }
    ctx->pc = 0x1BE39Cu;
label_1be39c:
    // 0x1be39c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3a4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1be3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1be3a8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE3A8u;
    SET_GPR_U32(ctx, 31, 0x1BE3B0u);
    ctx->pc = 0x1BE3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3A8u;
            // 0x1be3ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B0u; }
        if (ctx->pc != 0x1BE3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3B0u; }
        if (ctx->pc != 0x1BE3B0u) { return; }
    }
    ctx->pc = 0x1BE3B0u;
label_1be3b0:
    // 0x1be3b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be3b4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1be3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1be3b8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE3B8u;
    SET_GPR_U32(ctx, 31, 0x1BE3C0u);
    ctx->pc = 0x1BE3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3B8u;
            // 0x1be3bc: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3C0u; }
        if (ctx->pc != 0x1BE3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3C0u; }
        if (ctx->pc != 0x1BE3C0u) { return; }
    }
    ctx->pc = 0x1BE3C0u;
label_1be3c0:
    // 0x1be3c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be3c4: 0x24050157  addiu       $a1, $zero, 0x157
    ctx->pc = 0x1be3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x1be3c8: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1be3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1be3cc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE3CCu;
    SET_GPR_U32(ctx, 31, 0x1BE3D4u);
    ctx->pc = 0x1BE3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3CCu;
            // 0x1be3d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3D4u; }
        if (ctx->pc != 0x1BE3D4u) { return; }
    }
    ctx->pc = 0x1BE3D4u;
label_1be3d4:
    // 0x1be3d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be3d8: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1be3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1be3dc: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1BE3DCu;
    SET_GPR_U32(ctx, 31, 0x1BE3E4u);
    ctx->pc = 0x1BE3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3DCu;
            // 0x1be3e0: 0x240600ba  addiu       $a2, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3E4u; }
        if (ctx->pc != 0x1BE3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3E4u; }
        if (ctx->pc != 0x1BE3E4u) { return; }
    }
    ctx->pc = 0x1BE3E4u;
label_1be3e4:
    // 0x1be3e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1be3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1be3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1be3ec: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x1be3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1be3f0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x1BE3F0u;
    SET_GPR_U32(ctx, 31, 0x1BE3F8u);
    ctx->pc = 0x1BE3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3F0u;
            // 0x1be3f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3F8u; }
        if (ctx->pc != 0x1BE3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE3F8u; }
        if (ctx->pc != 0x1BE3F8u) { return; }
    }
    ctx->pc = 0x1BE3F8u;
label_1be3f8:
    // 0x1be3f8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BE3F8u;
    SET_GPR_U32(ctx, 31, 0x1BE400u);
    ctx->pc = 0x1BE3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE3F8u;
            // 0x1be3fc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE400u; }
        if (ctx->pc != 0x1BE400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE400u; }
        if (ctx->pc != 0x1BE400u) { return; }
    }
    ctx->pc = 0x1BE400u;
label_1be400:
    // 0x1be400: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1be400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be404: 0x27b002e4  addiu       $s0, $sp, 0x2E4
    ctx->pc = 0x1be404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
    // 0x1be408: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1be40c: 0x27b202e8  addiu       $s2, $sp, 0x2E8
    ctx->pc = 0x1be40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
    // 0x1be410: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1be410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1be414: 0x27b302ec  addiu       $s3, $sp, 0x2EC
    ctx->pc = 0x1be414u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
    // 0x1be418: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1be418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1be41c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be420: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1be420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1be424: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x1be424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1be428: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1be42c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be430: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1be430u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1be434: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1be434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1be438: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1be438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1be43c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BE43Cu;
    SET_GPR_U32(ctx, 31, 0x1BE444u);
    ctx->pc = 0x1BE440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE43Cu;
            // 0x1be440: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE444u; }
        if (ctx->pc != 0x1BE444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE444u; }
        if (ctx->pc != 0x1BE444u) { return; }
    }
    ctx->pc = 0x1BE444u;
label_1be444:
    // 0x1be444: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1be444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1be448: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1be448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be44c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1be44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1be450: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x1be450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1be454: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1be454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be458: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1be458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1be45c: 0x27a802f0  addiu       $t0, $sp, 0x2F0
    ctx->pc = 0x1be45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1be460: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1be460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be464: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1be464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be468: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BE468u;
    SET_GPR_U32(ctx, 31, 0x1BE470u);
    ctx->pc = 0x1BE46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE468u;
            // 0x1be46c: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE470u; }
        if (ctx->pc != 0x1BE470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE470u; }
        if (ctx->pc != 0x1BE470u) { return; }
    }
    ctx->pc = 0x1BE470u;
label_1be470:
    // 0x1be470: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be474: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x1be474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1be478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be47c: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1be47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1be480: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BE480u;
    SET_GPR_U32(ctx, 31, 0x1BE488u);
    ctx->pc = 0x1BE484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE480u;
            // 0x1be484: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE488u; }
        if (ctx->pc != 0x1BE488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE488u; }
        if (ctx->pc != 0x1BE488u) { return; }
    }
    ctx->pc = 0x1BE488u;
label_1be488:
    // 0x1be488: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1be488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1be48c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1be48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be490: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1be490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1be494: 0x240400ac  addiu       $a0, $zero, 0xAC
    ctx->pc = 0x1be494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1be498: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1be498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be49c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1be49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1be4a0: 0x27a80300  addiu       $t0, $sp, 0x300
    ctx->pc = 0x1be4a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x1be4a4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1be4a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be4a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1be4a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4ac: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BE4ACu;
    SET_GPR_U32(ctx, 31, 0x1BE4B4u);
    ctx->pc = 0x1BE4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4ACu;
            // 0x1be4b0: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B4u; }
        if (ctx->pc != 0x1BE4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4B4u; }
        if (ctx->pc != 0x1BE4B4u) { return; }
    }
    ctx->pc = 0x1BE4B4u;
label_1be4b4:
    // 0x1be4b4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1be4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1be4b8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be4bc: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1be4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
    // 0x1be4c0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1be4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1be4c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1be4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be4cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1be4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1be4d0: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1be4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1be4d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1be4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1be4d8: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BE4D8u;
    SET_GPR_U32(ctx, 31, 0x1BE4E0u);
    ctx->pc = 0x1BE4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE4D8u;
            // 0x1be4dc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4E0u; }
        if (ctx->pc != 0x1BE4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE4E0u; }
        if (ctx->pc != 0x1BE4E0u) { return; }
    }
    ctx->pc = 0x1BE4E0u;
label_1be4e0:
    // 0x1be4e0: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1be4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1be4e4: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x1be4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1be4e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1be4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1be4ec: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1be4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1be4f0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x1be4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1be4f4: 0x27a80310  addiu       $t0, $sp, 0x310
    ctx->pc = 0x1be4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x1be4f8: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1be4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be4fc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1be4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be500: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1be500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be504: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BE504u;
    SET_GPR_U32(ctx, 31, 0x1BE50Cu);
    ctx->pc = 0x1BE508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE504u;
            // 0x1be508: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE50Cu; }
        if (ctx->pc != 0x1BE50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE50Cu; }
        if (ctx->pc != 0x1BE50Cu) { return; }
    }
    ctx->pc = 0x1BE50Cu;
label_1be50c:
    // 0x1be50c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1be50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1be510: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x1be510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x1be514: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1be514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be518: 0x240600e8  addiu       $a2, $zero, 0xE8
    ctx->pc = 0x1be518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1be51c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1BE51Cu;
    SET_GPR_U32(ctx, 31, 0x1BE524u);
    ctx->pc = 0x1BE520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE51Cu;
            // 0x1be520: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE524u; }
        if (ctx->pc != 0x1BE524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE524u; }
        if (ctx->pc != 0x1BE524u) { return; }
    }
    ctx->pc = 0x1BE524u;
label_1be524:
    // 0x1be524: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1be524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x1be528: 0x24040163  addiu       $a0, $zero, 0x163
    ctx->pc = 0x1be528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
    // 0x1be52c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1be52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1be530: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1be530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1be534: 0x8fa60330  lw          $a2, 0x330($sp)
    ctx->pc = 0x1be534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1be538: 0x27a80320  addiu       $t0, $sp, 0x320
    ctx->pc = 0x1be538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x1be53c: 0x8f878e7c  lw          $a3, -0x7184($gp)
    ctx->pc = 0x1be53cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1be540: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x1be540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1be544: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1be544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be548: 0xc06eeb8  jal         func_1BBAE0
    ctx->pc = 0x1BE548u;
    SET_GPR_U32(ctx, 31, 0x1BE550u);
    ctx->pc = 0x1BE54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE548u;
            // 0x1be54c: 0x240b000a  addiu       $t3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAE0u;
    if (runtime->hasFunction(0x1BBAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BBAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE550u; }
        if (ctx->pc != 0x1BE550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE550u; }
        if (ctx->pc != 0x1BE550u) { return; }
    }
    ctx->pc = 0x1BE550u;
label_1be550:
    // 0x1be550: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1be550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1be554: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1be554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1be558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1be558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1be55c: 0x0  nop
    ctx->pc = 0x1be55cu;
    // NOP
    // 0x1be560: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1be560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1be564: 0x0  nop
    ctx->pc = 0x1be564u;
    // NOP
    // 0x1be568: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE568u;
    {
        const bool branch_taken_0x1be568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BE56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE568u;
            // 0x1be56c: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be568) {
            ctx->pc = 0x1BE580u;
            goto label_1be580;
        }
    }
    ctx->pc = 0x1BE570u;
    // 0x1be570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be574: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BE578u;
    {
        const bool branch_taken_0x1be578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE578u;
            // 0x1be57c: 0xac230460  sw          $v1, 0x460($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be578) {
            ctx->pc = 0x1BE584u;
            goto label_1be584;
        }
    }
    ctx->pc = 0x1BE580u;
label_1be580:
    // 0x1be580: 0xac200460  sw          $zero, 0x460($at)
    ctx->pc = 0x1be580u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1120), GPR_U32(ctx, 0));
label_1be584:
    // 0x1be584: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be588: 0xe4340470  swc1        $f20, 0x470($at)
    ctx->pc = 0x1be588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 1136), bits); }
    // 0x1be58c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1be58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
    // 0x1be590: 0xac20047c  sw          $zero, 0x47C($at)
    ctx->pc = 0x1be590u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1148), GPR_U32(ctx, 0));
label_1be594:
    // 0x1be594: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1be594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1be598: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1be598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1be59c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1be59cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1be5a0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1be5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1be5a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1be5a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1be5a8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1be5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1be5ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1be5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1be5b0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1be5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be5b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1be5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE5B8u;
            // 0x1be5bc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE5C0u;
}
