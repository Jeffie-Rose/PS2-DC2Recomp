#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGyoraceFishSelDraw__Fv
// Address: 0x2196c0 - 0x2197c0
void MenuGyoraceFishSelDraw__Fv_0x2196c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGyoraceFishSelDraw__Fv_0x2196c0");
#endif

    switch (ctx->pc) {
        case 0x2196e4u: goto label_2196e4;
        case 0x219704u: goto label_219704;
        case 0x21971cu: goto label_21971c;
        case 0x21973cu: goto label_21973c;
        case 0x219758u: goto label_219758;
        case 0x21977cu: goto label_21977c;
        case 0x219798u: goto label_219798;
        case 0x2197a4u: goto label_2197a4;
        case 0x2197b0u: goto label_2197b0;
        default: break;
    }

    ctx->pc = 0x2196c0u;

    // 0x2196c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2196c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2196c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2196c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2196c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2196cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2196ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2196d0: 0x8f858304  lw          $a1, -0x7CFC($gp)
    ctx->pc = 0x2196d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x2196d4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x2196d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x2196d8: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x2196d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
    // 0x2196dc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2196DCu;
    SET_GPR_U32(ctx, 31, 0x2196E4u);
    ctx->pc = 0x2196E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2196DCu;
            // 0x2196e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196E4u; }
        if (ctx->pc != 0x2196E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2196E4u; }
        if (ctx->pc != 0x2196E4u) { return; }
    }
    ctx->pc = 0x2196E4u;
label_2196e4:
    // 0x2196e4: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x2196e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x2196e8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2196e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2196ec: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x2196ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x2196f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2196f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2196f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2196f8: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x2196f8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2196fc: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x2196FCu;
    SET_GPR_U32(ctx, 31, 0x219704u);
    ctx->pc = 0x219700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2196FCu;
            // 0x219700: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219704u; }
        if (ctx->pc != 0x219704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219704u; }
        if (ctx->pc != 0x219704u) { return; }
    }
    ctx->pc = 0x219704u;
label_219704:
    // 0x219704: 0x8f878780  lw          $a3, -0x7880($gp)
    ctx->pc = 0x219704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x219708: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x219708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21970c: 0x8f888784  lw          $t0, -0x787C($gp)
    ctx->pc = 0x21970cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x219710: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x219710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219714: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x219714u;
    SET_GPR_U32(ctx, 31, 0x21971Cu);
    ctx->pc = 0x219718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219714u;
            // 0x219718: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21971Cu; }
        if (ctx->pc != 0x21971Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21971Cu; }
        if (ctx->pc != 0x21971Cu) { return; }
    }
    ctx->pc = 0x21971Cu;
label_21971c:
    // 0x21971c: 0x8f849468  lw          $a0, -0x6B98($gp)
    ctx->pc = 0x21971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939752)));
    // 0x219720: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x219720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x219724: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x219724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x219728: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x219728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21972c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x21972cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219730: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x219730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219734: 0xc088004  jal         func_220010
    ctx->pc = 0x219734u;
    SET_GPR_U32(ctx, 31, 0x21973Cu);
    ctx->pc = 0x219738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219734u;
            // 0x219738: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220010u;
    if (runtime->hasFunction(0x220010u)) {
        auto targetFn = runtime->lookupFunction(0x220010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21973Cu; }
        if (ctx->pc != 0x21973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTexture9mgRect_i_9mgRect_i_iiii_0x220010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21973Cu; }
        if (ctx->pc != 0x21973Cu) { return; }
    }
    ctx->pc = 0x21973Cu;
label_21973c:
    // 0x21973c: 0x8f8391d0  lw          $v1, -0x6E30($gp)
    ctx->pc = 0x21973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x219740: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x219740u;
    {
        const bool branch_taken_0x219740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x219740) {
            ctx->pc = 0x21977Cu;
            goto label_21977c;
        }
    }
    ctx->pc = 0x219748u;
    // 0x219748: 0x87859234  lh          $a1, -0x6DCC($gp)
    ctx->pc = 0x219748u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939188)));
    // 0x21974c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219750: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x219750u;
    SET_GPR_U32(ctx, 31, 0x219758u);
    ctx->pc = 0x219754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219750u;
            // 0x219754: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219758u; }
        if (ctx->pc != 0x219758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219758u; }
        if (ctx->pc != 0x219758u) { return; }
    }
    ctx->pc = 0x219758u;
label_219758:
    // 0x219758: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x219758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x21975c: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x21975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x219760: 0x8f8691d0  lw          $a2, -0x6E30($gp)
    ctx->pc = 0x219760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939088)));
    // 0x219764: 0x8f879228  lw          $a3, -0x6DD8($gp)
    ctx->pc = 0x219764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939176)));
    // 0x219768: 0x2463feb6  addiu       $v1, $v1, -0x14A
    ctx->pc = 0x219768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966966));
    // 0x21976c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x21976cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x219770: 0x2445ff72  addiu       $a1, $v0, -0x8E
    ctx->pc = 0x219770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967154));
    // 0x219774: 0xc084794  jal         func_211E50
    ctx->pc = 0x219774u;
    SET_GPR_U32(ctx, 31, 0x21977Cu);
    ctx->pc = 0x219778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219774u;
            // 0x219778: 0x2464000a  addiu       $a0, $v1, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211E50u;
    if (runtime->hasFunction(0x211E50u)) {
        auto targetFn = runtime->lookupFunction(0x211E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21977Cu; }
        if (ctx->pc != 0x21977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFishParam__FiiP10mgCTextureP13CGameDataUsed_0x211e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21977Cu; }
        if (ctx->pc != 0x21977Cu) { return; }
    }
    ctx->pc = 0x21977Cu;
label_21977c:
    // 0x21977c: 0x8383922c  lb          $v1, -0x6DD4($gp)
    ctx->pc = 0x21977cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939180)));
    // 0x219780: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x219780u;
    {
        const bool branch_taken_0x219780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x219784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219780u;
            // 0x219784: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219780) {
            ctx->pc = 0x2197B0u;
            goto label_2197b0;
        }
    }
    ctx->pc = 0x219788u;
    // 0x219788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21978c: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x21978cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x219790: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x219790u;
    SET_GPR_U32(ctx, 31, 0x219798u);
    ctx->pc = 0x219794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x219790u;
            // 0x219794: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219798u; }
        if (ctx->pc != 0x219798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219798u; }
        if (ctx->pc != 0x219798u) { return; }
    }
    ctx->pc = 0x219798u;
label_219798:
    // 0x219798: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x219798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x21979c: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x21979Cu;
    SET_GPR_U32(ctx, 31, 0x2197A4u);
    ctx->pc = 0x2197A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21979Cu;
            // 0x2197a0: 0x8c24ca40  lw          $a0, -0x35C0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2197A4u; }
        if (ctx->pc != 0x2197A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2197A4u; }
        if (ctx->pc != 0x2197A4u) { return; }
    }
    ctx->pc = 0x2197A4u;
label_2197a4:
    // 0x2197a4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2197a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2197a8: 0xc0878c8  jal         func_21E320
    ctx->pc = 0x2197A8u;
    SET_GPR_U32(ctx, 31, 0x2197B0u);
    ctx->pc = 0x2197ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2197A8u;
            // 0x2197ac: 0x8c24ca44  lw          $a0, -0x35BC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953540)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2197B0u; }
        if (ctx->pc != 0x2197B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2197B0u; }
        if (ctx->pc != 0x2197B0u) { return; }
    }
    ctx->pc = 0x2197B0u;
label_2197b0:
    // 0x2197b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2197b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2197b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2197b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2197b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2197B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2197BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2197B8u;
            // 0x2197bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2197C0u;
}
