#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawTakePhoto__FP17USER_PICTURE_INFOPf
// Address: 0x30e810 - 0x30f610
void DrawTakePhoto__FP17USER_PICTURE_INFOPf_0x30e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawTakePhoto__FP17USER_PICTURE_INFOPf_0x30e810");
#endif

    switch (ctx->pc) {
        case 0x30e868u: goto label_30e868;
        case 0x30e890u: goto label_30e890;
        case 0x30e898u: goto label_30e898;
        case 0x30e8b4u: goto label_30e8b4;
        case 0x30e8ccu: goto label_30e8cc;
        case 0x30e8d8u: goto label_30e8d8;
        case 0x30e8ecu: goto label_30e8ec;
        case 0x30e91cu: goto label_30e91c;
        case 0x30e934u: goto label_30e934;
        case 0x30e944u: goto label_30e944;
        case 0x30e954u: goto label_30e954;
        case 0x30e98cu: goto label_30e98c;
        case 0x30e994u: goto label_30e994;
        case 0x30e9a0u: goto label_30e9a0;
        case 0x30e9a8u: goto label_30e9a8;
        case 0x30e9b8u: goto label_30e9b8;
        case 0x30e9c4u: goto label_30e9c4;
        case 0x30e9d0u: goto label_30e9d0;
        case 0x30e9dcu: goto label_30e9dc;
        case 0x30e9e8u: goto label_30e9e8;
        case 0x30e9f4u: goto label_30e9f4;
        case 0x30ea00u: goto label_30ea00;
        case 0x30ea18u: goto label_30ea18;
        case 0x30ea28u: goto label_30ea28;
        case 0x30ea3cu: goto label_30ea3c;
        case 0x30ea4cu: goto label_30ea4c;
        case 0x30ea60u: goto label_30ea60;
        case 0x30ea68u: goto label_30ea68;
        case 0x30ea7cu: goto label_30ea7c;
        case 0x30ea94u: goto label_30ea94;
        case 0x30eaa0u: goto label_30eaa0;
        case 0x30eaacu: goto label_30eaac;
        case 0x30eab8u: goto label_30eab8;
        case 0x30eac4u: goto label_30eac4;
        case 0x30ead0u: goto label_30ead0;
        case 0x30eadcu: goto label_30eadc;
        case 0x30eaf4u: goto label_30eaf4;
        case 0x30eb08u: goto label_30eb08;
        case 0x30eb14u: goto label_30eb14;
        case 0x30eb4cu: goto label_30eb4c;
        case 0x30eb60u: goto label_30eb60;
        case 0x30eb70u: goto label_30eb70;
        case 0x30eb84u: goto label_30eb84;
        case 0x30eb94u: goto label_30eb94;
        case 0x30eba8u: goto label_30eba8;
        case 0x30ebb8u: goto label_30ebb8;
        case 0x30ebccu: goto label_30ebcc;
        case 0x30ebdcu: goto label_30ebdc;
        case 0x30ebf0u: goto label_30ebf0;
        case 0x30ec00u: goto label_30ec00;
        case 0x30ec14u: goto label_30ec14;
        case 0x30ec24u: goto label_30ec24;
        case 0x30ec38u: goto label_30ec38;
        case 0x30ec48u: goto label_30ec48;
        case 0x30ec5cu: goto label_30ec5c;
        case 0x30ec6cu: goto label_30ec6c;
        case 0x30ec80u: goto label_30ec80;
        case 0x30ec90u: goto label_30ec90;
        case 0x30eca4u: goto label_30eca4;
        case 0x30ecb4u: goto label_30ecb4;
        case 0x30ecc8u: goto label_30ecc8;
        case 0x30ecd8u: goto label_30ecd8;
        case 0x30ececu: goto label_30ecec;
        case 0x30ecfcu: goto label_30ecfc;
        case 0x30ed10u: goto label_30ed10;
        case 0x30ed20u: goto label_30ed20;
        case 0x30ed34u: goto label_30ed34;
        case 0x30ed44u: goto label_30ed44;
        case 0x30ed58u: goto label_30ed58;
        case 0x30ed68u: goto label_30ed68;
        case 0x30ed7cu: goto label_30ed7c;
        case 0x30ed84u: goto label_30ed84;
        case 0x30ed98u: goto label_30ed98;
        case 0x30eda4u: goto label_30eda4;
        case 0x30edb0u: goto label_30edb0;
        case 0x30ee20u: goto label_30ee20;
        case 0x30ee84u: goto label_30ee84;
        case 0x30eeb4u: goto label_30eeb4;
        case 0x30eec0u: goto label_30eec0;
        case 0x30eec8u: goto label_30eec8;
        case 0x30eef4u: goto label_30eef4;
        case 0x30ef04u: goto label_30ef04;
        case 0x30ef14u: goto label_30ef14;
        case 0x30ef24u: goto label_30ef24;
        case 0x30ef30u: goto label_30ef30;
        case 0x30ef38u: goto label_30ef38;
        case 0x30ef48u: goto label_30ef48;
        case 0x30ef58u: goto label_30ef58;
        case 0x30ef64u: goto label_30ef64;
        case 0x30ef7cu: goto label_30ef7c;
        case 0x30ef90u: goto label_30ef90;
        case 0x30efb4u: goto label_30efb4;
        case 0x30efdcu: goto label_30efdc;
        case 0x30efe4u: goto label_30efe4;
        case 0x30eff0u: goto label_30eff0;
        case 0x30f008u: goto label_30f008;
        case 0x30f01cu: goto label_30f01c;
        case 0x30f040u: goto label_30f040;
        case 0x30f048u: goto label_30f048;
        case 0x30f064u: goto label_30f064;
        case 0x30f070u: goto label_30f070;
        case 0x30f07cu: goto label_30f07c;
        case 0x30f088u: goto label_30f088;
        case 0x30f0a0u: goto label_30f0a0;
        case 0x30f0b4u: goto label_30f0b4;
        case 0x30f0c8u: goto label_30f0c8;
        case 0x30f0e0u: goto label_30f0e0;
        case 0x30f0f4u: goto label_30f0f4;
        case 0x30f108u: goto label_30f108;
        case 0x30f11cu: goto label_30f11c;
        case 0x30f134u: goto label_30f134;
        case 0x30f148u: goto label_30f148;
        case 0x30f150u: goto label_30f150;
        case 0x30f158u: goto label_30f158;
        case 0x30f174u: goto label_30f174;
        case 0x30f1b0u: goto label_30f1b0;
        case 0x30f1d0u: goto label_30f1d0;
        case 0x30f210u: goto label_30f210;
        case 0x30f230u: goto label_30f230;
        case 0x30f270u: goto label_30f270;
        case 0x30f284u: goto label_30f284;
        case 0x30f29cu: goto label_30f29c;
        case 0x30f2b4u: goto label_30f2b4;
        case 0x30f2c8u: goto label_30f2c8;
        case 0x30f2ccu: goto label_30f2cc;
        case 0x30f2d8u: goto label_30f2d8;
        case 0x30f2f8u: goto label_30f2f8;
        case 0x30f304u: goto label_30f304;
        case 0x30f324u: goto label_30f324;
        case 0x30f348u: goto label_30f348;
        case 0x30f360u: goto label_30f360;
        case 0x30f420u: goto label_30f420;
        case 0x30f42cu: goto label_30f42c;
        case 0x30f45cu: goto label_30f45c;
        case 0x30f470u: goto label_30f470;
        case 0x30f484u: goto label_30f484;
        case 0x30f49cu: goto label_30f49c;
        case 0x30f4b0u: goto label_30f4b0;
        case 0x30f4c4u: goto label_30f4c4;
        case 0x30f4dcu: goto label_30f4dc;
        case 0x30f4f0u: goto label_30f4f0;
        case 0x30f504u: goto label_30f504;
        case 0x30f50cu: goto label_30f50c;
        case 0x30f518u: goto label_30f518;
        case 0x30f524u: goto label_30f524;
        case 0x30f530u: goto label_30f530;
        case 0x30f53cu: goto label_30f53c;
        case 0x30f554u: goto label_30f554;
        case 0x30f56cu: goto label_30f56c;
        case 0x30f578u: goto label_30f578;
        case 0x30f588u: goto label_30f588;
        case 0x30f59cu: goto label_30f59c;
        case 0x30f5b0u: goto label_30f5b0;
        case 0x30f5c4u: goto label_30f5c4;
        case 0x30f5ccu: goto label_30f5cc;
        default: break;
    }

    ctx->pc = 0x30e810u;

    // 0x30e810: 0x27bdd420  addiu       $sp, $sp, -0x2BE0
    ctx->pc = 0x30e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956064));
    // 0x30e814: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x30e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x30e818: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x30e818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x30e81c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x30e81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x30e820: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x30e820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x30e824: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30e828: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x30e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x30e82c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30e830: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30e830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e834: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30e838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30e838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30e83c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30e83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30e840: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x30e840u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30e844: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x30e844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30e848: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x30e848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30e84c: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30e850: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E850u;
    {
        const bool branch_taken_0x30e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E850u;
            // 0x30e854: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e850) {
            ctx->pc = 0x30E860u;
            goto label_30e860;
        }
    }
    ctx->pc = 0x30E858u;
    // 0x30e858: 0x1000035e  b           . + 4 + (0x35E << 2)
    ctx->pc = 0x30E858u;
    {
        const bool branch_taken_0x30e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E858u;
            // 0x30e85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e858) {
            ctx->pc = 0x30F5D4u;
            goto label_30f5d4;
        }
    }
    ctx->pc = 0x30E860u;
label_30e860:
    // 0x30e860: 0xc0c39a0  jal         func_30E680
    ctx->pc = 0x30E860u;
    SET_GPR_U32(ctx, 31, 0x30E868u);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E868u; }
        if (ctx->pc != 0x30E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E868u; }
        if (ctx->pc != 0x30E868u) { return; }
    }
    ctx->pc = 0x30E868u;
label_30e868:
    // 0x30e868: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E868u;
    {
        const bool branch_taken_0x30e868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E868u;
            // 0x30e86c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e868) {
            ctx->pc = 0x30E878u;
            goto label_30e878;
        }
    }
    ctx->pc = 0x30E870u;
    // 0x30e870: 0x10000359  b           . + 4 + (0x359 << 2)
    ctx->pc = 0x30E870u;
    {
        const bool branch_taken_0x30e870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E870u;
            // 0x30e874: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e870) {
            ctx->pc = 0x30F5D8u;
            goto label_30f5d8;
        }
    }
    ctx->pc = 0x30E878u;
label_30e878:
    // 0x30e878: 0x8f85a228  lw          $a1, -0x5DD8($gp)
    ctx->pc = 0x30e878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943272)));
    // 0x30e87c: 0x3c130038  lui         $s3, 0x38
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)56 << 16));
    // 0x30e880: 0x26731ef0  addiu       $s3, $s3, 0x1EF0
    ctx->pc = 0x30e880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 7920));
    // 0x30e884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e888: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x30E888u;
    SET_GPR_U32(ctx, 31, 0x30E890u);
    ctx->pc = 0x30E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E888u;
            // 0x30e88c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E890u; }
        if (ctx->pc != 0x30E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E890u; }
        if (ctx->pc != 0x30E890u) { return; }
    }
    ctx->pc = 0x30E890u;
label_30e890:
    // 0x30e890: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30E890u;
    SET_GPR_U32(ctx, 31, 0x30E898u);
    ctx->pc = 0x30E894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E890u;
            // 0x30e894: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E898u; }
        if (ctx->pc != 0x30E898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E898u; }
        if (ctx->pc != 0x30E898u) { return; }
    }
    ctx->pc = 0x30E898u;
label_30e898:
    // 0x30e898: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e89c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e8a0: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x30E8A0u;
    {
        const bool branch_taken_0x30e8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8A0u;
            // 0x30e8a4: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8a0) {
            ctx->pc = 0x30E974u;
            goto label_30e974;
        }
    }
    ctx->pc = 0x30E8A8u;
    // 0x30e8a8: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x30e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30e8ac: 0xc05141c  jal         func_145070
    ctx->pc = 0x30E8ACu;
    SET_GPR_U32(ctx, 31, 0x30E8B4u);
    ctx->pc = 0x30E8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8ACu;
            // 0x30e8b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145070u;
    if (runtime->hasFunction(0x145070u)) {
        auto targetFn = runtime->lookupFunction(0x145070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8B4u; }
        if (ctx->pc != 0x30E8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreImage__FP10mgCTextureP1_0x145070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8B4u; }
        if (ctx->pc != 0x30E8B4u) { return; }
    }
    ctx->pc = 0x30E8B4u;
label_30e8b4:
    // 0x30e8b4: 0x27a429d0  addiu       $a0, $sp, 0x29D0
    ctx->pc = 0x30e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10704));
    // 0x30e8b8: 0x240500fc  addiu       $a1, $zero, 0xFC
    ctx->pc = 0x30e8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x30e8bc: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x30e8c0: 0x24070104  addiu       $a3, $zero, 0x104
    ctx->pc = 0x30e8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x30e8c4: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x30E8C4u;
    SET_GPR_U32(ctx, 31, 0x30E8CCu);
    ctx->pc = 0x30E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8C4u;
            // 0x30e8c8: 0x240800d4  addiu       $t0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8CCu; }
        if (ctx->pc != 0x30E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8CCu; }
        if (ctx->pc != 0x30E8CCu) { return; }
    }
    ctx->pc = 0x30E8CCu;
label_30e8cc:
    // 0x30e8cc: 0x27a429d0  addiu       $a0, $sp, 0x29D0
    ctx->pc = 0x30e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10704));
    // 0x30e8d0: 0xc051454  jal         func_145150
    ctx->pc = 0x30E8D0u;
    SET_GPR_U32(ctx, 31, 0x30E8D8u);
    ctx->pc = 0x30E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8D0u;
            // 0x30e8d4: 0x27a524c0  addiu       $a1, $sp, 0x24C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 9408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145150u;
    if (runtime->hasFunction(0x145150u)) {
        auto targetFn = runtime->lookupFunction(0x145150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8D8u; }
        if (ctx->pc != 0x30E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgStoreZBuffImage__FR9mgRect_i_P1_0x145150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E8D8u; }
        if (ctx->pc != 0x30E8D8u) { return; }
    }
    ctx->pc = 0x30E8D8u;
label_30e8d8:
    // 0x30e8d8: 0x27a524c0  addiu       $a1, $sp, 0x24C0
    ctx->pc = 0x30e8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 9408));
    // 0x30e8dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x30e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30e8e0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x30e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30e8e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E8E4u;
    {
        const bool branch_taken_0x30e8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E8E4u;
            // 0x30e8e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e8e4) {
            ctx->pc = 0x30E908u;
            goto label_30e908;
        }
    }
    ctx->pc = 0x30E8ECu;
label_30e8ec:
    // 0x30e8ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x30e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30e8f0: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x30e8f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30e8f4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x30E8F4u;
    {
        const bool branch_taken_0x30e8f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e8f4) {
            ctx->pc = 0x30E900u;
            goto label_30e900;
        }
    }
    ctx->pc = 0x30E8FCu;
    // 0x30e8fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30e900:
    // 0x30e900: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30e900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30e904: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30e904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30e908:
    // 0x30e908: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x30e908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30e90c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x30E90Cu;
    {
        const bool branch_taken_0x30e90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e90c) {
            ctx->pc = 0x30E8ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30e8ec;
        }
    }
    ctx->pc = 0x30E914u;
    // 0x30e914: 0xc0514e8  jal         func_1453A0
    ctx->pc = 0x30E914u;
    SET_GPR_U32(ctx, 31, 0x30E91Cu);
    ctx->pc = 0x1453A0u;
    if (runtime->hasFunction(0x1453A0u)) {
        auto targetFn = runtime->lookupFunction(0x1453A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E91Cu; }
        if (ctx->pc != 0x30E91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgConvZBuffToDist__FUi_0x1453a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E91Cu; }
        if (ctx->pc != 0x30E91Cu) { return; }
    }
    ctx->pc = 0x30E91Cu;
label_30e91c:
    // 0x30e91c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x30E91Cu;
    {
        const bool branch_taken_0x30e91c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E91Cu;
            // 0x30e920: 0xe6800000  swc1        $f0, 0x0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e91c) {
            ctx->pc = 0x30E95Cu;
            goto label_30e95c;
        }
    }
    ctx->pc = 0x30E924u;
    // 0x30e924: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x30e924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x30e928: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x30e928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x30e92c: 0xc049c18  jal         func_127060
    ctx->pc = 0x30E92Cu;
    SET_GPR_U32(ctx, 31, 0x30E934u);
    ctx->pc = 0x30E930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E92Cu;
            // 0x30e930: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E934u; }
        if (ctx->pc != 0x30E934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E934u; }
        if (ctx->pc != 0x30E934u) { return; }
    }
    ctx->pc = 0x30E934u;
label_30e934:
    // 0x30e934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e938: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x30e938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x30e93c: 0xc064218  jal         func_190860
    ctx->pc = 0x30E93Cu;
    SET_GPR_U32(ctx, 31, 0x30E944u);
    ctx->pc = 0x30E940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E93Cu;
            // 0x30e940: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E944u; }
        if (ctx->pc != 0x30E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E944u; }
        if (ctx->pc != 0x30E944u) { return; }
    }
    ctx->pc = 0x30E944u;
label_30e944:
    // 0x30e944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30e944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e948: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x30e94c: 0xc063818  jal         func_18E060
    ctx->pc = 0x30E94Cu;
    SET_GPR_U32(ctx, 31, 0x30E954u);
    ctx->pc = 0x30E950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E94Cu;
            // 0x30e950: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E954u; }
        if (ctx->pc != 0x30E954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E954u; }
        if (ctx->pc != 0x30E954u) { return; }
    }
    ctx->pc = 0x30E954u;
label_30e954:
    // 0x30e954: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e958: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x30e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_30e95c:
    // 0x30e95c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x30e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x30e960: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30e960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e964: 0xaf82a234  sw          $v0, -0x5DCC($gp)
    ctx->pc = 0x30e964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943284), GPR_U32(ctx, 2));
    // 0x30e968: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x30e968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30e96c: 0xaf83a220  sw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 3));
    // 0x30e970: 0xaf82a230  sw          $v0, -0x5DD0($gp)
    ctx->pc = 0x30e970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943280), GPR_U32(ctx, 2));
label_30e974:
    // 0x30e974: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30e974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30e978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30e978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30e97c: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x30E97Cu;
    {
        const bool branch_taken_0x30e97c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E97Cu;
            // 0x30e980: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e97c) {
            ctx->pc = 0x30EA88u;
            goto label_30ea88;
        }
    }
    ctx->pc = 0x30E984u;
    // 0x30e984: 0xc04b120  jal         func_12C480
    ctx->pc = 0x30E984u;
    SET_GPR_U32(ctx, 31, 0x30E98Cu);
    ctx->pc = 0x30E988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E984u;
            // 0x30e988: 0x27a429e0  addiu       $a0, $sp, 0x29E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E98Cu; }
        if (ctx->pc != 0x30E98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E98Cu; }
        if (ctx->pc != 0x30E98Cu) { return; }
    }
    ctx->pc = 0x30E98Cu;
label_30e98c:
    // 0x30e98c: 0xc0510c0  jal         func_144300
    ctx->pc = 0x30E98Cu;
    SET_GPR_U32(ctx, 31, 0x30E994u);
    ctx->pc = 0x30E990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E98Cu;
            // 0x30e990: 0x27a429e0  addiu       $a0, $sp, 0x29E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E994u; }
        if (ctx->pc != 0x30E994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E994u; }
        if (ctx->pc != 0x30E994u) { return; }
    }
    ctx->pc = 0x30E994u;
label_30e994:
    // 0x30e994: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x30e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30e998: 0xc050ef8  jal         func_143BE0
    ctx->pc = 0x30E998u;
    SET_GPR_U32(ctx, 31, 0x30E9A0u);
    ctx->pc = 0x30E99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E998u;
            // 0x30e99c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143BE0u;
    if (runtime->hasFunction(0x143BE0u)) {
        auto targetFn = runtime->lookupFunction(0x143BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9A0u; }
        if (ctx->pc != 0x30E9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9A0u; }
        if (ctx->pc != 0x30E9A0u) { return; }
    }
    ctx->pc = 0x30E9A0u;
label_30e9a0:
    // 0x30e9a0: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x30E9A0u;
    SET_GPR_U32(ctx, 31, 0x30E9A8u);
    ctx->pc = 0x30E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9A0u;
            // 0x30e9a4: 0x27a42a50  addiu       $a0, $sp, 0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9A8u; }
        if (ctx->pc != 0x30E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9A8u; }
        if (ctx->pc != 0x30E9A8u) { return; }
    }
    ctx->pc = 0x30E9A8u;
label_30e9a8:
    // 0x30e9a8: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e9b0: 0xc04d104  jal         func_134410
    ctx->pc = 0x30E9B0u;
    SET_GPR_U32(ctx, 31, 0x30E9B8u);
    ctx->pc = 0x30E9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9B0u;
            // 0x30e9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9B8u; }
        if (ctx->pc != 0x30E9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9B8u; }
        if (ctx->pc != 0x30E9B8u) { return; }
    }
    ctx->pc = 0x30E9B8u;
label_30e9b8:
    // 0x30e9b8: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9bc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30E9BCu;
    SET_GPR_U32(ctx, 31, 0x30E9C4u);
    ctx->pc = 0x30E9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9BCu;
            // 0x30e9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9C4u; }
        if (ctx->pc != 0x30E9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9C4u; }
        if (ctx->pc != 0x30E9C4u) { return; }
    }
    ctx->pc = 0x30E9C4u;
label_30e9c4:
    // 0x30e9c4: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9c8: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x30E9C8u;
    SET_GPR_U32(ctx, 31, 0x30E9D0u);
    ctx->pc = 0x30E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9C8u;
            // 0x30e9cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9D0u; }
        if (ctx->pc != 0x30E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9D0u; }
        if (ctx->pc != 0x30E9D0u) { return; }
    }
    ctx->pc = 0x30E9D0u;
label_30e9d0:
    // 0x30e9d0: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9d4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x30E9D4u;
    SET_GPR_U32(ctx, 31, 0x30E9DCu);
    ctx->pc = 0x30E9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9D4u;
            // 0x30e9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9DCu; }
        if (ctx->pc != 0x30E9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9DCu; }
        if (ctx->pc != 0x30E9DCu) { return; }
    }
    ctx->pc = 0x30E9DCu;
label_30e9dc:
    // 0x30e9dc: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9e0: 0xc04d424  jal         func_135090
    ctx->pc = 0x30E9E0u;
    SET_GPR_U32(ctx, 31, 0x30E9E8u);
    ctx->pc = 0x30E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9E0u;
            // 0x30e9e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9E8u; }
        if (ctx->pc != 0x30E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9E8u; }
        if (ctx->pc != 0x30E9E8u) { return; }
    }
    ctx->pc = 0x30E9E8u;
label_30e9e8:
    // 0x30e9e8: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9ec: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30E9ECu;
    SET_GPR_U32(ctx, 31, 0x30E9F4u);
    ctx->pc = 0x30E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9ECu;
            // 0x30e9f0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9F4u; }
        if (ctx->pc != 0x30E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E9F4u; }
        if (ctx->pc != 0x30E9F4u) { return; }
    }
    ctx->pc = 0x30E9F4u;
label_30e9f4:
    // 0x30e9f4: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30e9f8: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30E9F8u;
    SET_GPR_U32(ctx, 31, 0x30EA00u);
    ctx->pc = 0x30E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E9F8u;
            // 0x30e9fc: 0x27a529e0  addiu       $a1, $sp, 0x29E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA00u; }
        if (ctx->pc != 0x30EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA00u; }
        if (ctx->pc != 0x30EA00u) { return; }
    }
    ctx->pc = 0x30EA00u;
label_30ea00:
    // 0x30ea00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30ea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30ea04: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30ea08: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30ea08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea0c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30ea0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea10: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30EA10u;
    SET_GPR_U32(ctx, 31, 0x30EA18u);
    ctx->pc = 0x30EA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA10u;
            // 0x30ea14: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA18u; }
        if (ctx->pc != 0x30EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA18u; }
        if (ctx->pc != 0x30EA18u) { return; }
    }
    ctx->pc = 0x30EA18u;
label_30ea18:
    // 0x30ea18: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30ea1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ea1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea20: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EA20u;
    SET_GPR_U32(ctx, 31, 0x30EA28u);
    ctx->pc = 0x30EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA20u;
            // 0x30ea24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA28u; }
        if (ctx->pc != 0x30EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA28u; }
        if (ctx->pc != 0x30EA28u) { return; }
    }
    ctx->pc = 0x30EA28u;
label_30ea28:
    // 0x30ea28: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30ea2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ea2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ea30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea34: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EA34u;
    SET_GPR_U32(ctx, 31, 0x30EA3Cu);
    ctx->pc = 0x30EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA34u;
            // 0x30ea38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA3Cu; }
        if (ctx->pc != 0x30EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA3Cu; }
        if (ctx->pc != 0x30EA3Cu) { return; }
    }
    ctx->pc = 0x30EA3Cu;
label_30ea3c:
    // 0x30ea3c: 0x87a529e2  lh          $a1, 0x29E2($sp)
    ctx->pc = 0x30ea3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10722)));
    // 0x30ea40: 0x87a629e4  lh          $a2, 0x29E4($sp)
    ctx->pc = 0x30ea40u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 10724)));
    // 0x30ea44: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EA44u;
    SET_GPR_U32(ctx, 31, 0x30EA4Cu);
    ctx->pc = 0x30EA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA44u;
            // 0x30ea48: 0x27a42a50  addiu       $a0, $sp, 0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA4Cu; }
        if (ctx->pc != 0x30EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA4Cu; }
        if (ctx->pc != 0x30EA4Cu) { return; }
    }
    ctx->pc = 0x30EA4Cu;
label_30ea4c:
    // 0x30ea4c: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x30ea4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x30ea50: 0x27a42a50  addiu       $a0, $sp, 0x2A50
    ctx->pc = 0x30ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
    // 0x30ea54: 0x86060004  lh          $a2, 0x4($s0)
    ctx->pc = 0x30ea54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30ea58: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EA58u;
    SET_GPR_U32(ctx, 31, 0x30EA60u);
    ctx->pc = 0x30EA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA58u;
            // 0x30ea5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA60u; }
        if (ctx->pc != 0x30EA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA60u; }
        if (ctx->pc != 0x30EA60u) { return; }
    }
    ctx->pc = 0x30EA60u;
label_30ea60:
    // 0x30ea60: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30EA60u;
    SET_GPR_U32(ctx, 31, 0x30EA68u);
    ctx->pc = 0x30EA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA60u;
            // 0x30ea64: 0x27a42a50  addiu       $a0, $sp, 0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA68u; }
        if (ctx->pc != 0x30EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA68u; }
        if (ctx->pc != 0x30EA68u) { return; }
    }
    ctx->pc = 0x30EA68u;
label_30ea68:
    // 0x30ea68: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ea6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30ea6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x30ea70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea74: 0xc050f18  jal         func_143C60
    ctx->pc = 0x30EA74u;
    SET_GPR_U32(ctx, 31, 0x30EA7Cu);
    ctx->pc = 0x30EA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA74u;
            // 0x30ea78: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA7Cu; }
        if (ctx->pc != 0x30EA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA7Cu; }
        if (ctx->pc != 0x30EA7Cu) { return; }
    }
    ctx->pc = 0x30EA7Cu;
label_30ea7c:
    // 0x30ea7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30ea80: 0xaf82a220  sw          $v0, -0x5DE0($gp)
    ctx->pc = 0x30ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943264), GPR_U32(ctx, 2));
    // 0x30ea84: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
label_30ea88:
    // 0x30ea88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ea88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea8c: 0xc04d104  jal         func_134410
    ctx->pc = 0x30EA8Cu;
    SET_GPR_U32(ctx, 31, 0x30EA94u);
    ctx->pc = 0x30EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA8Cu;
            // 0x30ea90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA94u; }
        if (ctx->pc != 0x30EA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EA94u; }
        if (ctx->pc != 0x30EA94u) { return; }
    }
    ctx->pc = 0x30EA94u;
label_30ea94:
    // 0x30ea94: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ea98: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x30EA98u;
    SET_GPR_U32(ctx, 31, 0x30EAA0u);
    ctx->pc = 0x30EA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EA98u;
            // 0x30ea9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA0u; }
        if (ctx->pc != 0x30EAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAA0u; }
        if (ctx->pc != 0x30EAA0u) { return; }
    }
    ctx->pc = 0x30EAA0u;
label_30eaa0:
    // 0x30eaa0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eaa4: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x30EAA4u;
    SET_GPR_U32(ctx, 31, 0x30EAACu);
    ctx->pc = 0x30EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAA4u;
            // 0x30eaa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAACu; }
        if (ctx->pc != 0x30EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAACu; }
        if (ctx->pc != 0x30EAACu) { return; }
    }
    ctx->pc = 0x30EAACu;
label_30eaac:
    // 0x30eaac: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eab0: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x30EAB0u;
    SET_GPR_U32(ctx, 31, 0x30EAB8u);
    ctx->pc = 0x30EAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAB0u;
            // 0x30eab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAB8u; }
        if (ctx->pc != 0x30EAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAB8u; }
        if (ctx->pc != 0x30EAB8u) { return; }
    }
    ctx->pc = 0x30EAB8u;
label_30eab8:
    // 0x30eab8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eabc: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30EABCu;
    SET_GPR_U32(ctx, 31, 0x30EAC4u);
    ctx->pc = 0x30EAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EABCu;
            // 0x30eac0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAC4u; }
        if (ctx->pc != 0x30EAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAC4u; }
        if (ctx->pc != 0x30EAC4u) { return; }
    }
    ctx->pc = 0x30EAC4u;
label_30eac4:
    // 0x30eac4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eac8: 0xc04d424  jal         func_135090
    ctx->pc = 0x30EAC8u;
    SET_GPR_U32(ctx, 31, 0x30EAD0u);
    ctx->pc = 0x30EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAC8u;
            // 0x30eacc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAD0u; }
        if (ctx->pc != 0x30EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAD0u; }
        if (ctx->pc != 0x30EAD0u) { return; }
    }
    ctx->pc = 0x30EAD0u;
label_30ead0:
    // 0x30ead0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ead4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30EAD4u;
    SET_GPR_U32(ctx, 31, 0x30EADCu);
    ctx->pc = 0x30EAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAD4u;
            // 0x30ead8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EADCu; }
        if (ctx->pc != 0x30EADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EADCu; }
        if (ctx->pc != 0x30EADCu) { return; }
    }
    ctx->pc = 0x30EADCu;
label_30eadc:
    // 0x30eadc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30eadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30eae0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eae4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30eae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eae8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30eae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eaec: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30EAECu;
    SET_GPR_U32(ctx, 31, 0x30EAF4u);
    ctx->pc = 0x30EAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EAECu;
            // 0x30eaf0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAF4u; }
        if (ctx->pc != 0x30EAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EAF4u; }
        if (ctx->pc != 0x30EAF4u) { return; }
    }
    ctx->pc = 0x30EAF4u;
label_30eaf4:
    // 0x30eaf4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x30eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30eaf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30eaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eafc: 0x24a52630  addiu       $a1, $a1, 0x2630
    ctx->pc = 0x30eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    // 0x30eb00: 0xc04b414  jal         func_12D050
    ctx->pc = 0x30EB00u;
    SET_GPR_U32(ctx, 31, 0x30EB08u);
    ctx->pc = 0x30EB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB00u;
            // 0x30eb04: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB08u; }
        if (ctx->pc != 0x30EB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB08u; }
        if (ctx->pc != 0x30EB08u) { return; }
    }
    ctx->pc = 0x30EB08u;
label_30eb08:
    // 0x30eb08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30eb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb0c: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30EB0Cu;
    SET_GPR_U32(ctx, 31, 0x30EB14u);
    ctx->pc = 0x30EB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB0Cu;
            // 0x30eb10: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB14u; }
        if (ctx->pc != 0x30EB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB14u; }
        if (ctx->pc != 0x30EB14u) { return; }
    }
    ctx->pc = 0x30EB14u;
label_30eb14:
    // 0x30eb14: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x30eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30eb18: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EB18u;
    {
        const bool branch_taken_0x30eb18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30EB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB18u;
            // 0x30eb1c: 0x29843  sra         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb18) {
            ctx->pc = 0x30EB28u;
            goto label_30eb28;
        }
    }
    ctx->pc = 0x30EB20u;
    // 0x30eb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30eb24: 0x29843  sra         $s3, $v0, 1
    ctx->pc = 0x30eb24u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 1));
label_30eb28:
    // 0x30eb28: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30eb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30eb2c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EB2Cu;
    {
        const bool branch_taken_0x30eb2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30EB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB2Cu;
            // 0x30eb30: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb2c) {
            ctx->pc = 0x30EB3Cu;
            goto label_30eb3c;
        }
    }
    ctx->pc = 0x30EB34u;
    // 0x30eb34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30eb38: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x30eb38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_30eb3c:
    // 0x30eb3c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eb40: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30eb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30eb44: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EB44u;
    SET_GPR_U32(ctx, 31, 0x30EB4Cu);
    ctx->pc = 0x30EB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB44u;
            // 0x30eb48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB4Cu; }
        if (ctx->pc != 0x30EB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB4Cu; }
        if (ctx->pc != 0x30EB4Cu) { return; }
    }
    ctx->pc = 0x30EB4Cu;
label_30eb4c:
    // 0x30eb4c: 0x2665ffc0  addiu       $a1, $s3, -0x40
    ctx->pc = 0x30eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x30eb50: 0x2606ffc0  addiu       $a2, $s0, -0x40
    ctx->pc = 0x30eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x30eb54: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eb58: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EB58u;
    SET_GPR_U32(ctx, 31, 0x30EB60u);
    ctx->pc = 0x30EB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB58u;
            // 0x30eb5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB60u; }
        if (ctx->pc != 0x30EB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB60u; }
        if (ctx->pc != 0x30EB60u) { return; }
    }
    ctx->pc = 0x30EB60u;
label_30eb60:
    // 0x30eb60: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eb64: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30eb68: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EB68u;
    SET_GPR_U32(ctx, 31, 0x30EB70u);
    ctx->pc = 0x30EB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB68u;
            // 0x30eb6c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB70u; }
        if (ctx->pc != 0x30EB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB70u; }
        if (ctx->pc != 0x30EB70u) { return; }
    }
    ctx->pc = 0x30EB70u;
label_30eb70:
    // 0x30eb70: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eb74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30eb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30eb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb7c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EB7Cu;
    SET_GPR_U32(ctx, 31, 0x30EB84u);
    ctx->pc = 0x30EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB7Cu;
            // 0x30eb80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB84u; }
        if (ctx->pc != 0x30EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB84u; }
        if (ctx->pc != 0x30EB84u) { return; }
    }
    ctx->pc = 0x30EB84u;
label_30eb84:
    // 0x30eb84: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eb88: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30eb8c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EB8Cu;
    SET_GPR_U32(ctx, 31, 0x30EB94u);
    ctx->pc = 0x30EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EB8Cu;
            // 0x30eb90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB94u; }
        if (ctx->pc != 0x30EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EB94u; }
        if (ctx->pc != 0x30EB94u) { return; }
    }
    ctx->pc = 0x30EB94u;
label_30eb94:
    // 0x30eb94: 0x2665ffc0  addiu       $a1, $s3, -0x40
    ctx->pc = 0x30eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x30eb98: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x30eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30eb9c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eba0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EBA0u;
    SET_GPR_U32(ctx, 31, 0x30EBA8u);
    ctx->pc = 0x30EBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBA0u;
            // 0x30eba4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBA8u; }
        if (ctx->pc != 0x30EBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBA8u; }
        if (ctx->pc != 0x30EBA8u) { return; }
    }
    ctx->pc = 0x30EBA8u;
label_30eba8:
    // 0x30eba8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ebac: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30ebb0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EBB0u;
    SET_GPR_U32(ctx, 31, 0x30EBB8u);
    ctx->pc = 0x30EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBB0u;
            // 0x30ebb4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBB8u; }
        if (ctx->pc != 0x30EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBB8u; }
        if (ctx->pc != 0x30EBB8u) { return; }
    }
    ctx->pc = 0x30EBB8u;
label_30ebb8:
    // 0x30ebb8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ebbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ebc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30ebc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ebc4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EBC4u;
    SET_GPR_U32(ctx, 31, 0x30EBCCu);
    ctx->pc = 0x30EBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBC4u;
            // 0x30ebc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBCCu; }
        if (ctx->pc != 0x30EBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBCCu; }
        if (ctx->pc != 0x30EBCCu) { return; }
    }
    ctx->pc = 0x30EBCCu;
label_30ebcc:
    // 0x30ebcc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ebd0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ebd4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EBD4u;
    SET_GPR_U32(ctx, 31, 0x30EBDCu);
    ctx->pc = 0x30EBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBD4u;
            // 0x30ebd8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBDCu; }
        if (ctx->pc != 0x30EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBDCu; }
        if (ctx->pc != 0x30EBDCu) { return; }
    }
    ctx->pc = 0x30EBDCu;
label_30ebdc:
    // 0x30ebdc: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x30ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x30ebe0: 0x2606ffc0  addiu       $a2, $s0, -0x40
    ctx->pc = 0x30ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x30ebe4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ebe8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EBE8u;
    SET_GPR_U32(ctx, 31, 0x30EBF0u);
    ctx->pc = 0x30EBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBE8u;
            // 0x30ebec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBF0u; }
        if (ctx->pc != 0x30EBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EBF0u; }
        if (ctx->pc != 0x30EBF0u) { return; }
    }
    ctx->pc = 0x30EBF0u;
label_30ebf0:
    // 0x30ebf0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ebf4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30ebf8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EBF8u;
    SET_GPR_U32(ctx, 31, 0x30EC00u);
    ctx->pc = 0x30EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EBF8u;
            // 0x30ebfc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC00u; }
        if (ctx->pc != 0x30EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC00u; }
        if (ctx->pc != 0x30EC00u) { return; }
    }
    ctx->pc = 0x30EC00u;
label_30ec00:
    // 0x30ec00: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ec04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30ec08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec0c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EC0Cu;
    SET_GPR_U32(ctx, 31, 0x30EC14u);
    ctx->pc = 0x30EC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC0Cu;
            // 0x30ec10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC14u; }
        if (ctx->pc != 0x30EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC14u; }
        if (ctx->pc != 0x30EC14u) { return; }
    }
    ctx->pc = 0x30EC14u;
label_30ec14:
    // 0x30ec14: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec18: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ec1c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EC1Cu;
    SET_GPR_U32(ctx, 31, 0x30EC24u);
    ctx->pc = 0x30EC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC1Cu;
            // 0x30ec20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC24u; }
        if (ctx->pc != 0x30EC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC24u; }
        if (ctx->pc != 0x30EC24u) { return; }
    }
    ctx->pc = 0x30EC24u;
label_30ec24:
    // 0x30ec24: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x30ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x30ec28: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x30ec28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30ec2c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec30: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EC30u;
    SET_GPR_U32(ctx, 31, 0x30EC38u);
    ctx->pc = 0x30EC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC30u;
            // 0x30ec34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC38u; }
        if (ctx->pc != 0x30EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC38u; }
        if (ctx->pc != 0x30EC38u) { return; }
    }
    ctx->pc = 0x30EC38u;
label_30ec38:
    // 0x30ec38: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec3c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30ec3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30ec40: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EC40u;
    SET_GPR_U32(ctx, 31, 0x30EC48u);
    ctx->pc = 0x30EC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC40u;
            // 0x30ec44: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC48u; }
        if (ctx->pc != 0x30EC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC48u; }
        if (ctx->pc != 0x30EC48u) { return; }
    }
    ctx->pc = 0x30EC48u;
label_30ec48:
    // 0x30ec48: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ec4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30ec50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec54: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EC54u;
    SET_GPR_U32(ctx, 31, 0x30EC5Cu);
    ctx->pc = 0x30EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC54u;
            // 0x30ec58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC5Cu; }
        if (ctx->pc != 0x30EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC5Cu; }
        if (ctx->pc != 0x30EC5Cu) { return; }
    }
    ctx->pc = 0x30EC5Cu;
label_30ec5c:
    // 0x30ec5c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec64: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EC64u;
    SET_GPR_U32(ctx, 31, 0x30EC6Cu);
    ctx->pc = 0x30EC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC64u;
            // 0x30ec68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC6Cu; }
        if (ctx->pc != 0x30EC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC6Cu; }
        if (ctx->pc != 0x30EC6Cu) { return; }
    }
    ctx->pc = 0x30EC6Cu;
label_30ec6c:
    // 0x30ec6c: 0x2665ff2c  addiu       $a1, $s3, -0xD4
    ctx->pc = 0x30ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967084));
    // 0x30ec70: 0x2606ff3c  addiu       $a2, $s0, -0xC4
    ctx->pc = 0x30ec70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967100));
    // 0x30ec74: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec78: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EC78u;
    SET_GPR_U32(ctx, 31, 0x30EC80u);
    ctx->pc = 0x30EC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC78u;
            // 0x30ec7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC80u; }
        if (ctx->pc != 0x30EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC80u; }
        if (ctx->pc != 0x30EC80u) { return; }
    }
    ctx->pc = 0x30EC80u;
label_30ec80:
    // 0x30ec80: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ec84: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec88: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30EC88u;
    SET_GPR_U32(ctx, 31, 0x30EC90u);
    ctx->pc = 0x30EC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC88u;
            // 0x30ec8c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC90u; }
        if (ctx->pc != 0x30EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EC90u; }
        if (ctx->pc != 0x30EC90u) { return; }
    }
    ctx->pc = 0x30EC90u;
label_30ec90:
    // 0x30ec90: 0x2665ff6c  addiu       $a1, $s3, -0x94
    ctx->pc = 0x30ec90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967148));
    // 0x30ec94: 0x2606ff7c  addiu       $a2, $s0, -0x84
    ctx->pc = 0x30ec94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967164));
    // 0x30ec98: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ec9c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30EC9Cu;
    SET_GPR_U32(ctx, 31, 0x30ECA4u);
    ctx->pc = 0x30ECA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EC9Cu;
            // 0x30eca0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECA4u; }
        if (ctx->pc != 0x30ECA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECA4u; }
        if (ctx->pc != 0x30ECA4u) { return; }
    }
    ctx->pc = 0x30ECA4u;
label_30eca4:
    // 0x30eca4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ecac: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ECACu;
    SET_GPR_U32(ctx, 31, 0x30ECB4u);
    ctx->pc = 0x30ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECACu;
            // 0x30ecb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECB4u; }
        if (ctx->pc != 0x30ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECB4u; }
        if (ctx->pc != 0x30ECB4u) { return; }
    }
    ctx->pc = 0x30ECB4u;
label_30ecb4:
    // 0x30ecb4: 0x2665ff2c  addiu       $a1, $s3, -0xD4
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967084));
    // 0x30ecb8: 0x260600c4  addiu       $a2, $s0, 0xC4
    ctx->pc = 0x30ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x30ecbc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ecc0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ECC0u;
    SET_GPR_U32(ctx, 31, 0x30ECC8u);
    ctx->pc = 0x30ECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECC0u;
            // 0x30ecc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECC8u; }
        if (ctx->pc != 0x30ECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECC8u; }
        if (ctx->pc != 0x30ECC8u) { return; }
    }
    ctx->pc = 0x30ECC8u;
label_30ecc8:
    // 0x30ecc8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30eccc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ecccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ecd0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ECD0u;
    SET_GPR_U32(ctx, 31, 0x30ECD8u);
    ctx->pc = 0x30ECD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECD0u;
            // 0x30ecd4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECD8u; }
        if (ctx->pc != 0x30ECD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECD8u; }
        if (ctx->pc != 0x30ECD8u) { return; }
    }
    ctx->pc = 0x30ECD8u;
label_30ecd8:
    // 0x30ecd8: 0x2665ff6c  addiu       $a1, $s3, -0x94
    ctx->pc = 0x30ecd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967148));
    // 0x30ecdc: 0x26060084  addiu       $a2, $s0, 0x84
    ctx->pc = 0x30ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x30ece0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ece4: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ECE4u;
    SET_GPR_U32(ctx, 31, 0x30ECECu);
    ctx->pc = 0x30ECE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECE4u;
            // 0x30ece8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECECu; }
        if (ctx->pc != 0x30ECECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECECu; }
        if (ctx->pc != 0x30ECECu) { return; }
    }
    ctx->pc = 0x30ECECu;
label_30ecec:
    // 0x30ecec: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ececu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ecf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ecf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ecf4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ECF4u;
    SET_GPR_U32(ctx, 31, 0x30ECFCu);
    ctx->pc = 0x30ECF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ECF4u;
            // 0x30ecf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECFCu; }
        if (ctx->pc != 0x30ECFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ECFCu; }
        if (ctx->pc != 0x30ECFCu) { return; }
    }
    ctx->pc = 0x30ECFCu;
label_30ecfc:
    // 0x30ecfc: 0x266500d4  addiu       $a1, $s3, 0xD4
    ctx->pc = 0x30ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 212));
    // 0x30ed00: 0x2606ff3c  addiu       $a2, $s0, -0xC4
    ctx->pc = 0x30ed00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967100));
    // 0x30ed04: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed08: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ED08u;
    SET_GPR_U32(ctx, 31, 0x30ED10u);
    ctx->pc = 0x30ED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED08u;
            // 0x30ed0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED10u; }
        if (ctx->pc != 0x30ED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED10u; }
        if (ctx->pc != 0x30ED10u) { return; }
    }
    ctx->pc = 0x30ED10u;
label_30ed10:
    // 0x30ed10: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ed14: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed18: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ED18u;
    SET_GPR_U32(ctx, 31, 0x30ED20u);
    ctx->pc = 0x30ED1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED18u;
            // 0x30ed1c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED20u; }
        if (ctx->pc != 0x30ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED20u; }
        if (ctx->pc != 0x30ED20u) { return; }
    }
    ctx->pc = 0x30ED20u;
label_30ed20:
    // 0x30ed20: 0x26650094  addiu       $a1, $s3, 0x94
    ctx->pc = 0x30ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x30ed24: 0x2606ff7c  addiu       $a2, $s0, -0x84
    ctx->pc = 0x30ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967164));
    // 0x30ed28: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed2c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ED2Cu;
    SET_GPR_U32(ctx, 31, 0x30ED34u);
    ctx->pc = 0x30ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED2Cu;
            // 0x30ed30: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED34u; }
        if (ctx->pc != 0x30ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED34u; }
        if (ctx->pc != 0x30ED34u) { return; }
    }
    ctx->pc = 0x30ED34u;
label_30ed34:
    // 0x30ed34: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ed3c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ED3Cu;
    SET_GPR_U32(ctx, 31, 0x30ED44u);
    ctx->pc = 0x30ED40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED3Cu;
            // 0x30ed40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED44u; }
        if (ctx->pc != 0x30ED44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED44u; }
        if (ctx->pc != 0x30ED44u) { return; }
    }
    ctx->pc = 0x30ED44u;
label_30ed44:
    // 0x30ed44: 0x266500d4  addiu       $a1, $s3, 0xD4
    ctx->pc = 0x30ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 212));
    // 0x30ed48: 0x260600c4  addiu       $a2, $s0, 0xC4
    ctx->pc = 0x30ed48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x30ed4c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed50: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ED50u;
    SET_GPR_U32(ctx, 31, 0x30ED58u);
    ctx->pc = 0x30ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED50u;
            // 0x30ed54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED58u; }
        if (ctx->pc != 0x30ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED58u; }
        if (ctx->pc != 0x30ED58u) { return; }
    }
    ctx->pc = 0x30ED58u;
label_30ed58:
    // 0x30ed58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30ed58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30ed5c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed60: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30ED60u;
    SET_GPR_U32(ctx, 31, 0x30ED68u);
    ctx->pc = 0x30ED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED60u;
            // 0x30ed64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED68u; }
        if (ctx->pc != 0x30ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED68u; }
        if (ctx->pc != 0x30ED68u) { return; }
    }
    ctx->pc = 0x30ED68u;
label_30ed68:
    // 0x30ed68: 0x26650094  addiu       $a1, $s3, 0x94
    ctx->pc = 0x30ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x30ed6c: 0x26060084  addiu       $a2, $s0, 0x84
    ctx->pc = 0x30ed6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x30ed70: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed74: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30ED74u;
    SET_GPR_U32(ctx, 31, 0x30ED7Cu);
    ctx->pc = 0x30ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED74u;
            // 0x30ed78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED7Cu; }
        if (ctx->pc != 0x30ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED7Cu; }
        if (ctx->pc != 0x30ED7Cu) { return; }
    }
    ctx->pc = 0x30ED7Cu;
label_30ed7c:
    // 0x30ed7c: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30ED7Cu;
    SET_GPR_U32(ctx, 31, 0x30ED84u);
    ctx->pc = 0x30ED80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED7Cu;
            // 0x30ed80: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED84u; }
        if (ctx->pc != 0x30ED84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED84u; }
        if (ctx->pc != 0x30ED84u) { return; }
    }
    ctx->pc = 0x30ED84u;
label_30ed84:
    // 0x30ed84: 0x8f968780  lw          $s6, -0x7880($gp)
    ctx->pc = 0x30ed84u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30ed88: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed8c: 0x8f958784  lw          $s5, -0x787C($gp)
    ctx->pc = 0x30ed8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30ed90: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30ED90u;
    SET_GPR_U32(ctx, 31, 0x30ED98u);
    ctx->pc = 0x30ED94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED90u;
            // 0x30ed94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED98u; }
        if (ctx->pc != 0x30ED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30ED98u; }
        if (ctx->pc != 0x30ED98u) { return; }
    }
    ctx->pc = 0x30ED98u;
label_30ed98:
    // 0x30ed98: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ed9c: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x30ED9Cu;
    SET_GPR_U32(ctx, 31, 0x30EDA4u);
    ctx->pc = 0x30EDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30ED9Cu;
            // 0x30eda0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDA4u; }
        if (ctx->pc != 0x30EDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDA4u; }
        if (ctx->pc != 0x30EDA4u) { return; }
    }
    ctx->pc = 0x30EDA4u;
label_30eda4:
    // 0x30eda4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eda8: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x30EDA8u;
    SET_GPR_U32(ctx, 31, 0x30EDB0u);
    ctx->pc = 0x30EDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EDA8u;
            // 0x30edac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDB0u; }
        if (ctx->pc != 0x30EDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EDB0u; }
        if (ctx->pc != 0x30EDB0u) { return; }
    }
    ctx->pc = 0x30EDB0u;
label_30edb0:
    // 0x30edb0: 0x8f83a220  lw          $v1, -0x5DE0($gp)
    ctx->pc = 0x30edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943264)));
    // 0x30edb4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30edb8: 0x146200a7  bne         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x30EDB8u;
    {
        const bool branch_taken_0x30edb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30EDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EDB8u;
            // 0x30edbc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30edb8) {
            ctx->pc = 0x30F058u;
            goto label_30f058;
        }
    }
    ctx->pc = 0x30EDC0u;
    // 0x30edc0: 0x8f85a230  lw          $a1, -0x5DD0($gp)
    ctx->pc = 0x30edc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x30edc4: 0x2442e6c0  addiu       $v0, $v0, -0x1940
    ctx->pc = 0x30edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960832));
    // 0x30edc8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x30edc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30edcc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x30edccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30edd0: 0x27a42b60  addiu       $a0, $sp, 0x2B60
    ctx->pc = 0x30edd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11104));
    // 0x30edd4: 0xc58023  subu        $s0, $a2, $a1
    ctx->pc = 0x30edd4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x30edd8: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x30edd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
    // 0x30eddc: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EDDCu;
    {
        const bool branch_taken_0x30eddc = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x30EDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EDDCu;
            // 0x30ede0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eddc) {
            ctx->pc = 0x30EDECu;
            goto label_30edec;
        }
    }
    ctx->pc = 0x30EDE4u;
    // 0x30ede4: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x30ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x30ede8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30ede8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30edec:
    // 0x30edec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30edecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30edf0: 0x0  nop
    ctx->pc = 0x30edf0u;
    // NOP
    // 0x30edf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30edf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30edf8: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x30edf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x30edfc: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EDFCu;
    {
        const bool branch_taken_0x30edfc = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x30EE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EDFCu;
            // 0x30ee00: 0xe7a02b60  swc1        $f0, 0x2B60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30edfc) {
            ctx->pc = 0x30EE0Cu;
            goto label_30ee0c;
        }
    }
    ctx->pc = 0x30EE04u;
    // 0x30ee04: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x30ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x30ee08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30ee08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_30ee0c:
    // 0x30ee0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee10: 0x27a42b60  addiu       $a0, $sp, 0x2B60
    ctx->pc = 0x30ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11104));
    // 0x30ee14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30ee14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30ee18: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x30EE18u;
    SET_GPR_U32(ctx, 31, 0x30EE20u);
    ctx->pc = 0x30EE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EE18u;
            // 0x30ee1c: 0xe7a02b64  swc1        $f0, 0x2B64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EE20u; }
        if (ctx->pc != 0x30EE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EE20u; }
        if (ctx->pc != 0x30EE20u) { return; }
    }
    ctx->pc = 0x30EE20u;
label_30ee20:
    // 0x30ee20: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30ee20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30ee24: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x30ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x30ee28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee2c: 0x0  nop
    ctx->pc = 0x30ee2cu;
    // NOP
    // 0x30ee30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x30ee30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30ee34: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x30ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x30ee38: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x30ee38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30ee3c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x30ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x30ee40: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30ee40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30ee44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee48: 0x0  nop
    ctx->pc = 0x30ee48u;
    // NOP
    // 0x30ee4c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30ee4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30ee50: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x30ee50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30ee54: 0x0  nop
    ctx->pc = 0x30ee54u;
    // NOP
    // 0x30ee58: 0x0  nop
    ctx->pc = 0x30ee58u;
    // NOP
    // 0x30ee5c: 0x4602a836  c.le.s      $f21, $f2
    ctx->pc = 0x30ee5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30ee60: 0x0  nop
    ctx->pc = 0x30ee60u;
    // NOP
    // 0x30ee64: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x30EE64u;
    {
        const bool branch_taken_0x30ee64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30EE64u;
            // 0x30ee68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee64) {
            ctx->pc = 0x30EE84u;
            goto label_30ee84;
        }
    }
    ctx->pc = 0x30EE6Cu;
    // 0x30ee6c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30ee70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30ee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30ee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee78: 0x0  nop
    ctx->pc = 0x30ee78u;
    // NOP
    // 0x30ee7c: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x30ee7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x30ee80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30ee80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30ee84:
    // 0x30ee84: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x30ee84u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ee88: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x30ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x30ee8c: 0x34430a92  ori         $v1, $v0, 0xA92
    ctx->pc = 0x30ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x30ee90: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x30ee90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x30ee94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30ee98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30ee98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30ee9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30ee9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30eea0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30eea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eea4: 0x0  nop
    ctx->pc = 0x30eea4u;
    // NOP
    // 0x30eea8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x30eea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30eeac: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x30EEACu;
    SET_GPR_U32(ctx, 31, 0x30EEB4u);
    ctx->pc = 0x30EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEACu;
            // 0x30eeb0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEB4u; }
        if (ctx->pc != 0x30EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEB4u; }
        if (ctx->pc != 0x30EEB4u) { return; }
    }
    ctx->pc = 0x30EEB4u;
label_30eeb4:
    // 0x30eeb4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x30eeb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x30eeb8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30EEB8u;
    SET_GPR_U32(ctx, 31, 0x30EEC0u);
    ctx->pc = 0x30EEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEB8u;
            // 0x30eebc: 0x27a42b70  addiu       $a0, $sp, 0x2B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEC0u; }
        if (ctx->pc != 0x30EEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEC0u; }
        if (ctx->pc != 0x30EEC0u) { return; }
    }
    ctx->pc = 0x30EEC0u;
label_30eec0:
    // 0x30eec0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x30EEC0u;
    SET_GPR_U32(ctx, 31, 0x30EEC8u);
    ctx->pc = 0x30EEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEC0u;
            // 0x30eec4: 0x27a42b80  addiu       $a0, $sp, 0x2B80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEC8u; }
        if (ctx->pc != 0x30EEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEC8u; }
        if (ctx->pc != 0x30EEC8u) { return; }
    }
    ctx->pc = 0x30EEC8u;
label_30eec8:
    // 0x30eec8: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x30eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
    // 0x30eecc: 0x27b32b74  addiu       $s3, $sp, 0x2B74
    ctx->pc = 0x30eeccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 11124));
    // 0x30eed0: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x30eed0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x30eed4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30eed8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x30eed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x30eedc: 0x27a42ba0  addiu       $a0, $sp, 0x2BA0
    ctx->pc = 0x30eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30eee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30eee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30eee4: 0x0  nop
    ctx->pc = 0x30eee4u;
    // NOP
    // 0x30eee8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x30eee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x30eeec: 0xc04c050  jal         func_130140
    ctx->pc = 0x30EEECu;
    SET_GPR_U32(ctx, 31, 0x30EEF4u);
    ctx->pc = 0x30EEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEECu;
            // 0x30eef0: 0xe7a02b80  swc1        $f0, 0x2B80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEF4u; }
        if (ctx->pc != 0x30EEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EEF4u; }
        if (ctx->pc != 0x30EEF4u) { return; }
    }
    ctx->pc = 0x30EEF4u;
label_30eef4:
    // 0x30eef4: 0x27a42ba0  addiu       $a0, $sp, 0x2BA0
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30eef8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x30eef8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x30eefc: 0xc041ca2  jal         func_107288
    ctx->pc = 0x30EEFCu;
    SET_GPR_U32(ctx, 31, 0x30EF04u);
    ctx->pc = 0x30EF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EEFCu;
            // 0x30ef00: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF04u; }
        if (ctx->pc != 0x30EF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF04u; }
        if (ctx->pc != 0x30EF04u) { return; }
    }
    ctx->pc = 0x30EF04u;
label_30ef04:
    // 0x30ef04: 0x27a42b70  addiu       $a0, $sp, 0x2B70
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11120));
    // 0x30ef08: 0x27a52ba0  addiu       $a1, $sp, 0x2BA0
    ctx->pc = 0x30ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30ef0c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x30EF0Cu;
    SET_GPR_U32(ctx, 31, 0x30EF14u);
    ctx->pc = 0x30EF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF0Cu;
            // 0x30ef10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF14u; }
        if (ctx->pc != 0x30EF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF14u; }
        if (ctx->pc != 0x30EF14u) { return; }
    }
    ctx->pc = 0x30EF14u;
label_30ef14:
    // 0x30ef14: 0x27a42b80  addiu       $a0, $sp, 0x2B80
    ctx->pc = 0x30ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11136));
    // 0x30ef18: 0x27a52ba0  addiu       $a1, $sp, 0x2BA0
    ctx->pc = 0x30ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30ef1c: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x30EF1Cu;
    SET_GPR_U32(ctx, 31, 0x30EF24u);
    ctx->pc = 0x30EF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF1Cu;
            // 0x30ef20: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF24u; }
        if (ctx->pc != 0x30EF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF24u; }
        if (ctx->pc != 0x30EF24u) { return; }
    }
    ctx->pc = 0x30EF24u;
label_30ef24:
    // 0x30ef24: 0x27a42b70  addiu       $a0, $sp, 0x2B70
    ctx->pc = 0x30ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11120));
    // 0x30ef28: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x30EF28u;
    SET_GPR_U32(ctx, 31, 0x30EF30u);
    ctx->pc = 0x30EF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF28u;
            // 0x30ef2c: 0x27a52b60  addiu       $a1, $sp, 0x2B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF30u; }
        if (ctx->pc != 0x30EF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF30u; }
        if (ctx->pc != 0x30EF30u) { return; }
    }
    ctx->pc = 0x30EF30u;
label_30ef30:
    // 0x30ef30: 0xc04c050  jal         func_130140
    ctx->pc = 0x30EF30u;
    SET_GPR_U32(ctx, 31, 0x30EF38u);
    ctx->pc = 0x30EF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF30u;
            // 0x30ef34: 0x27a42ba0  addiu       $a0, $sp, 0x2BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF38u; }
        if (ctx->pc != 0x30EF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF38u; }
        if (ctx->pc != 0x30EF38u) { return; }
    }
    ctx->pc = 0x30EF38u;
label_30ef38:
    // 0x30ef38: 0x27a42ba0  addiu       $a0, $sp, 0x2BA0
    ctx->pc = 0x30ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30ef3c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x30ef3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x30ef40: 0xc041ca2  jal         func_107288
    ctx->pc = 0x30EF40u;
    SET_GPR_U32(ctx, 31, 0x30EF48u);
    ctx->pc = 0x30EF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF40u;
            // 0x30ef44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF48u; }
        if (ctx->pc != 0x30EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF48u; }
        if (ctx->pc != 0x30EF48u) { return; }
    }
    ctx->pc = 0x30EF48u;
label_30ef48:
    // 0x30ef48: 0x27a42b90  addiu       $a0, $sp, 0x2B90
    ctx->pc = 0x30ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11152));
    // 0x30ef4c: 0x27a52ba0  addiu       $a1, $sp, 0x2BA0
    ctx->pc = 0x30ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 11168));
    // 0x30ef50: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x30EF50u;
    SET_GPR_U32(ctx, 31, 0x30EF58u);
    ctx->pc = 0x30EF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF50u;
            // 0x30ef54: 0x27a62b80  addiu       $a2, $sp, 0x2B80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 11136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF58u; }
        if (ctx->pc != 0x30EF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF58u; }
        if (ctx->pc != 0x30EF58u) { return; }
    }
    ctx->pc = 0x30EF58u;
label_30ef58:
    // 0x30ef58: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ef5c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30EF5Cu;
    SET_GPR_U32(ctx, 31, 0x30EF64u);
    ctx->pc = 0x30EF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF5Cu;
            // 0x30ef60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF64u; }
        if (ctx->pc != 0x30EF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF64u; }
        if (ctx->pc != 0x30EF64u) { return; }
    }
    ctx->pc = 0x30EF64u;
label_30ef64:
    // 0x30ef64: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ef64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ef68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ef68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ef6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30ef70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ef74: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30EF74u;
    SET_GPR_U32(ctx, 31, 0x30EF7Cu);
    ctx->pc = 0x30EF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF74u;
            // 0x30ef78: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF7Cu; }
        if (ctx->pc != 0x30EF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF7Cu; }
        if (ctx->pc != 0x30EF7Cu) { return; }
    }
    ctx->pc = 0x30EF7Cu;
label_30ef7c:
    // 0x30ef7c: 0xc7ac2b70  lwc1        $f12, 0x2B70($sp)
    ctx->pc = 0x30ef7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ef80: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x30ef80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30ef84: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30ef84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30ef88: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x30EF88u;
    SET_GPR_U32(ctx, 31, 0x30EF90u);
    ctx->pc = 0x30EF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EF88u;
            // 0x30ef8c: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF90u; }
        if (ctx->pc != 0x30EF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EF90u; }
        if (ctx->pc != 0x30EF90u) { return; }
    }
    ctx->pc = 0x30EF90u;
label_30ef90:
    // 0x30ef90: 0xc7a32b70  lwc1        $f3, 0x2B70($sp)
    ctx->pc = 0x30ef90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ef94: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30ef98: 0xc7a22b80  lwc1        $f2, 0x2B80($sp)
    ctx->pc = 0x30ef98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ef9c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x30ef9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30efa0: 0xc7a02b84  lwc1        $f0, 0x2B84($sp)
    ctx->pc = 0x30efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30efa4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30efa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30efa8: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x30efa8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30efac: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x30EFACu;
    SET_GPR_U32(ctx, 31, 0x30EFB4u);
    ctx->pc = 0x30EFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFACu;
            // 0x30efb0: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFB4u; }
        if (ctx->pc != 0x30EFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFB4u; }
        if (ctx->pc != 0x30EFB4u) { return; }
    }
    ctx->pc = 0x30EFB4u;
label_30efb4:
    // 0x30efb4: 0x27b42b94  addiu       $s4, $sp, 0x2B94
    ctx->pc = 0x30efb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 11156));
    // 0x30efb8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30efbc: 0xc7a32b70  lwc1        $f3, 0x2B70($sp)
    ctx->pc = 0x30efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30efc0: 0xc7a22b90  lwc1        $f2, 0x2B90($sp)
    ctx->pc = 0x30efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30efc4: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x30efc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30efc8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x30efc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30efcc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30efccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30efd0: 0x46021b00  add.s       $f12, $f3, $f2
    ctx->pc = 0x30efd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x30efd4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x30EFD4u;
    SET_GPR_U32(ctx, 31, 0x30EFDCu);
    ctx->pc = 0x30EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFD4u;
            // 0x30efd8: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFDCu; }
        if (ctx->pc != 0x30EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFDCu; }
        if (ctx->pc != 0x30EFDCu) { return; }
    }
    ctx->pc = 0x30EFDCu;
label_30efdc:
    // 0x30efdc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30EFDCu;
    SET_GPR_U32(ctx, 31, 0x30EFE4u);
    ctx->pc = 0x30EFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFDCu;
            // 0x30efe0: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFE4u; }
        if (ctx->pc != 0x30EFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFE4u; }
        if (ctx->pc != 0x30EFE4u) { return; }
    }
    ctx->pc = 0x30EFE4u;
label_30efe4:
    // 0x30efe4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30efe8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30EFE8u;
    SET_GPR_U32(ctx, 31, 0x30EFF0u);
    ctx->pc = 0x30EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30EFE8u;
            // 0x30efec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFF0u; }
        if (ctx->pc != 0x30EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30EFF0u; }
        if (ctx->pc != 0x30EFF0u) { return; }
    }
    ctx->pc = 0x30EFF0u;
label_30eff0:
    // 0x30eff0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x30eff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30eff4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30eff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30eff8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30eff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30effc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30effcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f000: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F000u;
    SET_GPR_U32(ctx, 31, 0x30F008u);
    ctx->pc = 0x30F004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F000u;
            // 0x30f004: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F008u; }
        if (ctx->pc != 0x30F008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F008u; }
        if (ctx->pc != 0x30F008u) { return; }
    }
    ctx->pc = 0x30F008u;
label_30f008:
    // 0x30f008: 0xc7ac2b70  lwc1        $f12, 0x2B70($sp)
    ctx->pc = 0x30f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30f00c: 0xc66d0000  lwc1        $f13, 0x0($s3)
    ctx->pc = 0x30f00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30f010: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30f010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30f014: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x30F014u;
    SET_GPR_U32(ctx, 31, 0x30F01Cu);
    ctx->pc = 0x30F018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F014u;
            // 0x30f018: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F01Cu; }
        if (ctx->pc != 0x30F01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F01Cu; }
        if (ctx->pc != 0x30F01Cu) { return; }
    }
    ctx->pc = 0x30F01Cu;
label_30f01c:
    // 0x30f01c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x30f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f020: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f024: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x30f024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f028: 0xc7a32b70  lwc1        $f3, 0x2B70($sp)
    ctx->pc = 0x30f028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f02c: 0xc7a22b90  lwc1        $f2, 0x2B90($sp)
    ctx->pc = 0x30f02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f030: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x30f030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x30f034: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x30f034u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30f038: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x30F038u;
    SET_GPR_U32(ctx, 31, 0x30F040u);
    ctx->pc = 0x30F03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F038u;
            // 0x30f03c: 0x46021b00  add.s       $f12, $f3, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F040u; }
        if (ctx->pc != 0x30F040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F040u; }
        if (ctx->pc != 0x30F040u) { return; }
    }
    ctx->pc = 0x30F040u;
label_30f040:
    // 0x30f040: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30F040u;
    SET_GPR_U32(ctx, 31, 0x30F048u);
    ctx->pc = 0x30F044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F040u;
            // 0x30f044: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F048u; }
        if (ctx->pc != 0x30F048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F048u; }
        if (ctx->pc != 0x30F048u) { return; }
    }
    ctx->pc = 0x30F048u;
label_30f048:
    // 0x30f048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30f048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f04c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x30f04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x30f050: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x30F050u;
    {
        const bool branch_taken_0x30f050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f050) {
            ctx->pc = 0x30EE84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30ee84;
        }
    }
    ctx->pc = 0x30F058u;
label_30f058:
    // 0x30f058: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f05c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30F05Cu;
    SET_GPR_U32(ctx, 31, 0x30F064u);
    ctx->pc = 0x30F060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F05Cu;
            // 0x30f060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F064u; }
        if (ctx->pc != 0x30F064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F064u; }
        if (ctx->pc != 0x30F064u) { return; }
    }
    ctx->pc = 0x30F064u;
label_30f064:
    // 0x30f064: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f068: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x30F068u;
    SET_GPR_U32(ctx, 31, 0x30F070u);
    ctx->pc = 0x30F06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F068u;
            // 0x30f06c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F070u; }
        if (ctx->pc != 0x30F070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F070u; }
        if (ctx->pc != 0x30F070u) { return; }
    }
    ctx->pc = 0x30F070u;
label_30f070:
    // 0x30f070: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f074: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x30F074u;
    SET_GPR_U32(ctx, 31, 0x30F07Cu);
    ctx->pc = 0x30F078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F074u;
            // 0x30f078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F07Cu; }
        if (ctx->pc != 0x30F07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F07Cu; }
        if (ctx->pc != 0x30F07Cu) { return; }
    }
    ctx->pc = 0x30F07Cu;
label_30f07c:
    // 0x30f07c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f080: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30F080u;
    SET_GPR_U32(ctx, 31, 0x30F088u);
    ctx->pc = 0x30F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F080u;
            // 0x30f084: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F088u; }
        if (ctx->pc != 0x30F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F088u; }
        if (ctx->pc != 0x30F088u) { return; }
    }
    ctx->pc = 0x30F088u;
label_30f088:
    // 0x30f088: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f08c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f094: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f098: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F098u;
    SET_GPR_U32(ctx, 31, 0x30F0A0u);
    ctx->pc = 0x30F09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F098u;
            // 0x30f09c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0A0u; }
        if (ctx->pc != 0x30F0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0A0u; }
        if (ctx->pc != 0x30F0A0u) { return; }
    }
    ctx->pc = 0x30F0A0u;
label_30f0a0:
    // 0x30f0a0: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0ac: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F0ACu;
    SET_GPR_U32(ctx, 31, 0x30F0B4u);
    ctx->pc = 0x30F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0ACu;
            // 0x30f0b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0B4u; }
        if (ctx->pc != 0x30F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0B4u; }
        if (ctx->pc != 0x30F0B4u) { return; }
    }
    ctx->pc = 0x30F0B4u;
label_30f0b4:
    // 0x30f0b4: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x30f0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30f0b8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f0bc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30f0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f0c0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F0C0u;
    SET_GPR_U32(ctx, 31, 0x30F0C8u);
    ctx->pc = 0x30F0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0C0u;
            // 0x30f0c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0C8u; }
        if (ctx->pc != 0x30F0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0C8u; }
        if (ctx->pc != 0x30F0C8u) { return; }
    }
    ctx->pc = 0x30F0C8u;
label_30f0c8:
    // 0x30f0c8: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x30f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30f0cc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f0d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f0d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0d8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F0D8u;
    SET_GPR_U32(ctx, 31, 0x30F0E0u);
    ctx->pc = 0x30F0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0D8u;
            // 0x30f0dc: 0x2445fff0  addiu       $a1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0E0u; }
        if (ctx->pc != 0x30F0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0E0u; }
        if (ctx->pc != 0x30F0E0u) { return; }
    }
    ctx->pc = 0x30F0E0u;
label_30f0e0:
    // 0x30f0e0: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x30f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30f0e4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f0e8: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x30f0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30f0ec: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F0ECu;
    SET_GPR_U32(ctx, 31, 0x30F0F4u);
    ctx->pc = 0x30F0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F0ECu;
            // 0x30f0f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0F4u; }
        if (ctx->pc != 0x30F0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F0F4u; }
        if (ctx->pc != 0x30F0F4u) { return; }
    }
    ctx->pc = 0x30F0F4u;
label_30f0f4:
    // 0x30f0f4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f100: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F100u;
    SET_GPR_U32(ctx, 31, 0x30F108u);
    ctx->pc = 0x30F104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F100u;
            // 0x30f104: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F108u; }
        if (ctx->pc != 0x30F108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F108u; }
        if (ctx->pc != 0x30F108u) { return; }
    }
    ctx->pc = 0x30F108u;
label_30f108:
    // 0x30f108: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x30f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30f10c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f110: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x30f110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f114: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F114u;
    SET_GPR_U32(ctx, 31, 0x30F11Cu);
    ctx->pc = 0x30F118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F114u;
            // 0x30f118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F11Cu; }
        if (ctx->pc != 0x30F11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F11Cu; }
        if (ctx->pc != 0x30F11Cu) { return; }
    }
    ctx->pc = 0x30F11Cu;
label_30f11c:
    // 0x30f11c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x30f11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30f120: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f128: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f12c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F12Cu;
    SET_GPR_U32(ctx, 31, 0x30F134u);
    ctx->pc = 0x30F130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F12Cu;
            // 0x30f130: 0x2446fff0  addiu       $a2, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F134u; }
        if (ctx->pc != 0x30F134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F134u; }
        if (ctx->pc != 0x30F134u) { return; }
    }
    ctx->pc = 0x30F134u;
label_30f134:
    // 0x30f134: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x30f134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x30f138: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f13c: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x30f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x30f140: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F140u;
    SET_GPR_U32(ctx, 31, 0x30F148u);
    ctx->pc = 0x30F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F140u;
            // 0x30f144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F148u; }
        if (ctx->pc != 0x30F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F148u; }
        if (ctx->pc != 0x30F148u) { return; }
    }
    ctx->pc = 0x30F148u;
label_30f148:
    // 0x30f148: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30F148u;
    SET_GPR_U32(ctx, 31, 0x30F150u);
    ctx->pc = 0x30F14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F148u;
            // 0x30f14c: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F150u; }
        if (ctx->pc != 0x30F150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F150u; }
        if (ctx->pc != 0x30F150u) { return; }
    }
    ctx->pc = 0x30F150u;
label_30f150:
    // 0x30f150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30f150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f154: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x30f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_30f158:
    // 0x30f158: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f15c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30f15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f160: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F160u;
    {
        const bool branch_taken_0x30f160 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F160u;
            // 0x30f164: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f160) {
            ctx->pc = 0x30F194u;
            goto label_30f194;
        }
    }
    ctx->pc = 0x30F168u;
    // 0x30f168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30f168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f16c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F16Cu;
    SET_GPR_U32(ctx, 31, 0x30F174u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F174u; }
        if (ctx->pc != 0x30F174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F174u; }
        if (ctx->pc != 0x30F174u) { return; }
    }
    ctx->pc = 0x30F174u;
label_30f174:
    // 0x30f174: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30f174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30f178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f17c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x30f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x30f180: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x30f180u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f184: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f188: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30f188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f18c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x30F18Cu;
    {
        const bool branch_taken_0x30f18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F18Cu;
            // 0x30f190: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f18c) {
            ctx->pc = 0x30F290u;
            goto label_30f290;
        }
    }
    ctx->pc = 0x30F194u;
label_30f194:
    // 0x30f194: 0x0  nop
    ctx->pc = 0x30f194u;
    // NOP
    // 0x30f198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f19c: 0x16020012  bne         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30F19Cu;
    {
        const bool branch_taken_0x30f19c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F19Cu;
            // 0x30f1a0: 0x3c024240  lui         $v0, 0x4240 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f19c) {
            ctx->pc = 0x30F1E8u;
            goto label_30f1e8;
        }
    }
    ctx->pc = 0x30F1A4u;
    // 0x30f1a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30f1a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f1a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F1A8u;
    SET_GPR_U32(ctx, 31, 0x30F1B0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1B0u; }
        if (ctx->pc != 0x30F1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1B0u; }
        if (ctx->pc != 0x30F1B0u) { return; }
    }
    ctx->pc = 0x30F1B0u;
label_30f1b0:
    // 0x30f1b0: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x30f1b0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f1b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30f1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1b8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x30f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x30f1bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x30f1bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30f1c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30f1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f1c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F1C8u;
    SET_GPR_U32(ctx, 31, 0x30F1D0u);
    ctx->pc = 0x30F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1C8u;
            // 0x30f1cc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1D0u; }
        if (ctx->pc != 0x30F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F1D0u; }
        if (ctx->pc != 0x30F1D0u) { return; }
    }
    ctx->pc = 0x30F1D0u;
label_30f1d0:
    // 0x30f1d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30f1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f1d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x30f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x30f1d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f1dc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30f1dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f1e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30F1E0u;
    {
        const bool branch_taken_0x30f1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F1E0u;
            // 0x30f1e4: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f1e0) {
            ctx->pc = 0x30F290u;
            goto label_30f290;
        }
    }
    ctx->pc = 0x30F1E8u;
label_30f1e8:
    // 0x30f1e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f1ec: 0x16020016  bne         $s0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30F1ECu;
    {
        const bool branch_taken_0x30f1ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f1ec) {
            ctx->pc = 0x30F248u;
            goto label_30f248;
        }
    }
    ctx->pc = 0x30F1F4u;
    // 0x30f1f4: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x30f1f4u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f1f8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x30f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x30f1fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f200: 0x0  nop
    ctx->pc = 0x30f200u;
    // NOP
    // 0x30f204: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f208: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F208u;
    SET_GPR_U32(ctx, 31, 0x30F210u);
    ctx->pc = 0x30F20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F208u;
            // 0x30f20c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F210u; }
        if (ctx->pc != 0x30F210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F210u; }
        if (ctx->pc != 0x30F210u) { return; }
    }
    ctx->pc = 0x30F210u;
label_30f210:
    // 0x30f210: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x30f210u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30f214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f218: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x30f218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x30f21c: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x30f21cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f220: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30f220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30f224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f228: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F228u;
    SET_GPR_U32(ctx, 31, 0x30F230u);
    ctx->pc = 0x30F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F228u;
            // 0x30f22c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F230u; }
        if (ctx->pc != 0x30F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F230u; }
        if (ctx->pc != 0x30F230u) { return; }
    }
    ctx->pc = 0x30F230u;
label_30f230:
    // 0x30f230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30f230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f234: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x30f234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x30f238: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x30f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x30f23c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30f23cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f240: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30F240u;
    {
        const bool branch_taken_0x30f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F240u;
            // 0x30f244: 0x2a0b82d  daddu       $s7, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f240) {
            ctx->pc = 0x30F290u;
            goto label_30f290;
        }
    }
    ctx->pc = 0x30F248u;
label_30f248:
    // 0x30f248: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30f248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30f24c: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30F24Cu;
    {
        const bool branch_taken_0x30f24c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x30f24c) {
            ctx->pc = 0x30F290u;
            goto label_30f290;
        }
    }
    ctx->pc = 0x30F254u;
    // 0x30f254: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x30f254u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f258: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x30f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x30f25c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30f25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f260: 0x0  nop
    ctx->pc = 0x30f260u;
    // NOP
    // 0x30f264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30f264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f268: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F268u;
    SET_GPR_U32(ctx, 31, 0x30F270u);
    ctx->pc = 0x30F26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F268u;
            // 0x30f26c: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F270u; }
        if (ctx->pc != 0x30F270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F270u; }
        if (ctx->pc != 0x30F270u) { return; }
    }
    ctx->pc = 0x30F270u;
label_30f270:
    // 0x30f270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30f270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f274: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x30f274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x30f278: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30f278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f27c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F27Cu;
    SET_GPR_U32(ctx, 31, 0x30F284u);
    ctx->pc = 0x30F280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F27Cu;
            // 0x30f280: 0x2c0f02d  daddu       $fp, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F284u; }
        if (ctx->pc != 0x30F284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F284u; }
        if (ctx->pc != 0x30F284u) { return; }
    }
    ctx->pc = 0x30F284u;
label_30f284:
    // 0x30f284: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x30f284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f288: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30f288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f28c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x30f28cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f290:
    // 0x30f290: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f294: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30F294u;
    SET_GPR_U32(ctx, 31, 0x30F29Cu);
    ctx->pc = 0x30F298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F294u;
            // 0x30f298: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F29Cu; }
        if (ctx->pc != 0x30F29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F29Cu; }
        if (ctx->pc != 0x30F29Cu) { return; }
    }
    ctx->pc = 0x30F29Cu;
label_30f29c:
    // 0x30f29c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f2a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2ac: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F2ACu;
    SET_GPR_U32(ctx, 31, 0x30F2B4u);
    ctx->pc = 0x30F2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2ACu;
            // 0x30f2b0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2B4u; }
        if (ctx->pc != 0x30F2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2B4u; }
        if (ctx->pc != 0x30F2B4u) { return; }
    }
    ctx->pc = 0x30F2B4u;
label_30f2b4:
    // 0x30f2b4: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f2b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30f2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2bc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x30f2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2c0: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F2C0u;
    SET_GPR_U32(ctx, 31, 0x30F2C8u);
    ctx->pc = 0x30F2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2C0u;
            // 0x30f2c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2C8u; }
        if (ctx->pc != 0x30F2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2C8u; }
        if (ctx->pc != 0x30F2C8u) { return; }
    }
    ctx->pc = 0x30F2C8u;
label_30f2c8:
    // 0x30f2c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30f2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f2cc:
    // 0x30f2cc: 0x0  nop
    ctx->pc = 0x30f2ccu;
    // NOP
    // 0x30f2d0: 0xc047964  jal         func_11E590
    ctx->pc = 0x30F2D0u;
    SET_GPR_U32(ctx, 31, 0x30F2D8u);
    ctx->pc = 0x30F2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2D0u;
            // 0x30f2d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2D8u; }
        if (ctx->pc != 0x30F2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2D8u; }
        if (ctx->pc != 0x30F2D8u) { return; }
    }
    ctx->pc = 0x30F2D8u;
label_30f2d8:
    // 0x30f2d8: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x30f2dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30f2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30f2e0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x30f2e0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f2e4: 0x0  nop
    ctx->pc = 0x30f2e4u;
    // NOP
    // 0x30f2e8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30f2e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f2ec: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x30f2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f2f0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F2F0u;
    SET_GPR_U32(ctx, 31, 0x30F2F8u);
    ctx->pc = 0x30F2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2F0u;
            // 0x30f2f4: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2F8u; }
        if (ctx->pc != 0x30F2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F2F8u; }
        if (ctx->pc != 0x30F2F8u) { return; }
    }
    ctx->pc = 0x30F2F8u;
label_30f2f8:
    // 0x30f2f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30f2f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f2fc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x30F2FCu;
    SET_GPR_U32(ctx, 31, 0x30F304u);
    ctx->pc = 0x30F300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F2FCu;
            // 0x30f300: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F304u; }
        if (ctx->pc != 0x30F304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F304u; }
        if (ctx->pc != 0x30F304u) { return; }
    }
    ctx->pc = 0x30F304u;
label_30f304:
    // 0x30f304: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x30f304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x30f308: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30f308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30f30c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x30f30cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f310: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x30f310u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x30f314: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30f314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30f318: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x30f318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30f31c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x30F31Cu;
    SET_GPR_U32(ctx, 31, 0x30F324u);
    ctx->pc = 0x30F320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F31Cu;
            // 0x30f320: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F324u; }
        if (ctx->pc != 0x30F324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F324u; }
        if (ctx->pc != 0x30F324u) { return; }
    }
    ctx->pc = 0x30F324u;
label_30f324:
    // 0x30f324: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x30f324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f328: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30f328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f32c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x30f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x30f330: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f334: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30f334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30f338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f340: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F340u;
    SET_GPR_U32(ctx, 31, 0x30F348u);
    ctx->pc = 0x30F344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F340u;
            // 0x30f344: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F348u; }
        if (ctx->pc != 0x30F348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F348u; }
        if (ctx->pc != 0x30F348u) { return; }
    }
    ctx->pc = 0x30F348u;
label_30f348:
    // 0x30f348: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30f348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x30f34c: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x30f34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x30f350: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x30F350u;
    {
        const bool branch_taken_0x30f350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F350u;
            // 0x30f354: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f350) {
            ctx->pc = 0x30F2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f2cc;
        }
    }
    ctx->pc = 0x30F358u;
    // 0x30f358: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30F358u;
    SET_GPR_U32(ctx, 31, 0x30F360u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F360u; }
        if (ctx->pc != 0x30F360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F360u; }
        if (ctx->pc != 0x30F360u) { return; }
    }
    ctx->pc = 0x30F360u;
label_30f360:
    // 0x30f360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f364: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x30f364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30f368: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x30F368u;
    {
        const bool branch_taken_0x30f368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F368u;
            // 0x30f36c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f368) {
            ctx->pc = 0x30F158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30f158;
        }
    }
    ctx->pc = 0x30F370u;
    // 0x30f370: 0x8f83a234  lw          $v1, -0x5DCC($gp)
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943284)));
    // 0x30f374: 0x18600095  blez        $v1, . + 4 + (0x95 << 2)
    ctx->pc = 0x30F374u;
    {
        const bool branch_taken_0x30f374 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x30f374) {
            ctx->pc = 0x30F5CCu;
            goto label_30f5cc;
        }
    }
    ctx->pc = 0x30F37Cu;
    // 0x30f37c: 0x8f82a230  lw          $v0, -0x5DD0($gp)
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943280)));
    // 0x30f380: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x30F380u;
    {
        const bool branch_taken_0x30f380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F380u;
            // 0x30f384: 0x2861001e  slti        $at, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f380) {
            ctx->pc = 0x30F5CCu;
            goto label_30f5cc;
        }
    }
    ctx->pc = 0x30F388u;
    // 0x30f388: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F388u;
    {
        const bool branch_taken_0x30f388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F388u;
            // 0x30f38c: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f388) {
            ctx->pc = 0x30F3B0u;
            goto label_30f3b0;
        }
    }
    ctx->pc = 0x30F390u;
    // 0x30f390: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x30f390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x30f394: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x30f394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f398: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30f398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f39c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f3a0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30f3a4: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F3A4u;
    {
        const bool branch_taken_0x30f3a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x30f3a4) {
            ctx->pc = 0x30F3B0u;
            goto label_30f3b0;
        }
    }
    ctx->pc = 0x30F3ACu;
    // 0x30f3ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30f3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30f3b0:
    // 0x30f3b0: 0x8f84a22c  lw          $a0, -0x5DD4($gp)
    ctx->pc = 0x30f3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30f3b4: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x30f3b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30f3b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f3bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f3c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F3C0u;
    {
        const bool branch_taken_0x30f3c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30F3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F3C0u;
            // 0x30f3c4: 0x28843  sra         $s1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3c0) {
            ctx->pc = 0x30F3D0u;
            goto label_30f3d0;
        }
    }
    ctx->pc = 0x30F3C8u;
    // 0x30f3c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30f3cc: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x30f3ccu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_30f3d0:
    // 0x30f3d0: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x30f3d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30f3d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30f3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f3dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30f3e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F3E0u;
    {
        const bool branch_taken_0x30f3e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x30F3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F3E0u;
            // 0x30f3e4: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f3e0) {
            ctx->pc = 0x30F3F0u;
            goto label_30f3f0;
        }
    }
    ctx->pc = 0x30F3E8u;
    // 0x30f3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30f3ec: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x30f3ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_30f3f0:
    // 0x30f3f0: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x30f3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x30f3f4: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x30f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x30f3f8: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x30f3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x30f3fc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f400: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x30f400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30f404: 0x0  nop
    ctx->pc = 0x30f404u;
    // NOP
    // 0x30f408: 0x0  nop
    ctx->pc = 0x30f408u;
    // NOP
    // 0x30f40c: 0x1010  mfhi        $v0
    ctx->pc = 0x30f40cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30f410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f414: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x30f414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x30f418: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30F418u;
    SET_GPR_U32(ctx, 31, 0x30F420u);
    ctx->pc = 0x30F41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F418u;
            // 0x30f41c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F420u; }
        if (ctx->pc != 0x30F420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F420u; }
        if (ctx->pc != 0x30F420u) { return; }
    }
    ctx->pc = 0x30F420u;
label_30f420:
    // 0x30f420: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f424: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30F424u;
    SET_GPR_U32(ctx, 31, 0x30F42Cu);
    ctx->pc = 0x30F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F424u;
            // 0x30f428: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F42Cu; }
        if (ctx->pc != 0x30F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F42Cu; }
        if (ctx->pc != 0x30F42Cu) { return; }
    }
    ctx->pc = 0x30F42Cu;
label_30f42c:
    // 0x30f42c: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x30f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x30f430: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x30f430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30f434: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x30f434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x30f438: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x30f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x30f43c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x30f43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x30f440: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x30f440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30f444: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f448: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30f448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f44c: 0x1010  mfhi        $v0
    ctx->pc = 0x30f44cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x30f450: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f454: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F454u;
    SET_GPR_U32(ctx, 31, 0x30F45Cu);
    ctx->pc = 0x30F458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F454u;
            // 0x30f458: 0x434021  addu        $t0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F45Cu; }
        if (ctx->pc != 0x30F45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F45Cu; }
        if (ctx->pc != 0x30F45Cu) { return; }
    }
    ctx->pc = 0x30F45Cu;
label_30f45c:
    // 0x30f45c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f460: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x30f464: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x30f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x30f468: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F468u;
    SET_GPR_U32(ctx, 31, 0x30F470u);
    ctx->pc = 0x30F46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F468u;
            // 0x30f46c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F470u; }
        if (ctx->pc != 0x30F470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F470u; }
        if (ctx->pc != 0x30F470u) { return; }
    }
    ctx->pc = 0x30F470u;
label_30f470:
    // 0x30f470: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x30f470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x30f474: 0x2646012a  addiu       $a2, $s2, 0x12A
    ctx->pc = 0x30f474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 298));
    // 0x30f478: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f47c: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F47Cu;
    SET_GPR_U32(ctx, 31, 0x30F484u);
    ctx->pc = 0x30F480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F47Cu;
            // 0x30f480: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F484u; }
        if (ctx->pc != 0x30F484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F484u; }
        if (ctx->pc != 0x30F484u) { return; }
    }
    ctx->pc = 0x30F484u;
label_30f484:
    // 0x30f484: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f48c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30f48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f490: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30f490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f494: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F494u;
    SET_GPR_U32(ctx, 31, 0x30F49Cu);
    ctx->pc = 0x30F498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F494u;
            // 0x30f498: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F49Cu; }
        if (ctx->pc != 0x30F49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F49Cu; }
        if (ctx->pc != 0x30F49Cu) { return; }
    }
    ctx->pc = 0x30F49Cu;
label_30f49c:
    // 0x30f49c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f4a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x30f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30f4a4: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x30f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x30f4a8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F4A8u;
    SET_GPR_U32(ctx, 31, 0x30F4B0u);
    ctx->pc = 0x30F4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4A8u;
            // 0x30f4ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4B0u; }
        if (ctx->pc != 0x30F4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4B0u; }
        if (ctx->pc != 0x30F4B0u) { return; }
    }
    ctx->pc = 0x30F4B0u;
label_30f4b0:
    // 0x30f4b0: 0x2625001a  addiu       $a1, $s1, 0x1A
    ctx->pc = 0x30f4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 26));
    // 0x30f4b4: 0x26460128  addiu       $a2, $s2, 0x128
    ctx->pc = 0x30f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x30f4b8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f4bc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F4BCu;
    SET_GPR_U32(ctx, 31, 0x30F4C4u);
    ctx->pc = 0x30F4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4BCu;
            // 0x30f4c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4C4u; }
        if (ctx->pc != 0x30F4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4C4u; }
        if (ctx->pc != 0x30F4C4u) { return; }
    }
    ctx->pc = 0x30F4C4u;
label_30f4c4:
    // 0x30f4c4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30f4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30f4c8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f4cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x30f4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f4d4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F4D4u;
    SET_GPR_U32(ctx, 31, 0x30F4DCu);
    ctx->pc = 0x30F4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4D4u;
            // 0x30f4d8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4DCu; }
        if (ctx->pc != 0x30F4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4DCu; }
        if (ctx->pc != 0x30F4DCu) { return; }
    }
    ctx->pc = 0x30F4DCu;
label_30f4dc:
    // 0x30f4dc: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f4e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30f4e4: 0x2406011d  addiu       $a2, $zero, 0x11D
    ctx->pc = 0x30f4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x30f4e8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F4E8u;
    SET_GPR_U32(ctx, 31, 0x30F4F0u);
    ctx->pc = 0x30F4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4E8u;
            // 0x30f4ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4F0u; }
        if (ctx->pc != 0x30F4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F4F0u; }
        if (ctx->pc != 0x30F4F0u) { return; }
    }
    ctx->pc = 0x30F4F0u;
label_30f4f0:
    // 0x30f4f0: 0x26250019  addiu       $a1, $s1, 0x19
    ctx->pc = 0x30f4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 25));
    // 0x30f4f4: 0x26460127  addiu       $a2, $s2, 0x127
    ctx->pc = 0x30f4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 295));
    // 0x30f4f8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f4fc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F4FCu;
    SET_GPR_U32(ctx, 31, 0x30F504u);
    ctx->pc = 0x30F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F4FCu;
            // 0x30f500: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F504u; }
        if (ctx->pc != 0x30F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F504u; }
        if (ctx->pc != 0x30F504u) { return; }
    }
    ctx->pc = 0x30F504u;
label_30f504:
    // 0x30f504: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30F504u;
    SET_GPR_U32(ctx, 31, 0x30F50Cu);
    ctx->pc = 0x30F508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F504u;
            // 0x30f508: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F50Cu; }
        if (ctx->pc != 0x30F50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F50Cu; }
        if (ctx->pc != 0x30F50Cu) { return; }
    }
    ctx->pc = 0x30F50Cu;
label_30f50c:
    // 0x30f50c: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f510: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x30F510u;
    SET_GPR_U32(ctx, 31, 0x30F518u);
    ctx->pc = 0x30F514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F510u;
            // 0x30f514: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F518u; }
        if (ctx->pc != 0x30F518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F518u; }
        if (ctx->pc != 0x30F518u) { return; }
    }
    ctx->pc = 0x30F518u;
label_30f518:
    // 0x30f518: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f51c: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x30F51Cu;
    SET_GPR_U32(ctx, 31, 0x30F524u);
    ctx->pc = 0x30F520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F51Cu;
            // 0x30f520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F524u; }
        if (ctx->pc != 0x30F524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F524u; }
        if (ctx->pc != 0x30F524u) { return; }
    }
    ctx->pc = 0x30F524u;
label_30f524:
    // 0x30f524: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f528: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x30F528u;
    SET_GPR_U32(ctx, 31, 0x30F530u);
    ctx->pc = 0x30F52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F528u;
            // 0x30f52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F530u; }
        if (ctx->pc != 0x30F530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F530u; }
        if (ctx->pc != 0x30F530u) { return; }
    }
    ctx->pc = 0x30F530u;
label_30f530:
    // 0x30f530: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f534: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x30F534u;
    SET_GPR_U32(ctx, 31, 0x30F53Cu);
    ctx->pc = 0x30F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F534u;
            // 0x30f538: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F53Cu; }
        if (ctx->pc != 0x30F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F53Cu; }
        if (ctx->pc != 0x30F53Cu) { return; }
    }
    ctx->pc = 0x30F53Cu;
label_30f53c:
    // 0x30f53c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x30f53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30f540: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x30f540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f544: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f548: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30f548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f54c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x30F54Cu;
    SET_GPR_U32(ctx, 31, 0x30F554u);
    ctx->pc = 0x30F550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F54Cu;
            // 0x30f550: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F554u; }
        if (ctx->pc != 0x30F554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F554u; }
        if (ctx->pc != 0x30F554u) { return; }
    }
    ctx->pc = 0x30F554u;
label_30f554:
    // 0x30f554: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x30f554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30f558: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f55c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x30f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30f560: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x30f560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x30f564: 0xc04d360  jal         func_134D80
    ctx->pc = 0x30F564u;
    SET_GPR_U32(ctx, 31, 0x30F56Cu);
    ctx->pc = 0x30F568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F564u;
            // 0x30f568: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F56Cu; }
        if (ctx->pc != 0x30F56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F56Cu; }
        if (ctx->pc != 0x30F56Cu) { return; }
    }
    ctx->pc = 0x30F56Cu;
label_30f56c:
    // 0x30f56c: 0x8f85a22c  lw          $a1, -0x5DD4($gp)
    ctx->pc = 0x30f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30f570: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x30F570u;
    SET_GPR_U32(ctx, 31, 0x30F578u);
    ctx->pc = 0x30F574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F570u;
            // 0x30f574: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F578u; }
        if (ctx->pc != 0x30F578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F578u; }
        if (ctx->pc != 0x30F578u) { return; }
    }
    ctx->pc = 0x30F578u;
label_30f578:
    // 0x30f578: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30f57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f580: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30F580u;
    SET_GPR_U32(ctx, 31, 0x30F588u);
    ctx->pc = 0x30F584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F580u;
            // 0x30f584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F588u; }
        if (ctx->pc != 0x30F588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F588u; }
        if (ctx->pc != 0x30F588u) { return; }
    }
    ctx->pc = 0x30F588u;
label_30f588:
    // 0x30f588: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f58c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30f58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30f590: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x30f594: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F594u;
    SET_GPR_U32(ctx, 31, 0x30F59Cu);
    ctx->pc = 0x30F598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F594u;
            // 0x30f598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F59Cu; }
        if (ctx->pc != 0x30F59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F59Cu; }
        if (ctx->pc != 0x30F59Cu) { return; }
    }
    ctx->pc = 0x30F59Cu;
label_30f59c:
    // 0x30f59c: 0x8f82a22c  lw          $v0, -0x5DD4($gp)
    ctx->pc = 0x30f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943276)));
    // 0x30f5a0: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x30f5a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x30f5a4: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x30f5a4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30f5a8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x30F5A8u;
    SET_GPR_U32(ctx, 31, 0x30F5B0u);
    ctx->pc = 0x30F5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5A8u;
            // 0x30f5ac: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5B0u; }
        if (ctx->pc != 0x30F5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5B0u; }
        if (ctx->pc != 0x30F5B0u) { return; }
    }
    ctx->pc = 0x30F5B0u;
label_30f5b0:
    // 0x30f5b0: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x30f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x30f5b4: 0x26460122  addiu       $a2, $s2, 0x122
    ctx->pc = 0x30f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 290));
    // 0x30f5b8: 0x27a428c0  addiu       $a0, $sp, 0x28C0
    ctx->pc = 0x30f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
    // 0x30f5bc: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x30F5BCu;
    SET_GPR_U32(ctx, 31, 0x30F5C4u);
    ctx->pc = 0x30F5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5BCu;
            // 0x30f5c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5C4u; }
        if (ctx->pc != 0x30F5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5C4u; }
        if (ctx->pc != 0x30F5C4u) { return; }
    }
    ctx->pc = 0x30F5C4u;
label_30f5c4:
    // 0x30f5c4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x30F5C4u;
    SET_GPR_U32(ctx, 31, 0x30F5CCu);
    ctx->pc = 0x30F5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30F5C4u;
            // 0x30f5c8: 0x27a428c0  addiu       $a0, $sp, 0x28C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5CCu; }
        if (ctx->pc != 0x30F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30F5CCu; }
        if (ctx->pc != 0x30F5CCu) { return; }
    }
    ctx->pc = 0x30F5CCu;
label_30f5cc:
    // 0x30f5cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x30f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30f5d0: 0x0  nop
    ctx->pc = 0x30f5d0u;
    // NOP
label_30f5d4:
    // 0x30f5d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x30f5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_30f5d8:
    // 0x30f5d8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x30f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30f5dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x30f5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30f5e0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x30f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30f5e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x30f5e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30f5e8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f5ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x30f5ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30f5f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30f5f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30f5f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x30f5f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30f5f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30f5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f5fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f600: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30f600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f604: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30f604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f608: 0x3e00008  jr          $ra
    ctx->pc = 0x30F608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30F608u;
            // 0x30f60c: 0x27bd2be0  addiu       $sp, $sp, 0x2BE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30F610u;
}
