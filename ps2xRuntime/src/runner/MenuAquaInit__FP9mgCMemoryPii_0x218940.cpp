#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuAquaInit__FP9mgCMemoryPii
// Address: 0x218940 - 0x218b20
void MenuAquaInit__FP9mgCMemoryPii_0x218940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuAquaInit__FP9mgCMemoryPii_0x218940");
#endif

    switch (ctx->pc) {
        case 0x218940u: goto label_218940;
        case 0x218944u: goto label_218944;
        case 0x218948u: goto label_218948;
        case 0x21894cu: goto label_21894c;
        case 0x218950u: goto label_218950;
        case 0x218954u: goto label_218954;
        case 0x218958u: goto label_218958;
        case 0x21895cu: goto label_21895c;
        case 0x218960u: goto label_218960;
        case 0x218964u: goto label_218964;
        case 0x218968u: goto label_218968;
        case 0x21896cu: goto label_21896c;
        case 0x218970u: goto label_218970;
        case 0x218974u: goto label_218974;
        case 0x218978u: goto label_218978;
        case 0x21897cu: goto label_21897c;
        case 0x218980u: goto label_218980;
        case 0x218984u: goto label_218984;
        case 0x218988u: goto label_218988;
        case 0x21898cu: goto label_21898c;
        case 0x218990u: goto label_218990;
        case 0x218994u: goto label_218994;
        case 0x218998u: goto label_218998;
        case 0x21899cu: goto label_21899c;
        case 0x2189a0u: goto label_2189a0;
        case 0x2189a4u: goto label_2189a4;
        case 0x2189a8u: goto label_2189a8;
        case 0x2189acu: goto label_2189ac;
        case 0x2189b0u: goto label_2189b0;
        case 0x2189b4u: goto label_2189b4;
        case 0x2189b8u: goto label_2189b8;
        case 0x2189bcu: goto label_2189bc;
        case 0x2189c0u: goto label_2189c0;
        case 0x2189c4u: goto label_2189c4;
        case 0x2189c8u: goto label_2189c8;
        case 0x2189ccu: goto label_2189cc;
        case 0x2189d0u: goto label_2189d0;
        case 0x2189d4u: goto label_2189d4;
        case 0x2189d8u: goto label_2189d8;
        case 0x2189dcu: goto label_2189dc;
        case 0x2189e0u: goto label_2189e0;
        case 0x2189e4u: goto label_2189e4;
        case 0x2189e8u: goto label_2189e8;
        case 0x2189ecu: goto label_2189ec;
        case 0x2189f0u: goto label_2189f0;
        case 0x2189f4u: goto label_2189f4;
        case 0x2189f8u: goto label_2189f8;
        case 0x2189fcu: goto label_2189fc;
        case 0x218a00u: goto label_218a00;
        case 0x218a04u: goto label_218a04;
        case 0x218a08u: goto label_218a08;
        case 0x218a0cu: goto label_218a0c;
        case 0x218a10u: goto label_218a10;
        case 0x218a14u: goto label_218a14;
        case 0x218a18u: goto label_218a18;
        case 0x218a1cu: goto label_218a1c;
        case 0x218a20u: goto label_218a20;
        case 0x218a24u: goto label_218a24;
        case 0x218a28u: goto label_218a28;
        case 0x218a2cu: goto label_218a2c;
        case 0x218a30u: goto label_218a30;
        case 0x218a34u: goto label_218a34;
        case 0x218a38u: goto label_218a38;
        case 0x218a3cu: goto label_218a3c;
        case 0x218a40u: goto label_218a40;
        case 0x218a44u: goto label_218a44;
        case 0x218a48u: goto label_218a48;
        case 0x218a4cu: goto label_218a4c;
        case 0x218a50u: goto label_218a50;
        case 0x218a54u: goto label_218a54;
        case 0x218a58u: goto label_218a58;
        case 0x218a5cu: goto label_218a5c;
        case 0x218a60u: goto label_218a60;
        case 0x218a64u: goto label_218a64;
        case 0x218a68u: goto label_218a68;
        case 0x218a6cu: goto label_218a6c;
        case 0x218a70u: goto label_218a70;
        case 0x218a74u: goto label_218a74;
        case 0x218a78u: goto label_218a78;
        case 0x218a7cu: goto label_218a7c;
        case 0x218a80u: goto label_218a80;
        case 0x218a84u: goto label_218a84;
        case 0x218a88u: goto label_218a88;
        case 0x218a8cu: goto label_218a8c;
        case 0x218a90u: goto label_218a90;
        case 0x218a94u: goto label_218a94;
        case 0x218a98u: goto label_218a98;
        case 0x218a9cu: goto label_218a9c;
        case 0x218aa0u: goto label_218aa0;
        case 0x218aa4u: goto label_218aa4;
        case 0x218aa8u: goto label_218aa8;
        case 0x218aacu: goto label_218aac;
        case 0x218ab0u: goto label_218ab0;
        case 0x218ab4u: goto label_218ab4;
        case 0x218ab8u: goto label_218ab8;
        case 0x218abcu: goto label_218abc;
        case 0x218ac0u: goto label_218ac0;
        case 0x218ac4u: goto label_218ac4;
        case 0x218ac8u: goto label_218ac8;
        case 0x218accu: goto label_218acc;
        case 0x218ad0u: goto label_218ad0;
        case 0x218ad4u: goto label_218ad4;
        case 0x218ad8u: goto label_218ad8;
        case 0x218adcu: goto label_218adc;
        case 0x218ae0u: goto label_218ae0;
        case 0x218ae4u: goto label_218ae4;
        case 0x218ae8u: goto label_218ae8;
        case 0x218aecu: goto label_218aec;
        case 0x218af0u: goto label_218af0;
        case 0x218af4u: goto label_218af4;
        case 0x218af8u: goto label_218af8;
        case 0x218afcu: goto label_218afc;
        case 0x218b00u: goto label_218b00;
        case 0x218b04u: goto label_218b04;
        case 0x218b08u: goto label_218b08;
        case 0x218b0cu: goto label_218b0c;
        case 0x218b10u: goto label_218b10;
        case 0x218b14u: goto label_218b14;
        case 0x218b18u: goto label_218b18;
        case 0x218b1cu: goto label_218b1c;
        default: break;
    }

    ctx->pc = 0x218940u;

label_218940:
    // 0x218940: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_218944:
    // 0x218944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x218944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_218948:
    // 0x218948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21894c:
    // 0x21894c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218950:
    // 0x218950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x218950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_218954:
    // 0x218954: 0xc06421c  jal         func_190870
label_218958:
    if (ctx->pc == 0x218958u) {
        ctx->pc = 0x218958u;
            // 0x218958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x21895Cu;
        goto label_21895c;
    }
    ctx->pc = 0x218954u;
    SET_GPR_U32(ctx, 31, 0x21895Cu);
    ctx->pc = 0x218958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218954u;
            // 0x218958: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21895Cu; }
        if (ctx->pc != 0x21895Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21895Cu; }
        if (ctx->pc != 0x21895Cu) { return; }
    }
    ctx->pc = 0x21895Cu;
label_21895c:
    // 0x21895c: 0xaf8291b0  sw          $v0, -0x6E50($gp)
    ctx->pc = 0x21895cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939056), GPR_U32(ctx, 2));
label_218960:
    // 0x218960: 0xc0a9e1c  jal         func_2A7870
label_218964:
    if (ctx->pc == 0x218964u) {
        ctx->pc = 0x218964u;
            // 0x218964: 0x8f8491b0  lw          $a0, -0x6E50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
        ctx->pc = 0x218968u;
        goto label_218968;
    }
    ctx->pc = 0x218960u;
    SET_GPR_U32(ctx, 31, 0x218968u);
    ctx->pc = 0x218964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218960u;
            // 0x218964: 0x8f8491b0  lw          $a0, -0x6E50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7870u;
    if (runtime->hasFunction(0x2A7870u)) {
        auto targetFn = runtime->lookupFunction(0x2A7870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218968u; }
        if (ctx->pc != 0x218968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBgmVolf__6CSceneFv_0x2a7870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218968u; }
        if (ctx->pc != 0x218968u) { return; }
    }
    ctx->pc = 0x218968u;
label_218968:
    // 0x218968: 0x8f8391b0  lw          $v1, -0x6E50($gp)
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21896c:
    // 0x21896c: 0xe7809224  swc1        $f0, -0x6DDC($gp)
    ctx->pc = 0x21896cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939172), bits); }
label_218970:
    // 0x218970: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x218970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_218974:
    // 0x218974: 0x8c632e60  lw          $v1, 0x2E60($v1)
    ctx->pc = 0x218974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11872)));
label_218978:
    // 0x218978: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_21897c:
    if (ctx->pc == 0x21897Cu) {
        ctx->pc = 0x21897Cu;
            // 0x21897c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x218980u;
        goto label_218980;
    }
    ctx->pc = 0x218978u;
    {
        const bool branch_taken_0x218978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21897Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218978u;
            // 0x21897c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218978) {
            ctx->pc = 0x2189A0u;
            goto label_2189a0;
        }
    }
    ctx->pc = 0x218980u;
label_218980:
    // 0x218980: 0xc7809224  lwc1        $f0, -0x6DDC($gp)
    ctx->pc = 0x218980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218984:
    // 0x218984: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x218984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_218988:
    // 0x218988: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x218988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_21898c:
    // 0x21898c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x21898cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_218990:
    // 0x218990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_218994:
    // 0x218994: 0xc0a98e8  jal         func_2A63A0
label_218998:
    if (ctx->pc == 0x218998u) {
        ctx->pc = 0x218998u;
            // 0x218998: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x21899Cu;
        goto label_21899c;
    }
    ctx->pc = 0x218994u;
    SET_GPR_U32(ctx, 31, 0x21899Cu);
    ctx->pc = 0x218998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218994u;
            // 0x218998: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21899Cu; }
        if (ctx->pc != 0x21899Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21899Cu; }
        if (ctx->pc != 0x21899Cu) { return; }
    }
    ctx->pc = 0x21899Cu;
label_21899c:
    // 0x21899c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2189a0:
    // 0x2189a0: 0xc0942ac  jal         func_250AB0
label_2189a4:
    if (ctx->pc == 0x2189A4u) {
        ctx->pc = 0x2189A8u;
        goto label_2189a8;
    }
    ctx->pc = 0x2189A0u;
    SET_GPR_U32(ctx, 31, 0x2189A8u);
    ctx->pc = 0x250AB0u;
    if (runtime->hasFunction(0x250AB0u)) {
        auto targetFn = runtime->lookupFunction(0x250AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189A8u; }
        if (ctx->pc != 0x2189A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvSoundMenu__Fi_0x250ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189A8u; }
        if (ctx->pc != 0x2189A8u) { return; }
    }
    ctx->pc = 0x2189A8u;
label_2189a8:
    // 0x2189a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2189a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2189ac:
    // 0x2189ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2189acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2189b0:
    // 0x2189b0: 0xa7828270  sh          $v0, -0x7D90($gp)
    ctx->pc = 0x2189b0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294935152), (uint16_t)GPR_U32(ctx, 2));
label_2189b4:
    // 0x2189b4: 0xc04e748  jal         func_139D20
label_2189b8:
    if (ctx->pc == 0x2189B8u) {
        ctx->pc = 0x2189B8u;
            // 0x2189b8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x2189BCu;
        goto label_2189bc;
    }
    ctx->pc = 0x2189B4u;
    SET_GPR_U32(ctx, 31, 0x2189BCu);
    ctx->pc = 0x2189B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2189B4u;
            // 0x2189b8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189BCu; }
        if (ctx->pc != 0x2189BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189BCu; }
        if (ctx->pc != 0x2189BCu) { return; }
    }
    ctx->pc = 0x2189BCu;
label_2189bc:
    // 0x2189bc: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2189bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2189c0:
    // 0x2189c0: 0xc04e638  jal         func_1398E0
label_2189c4:
    if (ctx->pc == 0x2189C4u) {
        ctx->pc = 0x2189C4u;
            // 0x2189c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2189C8u;
        goto label_2189c8;
    }
    ctx->pc = 0x2189C0u;
    SET_GPR_U32(ctx, 31, 0x2189C8u);
    ctx->pc = 0x2189C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2189C0u;
            // 0x2189c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189C8u; }
        if (ctx->pc != 0x2189C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189C8u; }
        if (ctx->pc != 0x2189C8u) { return; }
    }
    ctx->pc = 0x2189C8u;
label_2189c8:
    // 0x2189c8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2189cc:
    if (ctx->pc == 0x2189CCu) {
        ctx->pc = 0x2189CCu;
            // 0x2189cc: 0x3c034220  lui         $v1, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
        ctx->pc = 0x2189D0u;
        goto label_2189d0;
    }
    ctx->pc = 0x2189C8u;
    {
        const bool branch_taken_0x2189c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2189C8u;
            // 0x2189cc: 0x3c034220  lui         $v1, 0x4220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189c8) {
            ctx->pc = 0x2189F0u;
            goto label_2189f0;
        }
    }
    ctx->pc = 0x2189D0u;
label_2189d0:
    // 0x2189d0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2189d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2189d4:
    // 0x2189d4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2189d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2189d8:
    // 0x2189d8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2189d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2189dc:
    // 0x2189dc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2189dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2189e0:
    // 0x2189e0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_2189e4:
    // 0x2189e4: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2189e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2189e8:
    // 0x2189e8: 0xc04c6a4  jal         func_131A90
label_2189ec:
    if (ctx->pc == 0x2189ECu) {
        ctx->pc = 0x2189ECu;
            // 0x2189ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2189F0u;
        goto label_2189f0;
    }
    ctx->pc = 0x2189E8u;
    SET_GPR_U32(ctx, 31, 0x2189F0u);
    ctx->pc = 0x2189ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2189E8u;
            // 0x2189ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189F0u; }
        if (ctx->pc != 0x2189F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2189F0u; }
        if (ctx->pc != 0x2189F0u) { return; }
    }
    ctx->pc = 0x2189F0u;
label_2189f0:
    // 0x2189f0: 0xaf8291c8  sw          $v0, -0x6E38($gp)
    ctx->pc = 0x2189f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939080), GPR_U32(ctx, 2));
label_2189f4:
    // 0x2189f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2189f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2189f8:
    // 0x2189f8: 0xc04e748  jal         func_139D20
label_2189fc:
    if (ctx->pc == 0x2189FCu) {
        ctx->pc = 0x2189FCu;
            // 0x2189fc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x218A00u;
        goto label_218a00;
    }
    ctx->pc = 0x2189F8u;
    SET_GPR_U32(ctx, 31, 0x218A00u);
    ctx->pc = 0x2189FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2189F8u;
            // 0x2189fc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A00u; }
        if (ctx->pc != 0x218A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A00u; }
        if (ctx->pc != 0x218A00u) { return; }
    }
    ctx->pc = 0x218A00u;
label_218a00:
    // 0x218a00: 0xaf8291cc  sw          $v0, -0x6E34($gp)
    ctx->pc = 0x218a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939084), GPR_U32(ctx, 2));
label_218a04:
    // 0x218a04: 0xc04e640  jal         func_139900
label_218a08:
    if (ctx->pc == 0x218A08u) {
        ctx->pc = 0x218A08u;
            // 0x218a08: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x218A0Cu;
        goto label_218a0c;
    }
    ctx->pc = 0x218A04u;
    SET_GPR_U32(ctx, 31, 0x218A0Cu);
    ctx->pc = 0x218A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A04u;
            // 0x218a08: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A0Cu; }
        if (ctx->pc != 0x218A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A0Cu; }
        if (ctx->pc != 0x218A0Cu) { return; }
    }
    ctx->pc = 0x218A0Cu;
label_218a0c:
    // 0x218a0c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x218a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_218a10:
    // 0x218a10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x218a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_218a14:
    // 0x218a14: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x218a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_218a18:
    // 0x218a18: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x218a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_218a1c:
    // 0x218a1c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x218a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_218a20:
    // 0x218a20: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x218a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_218a24:
    // 0x218a24: 0xc04e79c  jal         func_139E70
label_218a28:
    if (ctx->pc == 0x218A28u) {
        ctx->pc = 0x218A28u;
            // 0x218a28: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x218A2Cu;
        goto label_218a2c;
    }
    ctx->pc = 0x218A24u;
    SET_GPR_U32(ctx, 31, 0x218A2Cu);
    ctx->pc = 0x218A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A24u;
            // 0x218a28: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A2Cu; }
        if (ctx->pc != 0x218A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A2Cu; }
        if (ctx->pc != 0x218A2Cu) { return; }
    }
    ctx->pc = 0x218A2Cu;
label_218a2c:
    // 0x218a2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218a30:
    // 0x218a30: 0xc084a88  jal         func_212A20
label_218a34:
    if (ctx->pc == 0x218A34u) {
        ctx->pc = 0x218A34u;
            // 0x218a34: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->pc = 0x218A38u;
        goto label_218a38;
    }
    ctx->pc = 0x218A30u;
    SET_GPR_U32(ctx, 31, 0x218A38u);
    ctx->pc = 0x218A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A30u;
            // 0x218a34: 0x2484c530  addiu       $a0, $a0, -0x3AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    if (runtime->hasFunction(0x212A20u)) {
        auto targetFn = runtime->lookupFunction(0x212A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A38u; }
        if (ctx->pc != 0x218A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__9CAquariumFv_0x212a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A38u; }
        if (ctx->pc != 0x218A38u) { return; }
    }
    ctx->pc = 0x218A38u;
label_218a38:
    // 0x218a38: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x218a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_218a3c:
    // 0x218a3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x218a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218a40:
    // 0x218a40: 0x2484c530  addiu       $a0, $a0, -0x3AD0
    ctx->pc = 0x218a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952240));
label_218a44:
    // 0x218a44: 0xc084aec  jal         func_212BB0
label_218a48:
    if (ctx->pc == 0x218A48u) {
        ctx->pc = 0x218A48u;
            // 0x218a48: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x218A4Cu;
        goto label_218a4c;
    }
    ctx->pc = 0x218A44u;
    SET_GPR_U32(ctx, 31, 0x218A4Cu);
    ctx->pc = 0x218A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A44u;
            // 0x218a48: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x212BB0u;
    if (runtime->hasFunction(0x212BB0u)) {
        auto targetFn = runtime->lookupFunction(0x212BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A4Cu; }
        if (ctx->pc != 0x218A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CAquariumFP9mgCMemoryPi_0x212bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A4Cu; }
        if (ctx->pc != 0x218A4Cu) { return; }
    }
    ctx->pc = 0x218A4Cu;
label_218a4c:
    // 0x218a4c: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218a50:
    // 0x218a50: 0x3c02430c  lui         $v0, 0x430C
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
label_218a54:
    // 0x218a54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x218a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218a58:
    // 0x218a58: 0xc04c680  jal         func_131A00
label_218a5c:
    if (ctx->pc == 0x218A5Cu) {
        ctx->pc = 0x218A5Cu;
            // 0x218a5c: 0xaf8091c4  sw          $zero, -0x6E3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939076), GPR_U32(ctx, 0));
        ctx->pc = 0x218A60u;
        goto label_218a60;
    }
    ctx->pc = 0x218A58u;
    SET_GPR_U32(ctx, 31, 0x218A60u);
    ctx->pc = 0x218A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A58u;
            // 0x218a5c: 0xaf8091c4  sw          $zero, -0x6E3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A60u; }
        if (ctx->pc != 0x218A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A60u; }
        if (ctx->pc != 0x218A60u) { return; }
    }
    ctx->pc = 0x218A60u;
label_218a60:
    // 0x218a60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x218a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218a64:
    // 0x218a64: 0xc04c670  jal         func_1319C0
label_218a68:
    if (ctx->pc == 0x218A68u) {
        ctx->pc = 0x218A68u;
            // 0x218a68: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218A6Cu;
        goto label_218a6c;
    }
    ctx->pc = 0x218A64u;
    SET_GPR_U32(ctx, 31, 0x218A6Cu);
    ctx->pc = 0x218A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A64u;
            // 0x218a68: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A6Cu; }
        if (ctx->pc != 0x218A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A6Cu; }
        if (ctx->pc != 0x218A6Cu) { return; }
    }
    ctx->pc = 0x218A6Cu;
label_218a6c:
    // 0x218a6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x218a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218a70:
    // 0x218a70: 0xc04c68c  jal         func_131A30
label_218a74:
    if (ctx->pc == 0x218A74u) {
        ctx->pc = 0x218A74u;
            // 0x218a74: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218A78u;
        goto label_218a78;
    }
    ctx->pc = 0x218A70u;
    SET_GPR_U32(ctx, 31, 0x218A78u);
    ctx->pc = 0x218A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A70u;
            // 0x218a74: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (runtime->hasFunction(0x131A30u)) {
        auto targetFn = runtime->lookupFunction(0x131A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A78u; }
        if (ctx->pc != 0x218A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__15mgCCameraFollowFf_0x131a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A78u; }
        if (ctx->pc != 0x218A78u) { return; }
    }
    ctx->pc = 0x218A78u;
label_218a78:
    // 0x218a78: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x218a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_218a7c:
    // 0x218a7c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x218a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_218a80:
    // 0x218a80: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x218a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218a84:
    // 0x218a84: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x218a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_218a88:
    // 0x218a88: 0xc04c564  jal         func_131590
label_218a8c:
    if (ctx->pc == 0x218A8Cu) {
        ctx->pc = 0x218A8Cu;
            // 0x218a8c: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->pc = 0x218A90u;
        goto label_218a90;
    }
    ctx->pc = 0x218A88u;
    SET_GPR_U32(ctx, 31, 0x218A90u);
    ctx->pc = 0x218A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A88u;
            // 0x218a8c: 0x8f8491c8  lw          $a0, -0x6E38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A90u; }
        if (ctx->pc != 0x218A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A90u; }
        if (ctx->pc != 0x218A90u) { return; }
    }
    ctx->pc = 0x218A90u;
label_218a90:
    // 0x218a90: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218a94:
    // 0x218a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x218a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_218a98:
    // 0x218a98: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x218a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_218a9c:
    // 0x218a9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x218a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_218aa0:
    // 0x218aa0: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x218aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_218aa4:
    // 0x218aa4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x218aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_218aa8:
    // 0x218aa8: 0x320f809  jalr        $t9
label_218aac:
    if (ctx->pc == 0x218AACu) {
        ctx->pc = 0x218AACu;
            // 0x218aac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x218AB0u;
        goto label_218ab0;
    }
    ctx->pc = 0x218AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x218AB0u);
        ctx->pc = 0x218AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218AA8u;
            // 0x218aac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218AB0u; }
            if (ctx->pc != 0x218AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x218AB0u;
label_218ab0:
    // 0x218ab0: 0x8f8491c8  lw          $a0, -0x6E38($gp)
    ctx->pc = 0x218ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939080)));
label_218ab4:
    // 0x218ab4: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x218ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_218ab8:
    // 0x218ab8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x218ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_218abc:
    // 0x218abc: 0x320f809  jalr        $t9
label_218ac0:
    if (ctx->pc == 0x218AC0u) {
        ctx->pc = 0x218AC0u;
            // 0x218ac0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x218AC4u;
        goto label_218ac4;
    }
    ctx->pc = 0x218ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x218AC4u);
        ctx->pc = 0x218AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218ABCu;
            // 0x218ac0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x218AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x218AC4u; }
            if (ctx->pc != 0x218AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x218AC4u;
label_218ac4:
    // 0x218ac4: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x218ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_218ac8:
    // 0x218ac8: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_218acc:
    // 0x218acc: 0xc05f5fc  jal         func_17D7F0
label_218ad0:
    if (ctx->pc == 0x218AD0u) {
        ctx->pc = 0x218AD0u;
            // 0x218ad0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x218AD4u;
        goto label_218ad4;
    }
    ctx->pc = 0x218ACCu;
    SET_GPR_U32(ctx, 31, 0x218AD4u);
    ctx->pc = 0x218AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218ACCu;
            // 0x218ad0: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AD4u; }
        if (ctx->pc != 0x218AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AD4u; }
        if (ctx->pc != 0x218AD4u) { return; }
    }
    ctx->pc = 0x218AD4u;
label_218ad4:
    // 0x218ad4: 0x8f8291cc  lw          $v0, -0x6E34($gp)
    ctx->pc = 0x218ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218ad8:
    // 0x218ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x218ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_218adc:
    // 0x218adc: 0xaf8091b4  sw          $zero, -0x6E4C($gp)
    ctx->pc = 0x218adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939060), GPR_U32(ctx, 0));
label_218ae0:
    // 0x218ae0: 0xc050e0c  jal         func_143830
label_218ae4:
    if (ctx->pc == 0x218AE4u) {
        ctx->pc = 0x218AE4u;
            // 0x218ae4: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x218AE8u;
        goto label_218ae8;
    }
    ctx->pc = 0x218AE0u;
    SET_GPR_U32(ctx, 31, 0x218AE8u);
    ctx->pc = 0x218AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AE0u;
            // 0x218ae4: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143830u;
    if (runtime->hasFunction(0x143830u)) {
        auto targetFn = runtime->lookupFunction(0x143830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AE8u; }
        if (ctx->pc != 0x218AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPlight__FiP13mgPOINT_LIGHT_0x143830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AE8u; }
        if (ctx->pc != 0x218AE8u) { return; }
    }
    ctx->pc = 0x218AE8u;
label_218ae8:
    // 0x218ae8: 0xc050e44  jal         func_143910
label_218aec:
    if (ctx->pc == 0x218AECu) {
        ctx->pc = 0x218AF0u;
        goto label_218af0;
    }
    ctx->pc = 0x218AE8u;
    SET_GPR_U32(ctx, 31, 0x218AF0u);
    ctx->pc = 0x143910u;
    if (runtime->hasFunction(0x143910u)) {
        auto targetFn = runtime->lookupFunction(0x143910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AF0u; }
        if (ctx->pc != 0x218AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPlightEnable__Fv_0x143910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AF0u; }
        if (ctx->pc != 0x218AF0u) { return; }
    }
    ctx->pc = 0x218AF0u;
label_218af0:
    // 0x218af0: 0x8f8391cc  lw          $v1, -0x6E34($gp)
    ctx->pc = 0x218af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218af4:
    // 0x218af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x218af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218af8:
    // 0x218af8: 0xc050e40  jal         func_143900
label_218afc:
    if (ctx->pc == 0x218AFCu) {
        ctx->pc = 0x218AFCu;
            // 0x218afc: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x218B00u;
        goto label_218b00;
    }
    ctx->pc = 0x218AF8u;
    SET_GPR_U32(ctx, 31, 0x218B00u);
    ctx->pc = 0x218AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AF8u;
            // 0x218afc: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B00u; }
        if (ctx->pc != 0x218B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B00u; }
        if (ctx->pc != 0x218B00u) { return; }
    }
    ctx->pc = 0x218B00u;
label_218b00:
    // 0x218b00: 0x8f8491cc  lw          $a0, -0x6E34($gp)
    ctx->pc = 0x218b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939084)));
label_218b04:
    // 0x218b04: 0xc050dd8  jal         func_143760
label_218b08:
    if (ctx->pc == 0x218B08u) {
        ctx->pc = 0x218B08u;
            // 0x218b08: 0x24850040  addiu       $a1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x218B0Cu;
        goto label_218b0c;
    }
    ctx->pc = 0x218B04u;
    SET_GPR_U32(ctx, 31, 0x218B0Cu);
    ctx->pc = 0x218B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B04u;
            // 0x218b08: 0x24850040  addiu       $a1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B0Cu; }
        if (ctx->pc != 0x218B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B0Cu; }
        if (ctx->pc != 0x218B0Cu) { return; }
    }
    ctx->pc = 0x218B0Cu;
label_218b0c:
    // 0x218b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x218b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_218b10:
    // 0x218b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x218b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_218b14:
    // 0x218b14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x218b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_218b18:
    // 0x218b18: 0x3e00008  jr          $ra
label_218b1c:
    if (ctx->pc == 0x218B1Cu) {
        ctx->pc = 0x218B1Cu;
            // 0x218b1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x218B20u;
        goto label_fallthrough_0x218b18;
    }
    ctx->pc = 0x218B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B18u;
            // 0x218b1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x218b18:
    ctx->pc = 0x218B20u;
}
