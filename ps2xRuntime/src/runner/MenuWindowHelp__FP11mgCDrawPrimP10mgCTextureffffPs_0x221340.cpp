#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuWindowHelp__FP11mgCDrawPrimP10mgCTextureffffPs
// Address: 0x221340 - 0x2214e0
void MenuWindowHelp__FP11mgCDrawPrimP10mgCTextureffffPs_0x221340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuWindowHelp__FP11mgCDrawPrimP10mgCTextureffffPs_0x221340");
#endif

    switch (ctx->pc) {
        case 0x2213a4u: goto label_2213a4;
        case 0x2213b0u: goto label_2213b0;
        case 0x2213bcu: goto label_2213bc;
        case 0x2213d4u: goto label_2213d4;
        case 0x2213dcu: goto label_2213dc;
        case 0x2213e8u: goto label_2213e8;
        case 0x2213f4u: goto label_2213f4;
        case 0x221410u: goto label_221410;
        case 0x221424u: goto label_221424;
        case 0x22143cu: goto label_22143c;
        case 0x221448u: goto label_221448;
        case 0x221460u: goto label_221460;
        case 0x221474u: goto label_221474;
        case 0x22147cu: goto label_22147c;
        case 0x221494u: goto label_221494;
        case 0x2214a8u: goto label_2214a8;
        case 0x2214b0u: goto label_2214b0;
        default: break;
    }

    ctx->pc = 0x221340u;

    // 0x221340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x221340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x221344: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x221344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x221348: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x221348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x22134c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22134cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x221350: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x221350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x221354: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x221354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x221358: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22135c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x221360: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x221360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221364: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x221364u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x221368: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x221368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22136c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x22136cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x221370: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x221370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x221374: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x221374u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x221378: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x221378u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x22137c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x22137cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x221380: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x221380u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x221384: 0x1200004a  beqz        $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x221384u;
    {
        const bool branch_taken_0x221384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x221388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221384u;
            // 0x221388: 0x46007d46  mov.s       $f21, $f15 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x221384) {
            ctx->pc = 0x2214B0u;
            goto label_2214b0;
        }
    }
    ctx->pc = 0x22138Cu;
    // 0x22138c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22138Cu;
    {
        const bool branch_taken_0x22138c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x221390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22138Cu;
            // 0x221390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22138c) {
            ctx->pc = 0x22139Cu;
            goto label_22139c;
        }
    }
    ctx->pc = 0x221394u;
    // 0x221394: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x221394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
    // 0x221398: 0x263103c0  addiu       $s1, $s1, 0x3C0
    ctx->pc = 0x221398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
label_22139c:
    // 0x22139c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x22139Cu;
    SET_GPR_U32(ctx, 31, 0x2213A4u);
    ctx->pc = 0x2213A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22139Cu;
            // 0x2213a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213A4u; }
        if (ctx->pc != 0x2213A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213A4u; }
        if (ctx->pc != 0x2213A4u) { return; }
    }
    ctx->pc = 0x2213A4u;
label_2213a4:
    // 0x2213a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213a8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2213A8u;
    SET_GPR_U32(ctx, 31, 0x2213B0u);
    ctx->pc = 0x2213ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213A8u;
            // 0x2213ac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213B0u; }
        if (ctx->pc != 0x2213B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213B0u; }
        if (ctx->pc != 0x2213B0u) { return; }
    }
    ctx->pc = 0x2213B0u;
label_2213b0:
    // 0x2213b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2213b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213b4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2213B4u;
    SET_GPR_U32(ctx, 31, 0x2213BCu);
    ctx->pc = 0x2213B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213B4u;
            // 0x2213b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213BCu; }
        if (ctx->pc != 0x2213BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213BCu; }
        if (ctx->pc != 0x2213BCu) { return; }
    }
    ctx->pc = 0x2213BCu;
label_2213bc:
    // 0x2213bc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2213bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2213c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2213c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2213c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2213c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213cc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2213CCu;
    SET_GPR_U32(ctx, 31, 0x2213D4u);
    ctx->pc = 0x2213D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213CCu;
            // 0x2213d0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213D4u; }
        if (ctx->pc != 0x2213D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213D4u; }
        if (ctx->pc != 0x2213D4u) { return; }
    }
    ctx->pc = 0x2213D4u;
label_2213d4:
    // 0x2213d4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2213D4u;
    SET_GPR_U32(ctx, 31, 0x2213DCu);
    ctx->pc = 0x2213D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213D4u;
            // 0x2213d8: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213DCu; }
        if (ctx->pc != 0x2213DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213DCu; }
        if (ctx->pc != 0x2213DCu) { return; }
    }
    ctx->pc = 0x2213DCu;
label_2213dc:
    // 0x2213dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2213dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213e0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2213E0u;
    SET_GPR_U32(ctx, 31, 0x2213E8u);
    ctx->pc = 0x2213E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213E0u;
            // 0x2213e4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213E8u; }
        if (ctx->pc != 0x2213E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213E8u; }
        if (ctx->pc != 0x2213E8u) { return; }
    }
    ctx->pc = 0x2213E8u;
label_2213e8:
    // 0x2213e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2213e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2213ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2213ECu;
    SET_GPR_U32(ctx, 31, 0x2213F4u);
    ctx->pc = 0x2213F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2213ECu;
            // 0x2213f0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213F4u; }
        if (ctx->pc != 0x2213F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213F4u; }
        if (ctx->pc != 0x2213F4u) { return; }
    }
    ctx->pc = 0x2213F4u;
label_2213f4:
    // 0x2213f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2213f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2213f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2213fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2213fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221400: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x221400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221404: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221408: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221408u;
    SET_GPR_U32(ctx, 31, 0x221410u);
    ctx->pc = 0x22140Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221408u;
            // 0x22140c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221410u; }
        if (ctx->pc != 0x221410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221410u; }
        if (ctx->pc != 0x221410u) { return; }
    }
    ctx->pc = 0x221410u;
label_221410:
    // 0x221410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221414: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x221414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x221418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x221418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22141c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x22141Cu;
    SET_GPR_U32(ctx, 31, 0x221424u);
    ctx->pc = 0x221420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22141Cu;
            // 0x221420: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221424u; }
        if (ctx->pc != 0x221424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221424u; }
        if (ctx->pc != 0x221424u) { return; }
    }
    ctx->pc = 0x221424u;
label_221424:
    // 0x221424: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x221424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x221428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22142c: 0x0  nop
    ctx->pc = 0x22142cu;
    // NOP
    // 0x221430: 0x46160500  add.s       $f20, $f0, $f22
    ctx->pc = 0x221430u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x221434: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221434u;
    SET_GPR_U32(ctx, 31, 0x22143Cu);
    ctx->pc = 0x221438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221434u;
            // 0x221438: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22143Cu; }
        if (ctx->pc != 0x22143Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22143Cu; }
        if (ctx->pc != 0x22143Cu) { return; }
    }
    ctx->pc = 0x22143Cu;
label_22143c:
    // 0x22143c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22143cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221440: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221440u;
    SET_GPR_U32(ctx, 31, 0x221448u);
    ctx->pc = 0x221444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221440u;
            // 0x221444: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221448u; }
        if (ctx->pc != 0x221448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221448u; }
        if (ctx->pc != 0x221448u) { return; }
    }
    ctx->pc = 0x221448u;
label_221448:
    // 0x221448: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22144c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22144cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221450: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x221450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221454: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x221454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221458: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x221458u;
    SET_GPR_U32(ctx, 31, 0x221460u);
    ctx->pc = 0x22145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221458u;
            // 0x22145c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221460u; }
        if (ctx->pc != 0x221460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221460u; }
        if (ctx->pc != 0x221460u) { return; }
    }
    ctx->pc = 0x221460u;
label_221460:
    // 0x221460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221464: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x221464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x221468: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x221468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x22146c: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x22146Cu;
    SET_GPR_U32(ctx, 31, 0x221474u);
    ctx->pc = 0x221470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22146Cu;
            // 0x221470: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221474u; }
        if (ctx->pc != 0x221474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221474u; }
        if (ctx->pc != 0x221474u) { return; }
    }
    ctx->pc = 0x221474u;
label_221474:
    // 0x221474: 0xc0a248c  jal         func_289230
    ctx->pc = 0x221474u;
    SET_GPR_U32(ctx, 31, 0x22147Cu);
    ctx->pc = 0x221478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221474u;
            // 0x221478: 0x4615a300  add.s       $f12, $f20, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22147Cu; }
        if (ctx->pc != 0x22147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22147Cu; }
        if (ctx->pc != 0x22147Cu) { return; }
    }
    ctx->pc = 0x22147Cu;
label_22147c:
    // 0x22147c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22147cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221480: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x221480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221484: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x221484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221488: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x221488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22148c: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x22148Cu;
    SET_GPR_U32(ctx, 31, 0x221494u);
    ctx->pc = 0x221490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22148Cu;
            // 0x221490: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221494u; }
        if (ctx->pc != 0x221494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221494u; }
        if (ctx->pc != 0x221494u) { return; }
    }
    ctx->pc = 0x221494u;
label_221494:
    // 0x221494: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x221494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x221498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x221498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22149c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2214a0: 0xc08a338  jal         func_228CE0
    ctx->pc = 0x2214A0u;
    SET_GPR_U32(ctx, 31, 0x2214A8u);
    ctx->pc = 0x2214A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2214A0u;
            // 0x2214a4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228CE0u;
    if (runtime->hasFunction(0x228CE0u)) {
        auto targetFn = runtime->lookupFunction(0x228CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214A8u; }
        if (ctx->pc != 0x2214A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Menu3DivideTextureDraw__FP11mgCDrawPrim9mgRect_i_Psi_0x228ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214A8u; }
        if (ctx->pc != 0x2214A8u) { return; }
    }
    ctx->pc = 0x2214A8u;
label_2214a8:
    // 0x2214a8: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2214A8u;
    SET_GPR_U32(ctx, 31, 0x2214B0u);
    ctx->pc = 0x2214ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2214A8u;
            // 0x2214ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214B0u; }
        if (ctx->pc != 0x2214B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2214B0u; }
        if (ctx->pc != 0x2214B0u) { return; }
    }
    ctx->pc = 0x2214B0u;
label_2214b0:
    // 0x2214b0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2214b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2214b4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2214b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2214b8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2214b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2214bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2214bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2214c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2214c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2214c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2214c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2214c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2214c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2214cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2214ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2214d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2214d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2214d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2214d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2214d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2214D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2214D8u;
            // 0x2214dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2214E0u;
}
