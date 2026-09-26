#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuChapterDraw__Fv
// Address: 0x2aaf70 - 0x2ab0e0
void MenuChapterDraw__Fv_0x2aaf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuChapterDraw__Fv_0x2aaf70");
#endif

    switch (ctx->pc) {
        case 0x2aaf90u: goto label_2aaf90;
        case 0x2aafa4u: goto label_2aafa4;
        case 0x2aafacu: goto label_2aafac;
        case 0x2aafb8u: goto label_2aafb8;
        case 0x2aafc4u: goto label_2aafc4;
        case 0x2aafd8u: goto label_2aafd8;
        case 0x2aaff0u: goto label_2aaff0;
        case 0x2ab008u: goto label_2ab008;
        case 0x2ab01cu: goto label_2ab01c;
        case 0x2ab030u: goto label_2ab030;
        case 0x2ab03cu: goto label_2ab03c;
        case 0x2ab054u: goto label_2ab054;
        case 0x2ab06cu: goto label_2ab06c;
        case 0x2ab084u: goto label_2ab084;
        case 0x2ab09cu: goto label_2ab09c;
        case 0x2ab0b4u: goto label_2ab0b4;
        case 0x2ab0c8u: goto label_2ab0c8;
        case 0x2ab0d4u: goto label_2ab0d4;
        default: break;
    }

    ctx->pc = 0x2aaf70u;

    // 0x2aaf70: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2aaf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2aaf74: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2aaf74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2aaf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aaf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aaf7c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2aaf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2aaf80: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2aaf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2aaf84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2aaf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2aaf88: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2AAF88u;
    SET_GPR_U32(ctx, 31, 0x2AAF90u);
    ctx->pc = 0x2AAF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF88u;
            // 0x2aaf8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF90u; }
        if (ctx->pc != 0x2AAF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAF90u; }
        if (ctx->pc != 0x2AAF90u) { return; }
    }
    ctx->pc = 0x2AAF90u;
label_2aaf90:
    // 0x2aaf90: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2aaf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aaf94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aaf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf9c: 0xc0887b0  jal         func_221EC0
    ctx->pc = 0x2AAF9Cu;
    SET_GPR_U32(ctx, 31, 0x2AAFA4u);
    ctx->pc = 0x2AAFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAF9Cu;
            // 0x2aafa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EC0u;
    if (runtime->hasFunction(0x221EC0u)) {
        auto targetFn = runtime->lookupFunction(0x221EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFA4u; }
        if (ctx->pc != 0x2AAFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fiiii_0x221ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFA4u; }
        if (ctx->pc != 0x2AAFA4u) { return; }
    }
    ctx->pc = 0x2AAFA4u;
label_2aafa4:
    // 0x2aafa4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2AAFA4u;
    SET_GPR_U32(ctx, 31, 0x2AAFACu);
    ctx->pc = 0x2AAFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFA4u;
            // 0x2aafa8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFACu; }
        if (ctx->pc != 0x2AAFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFACu; }
        if (ctx->pc != 0x2AAFACu) { return; }
    }
    ctx->pc = 0x2AAFACu;
label_2aafac:
    // 0x2aafac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2aafacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aafb0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x2AAFB0u;
    SET_GPR_U32(ctx, 31, 0x2AAFB8u);
    ctx->pc = 0x2AAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFB0u;
            // 0x2aafb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFB8u; }
        if (ctx->pc != 0x2AAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFB8u; }
        if (ctx->pc != 0x2AAFB8u) { return; }
    }
    ctx->pc = 0x2AAFB8u;
label_2aafb8:
    // 0x2aafb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2aafb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aafbc: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2AAFBCu;
    SET_GPR_U32(ctx, 31, 0x2AAFC4u);
    ctx->pc = 0x2AAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFBCu;
            // 0x2aafc0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFC4u; }
        if (ctx->pc != 0x2AAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFC4u; }
        if (ctx->pc != 0x2AAFC4u) { return; }
    }
    ctx->pc = 0x2AAFC4u;
label_2aafc4:
    // 0x2aafc4: 0x8f859a98  lw          $a1, -0x6568($gp)
    ctx->pc = 0x2aafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941336)));
    // 0x2aafc8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AAFC8u;
    {
        const bool branch_taken_0x2aafc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AAFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFC8u;
            // 0x2aafcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aafc8) {
            ctx->pc = 0x2AB01Cu;
            goto label_2ab01c;
        }
    }
    ctx->pc = 0x2AAFD0u;
    // 0x2aafd0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AAFD0u;
    SET_GPR_U32(ctx, 31, 0x2AAFD8u);
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFD8u; }
        if (ctx->pc != 0x2AAFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFD8u; }
        if (ctx->pc != 0x2AAFD8u) { return; }
    }
    ctx->pc = 0x2AAFD8u;
label_2aafd8:
    // 0x2aafd8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2aafd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2aafdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2aafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aafe0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2aafe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafe4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2aafe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aafe8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AAFE8u;
    SET_GPR_U32(ctx, 31, 0x2AAFF0u);
    ctx->pc = 0x2AAFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAFE8u;
            // 0x2aafec: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFF0u; }
        if (ctx->pc != 0x2AAFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAFF0u; }
        if (ctx->pc != 0x2AAFF0u) { return; }
    }
    ctx->pc = 0x2AAFF0u;
label_2aaff0:
    // 0x2aaff0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2aaff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2aaff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2aaff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2aaff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaffc: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2aaffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ab000: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AB000u;
    SET_GPR_U32(ctx, 31, 0x2AB008u);
    ctx->pc = 0x2AB004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB000u;
            // 0x2ab004: 0x240801c0  addiu       $t0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB008u; }
        if (ctx->pc != 0x2AB008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB008u; }
        if (ctx->pc != 0x2AB008u) { return; }
    }
    ctx->pc = 0x2AB008u;
label_2ab008:
    // 0x2ab008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ab008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab00c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab010: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2ab010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ab014: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AB014u;
    SET_GPR_U32(ctx, 31, 0x2AB01Cu);
    ctx->pc = 0x2AB018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB014u;
            // 0x2ab018: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB01Cu; }
        if (ctx->pc != 0x2AB01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB01Cu; }
        if (ctx->pc != 0x2AB01Cu) { return; }
    }
    ctx->pc = 0x2AB01Cu;
label_2ab01c:
    // 0x2ab01c: 0x8f859a9c  lw          $a1, -0x6564($gp)
    ctx->pc = 0x2ab01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941340)));
    // 0x2ab020: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AB020u;
    {
        const bool branch_taken_0x2ab020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB020u;
            // 0x2ab024: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab020) {
            ctx->pc = 0x2AB0CCu;
            goto label_2ab0cc;
        }
    }
    ctx->pc = 0x2AB028u;
    // 0x2ab028: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2AB028u;
    SET_GPR_U32(ctx, 31, 0x2AB030u);
    ctx->pc = 0x2AB02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB028u;
            // 0x2ab02c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB030u; }
        if (ctx->pc != 0x2AB030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB030u; }
        if (ctx->pc != 0x2AB030u) { return; }
    }
    ctx->pc = 0x2AB030u;
label_2ab030:
    // 0x2ab030: 0x8f829a94  lw          $v0, -0x656C($gp)
    ctx->pc = 0x2ab030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941332)));
    // 0x2ab034: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2AB034u;
    SET_GPR_U32(ctx, 31, 0x2AB03Cu);
    ctx->pc = 0x2AB038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB034u;
            // 0x2ab038: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB03Cu; }
        if (ctx->pc != 0x2AB03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB03Cu; }
        if (ctx->pc != 0x2AB03Cu) { return; }
    }
    ctx->pc = 0x2AB03Cu;
label_2ab03c:
    // 0x2ab03c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ab03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ab040: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2ab040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab044: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab048: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ab048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab04c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AB04Cu;
    SET_GPR_U32(ctx, 31, 0x2AB054u);
    ctx->pc = 0x2AB050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB04Cu;
            // 0x2ab050: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB054u; }
        if (ctx->pc != 0x2AB054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB054u; }
        if (ctx->pc != 0x2AB054u) { return; }
    }
    ctx->pc = 0x2AB054u;
label_2ab054:
    // 0x2ab054: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2ab054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2ab058: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab05c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab060: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2ab060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ab064: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AB064u;
    SET_GPR_U32(ctx, 31, 0x2AB06Cu);
    ctx->pc = 0x2AB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB064u;
            // 0x2ab068: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB06Cu; }
        if (ctx->pc != 0x2AB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB06Cu; }
        if (ctx->pc != 0x2AB06Cu) { return; }
    }
    ctx->pc = 0x2AB06Cu;
label_2ab06c:
    // 0x2ab06c: 0x3c02432c  lui         $v0, 0x432C
    ctx->pc = 0x2ab06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17196 << 16));
    // 0x2ab070: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab074: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ab074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab078: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ab078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ab07c: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AB07Cu;
    SET_GPR_U32(ctx, 31, 0x2AB084u);
    ctx->pc = 0x2AB080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB07Cu;
            // 0x2ab080: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB084u; }
        if (ctx->pc != 0x2AB084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB084u; }
        if (ctx->pc != 0x2AB084u) { return; }
    }
    ctx->pc = 0x2AB084u;
label_2ab084:
    // 0x2ab084: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ab084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ab088: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab08c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ab08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab090: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ab090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab094: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2AB094u;
    SET_GPR_U32(ctx, 31, 0x2AB09Cu);
    ctx->pc = 0x2AB098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB094u;
            // 0x2ab098: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB09Cu; }
        if (ctx->pc != 0x2AB09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB09Cu; }
        if (ctx->pc != 0x2AB09Cu) { return; }
    }
    ctx->pc = 0x2AB09Cu;
label_2ab09c:
    // 0x2ab09c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2ab09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ab0a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2ab0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ab0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab0a8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2ab0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ab0ac: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2AB0ACu;
    SET_GPR_U32(ctx, 31, 0x2AB0B4u);
    ctx->pc = 0x2AB0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0ACu;
            // 0x2ab0b0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0B4u; }
        if (ctx->pc != 0x2AB0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0B4u; }
        if (ctx->pc != 0x2AB0B4u) { return; }
    }
    ctx->pc = 0x2AB0B4u;
label_2ab0b4:
    // 0x2ab0b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ab0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ab0b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab0bc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2ab0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2ab0c0: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x2AB0C0u;
    SET_GPR_U32(ctx, 31, 0x2AB0C8u);
    ctx->pc = 0x2AB0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0C0u;
            // 0x2ab0c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0C8u; }
        if (ctx->pc != 0x2AB0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0C8u; }
        if (ctx->pc != 0x2AB0C8u) { return; }
    }
    ctx->pc = 0x2AB0C8u;
label_2ab0c8:
    // 0x2ab0c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ab0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ab0cc:
    // 0x2ab0cc: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2AB0CCu;
    SET_GPR_U32(ctx, 31, 0x2AB0D4u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0D4u; }
        if (ctx->pc != 0x2AB0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB0D4u; }
        if (ctx->pc != 0x2AB0D4u) { return; }
    }
    ctx->pc = 0x2AB0D4u;
label_2ab0d4:
    // 0x2ab0d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB0D8u;
            // 0x2ab0dc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB0E0u;
}
