#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaTitleDraw__FRiPfi
// Address: 0x1f3900 - 0x1f3a40
void MenuGeoramaTitleDraw__FRiPfi_0x1f3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaTitleDraw__FRiPfi_0x1f3900");
#endif

    switch (ctx->pc) {
        case 0x1f393cu: goto label_1f393c;
        case 0x1f395cu: goto label_1f395c;
        case 0x1f3974u: goto label_1f3974;
        case 0x1f3994u: goto label_1f3994;
        case 0x1f39acu: goto label_1f39ac;
        case 0x1f39d4u: goto label_1f39d4;
        case 0x1f3a28u: goto label_1f3a28;
        default: break;
    }

    ctx->pc = 0x1f3900u;

    // 0x1f3900: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f3904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f3908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f3908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f390c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f3910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f3910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f3914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3918: 0x83838fd8  lb          $v1, -0x7028($gp)
    ctx->pc = 0x1f3918u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1f391c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F391Cu;
    {
        const bool branch_taken_0x1f391c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F391Cu;
            // 0x1f3920: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f391c) {
            ctx->pc = 0x1F3A28u;
            goto label_1f3a28;
        }
    }
    ctx->pc = 0x1F3924u;
    // 0x1f3924: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1f3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3928: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f3928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f392c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f392cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f3930: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x1f3930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f3934: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1F3934u;
    SET_GPR_U32(ctx, 31, 0x1F393Cu);
    ctx->pc = 0x1F3938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3934u;
            // 0x1f3938: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F393Cu; }
        if (ctx->pc != 0x1F393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F393Cu; }
        if (ctx->pc != 0x1F393Cu) { return; }
    }
    ctx->pc = 0x1F393Cu;
label_1f393c:
    // 0x1f393c: 0xc78c9058  lwc1        $f12, -0x6FA8($gp)
    ctx->pc = 0x1f393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f3940: 0x3c034294  lui         $v1, 0x4294
    ctx->pc = 0x1f3940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17044 << 16));
    // 0x1f3944: 0xc78d905c  lwc1        $f13, -0x6FA4($gp)
    ctx->pc = 0x1f3944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f3948: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x1f3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
    // 0x1f394c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1f394cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f3950: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1f3950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f3954: 0xc07c93c  jal         func_1F24F0
    ctx->pc = 0x1F3954u;
    SET_GPR_U32(ctx, 31, 0x1F395Cu);
    ctx->pc = 0x1F3958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3954u;
            // 0x1f3958: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F395Cu; }
        if (ctx->pc != 0x1F395Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F395Cu; }
        if (ctx->pc != 0x1F395Cu) { return; }
    }
    ctx->pc = 0x1F395Cu;
label_1f395c:
    // 0x1f395c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f3960: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3964: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f3964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f3968: 0x24a58a18  addiu       $a1, $a1, -0x75E8
    ctx->pc = 0x1f3968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937112));
    // 0x1f396c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F396Cu;
    SET_GPR_U32(ctx, 31, 0x1F3974u);
    ctx->pc = 0x1F3970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F396Cu;
            // 0x1f3970: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3974u; }
        if (ctx->pc != 0x1F3974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3974u; }
        if (ctx->pc != 0x1F3974u) { return; }
    }
    ctx->pc = 0x1F3974u;
label_1f3974:
    // 0x1f3974: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f3974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f3978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f3978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f397c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f3980: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f3980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f3984: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f3984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3988: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1f3988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f398c: 0xc089414  jal         func_225050
    ctx->pc = 0x1F398Cu;
    SET_GPR_U32(ctx, 31, 0x1F3994u);
    ctx->pc = 0x1F3990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F398Cu;
            // 0x1f3990: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225050u;
    if (runtime->hasFunction(0x225050u)) {
        auto targetFn = runtime->lookupFunction(0x225050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3994u; }
        if (ctx->pc != 0x1F3994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuWakuRect__FP10mgCTexture9mgRect_f_9mgRect_i_iiii_0x225050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3994u; }
        if (ctx->pc != 0x1F3994u) { return; }
    }
    ctx->pc = 0x1F3994u;
label_1f3994:
    // 0x1f3994: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1f3994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1f3998: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f399c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1f399cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x1f39a0: 0x24a58a28  addiu       $a1, $a1, -0x75D8
    ctx->pc = 0x1f39a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937128));
    // 0x1f39a4: 0xc04b414  jal         func_12D050
    ctx->pc = 0x1F39A4u;
    SET_GPR_U32(ctx, 31, 0x1F39ACu);
    ctx->pc = 0x1F39A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39A4u;
            // 0x1f39a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39ACu; }
        if (ctx->pc != 0x1F39ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39ACu; }
        if (ctx->pc != 0x1F39ACu) { return; }
    }
    ctx->pc = 0x1F39ACu;
label_1f39ac:
    // 0x1f39ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f39acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39b0: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F39B0u;
    {
        const bool branch_taken_0x1f39b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f39b0) {
            ctx->pc = 0x1F3A28u;
            goto label_1f3a28;
        }
    }
    ctx->pc = 0x1F39B8u;
    // 0x1f39b8: 0x8f838ffc  lw          $v1, -0x7004($gp)
    ctx->pc = 0x1f39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f39bc: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x1f39bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f39c0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F39C0u;
    {
        const bool branch_taken_0x1f39c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f39c0) {
            ctx->pc = 0x1F3A28u;
            goto label_1f3a28;
        }
    }
    ctx->pc = 0x1F39C8u;
    // 0x1f39c8: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x1f39c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f39cc: 0xc08878c  jal         func_221E30
    ctx->pc = 0x1F39CCu;
    SET_GPR_U32(ctx, 31, 0x1F39D4u);
    ctx->pc = 0x1F39D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F39CCu;
            // 0x1f39d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39D4u; }
        if (ctx->pc != 0x1F39D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F39D4u; }
        if (ctx->pc != 0x1F39D4u) { return; }
    }
    ctx->pc = 0x1F39D4u;
label_1f39d4:
    // 0x1f39d4: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x1f39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x1f39d8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1f39d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1f39dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f39dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f39e0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1f39e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1f39e4: 0xc7839058  lwc1        $f3, -0x6FA8($gp)
    ctx->pc = 0x1f39e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f39e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f39e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39ec: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x1f39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x1f39f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f39f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f39f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f39f8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x1f39f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f39fc: 0xc780905c  lwc1        $f0, -0x6FA4($gp)
    ctx->pc = 0x1f39fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f3a00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f3a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a04: 0x3c02bf06  lui         $v0, 0xBF06
    ctx->pc = 0x1f3a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48902 << 16));
    // 0x1f3a08: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1f3a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1f3a0c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1f3a0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1f3a10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f3a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f3a14: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1f3a14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f3a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f3a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f3a1c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1f3a1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f3a20: 0xc088e94  jal         func_223A50
    ctx->pc = 0x1F3A20u;
    SET_GPR_U32(ctx, 31, 0x1F3A28u);
    ctx->pc = 0x1F3A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A20u;
            // 0x1f3a24: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A28u; }
        if (ctx->pc != 0x1F3A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3A28u; }
        if (ctx->pc != 0x1F3A28u) { return; }
    }
    ctx->pc = 0x1F3A28u;
label_1f3a28:
    // 0x1f3a28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f3a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f3a2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f3a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3A38u;
            // 0x1f3a3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3A40u;
}
