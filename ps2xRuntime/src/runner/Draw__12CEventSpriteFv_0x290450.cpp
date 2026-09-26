#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CEventSpriteFv
// Address: 0x290450 - 0x2905f0
void Draw__12CEventSpriteFv_0x290450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CEventSpriteFv_0x290450");
#endif

    switch (ctx->pc) {
        case 0x290478u: goto label_290478;
        case 0x290490u: goto label_290490;
        case 0x2904a4u: goto label_2904a4;
        case 0x2904bcu: goto label_2904bc;
        case 0x2904c8u: goto label_2904c8;
        case 0x2904d4u: goto label_2904d4;
        case 0x2904e0u: goto label_2904e0;
        case 0x2904f0u: goto label_2904f0;
        case 0x2904fcu: goto label_2904fc;
        case 0x290508u: goto label_290508;
        case 0x290514u: goto label_290514;
        case 0x290520u: goto label_290520;
        case 0x29052cu: goto label_29052c;
        case 0x290538u: goto label_290538;
        case 0x290544u: goto label_290544;
        case 0x290550u: goto label_290550;
        case 0x290568u: goto label_290568;
        case 0x290578u: goto label_290578;
        case 0x29058cu: goto label_29058c;
        case 0x2905acu: goto label_2905ac;
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d8u: goto label_2905d8;
        default: break;
    }

    ctx->pc = 0x290450u;

    // 0x290450: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x290454: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x290454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x290458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29045c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x290460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x290460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x290464: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x290464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x290468: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x290468u;
    {
        const bool branch_taken_0x290468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290468u;
            // 0x29046c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290468) {
            ctx->pc = 0x2905D8u;
            goto label_2905d8;
        }
    }
    ctx->pc = 0x290470u;
    // 0x290470: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x290470u;
    SET_GPR_U32(ctx, 31, 0x290478u);
    ctx->pc = 0x290474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290470u;
            // 0x290474: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290478u; }
        if (ctx->pc != 0x290478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290478u; }
        if (ctx->pc != 0x290478u) { return; }
    }
    ctx->pc = 0x290478u;
label_290478:
    // 0x290478: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x290478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29047c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x29047cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x290480: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x290480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x290484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290488: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x290488u;
    SET_GPR_U32(ctx, 31, 0x290490u);
    ctx->pc = 0x29048Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290488u;
            // 0x29048c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290490u; }
        if (ctx->pc != 0x290490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290490u; }
        if (ctx->pc != 0x290490u) { return; }
    }
    ctx->pc = 0x290490u;
label_290490:
    // 0x290490: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x290490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x290494: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x290494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x290498: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x290498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29049c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x29049Cu;
    SET_GPR_U32(ctx, 31, 0x2904A4u);
    ctx->pc = 0x2904A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29049Cu;
            // 0x2904a0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904A4u; }
        if (ctx->pc != 0x2904A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904A4u; }
        if (ctx->pc != 0x2904A4u) { return; }
    }
    ctx->pc = 0x2904A4u;
label_2904a4:
    // 0x2904a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904a8: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x2904A8u;
    {
        const bool branch_taken_0x2904a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904A8u;
            // 0x2904ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904a8) {
            ctx->pc = 0x2905D8u;
            goto label_2905d8;
        }
    }
    ctx->pc = 0x2904B0u;
    // 0x2904b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2904b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904b4: 0xc04d104  jal         func_134410
    ctx->pc = 0x2904B4u;
    SET_GPR_U32(ctx, 31, 0x2904BCu);
    ctx->pc = 0x2904B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904B4u;
            // 0x2904b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904BCu; }
        if (ctx->pc != 0x2904BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904BCu; }
        if (ctx->pc != 0x2904BCu) { return; }
    }
    ctx->pc = 0x2904BCu;
label_2904bc:
    // 0x2904bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904c0: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2904C0u;
    SET_GPR_U32(ctx, 31, 0x2904C8u);
    ctx->pc = 0x2904C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904C0u;
            // 0x2904c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904C8u; }
        if (ctx->pc != 0x2904C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904C8u; }
        if (ctx->pc != 0x2904C8u) { return; }
    }
    ctx->pc = 0x2904C8u;
label_2904c8:
    // 0x2904c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904cc: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2904CCu;
    SET_GPR_U32(ctx, 31, 0x2904D4u);
    ctx->pc = 0x2904D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904CCu;
            // 0x2904d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904D4u; }
        if (ctx->pc != 0x2904D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904D4u; }
        if (ctx->pc != 0x2904D4u) { return; }
    }
    ctx->pc = 0x2904D4u;
label_2904d4:
    // 0x2904d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904d8: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2904D8u;
    SET_GPR_U32(ctx, 31, 0x2904E0u);
    ctx->pc = 0x2904DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904D8u;
            // 0x2904dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904E0u; }
        if (ctx->pc != 0x2904E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904E0u; }
        if (ctx->pc != 0x2904E0u) { return; }
    }
    ctx->pc = 0x2904E0u;
label_2904e0:
    // 0x2904e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2904e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2904e8: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2904E8u;
    SET_GPR_U32(ctx, 31, 0x2904F0u);
    ctx->pc = 0x2904ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904E8u;
            // 0x2904ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904F0u; }
        if (ctx->pc != 0x2904F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904F0u; }
        if (ctx->pc != 0x2904F0u) { return; }
    }
    ctx->pc = 0x2904F0u;
label_2904f0:
    // 0x2904f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904f4: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2904F4u;
    SET_GPR_U32(ctx, 31, 0x2904FCu);
    ctx->pc = 0x2904F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2904F4u;
            // 0x2904f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904FCu; }
        if (ctx->pc != 0x2904FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2904FCu; }
        if (ctx->pc != 0x2904FCu) { return; }
    }
    ctx->pc = 0x2904FCu;
label_2904fc:
    // 0x2904fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2904fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290500: 0xc04d424  jal         func_135090
    ctx->pc = 0x290500u;
    SET_GPR_U32(ctx, 31, 0x290508u);
    ctx->pc = 0x290504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290500u;
            // 0x290504: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290508u; }
        if (ctx->pc != 0x290508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290508u; }
        if (ctx->pc != 0x290508u) { return; }
    }
    ctx->pc = 0x290508u;
label_290508:
    // 0x290508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29050c: 0xc04d434  jal         func_1350D0
    ctx->pc = 0x29050Cu;
    SET_GPR_U32(ctx, 31, 0x290514u);
    ctx->pc = 0x290510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29050Cu;
            // 0x290510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290514u; }
        if (ctx->pc != 0x290514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290514u; }
        if (ctx->pc != 0x290514u) { return; }
    }
    ctx->pc = 0x290514u;
label_290514:
    // 0x290514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290518: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x290518u;
    SET_GPR_U32(ctx, 31, 0x290520u);
    ctx->pc = 0x29051Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290518u;
            // 0x29051c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290520u; }
        if (ctx->pc != 0x290520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290520u; }
        if (ctx->pc != 0x290520u) { return; }
    }
    ctx->pc = 0x290520u;
label_290520:
    // 0x290520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290524: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x290524u;
    SET_GPR_U32(ctx, 31, 0x29052Cu);
    ctx->pc = 0x290528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290524u;
            // 0x290528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29052Cu; }
        if (ctx->pc != 0x29052Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29052Cu; }
        if (ctx->pc != 0x29052Cu) { return; }
    }
    ctx->pc = 0x29052Cu;
label_29052c:
    // 0x29052c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29052cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290530: 0xc04d43c  jal         func_1350F0
    ctx->pc = 0x290530u;
    SET_GPR_U32(ctx, 31, 0x290538u);
    ctx->pc = 0x290534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290530u;
            // 0x290534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350F0u;
    if (runtime->hasFunction(0x1350F0u)) {
        auto targetFn = runtime->lookupFunction(0x1350F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290538u; }
        if (ctx->pc != 0x290538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AntiAliasing__11mgCDrawPrimFi_0x1350f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290538u; }
        if (ctx->pc != 0x290538u) { return; }
    }
    ctx->pc = 0x290538u;
label_290538:
    // 0x290538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29053c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x29053Cu;
    SET_GPR_U32(ctx, 31, 0x290544u);
    ctx->pc = 0x290540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29053Cu;
            // 0x290540: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290544u; }
        if (ctx->pc != 0x290544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290544u; }
        if (ctx->pc != 0x290544u) { return; }
    }
    ctx->pc = 0x290544u;
label_290544:
    // 0x290544: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290548: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x290548u;
    SET_GPR_U32(ctx, 31, 0x290550u);
    ctx->pc = 0x29054Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290548u;
            // 0x29054c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290550u; }
        if (ctx->pc != 0x290550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290550u; }
        if (ctx->pc != 0x290550u) { return; }
    }
    ctx->pc = 0x290550u;
label_290550:
    // 0x290550: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x290554: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x290554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x290558: 0x8e270050  lw          $a3, 0x50($s1)
    ctx->pc = 0x290558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x29055c: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x29055cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x290560: 0xc04d320  jal         func_134C80
    ctx->pc = 0x290560u;
    SET_GPR_U32(ctx, 31, 0x290568u);
    ctx->pc = 0x290564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290560u;
            // 0x290564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290568u; }
        if (ctx->pc != 0x290568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290568u; }
        if (ctx->pc != 0x290568u) { return; }
    }
    ctx->pc = 0x290568u;
label_290568:
    // 0x290568: 0x8e250058  lw          $a1, 0x58($s1)
    ctx->pc = 0x290568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x29056c: 0x8e26005c  lw          $a2, 0x5C($s1)
    ctx->pc = 0x29056cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x290570: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x290570u;
    SET_GPR_U32(ctx, 31, 0x290578u);
    ctx->pc = 0x290574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290570u;
            // 0x290574: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290578u; }
        if (ctx->pc != 0x290578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290578u; }
        if (ctx->pc != 0x290578u) { return; }
    }
    ctx->pc = 0x290578u;
label_290578:
    // 0x290578: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x290578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x29057c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29057cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290580: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x290580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x290584: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x290584u;
    SET_GPR_U32(ctx, 31, 0x29058Cu);
    ctx->pc = 0x290588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290584u;
            // 0x290588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29058Cu; }
        if (ctx->pc != 0x29058Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29058Cu; }
        if (ctx->pc != 0x29058Cu) { return; }
    }
    ctx->pc = 0x29058Cu;
label_29058c:
    // 0x29058c: 0x8e260058  lw          $a2, 0x58($s1)
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x290590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290594: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x290598: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x290598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x29059c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2905a0: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2905a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2905a4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2905A4u;
    SET_GPR_U32(ctx, 31, 0x2905ACu);
    ctx->pc = 0x2905A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2905A4u;
            // 0x2905a8: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905ACu; }
        if (ctx->pc != 0x2905ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905ACu; }
        if (ctx->pc != 0x2905ACu) { return; }
    }
    ctx->pc = 0x2905ACu;
label_2905ac:
    // 0x2905ac: 0x8e260068  lw          $a2, 0x68($s1)
    ctx->pc = 0x2905acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2905b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2905b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905b4: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x2905b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2905b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2905b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2905bc: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x2905bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2905c0: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2905c4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2905c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2905c8: 0xc04d2c8  jal         func_134B20
    ctx->pc = 0x2905C8u;
    SET_GPR_U32(ctx, 31, 0x2905D0u);
    ctx->pc = 0x2905CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2905C8u;
            // 0x2905cc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905D0u; }
        if (ctx->pc != 0x2905D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905D0u; }
        if (ctx->pc != 0x2905D0u) { return; }
    }
    ctx->pc = 0x2905D0u;
label_2905d0:
    // 0x2905d0: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2905D0u;
    SET_GPR_U32(ctx, 31, 0x2905D8u);
    ctx->pc = 0x2905D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2905D0u;
            // 0x2905d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905D8u; }
        if (ctx->pc != 0x2905D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2905D8u; }
        if (ctx->pc != 0x2905D8u) { return; }
    }
    ctx->pc = 0x2905D8u;
label_2905d8:
    // 0x2905d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2905d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2905dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2905dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2905e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2905e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2905e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2905e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2905e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2905E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2905ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905E8u;
            // 0x2905ec: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2905F0u;
}
