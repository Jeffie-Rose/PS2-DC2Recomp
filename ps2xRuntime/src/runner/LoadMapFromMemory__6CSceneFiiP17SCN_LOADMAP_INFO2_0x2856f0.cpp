#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadMapFromMemory__6CSceneFiiP17SCN_LOADMAP_INFO2
// Address: 0x2856f0 - 0x285b24
void LoadMapFromMemory__6CSceneFiiP17SCN_LOADMAP_INFO2_0x2856f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadMapFromMemory__6CSceneFiiP17SCN_LOADMAP_INFO2_0x2856f0");
#endif

    switch (ctx->pc) {
        case 0x2856f0u: goto label_2856f0;
        case 0x2856f4u: goto label_2856f4;
        case 0x2856f8u: goto label_2856f8;
        case 0x2856fcu: goto label_2856fc;
        case 0x285700u: goto label_285700;
        case 0x285704u: goto label_285704;
        case 0x285708u: goto label_285708;
        case 0x28570cu: goto label_28570c;
        case 0x285710u: goto label_285710;
        case 0x285714u: goto label_285714;
        case 0x285718u: goto label_285718;
        case 0x28571cu: goto label_28571c;
        case 0x285720u: goto label_285720;
        case 0x285724u: goto label_285724;
        case 0x285728u: goto label_285728;
        case 0x28572cu: goto label_28572c;
        case 0x285730u: goto label_285730;
        case 0x285734u: goto label_285734;
        case 0x285738u: goto label_285738;
        case 0x28573cu: goto label_28573c;
        case 0x285740u: goto label_285740;
        case 0x285744u: goto label_285744;
        case 0x285748u: goto label_285748;
        case 0x28574cu: goto label_28574c;
        case 0x285750u: goto label_285750;
        case 0x285754u: goto label_285754;
        case 0x285758u: goto label_285758;
        case 0x28575cu: goto label_28575c;
        case 0x285760u: goto label_285760;
        case 0x285764u: goto label_285764;
        case 0x285768u: goto label_285768;
        case 0x28576cu: goto label_28576c;
        case 0x285770u: goto label_285770;
        case 0x285774u: goto label_285774;
        case 0x285778u: goto label_285778;
        case 0x28577cu: goto label_28577c;
        case 0x285780u: goto label_285780;
        case 0x285784u: goto label_285784;
        case 0x285788u: goto label_285788;
        case 0x28578cu: goto label_28578c;
        case 0x285790u: goto label_285790;
        case 0x285794u: goto label_285794;
        case 0x285798u: goto label_285798;
        case 0x28579cu: goto label_28579c;
        case 0x2857a0u: goto label_2857a0;
        case 0x2857a4u: goto label_2857a4;
        case 0x2857a8u: goto label_2857a8;
        case 0x2857acu: goto label_2857ac;
        case 0x2857b0u: goto label_2857b0;
        case 0x2857b4u: goto label_2857b4;
        case 0x2857b8u: goto label_2857b8;
        case 0x2857bcu: goto label_2857bc;
        case 0x2857c0u: goto label_2857c0;
        case 0x2857c4u: goto label_2857c4;
        case 0x2857c8u: goto label_2857c8;
        case 0x2857ccu: goto label_2857cc;
        case 0x2857d0u: goto label_2857d0;
        case 0x2857d4u: goto label_2857d4;
        case 0x2857d8u: goto label_2857d8;
        case 0x2857dcu: goto label_2857dc;
        case 0x2857e0u: goto label_2857e0;
        case 0x2857e4u: goto label_2857e4;
        case 0x2857e8u: goto label_2857e8;
        case 0x2857ecu: goto label_2857ec;
        case 0x2857f0u: goto label_2857f0;
        case 0x2857f4u: goto label_2857f4;
        case 0x2857f8u: goto label_2857f8;
        case 0x2857fcu: goto label_2857fc;
        case 0x285800u: goto label_285800;
        case 0x285804u: goto label_285804;
        case 0x285808u: goto label_285808;
        case 0x28580cu: goto label_28580c;
        case 0x285810u: goto label_285810;
        case 0x285814u: goto label_285814;
        case 0x285818u: goto label_285818;
        case 0x28581cu: goto label_28581c;
        case 0x285820u: goto label_285820;
        case 0x285824u: goto label_285824;
        case 0x285828u: goto label_285828;
        case 0x28582cu: goto label_28582c;
        case 0x285830u: goto label_285830;
        case 0x285834u: goto label_285834;
        case 0x285838u: goto label_285838;
        case 0x28583cu: goto label_28583c;
        case 0x285840u: goto label_285840;
        case 0x285844u: goto label_285844;
        case 0x285848u: goto label_285848;
        case 0x28584cu: goto label_28584c;
        case 0x285850u: goto label_285850;
        case 0x285854u: goto label_285854;
        case 0x285858u: goto label_285858;
        case 0x28585cu: goto label_28585c;
        case 0x285860u: goto label_285860;
        case 0x285864u: goto label_285864;
        case 0x285868u: goto label_285868;
        case 0x28586cu: goto label_28586c;
        case 0x285870u: goto label_285870;
        case 0x285874u: goto label_285874;
        case 0x285878u: goto label_285878;
        case 0x28587cu: goto label_28587c;
        case 0x285880u: goto label_285880;
        case 0x285884u: goto label_285884;
        case 0x285888u: goto label_285888;
        case 0x28588cu: goto label_28588c;
        case 0x285890u: goto label_285890;
        case 0x285894u: goto label_285894;
        case 0x285898u: goto label_285898;
        case 0x28589cu: goto label_28589c;
        case 0x2858a0u: goto label_2858a0;
        case 0x2858a4u: goto label_2858a4;
        case 0x2858a8u: goto label_2858a8;
        case 0x2858acu: goto label_2858ac;
        case 0x2858b0u: goto label_2858b0;
        case 0x2858b4u: goto label_2858b4;
        case 0x2858b8u: goto label_2858b8;
        case 0x2858bcu: goto label_2858bc;
        case 0x2858c0u: goto label_2858c0;
        case 0x2858c4u: goto label_2858c4;
        case 0x2858c8u: goto label_2858c8;
        case 0x2858ccu: goto label_2858cc;
        case 0x2858d0u: goto label_2858d0;
        case 0x2858d4u: goto label_2858d4;
        case 0x2858d8u: goto label_2858d8;
        case 0x2858dcu: goto label_2858dc;
        case 0x2858e0u: goto label_2858e0;
        case 0x2858e4u: goto label_2858e4;
        case 0x2858e8u: goto label_2858e8;
        case 0x2858ecu: goto label_2858ec;
        case 0x2858f0u: goto label_2858f0;
        case 0x2858f4u: goto label_2858f4;
        case 0x2858f8u: goto label_2858f8;
        case 0x2858fcu: goto label_2858fc;
        case 0x285900u: goto label_285900;
        case 0x285904u: goto label_285904;
        case 0x285908u: goto label_285908;
        case 0x28590cu: goto label_28590c;
        case 0x285910u: goto label_285910;
        case 0x285914u: goto label_285914;
        case 0x285918u: goto label_285918;
        case 0x28591cu: goto label_28591c;
        case 0x285920u: goto label_285920;
        case 0x285924u: goto label_285924;
        case 0x285928u: goto label_285928;
        case 0x28592cu: goto label_28592c;
        case 0x285930u: goto label_285930;
        case 0x285934u: goto label_285934;
        case 0x285938u: goto label_285938;
        case 0x28593cu: goto label_28593c;
        case 0x285940u: goto label_285940;
        case 0x285944u: goto label_285944;
        case 0x285948u: goto label_285948;
        case 0x28594cu: goto label_28594c;
        case 0x285950u: goto label_285950;
        case 0x285954u: goto label_285954;
        case 0x285958u: goto label_285958;
        case 0x28595cu: goto label_28595c;
        case 0x285960u: goto label_285960;
        case 0x285964u: goto label_285964;
        case 0x285968u: goto label_285968;
        case 0x28596cu: goto label_28596c;
        case 0x285970u: goto label_285970;
        case 0x285974u: goto label_285974;
        case 0x285978u: goto label_285978;
        case 0x28597cu: goto label_28597c;
        case 0x285980u: goto label_285980;
        case 0x285984u: goto label_285984;
        case 0x285988u: goto label_285988;
        case 0x28598cu: goto label_28598c;
        case 0x285990u: goto label_285990;
        case 0x285994u: goto label_285994;
        case 0x285998u: goto label_285998;
        case 0x28599cu: goto label_28599c;
        case 0x2859a0u: goto label_2859a0;
        case 0x2859a4u: goto label_2859a4;
        case 0x2859a8u: goto label_2859a8;
        case 0x2859acu: goto label_2859ac;
        case 0x2859b0u: goto label_2859b0;
        case 0x2859b4u: goto label_2859b4;
        case 0x2859b8u: goto label_2859b8;
        case 0x2859bcu: goto label_2859bc;
        case 0x2859c0u: goto label_2859c0;
        case 0x2859c4u: goto label_2859c4;
        case 0x2859c8u: goto label_2859c8;
        case 0x2859ccu: goto label_2859cc;
        case 0x2859d0u: goto label_2859d0;
        case 0x2859d4u: goto label_2859d4;
        case 0x2859d8u: goto label_2859d8;
        case 0x2859dcu: goto label_2859dc;
        case 0x2859e0u: goto label_2859e0;
        case 0x2859e4u: goto label_2859e4;
        case 0x2859e8u: goto label_2859e8;
        case 0x2859ecu: goto label_2859ec;
        case 0x2859f0u: goto label_2859f0;
        case 0x2859f4u: goto label_2859f4;
        case 0x2859f8u: goto label_2859f8;
        case 0x2859fcu: goto label_2859fc;
        case 0x285a00u: goto label_285a00;
        case 0x285a04u: goto label_285a04;
        case 0x285a08u: goto label_285a08;
        case 0x285a0cu: goto label_285a0c;
        case 0x285a10u: goto label_285a10;
        case 0x285a14u: goto label_285a14;
        case 0x285a18u: goto label_285a18;
        case 0x285a1cu: goto label_285a1c;
        case 0x285a20u: goto label_285a20;
        case 0x285a24u: goto label_285a24;
        case 0x285a28u: goto label_285a28;
        case 0x285a2cu: goto label_285a2c;
        case 0x285a30u: goto label_285a30;
        case 0x285a34u: goto label_285a34;
        case 0x285a38u: goto label_285a38;
        case 0x285a3cu: goto label_285a3c;
        case 0x285a40u: goto label_285a40;
        case 0x285a44u: goto label_285a44;
        case 0x285a48u: goto label_285a48;
        case 0x285a4cu: goto label_285a4c;
        case 0x285a50u: goto label_285a50;
        case 0x285a54u: goto label_285a54;
        case 0x285a58u: goto label_285a58;
        case 0x285a5cu: goto label_285a5c;
        case 0x285a60u: goto label_285a60;
        case 0x285a64u: goto label_285a64;
        case 0x285a68u: goto label_285a68;
        case 0x285a6cu: goto label_285a6c;
        case 0x285a70u: goto label_285a70;
        case 0x285a74u: goto label_285a74;
        case 0x285a78u: goto label_285a78;
        case 0x285a7cu: goto label_285a7c;
        case 0x285a80u: goto label_285a80;
        case 0x285a84u: goto label_285a84;
        case 0x285a88u: goto label_285a88;
        case 0x285a8cu: goto label_285a8c;
        case 0x285a90u: goto label_285a90;
        case 0x285a94u: goto label_285a94;
        case 0x285a98u: goto label_285a98;
        case 0x285a9cu: goto label_285a9c;
        case 0x285aa0u: goto label_285aa0;
        case 0x285aa4u: goto label_285aa4;
        case 0x285aa8u: goto label_285aa8;
        case 0x285aacu: goto label_285aac;
        case 0x285ab0u: goto label_285ab0;
        case 0x285ab4u: goto label_285ab4;
        case 0x285ab8u: goto label_285ab8;
        case 0x285abcu: goto label_285abc;
        case 0x285ac0u: goto label_285ac0;
        case 0x285ac4u: goto label_285ac4;
        case 0x285ac8u: goto label_285ac8;
        case 0x285accu: goto label_285acc;
        case 0x285ad0u: goto label_285ad0;
        case 0x285ad4u: goto label_285ad4;
        case 0x285ad8u: goto label_285ad8;
        case 0x285adcu: goto label_285adc;
        case 0x285ae0u: goto label_285ae0;
        case 0x285ae4u: goto label_285ae4;
        case 0x285ae8u: goto label_285ae8;
        case 0x285aecu: goto label_285aec;
        case 0x285af0u: goto label_285af0;
        case 0x285af4u: goto label_285af4;
        case 0x285af8u: goto label_285af8;
        case 0x285afcu: goto label_285afc;
        case 0x285b00u: goto label_285b00;
        case 0x285b04u: goto label_285b04;
        case 0x285b08u: goto label_285b08;
        case 0x285b0cu: goto label_285b0c;
        case 0x285b10u: goto label_285b10;
        case 0x285b14u: goto label_285b14;
        case 0x285b18u: goto label_285b18;
        case 0x285b1cu: goto label_285b1c;
        case 0x285b20u: goto label_285b20;
        default: break;
    }

    ctx->pc = 0x2856f0u;

label_2856f0:
    // 0x2856f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2856f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2856f4:
    // 0x2856f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2856f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2856f8:
    // 0x2856f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2856f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2856fc:
    // 0x2856fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2856fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_285700:
    // 0x285700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_285704:
    // 0x285704: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x285704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285708:
    // 0x285708: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28570c:
    // 0x28570c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_285710:
    // 0x285710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_285714:
    // 0x285714: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x285714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285718:
    // 0x285718: 0x8cf201a4  lw          $s2, 0x1A4($a3)
    ctx->pc = 0x285718u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 420)));
label_28571c:
    // 0x28571c: 0x8cf30000  lw          $s3, 0x0($a3)
    ctx->pc = 0x28571cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_285720:
    // 0x285720: 0x14c0003e  bnez        $a2, . + 4 + (0x3E << 2)
label_285724:
    if (ctx->pc == 0x285724u) {
        ctx->pc = 0x285724u;
            // 0x285724: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285728u;
        goto label_285728;
    }
    ctx->pc = 0x285720u;
    {
        const bool branch_taken_0x285720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x285724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285720u;
            // 0x285724: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285720) {
            ctx->pc = 0x28581Cu;
            goto label_28581c;
        }
    }
    ctx->pc = 0x285728u;
label_285728:
    // 0x285728: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x285728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
label_28572c:
    // 0x28572c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285730:
    if (ctx->pc == 0x285730u) {
        ctx->pc = 0x285730u;
            // 0x285730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285734u;
        goto label_285734;
    }
    ctx->pc = 0x28572Cu;
    {
        const bool branch_taken_0x28572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28572Cu;
            // 0x285730: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28572c) {
            ctx->pc = 0x28573Cu;
            goto label_28573c;
        }
    }
    ctx->pc = 0x285734u;
label_285734:
    // 0x285734: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_285738:
    if (ctx->pc == 0x285738u) {
        ctx->pc = 0x285738u;
            // 0x285738: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x28573Cu;
        goto label_28573c;
    }
    ctx->pc = 0x285734u;
    {
        const bool branch_taken_0x285734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285734u;
            // 0x285738: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285734) {
            ctx->pc = 0x285B04u;
            goto label_285b04;
        }
    }
    ctx->pc = 0x28573Cu;
label_28573c:
    // 0x28573c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_285740:
    if (ctx->pc == 0x285740u) {
        ctx->pc = 0x285740u;
            // 0x285740: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x285744u;
        goto label_285744;
    }
    ctx->pc = 0x28573Cu;
    {
        const bool branch_taken_0x28573c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28573Cu;
            // 0x285740: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28573c) {
            ctx->pc = 0x28574Cu;
            goto label_28574c;
        }
    }
    ctx->pc = 0x285744u;
label_285744:
    // 0x285744: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285748:
    if (ctx->pc == 0x285748u) {
        ctx->pc = 0x285748u;
            // 0x285748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28574Cu;
        goto label_28574c;
    }
    ctx->pc = 0x285744u;
    {
        const bool branch_taken_0x285744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285744u;
            // 0x285748: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285744) {
            ctx->pc = 0x285754u;
            goto label_285754;
        }
    }
    ctx->pc = 0x28574Cu;
label_28574c:
    // 0x28574c: 0x100000ec  b           . + 4 + (0xEC << 2)
label_285750:
    if (ctx->pc == 0x285750u) {
        ctx->pc = 0x285750u;
            // 0x285750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285754u;
        goto label_285754;
    }
    ctx->pc = 0x28574Cu;
    {
        const bool branch_taken_0x28574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28574Cu;
            // 0x285750: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28574c) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285754u;
label_285754:
    // 0x285754: 0xc04e748  jal         func_139D20
label_285758:
    if (ctx->pc == 0x285758u) {
        ctx->pc = 0x285758u;
            // 0x285758: 0x24050111  addiu       $a1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->pc = 0x28575Cu;
        goto label_28575c;
    }
    ctx->pc = 0x285754u;
    SET_GPR_U32(ctx, 31, 0x28575Cu);
    ctx->pc = 0x285758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285754u;
            // 0x285758: 0x24050111  addiu       $a1, $zero, 0x111 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28575Cu; }
        if (ctx->pc != 0x28575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28575Cu; }
        if (ctx->pc != 0x28575Cu) { return; }
    }
    ctx->pc = 0x28575Cu;
label_28575c:
    // 0x28575c: 0x240410f0  addiu       $a0, $zero, 0x10F0
    ctx->pc = 0x28575cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4336));
label_285760:
    // 0x285760: 0xc04e638  jal         func_1398E0
label_285764:
    if (ctx->pc == 0x285764u) {
        ctx->pc = 0x285764u;
            // 0x285764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285768u;
        goto label_285768;
    }
    ctx->pc = 0x285760u;
    SET_GPR_U32(ctx, 31, 0x285768u);
    ctx->pc = 0x285764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285760u;
            // 0x285764: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285768u; }
        if (ctx->pc != 0x285768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285768u; }
        if (ctx->pc != 0x285768u) { return; }
    }
    ctx->pc = 0x285768u;
label_285768:
    // 0x285768: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_28576c:
    if (ctx->pc == 0x28576Cu) {
        ctx->pc = 0x28576Cu;
            // 0x28576c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285770u;
        goto label_285770;
    }
    ctx->pc = 0x285768u;
    {
        const bool branch_taken_0x285768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285768u;
            // 0x28576c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285768) {
            ctx->pc = 0x2857D4u;
            goto label_2857d4;
        }
    }
    ctx->pc = 0x285770u;
label_285770:
    // 0x285770: 0xc0a16d0  jal         func_285B40
label_285774:
    if (ctx->pc == 0x285774u) {
        ctx->pc = 0x285774u;
            // 0x285774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285778u;
        goto label_285778;
    }
    ctx->pc = 0x285770u;
    SET_GPR_U32(ctx, 31, 0x285778u);
    ctx->pc = 0x285774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285770u;
            // 0x285774: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B40u;
    if (runtime->hasFunction(0x285B40u)) {
        auto targetFn = runtime->lookupFunction(0x285B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285778u; }
        if (ctx->pc != 0x285778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__4CMapFv_0x285b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285778u; }
        if (ctx->pc != 0x285778u) { return; }
    }
    ctx->pc = 0x285778u;
label_285778:
    // 0x285778: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x285778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_28577c:
    // 0x28577c: 0x26440d10  addiu       $a0, $s2, 0xD10
    ctx->pc = 0x28577cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3344));
label_285780:
    // 0x285780: 0x24425a10  addiu       $v0, $v0, 0x5A10
    ctx->pc = 0x285780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23056));
label_285784:
    // 0x285784: 0xc04e640  jal         func_139900
label_285788:
    if (ctx->pc == 0x285788u) {
        ctx->pc = 0x285788u;
            // 0x285788: 0xae420d00  sw          $v0, 0xD00($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 2));
        ctx->pc = 0x28578Cu;
        goto label_28578c;
    }
    ctx->pc = 0x285784u;
    SET_GPR_U32(ctx, 31, 0x28578Cu);
    ctx->pc = 0x285788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285784u;
            // 0x285788: 0xae420d00  sw          $v0, 0xD00($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28578Cu; }
        if (ctx->pc != 0x28578Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28578Cu; }
        if (ctx->pc != 0x28578Cu) { return; }
    }
    ctx->pc = 0x28578Cu;
label_28578c:
    // 0x28578c: 0x26530d48  addiu       $s3, $s2, 0xD48
    ctx->pc = 0x28578cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3400));
label_285790:
    // 0x285790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285794:
    // 0x285794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x285794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285798:
    // 0x285798: 0xc049c86  jal         func_127218
label_28579c:
    if (ctx->pc == 0x28579Cu) {
        ctx->pc = 0x28579Cu;
            // 0x28579c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2857A0u;
        goto label_2857a0;
    }
    ctx->pc = 0x285798u;
    SET_GPR_U32(ctx, 31, 0x2857A0u);
    ctx->pc = 0x28579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285798u;
            // 0x28579c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857A0u; }
        if (ctx->pc != 0x2857A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857A0u; }
        if (ctx->pc != 0x2857A0u) { return; }
    }
    ctx->pc = 0x2857A0u;
label_2857a0:
    // 0x2857a0: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_2857a4:
    // 0x2857a4: 0x26420f48  addiu       $v0, $s2, 0xF48
    ctx->pc = 0x2857a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3912));
label_2857a8:
    // 0x2857a8: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2857a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2857ac:
    // 0x2857ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2857b0:
    if (ctx->pc == 0x2857B0u) {
        ctx->pc = 0x2857B0u;
            // 0x2857b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2857B4u;
        goto label_2857b4;
    }
    ctx->pc = 0x2857ACu;
    {
        const bool branch_taken_0x2857ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2857B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857ACu;
            // 0x2857b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857ac) {
            ctx->pc = 0x285794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285794;
        }
    }
    ctx->pc = 0x2857B4u;
label_2857b4:
    // 0x2857b4: 0xc0a16cc  jal         func_285B30
label_2857b8:
    if (ctx->pc == 0x2857B8u) {
        ctx->pc = 0x2857B8u;
            // 0x2857b8: 0x26440f6c  addiu       $a0, $s2, 0xF6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3948));
        ctx->pc = 0x2857BCu;
        goto label_2857bc;
    }
    ctx->pc = 0x2857B4u;
    SET_GPR_U32(ctx, 31, 0x2857BCu);
    ctx->pc = 0x2857B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857B4u;
            // 0x2857b8: 0x26440f6c  addiu       $a0, $s2, 0xF6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3948));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B30u;
    if (runtime->hasFunction(0x285B30u)) {
        auto targetFn = runtime->lookupFunction(0x285B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857BCu; }
        if (ctx->pc != 0x2857BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__39mgCObjectStack_21CList_12EMAP_MESSAGE__Fv_0x285b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857BCu; }
        if (ctx->pc != 0x2857BCu) { return; }
    }
    ctx->pc = 0x2857BCu;
label_2857bc:
    // 0x2857bc: 0xc0a9370  jal         func_2A4DC0
label_2857c0:
    if (ctx->pc == 0x2857C0u) {
        ctx->pc = 0x2857C0u;
            // 0x2857c0: 0x26440f94  addiu       $a0, $s2, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3988));
        ctx->pc = 0x2857C4u;
        goto label_2857c4;
    }
    ctx->pc = 0x2857BCu;
    SET_GPR_U32(ctx, 31, 0x2857C4u);
    ctx->pc = 0x2857C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857BCu;
            // 0x2857c0: 0x26440f94  addiu       $a0, $s2, 0xF94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3988));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DC0u;
    if (runtime->hasFunction(0x2A4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857C4u; }
        if (ctx->pc != 0x2857C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEditInfoMngrFv_0x2a4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857C4u; }
        if (ctx->pc != 0x2857C4u) { return; }
    }
    ctx->pc = 0x2857C4u;
label_2857c4:
    // 0x2857c4: 0x8e590d00  lw          $t9, 0xD00($s2)
    ctx->pc = 0x2857c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3328)));
label_2857c8:
    // 0x2857c8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x2857c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_2857cc:
    // 0x2857cc: 0x320f809  jalr        $t9
label_2857d0:
    if (ctx->pc == 0x2857D0u) {
        ctx->pc = 0x2857D0u;
            // 0x2857d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2857D4u;
        goto label_2857d4;
    }
    ctx->pc = 0x2857CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2857D4u);
        ctx->pc = 0x2857D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857CCu;
            // 0x2857d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2857D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2857D4u; }
            if (ctx->pc != 0x2857D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2857D4u;
label_2857d4:
    // 0x2857d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2857d8:
    if (ctx->pc == 0x2857D8u) {
        ctx->pc = 0x2857D8u;
            // 0x2857d8: 0x262223d0  addiu       $v0, $s1, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9168));
        ctx->pc = 0x2857DCu;
        goto label_2857dc;
    }
    ctx->pc = 0x2857D4u;
    {
        const bool branch_taken_0x2857d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2857D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857D4u;
            // 0x2857d8: 0x262223d0  addiu       $v0, $s1, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857d4) {
            ctx->pc = 0x2857E4u;
            goto label_2857e4;
        }
    }
    ctx->pc = 0x2857DCu;
label_2857dc:
    // 0x2857dc: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_2857e0:
    if (ctx->pc == 0x2857E0u) {
        ctx->pc = 0x2857E0u;
            // 0x2857e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2857E4u;
        goto label_2857e4;
    }
    ctx->pc = 0x2857DCu;
    {
        const bool branch_taken_0x2857dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2857E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2857DCu;
            // 0x2857e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2857dc) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x2857E4u;
label_2857e4:
    // 0x2857e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2857e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2857e8:
    // 0x2857e8: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x2857e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2857ec:
    // 0x2857ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2857ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2857f0:
    // 0x2857f0: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x2857f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
label_2857f4:
    // 0x2857f4: 0xc0a0eec  jal         func_283BB0
label_2857f8:
    if (ctx->pc == 0x2857F8u) {
        ctx->pc = 0x2857F8u;
            // 0x2857f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2857FCu;
        goto label_2857fc;
    }
    ctx->pc = 0x2857F4u;
    SET_GPR_U32(ctx, 31, 0x2857FCu);
    ctx->pc = 0x2857F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2857F4u;
            // 0x2857f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283BB0u;
    if (runtime->hasFunction(0x283BB0u)) {
        auto targetFn = runtime->lookupFunction(0x283BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857FCu; }
        if (ctx->pc != 0x2857FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMap__6CSceneFiP4CMapPc_0x283bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2857FCu; }
        if (ctx->pc != 0x2857FCu) { return; }
    }
    ctx->pc = 0x2857FCu;
label_2857fc:
    // 0x2857fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2857fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285800:
    // 0x285800: 0xc0a0ce0  jal         func_283380
label_285804:
    if (ctx->pc == 0x285804u) {
        ctx->pc = 0x285804u;
            // 0x285804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285808u;
        goto label_285808;
    }
    ctx->pc = 0x285800u;
    SET_GPR_U32(ctx, 31, 0x285808u);
    ctx->pc = 0x285804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285800u;
            // 0x285804: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285808u; }
        if (ctx->pc != 0x285808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285808u; }
        if (ctx->pc != 0x285808u) { return; }
    }
    ctx->pc = 0x285808u;
label_285808:
    // 0x285808: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28580c:
    // 0x28580c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28580cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_285810:
    // 0x285810: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x285810u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_285814:
    // 0x285814: 0x100000ba  b           . + 4 + (0xBA << 2)
label_285818:
    if (ctx->pc == 0x285818u) {
        ctx->pc = 0x285818u;
            // 0x285818: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28581Cu;
        goto label_28581c;
    }
    ctx->pc = 0x285814u;
    {
        const bool branch_taken_0x285814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285814u;
            // 0x285818: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285814) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x28581Cu;
label_28581c:
    // 0x28581c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285820:
    // 0x285820: 0x14c20018  bne         $a2, $v0, . + 4 + (0x18 << 2)
label_285824:
    if (ctx->pc == 0x285824u) {
        ctx->pc = 0x285824u;
            // 0x285824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x285828u;
        goto label_285828;
    }
    ctx->pc = 0x285820u;
    {
        const bool branch_taken_0x285820 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x285824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285820u;
            // 0x285824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285820) {
            ctx->pc = 0x285884u;
            goto label_285884;
        }
    }
    ctx->pc = 0x285828u;
label_285828:
    // 0x285828: 0xc0a0f58  jal         func_283D60
label_28582c:
    if (ctx->pc == 0x28582Cu) {
        ctx->pc = 0x285830u;
        goto label_285830;
    }
    ctx->pc = 0x285828u;
    SET_GPR_U32(ctx, 31, 0x285830u);
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285830u; }
        if (ctx->pc != 0x285830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285830u; }
        if (ctx->pc != 0x285830u) { return; }
    }
    ctx->pc = 0x285830u;
label_285830:
    // 0x285830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285834:
    // 0x285834: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x285834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_285838:
    // 0x285838: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x285838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_28583c:
    // 0x28583c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_285840:
    if (ctx->pc == 0x285840u) {
        ctx->pc = 0x285840u;
            // 0x285840: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285844u;
        goto label_285844;
    }
    ctx->pc = 0x28583Cu;
    {
        const bool branch_taken_0x28583c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28583Cu;
            // 0x285840: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28583c) {
            ctx->pc = 0x285848u;
            goto label_285848;
        }
    }
    ctx->pc = 0x285844u;
label_285844:
    // 0x285844: 0x261300d8  addiu       $s3, $s0, 0xD8
    ctx->pc = 0x285844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_285848:
    // 0x285848: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x285848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_28584c:
    // 0x28584c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285850:
    // 0x285850: 0x8c660098  lw          $a2, 0x98($v1)
    ctx->pc = 0x285850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_285854:
    // 0x285854: 0xc0596b8  jal         func_165AE0
label_285858:
    if (ctx->pc == 0x285858u) {
        ctx->pc = 0x285858u;
            // 0x285858: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28585Cu;
        goto label_28585c;
    }
    ctx->pc = 0x285854u;
    SET_GPR_U32(ctx, 31, 0x28585Cu);
    ctx->pc = 0x285858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285854u;
            // 0x285858: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165AE0u;
    if (runtime->hasFunction(0x165AE0u)) {
        auto targetFn = runtime->lookupFunction(0x165AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28585Cu; }
        if (ctx->pc != 0x28585Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapInfo__8CMapInfoFPciP9mgCMemory_0x165ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28585Cu; }
        if (ctx->pc != 0x28585Cu) { return; }
    }
    ctx->pc = 0x28585Cu;
label_28585c:
    // 0x28585c: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_285860:
    if (ctx->pc == 0x285860u) {
        ctx->pc = 0x285860u;
            // 0x285860: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x285864u;
        goto label_285864;
    }
    ctx->pc = 0x28585Cu;
    {
        const bool branch_taken_0x28585c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x285860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28585Cu;
            // 0x285860: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28585c) {
            ctx->pc = 0x28587Cu;
            goto label_28587c;
        }
    }
    ctx->pc = 0x285864u;
label_285864:
    // 0x285864: 0x8e650094  lw          $a1, 0x94($s3)
    ctx->pc = 0x285864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_285868:
    // 0x285868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28586c:
    // 0x28586c: 0x8e660098  lw          $a2, 0x98($s3)
    ctx->pc = 0x28586cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_285870:
    // 0x285870: 0xc05979c  jal         func_165E70
label_285874:
    if (ctx->pc == 0x285874u) {
        ctx->pc = 0x285874u;
            // 0x285874: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285878u;
        goto label_285878;
    }
    ctx->pc = 0x285870u;
    SET_GPR_U32(ctx, 31, 0x285878u);
    ctx->pc = 0x285874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285870u;
            // 0x285874: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165E70u;
    if (runtime->hasFunction(0x165E70u)) {
        auto targetFn = runtime->lookupFunction(0x165E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285878u; }
        if (ctx->pc != 0x285878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddMapInfo__8CMapInfoFPciP9mgCMemory_0x165e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285878u; }
        if (ctx->pc != 0x285878u) { return; }
    }
    ctx->pc = 0x285878u;
label_285878:
    // 0x285878: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x285878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28587c:
    // 0x28587c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_285880:
    if (ctx->pc == 0x285880u) {
        ctx->pc = 0x285884u;
        goto label_285884;
    }
    ctx->pc = 0x28587Cu;
    {
        const bool branch_taken_0x28587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28587c) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285884u;
label_285884:
    // 0x285884: 0x14c20022  bne         $a2, $v0, . + 4 + (0x22 << 2)
label_285888:
    if (ctx->pc == 0x285888u) {
        ctx->pc = 0x285888u;
            // 0x285888: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28588Cu;
        goto label_28588c;
    }
    ctx->pc = 0x285884u;
    {
        const bool branch_taken_0x285884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x285888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285884u;
            // 0x285888: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285884) {
            ctx->pc = 0x285910u;
            goto label_285910;
        }
    }
    ctx->pc = 0x28588Cu;
label_28588c:
    // 0x28588c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x28588cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_285890:
    // 0x285890: 0xc0a0f58  jal         func_283D60
label_285894:
    if (ctx->pc == 0x285894u) {
        ctx->pc = 0x285894u;
            // 0x285894: 0x8c220000  lw          $v0, 0x0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
        ctx->pc = 0x285898u;
        goto label_285898;
    }
    ctx->pc = 0x285890u;
    SET_GPR_U32(ctx, 31, 0x285898u);
    ctx->pc = 0x285894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285890u;
            // 0x285894: 0x8c220000  lw          $v0, 0x0($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285898u; }
        if (ctx->pc != 0x285898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285898u; }
        if (ctx->pc != 0x285898u) { return; }
    }
    ctx->pc = 0x285898u;
label_285898:
    // 0x285898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28589c:
    // 0x28589c: 0x26140024  addiu       $s4, $s0, 0x24
    ctx->pc = 0x28589cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2858a0:
    // 0x2858a0: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2858a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2858a4:
    // 0x2858a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2858a8:
    if (ctx->pc == 0x2858A8u) {
        ctx->pc = 0x2858A8u;
            // 0x2858a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2858ACu;
        goto label_2858ac;
    }
    ctx->pc = 0x2858A4u;
    {
        const bool branch_taken_0x2858a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858A4u;
            // 0x2858a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858a4) {
            ctx->pc = 0x2858B0u;
            goto label_2858b0;
        }
    }
    ctx->pc = 0x2858ACu;
label_2858ac:
    // 0x2858ac: 0x260300d8  addiu       $v1, $s0, 0xD8
    ctx->pc = 0x2858acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_2858b0:
    // 0x2858b0: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x2858b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
label_2858b4:
    // 0x2858b4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2858b8:
    if (ctx->pc == 0x2858B8u) {
        ctx->pc = 0x2858B8u;
            // 0x2858b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2858BCu;
        goto label_2858bc;
    }
    ctx->pc = 0x2858B4u;
    {
        const bool branch_taken_0x2858b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2858B4u;
            // 0x2858b8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858b4) {
            ctx->pc = 0x2858E0u;
            goto label_2858e0;
        }
    }
    ctx->pc = 0x2858BCu;
label_2858bc:
    // 0x2858bc: 0x8c6500a4  lw          $a1, 0xA4($v1)
    ctx->pc = 0x2858bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_2858c0:
    // 0x2858c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2858c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2858c4:
    // 0x2858c4: 0x8c6600a8  lw          $a2, 0xA8($v1)
    ctx->pc = 0x2858c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
label_2858c8:
    // 0x2858c8: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x2858c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_2858cc:
    // 0x2858cc: 0xc0581e0  jal         func_160780
label_2858d0:
    if (ctx->pc == 0x2858D0u) {
        ctx->pc = 0x2858D0u;
            // 0x2858d0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2858D4u;
        goto label_2858d4;
    }
    ctx->pc = 0x2858CCu;
    SET_GPR_U32(ctx, 31, 0x2858D4u);
    ctx->pc = 0x2858D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858CCu;
            // 0x2858d0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160780u;
    if (runtime->hasFunction(0x160780u)) {
        auto targetFn = runtime->lookupFunction(0x160780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858D4u; }
        if (ctx->pc != 0x2858D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__4CMapFPUiPUiPiP9mgCMemory_0x160780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858D4u; }
        if (ctx->pc != 0x2858D4u) { return; }
    }
    ctx->pc = 0x2858D4u;
label_2858d4:
    // 0x2858d4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x2858d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2858d8:
    // 0x2858d8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2858d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2858dc:
    // 0x2858dc: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2858dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2858e0:
    // 0x2858e0: 0xafb3007c  sw          $s3, 0x7C($sp)
    ctx->pc = 0x2858e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
label_2858e4:
    // 0x2858e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2858e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2858e8:
    // 0x2858e8: 0x8e8500a4  lw          $a1, 0xA4($s4)
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_2858ec:
    // 0x2858ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2858ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2858f0:
    // 0x2858f0: 0x8e8600a8  lw          $a2, 0xA8($s4)
    ctx->pc = 0x2858f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
label_2858f4:
    // 0x2858f4: 0xc0581e0  jal         func_160780
label_2858f8:
    if (ctx->pc == 0x2858F8u) {
        ctx->pc = 0x2858F8u;
            // 0x2858f8: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->pc = 0x2858FCu;
        goto label_2858fc;
    }
    ctx->pc = 0x2858F4u;
    SET_GPR_U32(ctx, 31, 0x2858FCu);
    ctx->pc = 0x2858F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2858F4u;
            // 0x2858f8: 0x27a7007c  addiu       $a3, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160780u;
    if (runtime->hasFunction(0x160780u)) {
        auto targetFn = runtime->lookupFunction(0x160780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858FCu; }
        if (ctx->pc != 0x2858FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadData__4CMapFPUiPUiPiP9mgCMemory_0x160780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2858FCu; }
        if (ctx->pc != 0x2858FCu) { return; }
    }
    ctx->pc = 0x2858FCu;
label_2858fc:
    // 0x2858fc: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x2858fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_285900:
    // 0x285900: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x285900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_285904:
    // 0x285904: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x285904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_285908:
    // 0x285908: 0x1000007d  b           . + 4 + (0x7D << 2)
label_28590c:
    if (ctx->pc == 0x28590Cu) {
        ctx->pc = 0x28590Cu;
            // 0x28590c: 0xae150198  sw          $s5, 0x198($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 21));
        ctx->pc = 0x285910u;
        goto label_285910;
    }
    ctx->pc = 0x285908u;
    {
        const bool branch_taken_0x285908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28590Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285908u;
            // 0x28590c: 0xae150198  sw          $s5, 0x198($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285908) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285910u;
label_285910:
    // 0x285910: 0x14c20035  bne         $a2, $v0, . + 4 + (0x35 << 2)
label_285914:
    if (ctx->pc == 0x285914u) {
        ctx->pc = 0x285914u;
            // 0x285914: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x285918u;
        goto label_285918;
    }
    ctx->pc = 0x285910u;
    {
        const bool branch_taken_0x285910 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x285914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285910u;
            // 0x285914: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285910) {
            ctx->pc = 0x2859E8u;
            goto label_2859e8;
        }
    }
    ctx->pc = 0x285918u;
label_285918:
    // 0x285918: 0xc0a0f58  jal         func_283D60
label_28591c:
    if (ctx->pc == 0x28591Cu) {
        ctx->pc = 0x285920u;
        goto label_285920;
    }
    ctx->pc = 0x285918u;
    SET_GPR_U32(ctx, 31, 0x285920u);
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285920u; }
        if (ctx->pc != 0x285920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285920u; }
        if (ctx->pc != 0x285920u) { return; }
    }
    ctx->pc = 0x285920u;
label_285920:
    // 0x285920: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x285920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_285924:
    // 0x285924: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x285924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285928:
    // 0x285928: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_28592c:
    if (ctx->pc == 0x28592Cu) {
        ctx->pc = 0x28592Cu;
            // 0x28592c: 0x26130024  addiu       $s3, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x285930u;
        goto label_285930;
    }
    ctx->pc = 0x285928u;
    {
        const bool branch_taken_0x285928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285928u;
            // 0x28592c: 0x26130024  addiu       $s3, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285928) {
            ctx->pc = 0x285940u;
            goto label_285940;
        }
    }
    ctx->pc = 0x285930u;
label_285930:
    // 0x285930: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x285930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_285934:
    // 0x285934: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x285934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_285938:
    // 0x285938: 0xc057338  jal         func_15CCE0
label_28593c:
    if (ctx->pc == 0x28593Cu) {
        ctx->pc = 0x28593Cu;
            // 0x28593c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285940u;
        goto label_285940;
    }
    ctx->pc = 0x285938u;
    SET_GPR_U32(ctx, 31, 0x285940u);
    ctx->pc = 0x28593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285938u;
            // 0x28593c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CCE0u;
    if (runtime->hasFunction(0x15CCE0u)) {
        auto targetFn = runtime->lookupFunction(0x15CCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285940u; }
        if (ctx->pc != 0x285940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffect__4CMapFPUiiP9mgCMemory_0x15cce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285940u; }
        if (ctx->pc != 0x285940u) { return; }
    }
    ctx->pc = 0x285940u;
label_285940:
    // 0x285940: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x285940u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_285944:
    // 0x285944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x285944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_285948:
    // 0x285948: 0x26941ef0  addiu       $s4, $s4, 0x1EF0
    ctx->pc = 0x285948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7920));
label_28594c:
    // 0x28594c: 0x24a5d1d0  addiu       $a1, $a1, -0x2E30
    ctx->pc = 0x28594cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955472));
label_285950:
    // 0x285950: 0xc04a3dc  jal         func_128F70
label_285954:
    if (ctx->pc == 0x285954u) {
        ctx->pc = 0x285954u;
            // 0x285954: 0x268401d8  addiu       $a0, $s4, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 472));
        ctx->pc = 0x285958u;
        goto label_285958;
    }
    ctx->pc = 0x285950u;
    SET_GPR_U32(ctx, 31, 0x285958u);
    ctx->pc = 0x285954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285950u;
            // 0x285954: 0x268401d8  addiu       $a0, $s4, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285958u; }
        if (ctx->pc != 0x285958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285958u; }
        if (ctx->pc != 0x285958u) { return; }
    }
    ctx->pc = 0x285958u;
label_285958:
    // 0x285958: 0x8ea200d8  lw          $v0, 0xD8($s5)
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
label_28595c:
    // 0x28595c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_285960:
    if (ctx->pc == 0x285960u) {
        ctx->pc = 0x285964u;
        goto label_285964;
    }
    ctx->pc = 0x28595Cu;
    {
        const bool branch_taken_0x28595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28595c) {
            ctx->pc = 0x2859DCu;
            goto label_2859dc;
        }
    }
    ctx->pc = 0x285964u;
label_285964:
    // 0x285964: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x285964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_285968:
    // 0x285968: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_28596c:
    if (ctx->pc == 0x28596Cu) {
        ctx->pc = 0x285970u;
        goto label_285970;
    }
    ctx->pc = 0x285968u;
    {
        const bool branch_taken_0x285968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285968) {
            ctx->pc = 0x2859DCu;
            goto label_2859dc;
        }
    }
    ctx->pc = 0x285970u;
label_285970:
    // 0x285970: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x285970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_285974:
    // 0x285974: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_285978:
    if (ctx->pc == 0x285978u) {
        ctx->pc = 0x285978u;
            // 0x285978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28597Cu;
        goto label_28597c;
    }
    ctx->pc = 0x285974u;
    {
        const bool branch_taken_0x285974 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x285978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285974u;
            // 0x285978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285974) {
            ctx->pc = 0x2859DCu;
            goto label_2859dc;
        }
    }
    ctx->pc = 0x28597Cu;
label_28597c:
    // 0x28597c: 0xc0a1118  jal         func_284460
label_285980:
    if (ctx->pc == 0x285980u) {
        ctx->pc = 0x285980u;
            // 0x285980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285984u;
        goto label_285984;
    }
    ctx->pc = 0x28597Cu;
    SET_GPR_U32(ctx, 31, 0x285984u);
    ctx->pc = 0x285980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28597Cu;
            // 0x285980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284460u;
    if (runtime->hasFunction(0x284460u)) {
        auto targetFn = runtime->lookupFunction(0x284460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285984u; }
        if (ctx->pc != 0x285984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSky__6CSceneFi_0x284460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285984u; }
        if (ctx->pc != 0x285984u) { return; }
    }
    ctx->pc = 0x285984u;
label_285984:
    // 0x285984: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x285984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285988:
    // 0x285988: 0xc04e748  jal         func_139D20
label_28598c:
    if (ctx->pc == 0x28598Cu) {
        ctx->pc = 0x28598Cu;
            // 0x28598c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x285990u;
        goto label_285990;
    }
    ctx->pc = 0x285988u;
    SET_GPR_U32(ctx, 31, 0x285990u);
    ctx->pc = 0x28598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285988u;
            // 0x28598c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285990u; }
        if (ctx->pc != 0x285990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285990u; }
        if (ctx->pc != 0x285990u) { return; }
    }
    ctx->pc = 0x285990u;
label_285990:
    // 0x285990: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x285990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_285994:
    // 0x285994: 0xc04e638  jal         func_1398E0
label_285998:
    if (ctx->pc == 0x285998u) {
        ctx->pc = 0x285998u;
            // 0x285998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28599Cu;
        goto label_28599c;
    }
    ctx->pc = 0x285994u;
    SET_GPR_U32(ctx, 31, 0x28599Cu);
    ctx->pc = 0x285998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285994u;
            // 0x285998: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28599Cu; }
        if (ctx->pc != 0x28599Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28599Cu; }
        if (ctx->pc != 0x28599Cu) { return; }
    }
    ctx->pc = 0x28599Cu;
label_28599c:
    // 0x28599c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2859a0:
    if (ctx->pc == 0x2859A0u) {
        ctx->pc = 0x2859A0u;
            // 0x2859a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2859A4u;
        goto label_2859a4;
    }
    ctx->pc = 0x28599Cu;
    {
        const bool branch_taken_0x28599c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28599Cu;
            // 0x2859a0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28599c) {
            ctx->pc = 0x2859ACu;
            goto label_2859ac;
        }
    }
    ctx->pc = 0x2859A4u;
label_2859a4:
    // 0x2859a4: 0xc060c50  jal         func_183140
label_2859a8:
    if (ctx->pc == 0x2859A8u) {
        ctx->pc = 0x2859A8u;
            // 0x2859a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2859ACu;
        goto label_2859ac;
    }
    ctx->pc = 0x2859A4u;
    SET_GPR_U32(ctx, 31, 0x2859ACu);
    ctx->pc = 0x2859A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2859A4u;
            // 0x2859a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183140u;
    if (runtime->hasFunction(0x183140u)) {
        auto targetFn = runtime->lookupFunction(0x183140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859ACu; }
        if (ctx->pc != 0x2859ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__7CMapSkyFv_0x183140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859ACu; }
        if (ctx->pc != 0x2859ACu) { return; }
    }
    ctx->pc = 0x2859ACu;
label_2859ac:
    // 0x2859ac: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_2859b0:
    if (ctx->pc == 0x2859B0u) {
        ctx->pc = 0x2859B4u;
        goto label_2859b4;
    }
    ctx->pc = 0x2859ACu;
    {
        const bool branch_taken_0x2859ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2859ac) {
            ctx->pc = 0x2859DCu;
            goto label_2859dc;
        }
    }
    ctx->pc = 0x2859B4u;
label_2859b4:
    // 0x2859b4: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x2859b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_2859b8:
    // 0x2859b8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2859b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2859bc:
    // 0x2859bc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2859bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2859c0:
    // 0x2859c0: 0xc060e18  jal         func_183860
label_2859c4:
    if (ctx->pc == 0x2859C4u) {
        ctx->pc = 0x2859C4u;
            // 0x2859c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2859C8u;
        goto label_2859c8;
    }
    ctx->pc = 0x2859C0u;
    SET_GPR_U32(ctx, 31, 0x2859C8u);
    ctx->pc = 0x2859C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2859C0u;
            // 0x2859c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183860u;
    if (runtime->hasFunction(0x183860u)) {
        auto targetFn = runtime->lookupFunction(0x183860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859C8u; }
        if (ctx->pc != 0x2859C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPack__7CMapSkyFPUiiP9mgCMemory_0x183860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859C8u; }
        if (ctx->pc != 0x2859C8u) { return; }
    }
    ctx->pc = 0x2859C8u;
label_2859c8:
    // 0x2859c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2859c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2859cc:
    // 0x2859cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2859ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2859d0:
    // 0x2859d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2859d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2859d4:
    // 0x2859d4: 0xc0a10e4  jal         func_284390
label_2859d8:
    if (ctx->pc == 0x2859D8u) {
        ctx->pc = 0x2859D8u;
            // 0x2859d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2859DCu;
        goto label_2859dc;
    }
    ctx->pc = 0x2859D4u;
    SET_GPR_U32(ctx, 31, 0x2859DCu);
    ctx->pc = 0x2859D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2859D4u;
            // 0x2859d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284390u;
    if (runtime->hasFunction(0x284390u)) {
        auto targetFn = runtime->lookupFunction(0x284390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859DCu; }
        if (ctx->pc != 0x2859DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignSky__6CSceneFiP7CMapSkyPc_0x284390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859DCu; }
        if (ctx->pc != 0x2859DCu) { return; }
    }
    ctx->pc = 0x2859DCu;
label_2859dc:
    // 0x2859dc: 0xa28001d8  sb          $zero, 0x1D8($s4)
    ctx->pc = 0x2859dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 472), (uint8_t)GPR_U32(ctx, 0));
label_2859e0:
    // 0x2859e0: 0x10000047  b           . + 4 + (0x47 << 2)
label_2859e4:
    if (ctx->pc == 0x2859E4u) {
        ctx->pc = 0x2859E4u;
            // 0x2859e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2859E8u;
        goto label_2859e8;
    }
    ctx->pc = 0x2859E0u;
    {
        const bool branch_taken_0x2859e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859E0u;
            // 0x2859e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e0) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x2859E8u;
label_2859e8:
    // 0x2859e8: 0x14c20016  bne         $a2, $v0, . + 4 + (0x16 << 2)
label_2859ec:
    if (ctx->pc == 0x2859ECu) {
        ctx->pc = 0x2859ECu;
            // 0x2859ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2859F0u;
        goto label_2859f0;
    }
    ctx->pc = 0x2859E8u;
    {
        const bool branch_taken_0x2859e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2859ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2859E8u;
            // 0x2859ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859e8) {
            ctx->pc = 0x285A44u;
            goto label_285a44;
        }
    }
    ctx->pc = 0x2859F0u;
label_2859f0:
    // 0x2859f0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x2859f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_2859f4:
    // 0x2859f4: 0xc0a0f58  jal         func_283D60
label_2859f8:
    if (ctx->pc == 0x2859F8u) {
        ctx->pc = 0x2859F8u;
            // 0x2859f8: 0x8c330000  lw          $s3, 0x0($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
        ctx->pc = 0x2859FCu;
        goto label_2859fc;
    }
    ctx->pc = 0x2859F4u;
    SET_GPR_U32(ctx, 31, 0x2859FCu);
    ctx->pc = 0x2859F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2859F4u;
            // 0x2859f8: 0x8c330000  lw          $s3, 0x0($at) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859FCu; }
        if (ctx->pc != 0x2859FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2859FCu; }
        if (ctx->pc != 0x2859FCu) { return; }
    }
    ctx->pc = 0x2859FCu;
label_2859fc:
    // 0x2859fc: 0x8e060190  lw          $a2, 0x190($s0)
    ctx->pc = 0x2859fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_285a00:
    // 0x285a00: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
label_285a04:
    if (ctx->pc == 0x285A04u) {
        ctx->pc = 0x285A04u;
            // 0x285a04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285A08u;
        goto label_285a08;
    }
    ctx->pc = 0x285A00u;
    {
        const bool branch_taken_0x285a00 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x285A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A00u;
            // 0x285a04: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a00) {
            ctx->pc = 0x285A14u;
            goto label_285a14;
        }
    }
    ctx->pc = 0x285A08u;
label_285a08:
    // 0x285a08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x285a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285a0c:
    // 0x285a0c: 0xc05728c  jal         func_15CA30
label_285a10:
    if (ctx->pc == 0x285A10u) {
        ctx->pc = 0x285A10u;
            // 0x285a10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285A14u;
        goto label_285a14;
    }
    ctx->pc = 0x285A0Cu;
    SET_GPR_U32(ctx, 31, 0x285A14u);
    ctx->pc = 0x285A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A0Cu;
            // 0x285a10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CA30u;
    if (runtime->hasFunction(0x15CA30u)) {
        auto targetFn = runtime->lookupFunction(0x15CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A14u; }
        if (ctx->pc != 0x285A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPlacePartsBuff__4CMapFP9mgCMemoryi_0x15ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A14u; }
        if (ctx->pc != 0x285A14u) { return; }
    }
    ctx->pc = 0x285A14u;
label_285a14:
    // 0x285a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x285a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285a18:
    // 0x285a18: 0x262523d0  addiu       $a1, $s1, 0x23D0
    ctx->pc = 0x285a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 9168));
label_285a1c:
    // 0x285a1c: 0xc058034  jal         func_1600D0
label_285a20:
    if (ctx->pc == 0x285A20u) {
        ctx->pc = 0x285A20u;
            // 0x285a20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285A24u;
        goto label_285a24;
    }
    ctx->pc = 0x285A1Cu;
    SET_GPR_U32(ctx, 31, 0x285A24u);
    ctx->pc = 0x285A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A1Cu;
            // 0x285a20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1600D0u;
    if (runtime->hasFunction(0x1600D0u)) {
        auto targetFn = runtime->lookupFunction(0x1600D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A24u; }
        if (ctx->pc != 0x285A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateMap__4CMapFP11CMdsListSetP9mgCMemory_0x1600d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A24u; }
        if (ctx->pc != 0x285A24u) { return; }
    }
    ctx->pc = 0x285A24u;
label_285a24:
    // 0x285a24: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x285a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_285a28:
    // 0x285a28: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x285a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_285a2c:
    // 0x285a2c: 0x8c220000  lw          $v0, 0x0($at)
    ctx->pc = 0x285a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_285a30:
    // 0x285a30: 0x2484d1d8  addiu       $a0, $a0, -0x2E28
    ctx->pc = 0x285a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955480));
label_285a34:
    // 0x285a34: 0xc04a0d2  jal         func_128348
label_285a38:
    if (ctx->pc == 0x285A38u) {
        ctx->pc = 0x285A38u;
            // 0x285a38: 0x532823  subu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x285A3Cu;
        goto label_285a3c;
    }
    ctx->pc = 0x285A34u;
    SET_GPR_U32(ctx, 31, 0x285A3Cu);
    ctx->pc = 0x285A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A34u;
            // 0x285a38: 0x532823  subu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A3Cu; }
        if (ctx->pc != 0x285A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A3Cu; }
        if (ctx->pc != 0x285A3Cu) { return; }
    }
    ctx->pc = 0x285A3Cu;
label_285a3c:
    // 0x285a3c: 0x10000030  b           . + 4 + (0x30 << 2)
label_285a40:
    if (ctx->pc == 0x285A40u) {
        ctx->pc = 0x285A40u;
            // 0x285a40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x285A44u;
        goto label_285a44;
    }
    ctx->pc = 0x285A3Cu;
    {
        const bool branch_taken_0x285a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A3Cu;
            // 0x285a40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a3c) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285A44u;
label_285a44:
    // 0x285a44: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
label_285a48:
    if (ctx->pc == 0x285A48u) {
        ctx->pc = 0x285A48u;
            // 0x285a48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x285A4Cu;
        goto label_285a4c;
    }
    ctx->pc = 0x285A44u;
    {
        const bool branch_taken_0x285a44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x285A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A44u;
            // 0x285a48: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a44) {
            ctx->pc = 0x285A68u;
            goto label_285a68;
        }
    }
    ctx->pc = 0x285A4Cu;
label_285a4c:
    // 0x285a4c: 0xc0a0f58  jal         func_283D60
label_285a50:
    if (ctx->pc == 0x285A50u) {
        ctx->pc = 0x285A54u;
        goto label_285a54;
    }
    ctx->pc = 0x285A4Cu;
    SET_GPR_U32(ctx, 31, 0x285A54u);
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A54u; }
        if (ctx->pc != 0x285A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A54u; }
        if (ctx->pc != 0x285A54u) { return; }
    }
    ctx->pc = 0x285A54u;
label_285a54:
    // 0x285a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x285a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285a58:
    // 0x285a58: 0xc058054  jal         func_160150
label_285a5c:
    if (ctx->pc == 0x285A5Cu) {
        ctx->pc = 0x285A5Cu;
            // 0x285a5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285A60u;
        goto label_285a60;
    }
    ctx->pc = 0x285A58u;
    SET_GPR_U32(ctx, 31, 0x285A60u);
    ctx->pc = 0x285A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A58u;
            // 0x285a5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160150u;
    if (runtime->hasFunction(0x160150u)) {
        auto targetFn = runtime->lookupFunction(0x160150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A60u; }
        if (ctx->pc != 0x285A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignFuncPoint__4CMapFP9mgCMemory_0x160150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A60u; }
        if (ctx->pc != 0x285A60u) { return; }
    }
    ctx->pc = 0x285A60u;
label_285a60:
    // 0x285a60: 0x10000027  b           . + 4 + (0x27 << 2)
label_285a64:
    if (ctx->pc == 0x285A64u) {
        ctx->pc = 0x285A64u;
            // 0x285a64: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x285A68u;
        goto label_285a68;
    }
    ctx->pc = 0x285A60u;
    {
        const bool branch_taken_0x285a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A60u;
            // 0x285a64: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a60) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285A68u;
label_285a68:
    // 0x285a68: 0x14c20025  bne         $a2, $v0, . + 4 + (0x25 << 2)
label_285a6c:
    if (ctx->pc == 0x285A6Cu) {
        ctx->pc = 0x285A6Cu;
            // 0x285a6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x285A70u;
        goto label_285a70;
    }
    ctx->pc = 0x285A68u;
    {
        const bool branch_taken_0x285a68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x285A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A68u;
            // 0x285a6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a68) {
            ctx->pc = 0x285B00u;
            goto label_285b00;
        }
    }
    ctx->pc = 0x285A70u;
label_285a70:
    // 0x285a70: 0xc0a0f58  jal         func_283D60
label_285a74:
    if (ctx->pc == 0x285A74u) {
        ctx->pc = 0x285A78u;
        goto label_285a78;
    }
    ctx->pc = 0x285A70u;
    SET_GPR_U32(ctx, 31, 0x285A78u);
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A78u; }
        if (ctx->pc != 0x285A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A78u; }
        if (ctx->pc != 0x285A78u) { return; }
    }
    ctx->pc = 0x285A78u;
label_285a78:
    // 0x285a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285a7c:
    // 0x285a7c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285a80:
    // 0x285a80: 0xc0a0ce0  jal         func_283380
label_285a84:
    if (ctx->pc == 0x285A84u) {
        ctx->pc = 0x285A84u;
            // 0x285a84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285A88u;
        goto label_285a88;
    }
    ctx->pc = 0x285A80u;
    SET_GPR_U32(ctx, 31, 0x285A88u);
    ctx->pc = 0x285A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285A80u;
            // 0x285a84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A88u; }
        if (ctx->pc != 0x285A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285A88u; }
        if (ctx->pc != 0x285A88u) { return; }
    }
    ctx->pc = 0x285A88u;
label_285a88:
    // 0x285a88: 0x8e0600c4  lw          $a2, 0xC4($s0)
    ctx->pc = 0x285a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_285a8c:
    // 0x285a8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x285a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285a90:
    // 0x285a90: 0x18c00005  blez        $a2, . + 4 + (0x5 << 2)
label_285a94:
    if (ctx->pc == 0x285A94u) {
        ctx->pc = 0x285A94u;
            // 0x285a94: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x285A98u;
        goto label_285a98;
    }
    ctx->pc = 0x285A90u;
    {
        const bool branch_taken_0x285a90 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x285A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285A90u;
            // 0x285a94: 0x26020024  addiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285a90) {
            ctx->pc = 0x285AA8u;
            goto label_285aa8;
        }
    }
    ctx->pc = 0x285A98u;
label_285a98:
    // 0x285a98: 0x8c45009c  lw          $a1, 0x9C($v0)
    ctx->pc = 0x285a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_285a9c:
    // 0x285a9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285aa0:
    // 0x285aa0: 0xc059374  jal         func_164DD0
label_285aa4:
    if (ctx->pc == 0x285AA4u) {
        ctx->pc = 0x285AA4u;
            // 0x285aa4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285AA8u;
        goto label_285aa8;
    }
    ctx->pc = 0x285AA0u;
    SET_GPR_U32(ctx, 31, 0x285AA8u);
    ctx->pc = 0x285AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AA0u;
            // 0x285aa4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164DD0u;
    if (runtime->hasFunction(0x164DD0u)) {
        auto targetFn = runtime->lookupFunction(0x164DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AA8u; }
        if (ctx->pc != 0x285AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCfgFile__4CMapFPciP9mgCMemory_0x164dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AA8u; }
        if (ctx->pc != 0x285AA8u) { return; }
    }
    ctx->pc = 0x285AA8u;
label_285aa8:
    // 0x285aa8: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x285aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_285aac:
    // 0x285aac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x285aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285ab0:
    // 0x285ab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x285ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_285ab4:
    // 0x285ab4: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x285ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_285ab8:
    // 0x285ab8: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x285ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_285abc:
    // 0x285abc: 0xae720030  sw          $s2, 0x30($s3)
    ctx->pc = 0x285abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 18));
label_285ac0:
    // 0x285ac0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x285ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_285ac4:
    // 0x285ac4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x285ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_285ac8:
    // 0x285ac8: 0xc05745c  jal         func_15D170
label_285acc:
    if (ctx->pc == 0x285ACCu) {
        ctx->pc = 0x285ACCu;
            // 0x285acc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x285AD0u;
        goto label_285ad0;
    }
    ctx->pc = 0x285AC8u;
    SET_GPR_U32(ctx, 31, 0x285AD0u);
    ctx->pc = 0x285ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AC8u;
            // 0x285acc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D170u;
    if (runtime->hasFunction(0x15D170u)) {
        auto targetFn = runtime->lookupFunction(0x15D170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AD0u; }
        if (ctx->pc != 0x285AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlacePartsEnd__4CMapFv_0x15d170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AD0u; }
        if (ctx->pc != 0x285AD0u) { return; }
    }
    ctx->pc = 0x285AD0u;
label_285ad0:
    // 0x285ad0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x285ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_285ad4:
    // 0x285ad4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x285ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_285ad8:
    // 0x285ad8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x285ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_285adc:
    // 0x285adc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x285adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_285ae0:
    // 0x285ae0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_285ae4:
    if (ctx->pc == 0x285AE4u) {
        ctx->pc = 0x285AE4u;
            // 0x285ae4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x285AE8u;
        goto label_285ae8;
    }
    ctx->pc = 0x285AE0u;
    {
        const bool branch_taken_0x285ae0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x285AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285AE0u;
            // 0x285ae4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ae0) {
            ctx->pc = 0x285AF0u;
            goto label_285af0;
        }
    }
    ctx->pc = 0x285AE8u;
label_285ae8:
    // 0x285ae8: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x285ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_285aec:
    // 0x285aec: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x285aecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_285af0:
    // 0x285af0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x285af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_285af4:
    // 0x285af4: 0xc04a0d2  jal         func_128348
label_285af8:
    if (ctx->pc == 0x285AF8u) {
        ctx->pc = 0x285AF8u;
            // 0x285af8: 0x2484d1e0  addiu       $a0, $a0, -0x2E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955488));
        ctx->pc = 0x285AFCu;
        goto label_285afc;
    }
    ctx->pc = 0x285AF4u;
    SET_GPR_U32(ctx, 31, 0x285AFCu);
    ctx->pc = 0x285AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285AF4u;
            // 0x285af8: 0x2484d1e0  addiu       $a0, $a0, -0x2E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AFCu; }
        if (ctx->pc != 0x285AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285AFCu; }
        if (ctx->pc != 0x285AFCu) { return; }
    }
    ctx->pc = 0x285AFCu;
label_285afc:
    // 0x285afc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x285afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_285b00:
    // 0x285b00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x285b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_285b04:
    // 0x285b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x285b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_285b08:
    // 0x285b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x285b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_285b0c:
    // 0x285b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x285b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_285b10:
    // 0x285b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x285b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_285b14:
    // 0x285b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x285b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_285b18:
    // 0x285b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x285b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_285b1c:
    // 0x285b1c: 0x3e00008  jr          $ra
label_285b20:
    if (ctx->pc == 0x285B20u) {
        ctx->pc = 0x285B20u;
            // 0x285b20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x285B24u;
        goto label_fallthrough_0x285b1c;
    }
    ctx->pc = 0x285B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285B1Cu;
            // 0x285b20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x285b1c:
    ctx->pc = 0x285B24u;
}
