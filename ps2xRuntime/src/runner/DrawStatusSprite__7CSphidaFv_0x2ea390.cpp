#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStatusSprite__7CSphidaFv
// Address: 0x2ea390 - 0x2eb4ac
void DrawStatusSprite__7CSphidaFv_0x2ea390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStatusSprite__7CSphidaFv_0x2ea390");
#endif

    switch (ctx->pc) {
        case 0x2ea3c0u: goto label_2ea3c0;
        case 0x2ea3d4u: goto label_2ea3d4;
        case 0x2ea3dcu: goto label_2ea3dc;
        case 0x2ea3f4u: goto label_2ea3f4;
        case 0x2ea400u: goto label_2ea400;
        case 0x2ea410u: goto label_2ea410;
        case 0x2ea41cu: goto label_2ea41c;
        case 0x2ea428u: goto label_2ea428;
        case 0x2ea434u: goto label_2ea434;
        case 0x2ea440u: goto label_2ea440;
        case 0x2ea44cu: goto label_2ea44c;
        case 0x2ea45cu: goto label_2ea45c;
        case 0x2ea468u: goto label_2ea468;
        case 0x2ea474u: goto label_2ea474;
        case 0x2ea480u: goto label_2ea480;
        case 0x2ea48cu: goto label_2ea48c;
        case 0x2ea4a4u: goto label_2ea4a4;
        case 0x2ea4e8u: goto label_2ea4e8;
        case 0x2ea524u: goto label_2ea524;
        case 0x2ea5a0u: goto label_2ea5a0;
        case 0x2ea5e4u: goto label_2ea5e4;
        case 0x2ea61cu: goto label_2ea61c;
        case 0x2ea654u: goto label_2ea654;
        case 0x2ea660u: goto label_2ea660;
        case 0x2ea680u: goto label_2ea680;
        case 0x2ea738u: goto label_2ea738;
        case 0x2ea79cu: goto label_2ea79c;
        case 0x2ea7e8u: goto label_2ea7e8;
        case 0x2ea81cu: goto label_2ea81c;
        case 0x2ea854u: goto label_2ea854;
        case 0x2ea88cu: goto label_2ea88c;
        case 0x2ea8c0u: goto label_2ea8c0;
        case 0x2ea8f8u: goto label_2ea8f8;
        case 0x2ea94cu: goto label_2ea94c;
        case 0x2ea984u: goto label_2ea984;
        case 0x2ea9c0u: goto label_2ea9c0;
        case 0x2ea9ccu: goto label_2ea9cc;
        case 0x2ea9e0u: goto label_2ea9e0;
        case 0x2ea9e8u: goto label_2ea9e8;
        case 0x2eaa0cu: goto label_2eaa0c;
        case 0x2eaa14u: goto label_2eaa14;
        case 0x2eaa2cu: goto label_2eaa2c;
        case 0x2eaa38u: goto label_2eaa38;
        case 0x2eaa40u: goto label_2eaa40;
        case 0x2eaa4cu: goto label_2eaa4c;
        case 0x2eaa54u: goto label_2eaa54;
        case 0x2eaa6cu: goto label_2eaa6c;
        case 0x2eaa78u: goto label_2eaa78;
        case 0x2eaa80u: goto label_2eaa80;
        case 0x2eaa90u: goto label_2eaa90;
        case 0x2eaadcu: goto label_2eaadc;
        case 0x2eab24u: goto label_2eab24;
        case 0x2eab44u: goto label_2eab44;
        case 0x2eabfcu: goto label_2eabfc;
        case 0x2eac80u: goto label_2eac80;
        case 0x2eacc8u: goto label_2eacc8;
        case 0x2ead00u: goto label_2ead00;
        case 0x2ead38u: goto label_2ead38;
        case 0x2eadb8u: goto label_2eadb8;
        case 0x2eae00u: goto label_2eae00;
        case 0x2eae38u: goto label_2eae38;
        case 0x2eae44u: goto label_2eae44;
        case 0x2eae64u: goto label_2eae64;
        case 0x2eaf1cu: goto label_2eaf1c;
        case 0x2eaf88u: goto label_2eaf88;
        case 0x2eafd0u: goto label_2eafd0;
        case 0x2eb008u: goto label_2eb008;
        case 0x2eb040u: goto label_2eb040;
        case 0x2eb078u: goto label_2eb078;
        case 0x2eb0b0u: goto label_2eb0b0;
        case 0x2eb104u: goto label_2eb104;
        case 0x2eb13cu: goto label_2eb13c;
        case 0x2eb178u: goto label_2eb178;
        case 0x2eb184u: goto label_2eb184;
        case 0x2eb198u: goto label_2eb198;
        case 0x2eb1a0u: goto label_2eb1a0;
        case 0x2eb1c4u: goto label_2eb1c4;
        case 0x2eb1ccu: goto label_2eb1cc;
        case 0x2eb1e4u: goto label_2eb1e4;
        case 0x2eb1f0u: goto label_2eb1f0;
        case 0x2eb1f8u: goto label_2eb1f8;
        case 0x2eb204u: goto label_2eb204;
        case 0x2eb20cu: goto label_2eb20c;
        case 0x2eb224u: goto label_2eb224;
        case 0x2eb230u: goto label_2eb230;
        case 0x2eb238u: goto label_2eb238;
        case 0x2eb248u: goto label_2eb248;
        case 0x2eb294u: goto label_2eb294;
        case 0x2eb2dcu: goto label_2eb2dc;
        case 0x2eb2fcu: goto label_2eb2fc;
        case 0x2eb3b4u: goto label_2eb3b4;
        case 0x2eb438u: goto label_2eb438;
        case 0x2eb480u: goto label_2eb480;
        case 0x2eb48cu: goto label_2eb48c;
        default: break;
    }

    ctx->pc = 0x2ea390u;

    // 0x2ea390: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2ea390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2ea394: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ea394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ea398: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ea398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ea39c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ea39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ea3a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ea3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ea3a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ea3a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ea3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ea3ac: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x2ea3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2ea3b0: 0x10600436  beqz        $v1, . + 4 + (0x436 << 2)
    ctx->pc = 0x2EA3B0u;
    {
        const bool branch_taken_0x2ea3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3B0u;
            // 0x2ea3b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3b0) {
            ctx->pc = 0x2EB48Cu;
            goto label_2eb48c;
        }
    }
    ctx->pc = 0x2EA3B8u;
    // 0x2ea3b8: 0xc0ba8d0  jal         func_2EA340
    ctx->pc = 0x2EA3B8u;
    SET_GPR_U32(ctx, 31, 0x2EA3C0u);
    ctx->pc = 0x2EA340u;
    if (runtime->hasFunction(0x2EA340u)) {
        auto targetFn = runtime->lookupFunction(0x2EA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3C0u; }
        if (ctx->pc != 0x2EA3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStatusSprite__7CSphidaFv_0x2ea340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3C0u; }
        if (ctx->pc != 0x2EA3C0u) { return; }
    }
    ctx->pc = 0x2EA3C0u;
label_2ea3c0:
    // 0x2ea3c0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2ea3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2ea3c4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ea3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ea3c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ea3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ea3cc: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x2EA3CCu;
    SET_GPR_U32(ctx, 31, 0x2EA3D4u);
    ctx->pc = 0x2EA3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3CCu;
            // 0x2ea3d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3D4u; }
        if (ctx->pc != 0x2EA3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3D4u; }
        if (ctx->pc != 0x2EA3D4u) { return; }
    }
    ctx->pc = 0x2EA3D4u;
label_2ea3d4:
    // 0x2ea3d4: 0xc0ba460  jal         func_2E9180
    ctx->pc = 0x2EA3D4u;
    SET_GPR_U32(ctx, 31, 0x2EA3DCu);
    ctx->pc = 0x2EA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3D4u;
            // 0x2ea3d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9180u;
    if (runtime->hasFunction(0x2E9180u)) {
        auto targetFn = runtime->lookupFunction(0x2E9180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3DCu; }
        if (ctx->pc != 0x2EA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__8CPowGageFv_0x2e9180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3DCu; }
        if (ctx->pc != 0x2EA3DCu) { return; }
    }
    ctx->pc = 0x2EA3DCu;
label_2ea3dc:
    // 0x2ea3dc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2ea3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x2ea3e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ea3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2ea3e4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2ea3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2ea3e8: 0x24a514f8  addiu       $a1, $a1, 0x14F8
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5368));
    // 0x2ea3ec: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2EA3ECu;
    SET_GPR_U32(ctx, 31, 0x2EA3F4u);
    ctx->pc = 0x2EA3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3ECu;
            // 0x2ea3f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3F4u; }
        if (ctx->pc != 0x2EA3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA3F4u; }
        if (ctx->pc != 0x2EA3F4u) { return; }
    }
    ctx->pc = 0x2EA3F4u;
label_2ea3f4:
    // 0x2ea3f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ea3f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3f8: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x2EA3F8u;
    SET_GPR_U32(ctx, 31, 0x2EA400u);
    ctx->pc = 0x2EA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA3F8u;
            // 0x2ea3fc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA400u; }
        if (ctx->pc != 0x2EA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA400u; }
        if (ctx->pc != 0x2EA400u) { return; }
    }
    ctx->pc = 0x2EA400u;
label_2ea400:
    // 0x2ea400: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea404: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea408: 0xc04d104  jal         func_134410
    ctx->pc = 0x2EA408u;
    SET_GPR_U32(ctx, 31, 0x2EA410u);
    ctx->pc = 0x2EA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA408u;
            // 0x2ea40c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA410u; }
        if (ctx->pc != 0x2EA410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA410u; }
        if (ctx->pc != 0x2EA410u) { return; }
    }
    ctx->pc = 0x2EA410u;
label_2ea410:
    // 0x2ea410: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea414: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x2EA414u;
    SET_GPR_U32(ctx, 31, 0x2EA41Cu);
    ctx->pc = 0x2EA418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA414u;
            // 0x2ea418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA41Cu; }
        if (ctx->pc != 0x2EA41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA41Cu; }
        if (ctx->pc != 0x2EA41Cu) { return; }
    }
    ctx->pc = 0x2EA41Cu;
label_2ea41c:
    // 0x2ea41c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea420: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x2EA420u;
    SET_GPR_U32(ctx, 31, 0x2EA428u);
    ctx->pc = 0x2EA424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA420u;
            // 0x2ea424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA428u; }
        if (ctx->pc != 0x2EA428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA428u; }
        if (ctx->pc != 0x2EA428u) { return; }
    }
    ctx->pc = 0x2EA428u;
label_2ea428:
    // 0x2ea428: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea42c: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x2EA42Cu;
    SET_GPR_U32(ctx, 31, 0x2EA434u);
    ctx->pc = 0x2EA430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA42Cu;
            // 0x2ea430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA434u; }
        if (ctx->pc != 0x2EA434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA434u; }
        if (ctx->pc != 0x2EA434u) { return; }
    }
    ctx->pc = 0x2EA434u;
label_2ea434:
    // 0x2ea434: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea438: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x2EA438u;
    SET_GPR_U32(ctx, 31, 0x2EA440u);
    ctx->pc = 0x2EA43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA438u;
            // 0x2ea43c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA440u; }
        if (ctx->pc != 0x2EA440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA440u; }
        if (ctx->pc != 0x2EA440u) { return; }
    }
    ctx->pc = 0x2EA440u;
label_2ea440:
    // 0x2ea440: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea444: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x2EA444u;
    SET_GPR_U32(ctx, 31, 0x2EA44Cu);
    ctx->pc = 0x2EA448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA444u;
            // 0x2ea448: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA44Cu; }
        if (ctx->pc != 0x2EA44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA44Cu; }
        if (ctx->pc != 0x2EA44Cu) { return; }
    }
    ctx->pc = 0x2EA44Cu;
label_2ea44c:
    // 0x2ea44c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ea450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea454: 0xc04d3c4  jal         func_134F10
    ctx->pc = 0x2EA454u;
    SET_GPR_U32(ctx, 31, 0x2EA45Cu);
    ctx->pc = 0x2EA458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA454u;
            // 0x2ea458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F10u;
    if (runtime->hasFunction(0x134F10u)) {
        auto targetFn = runtime->lookupFunction(0x134F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA45Cu; }
        if (ctx->pc != 0x2EA45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTest__11mgCDrawPrimFii_0x134f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA45Cu; }
        if (ctx->pc != 0x2EA45Cu) { return; }
    }
    ctx->pc = 0x2EA45Cu;
label_2ea45c:
    // 0x2ea45c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea460: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2EA460u;
    SET_GPR_U32(ctx, 31, 0x2EA468u);
    ctx->pc = 0x2EA464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA460u;
            // 0x2ea464: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA468u; }
        if (ctx->pc != 0x2EA468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA468u; }
        if (ctx->pc != 0x2EA468u) { return; }
    }
    ctx->pc = 0x2EA468u;
label_2ea468:
    // 0x2ea468: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea46c: 0xc04d44c  jal         func_135130
    ctx->pc = 0x2EA46Cu;
    SET_GPR_U32(ctx, 31, 0x2EA474u);
    ctx->pc = 0x2EA470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA46Cu;
            // 0x2ea470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA474u; }
        if (ctx->pc != 0x2EA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA474u; }
        if (ctx->pc != 0x2EA474u) { return; }
    }
    ctx->pc = 0x2EA474u;
label_2ea474:
    // 0x2ea474: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea478: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2EA478u;
    SET_GPR_U32(ctx, 31, 0x2EA480u);
    ctx->pc = 0x2EA47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA478u;
            // 0x2ea47c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA480u; }
        if (ctx->pc != 0x2EA480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA480u; }
        if (ctx->pc != 0x2EA480u) { return; }
    }
    ctx->pc = 0x2EA480u;
label_2ea480:
    // 0x2ea480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ea480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea484: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2EA484u;
    SET_GPR_U32(ctx, 31, 0x2EA48Cu);
    ctx->pc = 0x2EA488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA484u;
            // 0x2ea488: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA48Cu; }
        if (ctx->pc != 0x2EA48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA48Cu; }
        if (ctx->pc != 0x2EA48Cu) { return; }
    }
    ctx->pc = 0x2EA48Cu;
label_2ea48c:
    // 0x2ea48c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2ea48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea490: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea494: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ea494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea498: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2ea498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea49c: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2EA49Cu;
    SET_GPR_U32(ctx, 31, 0x2EA4A4u);
    ctx->pc = 0x2EA4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA49Cu;
            // 0x2ea4a0: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4A4u; }
        if (ctx->pc != 0x2EA4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4A4u; }
        if (ctx->pc != 0x2EA4A4u) { return; }
    }
    ctx->pc = 0x2EA4A4u;
label_2ea4a4:
    // 0x2ea4a4: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x2ea4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x2ea4a8: 0x14400209  bnez        $v0, . + 4 + (0x209 << 2)
    ctx->pc = 0x2EA4A8u;
    {
        const bool branch_taken_0x2ea4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA4A8u;
            // 0x2ea4ac: 0x3c0241c0  lui         $v0, 0x41C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4a8) {
            ctx->pc = 0x2EACD0u;
            goto label_2eacd0;
        }
    }
    ctx->pc = 0x2EA4B0u;
    // 0x2ea4b0: 0x3c0243bf  lui         $v0, 0x43BF
    ctx->pc = 0x2ea4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17343 << 16));
    // 0x2ea4b4: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ea4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ea4b8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ea4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ea4bc: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2ea4bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ea4c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea4c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea4c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea4c8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea4c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea4cc: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2ea4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ea4d0: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2ea4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2ea4d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea4d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea4d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea4dc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ea4dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4e0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA4E0u;
    SET_GPR_U32(ctx, 31, 0x2EA4E8u);
    ctx->pc = 0x2EA4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA4E0u;
            // 0x2ea4e4: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4E8u; }
        if (ctx->pc != 0x2EA4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA4E8u; }
        if (ctx->pc != 0x2EA4E8u) { return; }
    }
    ctx->pc = 0x2EA4E8u;
label_2ea4e8:
    // 0x2ea4e8: 0x3c0243ce  lui         $v0, 0x43CE
    ctx->pc = 0x2ea4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17358 << 16));
    // 0x2ea4ec: 0x3c044208  lui         $a0, 0x4208
    ctx->pc = 0x2ea4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16904 << 16));
    // 0x2ea4f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2ea4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ea4f4: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x2ea4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x2ea4f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea4fc: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x2ea4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x2ea500: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2ea500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea508: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea50c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2ea50cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2ea510: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea514: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea518: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea51c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA51Cu;
    SET_GPR_U32(ctx, 31, 0x2EA524u);
    ctx->pc = 0x2EA520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA51Cu;
            // 0x2ea520: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA524u; }
        if (ctx->pc != 0x2EA524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA524u; }
        if (ctx->pc != 0x2EA524u) { return; }
    }
    ctx->pc = 0x2EA524u;
label_2ea524:
    // 0x2ea524: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2ea524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2ea528: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2ea528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2ea52c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2ea52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2ea530: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2ea530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ea534: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2ea534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2ea538: 0x0  nop
    ctx->pc = 0x2ea538u;
    // NOP
    // 0x2ea53c: 0x1010  mfhi        $v0
    ctx->pc = 0x2ea53cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ea540: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ea540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ea544: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ea544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea548: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2ea548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea54c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ea54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ea550: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ea554: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA554u;
    {
        const bool branch_taken_0x2ea554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA554u;
            // 0x2ea558: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea554) {
            ctx->pc = 0x2EA5A0u;
            goto label_2ea5a0;
        }
    }
    ctx->pc = 0x2EA55Cu;
    // 0x2ea55c: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2ea55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2ea560: 0x3c0343db  lui         $v1, 0x43DB
    ctx->pc = 0x2ea560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17371 << 16));
    // 0x2ea564: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea568: 0x3c044190  lui         $a0, 0x4190
    ctx->pc = 0x2ea568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16784 << 16));
    // 0x2ea56c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea570: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2ea570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2ea574: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ea574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ea578: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2ea578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ea57c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2ea57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ea580: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2ea580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea584: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea588: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ea588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ea58c: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2ea58cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea590: 0x2465014c  addiu       $a1, $v1, 0x14C
    ctx->pc = 0x2ea590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 332));
    // 0x2ea594: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea598: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA598u;
    SET_GPR_U32(ctx, 31, 0x2EA5A0u);
    ctx->pc = 0x2EA59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA598u;
            // 0x2ea59c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5A0u; }
        if (ctx->pc != 0x2EA5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5A0u; }
        if (ctx->pc != 0x2EA5A0u) { return; }
    }
    ctx->pc = 0x2EA5A0u;
label_2ea5a0:
    // 0x2ea5a0: 0x3c0243e3  lui         $v0, 0x43E3
    ctx->pc = 0x2ea5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17379 << 16));
    // 0x2ea5a4: 0x3c044190  lui         $a0, 0x4190
    ctx->pc = 0x2ea5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16784 << 16));
    // 0x2ea5a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea5ac: 0x3c034204  lui         $v1, 0x4204
    ctx->pc = 0x2ea5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16900 << 16));
    // 0x2ea5b0: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x2ea5b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea5b4: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2ea5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2ea5b8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2ea5bc: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ea5c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ea5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ea5c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea5c8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ea5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ea5cc: 0x2445014c  addiu       $a1, $v0, 0x14C
    ctx->pc = 0x2ea5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
    // 0x2ea5d0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea5d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ea5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea5d8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea5dc: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA5DCu;
    SET_GPR_U32(ctx, 31, 0x2EA5E4u);
    ctx->pc = 0x2EA5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA5DCu;
            // 0x2ea5e0: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5E4u; }
        if (ctx->pc != 0x2EA5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA5E4u; }
        if (ctx->pc != 0x2EA5E4u) { return; }
    }
    ctx->pc = 0x2EA5E4u;
label_2ea5e4:
    // 0x2ea5e4: 0x3c0343ed  lui         $v1, 0x43ED
    ctx->pc = 0x2ea5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17389 << 16));
    // 0x2ea5e8: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2ea5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2ea5ec: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea5f0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea5f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea5f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea5f8: 0x240500e8  addiu       $a1, $zero, 0xE8
    ctx->pc = 0x2ea5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x2ea5fc: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2ea600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea604: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea608: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2ea608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ea60c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea60cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea610: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea614: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA614u;
    SET_GPR_U32(ctx, 31, 0x2EA61Cu);
    ctx->pc = 0x2EA618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA614u;
            // 0x2ea618: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA61Cu; }
        if (ctx->pc != 0x2EA61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA61Cu; }
        if (ctx->pc != 0x2EA61Cu) { return; }
    }
    ctx->pc = 0x2EA61Cu;
label_2ea61c:
    // 0x2ea61c: 0x3c0343be  lui         $v1, 0x43BE
    ctx->pc = 0x2ea61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17342 << 16));
    // 0x2ea620: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea624: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea628: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea62c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea630: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2ea630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2ea634: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x2ea634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
    // 0x2ea638: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ea638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea63c: 0x3c0242a8  lui         $v0, 0x42A8
    ctx->pc = 0x2ea63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17064 << 16));
    // 0x2ea640: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x2ea640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2ea644: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2ea644u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea648: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea64c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA64Cu;
    SET_GPR_U32(ctx, 31, 0x2EA654u);
    ctx->pc = 0x2EA650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA64Cu;
            // 0x2ea650: 0x24080016  addiu       $t0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA654u; }
        if (ctx->pc != 0x2EA654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA654u; }
        if (ctx->pc != 0x2EA654u) { return; }
    }
    ctx->pc = 0x2EA654u;
label_2ea654:
    // 0x2ea654: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2ea654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ea658: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EA658u;
    SET_GPR_U32(ctx, 31, 0x2EA660u);
    ctx->pc = 0x2EA65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA658u;
            // 0x2ea65c: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA660u; }
        if (ctx->pc != 0x2EA660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA660u; }
        if (ctx->pc != 0x2EA660u) { return; }
    }
    ctx->pc = 0x2EA660u;
label_2ea660:
    // 0x2ea660: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea668: 0x0  nop
    ctx->pc = 0x2ea668u;
    // NOP
    // 0x2ea66c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2ea66cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ea670: 0x0  nop
    ctx->pc = 0x2ea670u;
    // NOP
    // 0x2ea674: 0x0  nop
    ctx->pc = 0x2ea674u;
    // NOP
    // 0x2ea678: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EA678u;
    SET_GPR_U32(ctx, 31, 0x2EA680u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA680u; }
        if (ctx->pc != 0x2EA680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA680u; }
        if (ctx->pc != 0x2EA680u) { return; }
    }
    ctx->pc = 0x2EA680u;
label_2ea680:
    // 0x2ea680: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x2ea680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2ea684: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EA684u;
    {
        const bool branch_taken_0x2ea684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA684u;
            // 0x2ea688: 0x3c0351eb  lui         $v1, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea684) {
            ctx->pc = 0x2EA690u;
            goto label_2ea690;
        }
    }
    ctx->pc = 0x2EA68Cu;
    // 0x2ea68c: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2ea68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2ea690:
    // 0x2ea690: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2ea690u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ea694: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x2ea694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2ea698: 0x27a601b4  addiu       $a2, $sp, 0x1B4
    ctx->pc = 0x2ea698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x2ea69c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x2ea69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ea6a0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2ea6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2ea6a4: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2ea6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2ea6a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ea6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ea6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ea6b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2ea6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6b8: 0x2010  mfhi        $a0
    ctx->pc = 0x2ea6b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ea6bc: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x2ea6bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x2ea6c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2ea6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ea6c4: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x2ea6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x2ea6c8: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ea6cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ea6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea6d0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2ea6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2ea6d4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea6d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2ea6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ea6dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ea6e0: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ea6e4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2ea6e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ea6e8: 0x0  nop
    ctx->pc = 0x2ea6e8u;
    // NOP
    // 0x2ea6ec: 0x0  nop
    ctx->pc = 0x2ea6ecu;
    // NOP
    // 0x2ea6f0: 0x1810  mfhi        $v1
    ctx->pc = 0x2ea6f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ea6f4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2ea6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2ea6f8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2ea6f8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2ea6fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ea6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea700: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2ea700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2ea704: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ea704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ea708: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2ea708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2ea70c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ea70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea710: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ea714: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ea714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ea718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ea71c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2ea71cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2ea720: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2ea720u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ea724: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea728: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ea728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ea72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ea730: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ea734: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x2ea734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_2ea738:
    // 0x2ea738: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2ea738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2ea73c: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2ea740: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA740u;
    {
        const bool branch_taken_0x2ea740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA740u;
            // 0x2ea744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea740) {
            ctx->pc = 0x2EA750u;
            goto label_2ea750;
        }
    }
    ctx->pc = 0x2EA748u;
    // 0x2ea748: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EA748u;
    {
        const bool branch_taken_0x2ea748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea748) {
            ctx->pc = 0x2EA79Cu;
            goto label_2ea79c;
        }
    }
    ctx->pc = 0x2EA750u;
label_2ea750:
    // 0x2ea750: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2ea750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ea754: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2ea754u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea758: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x2ea758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2ea75c: 0x3c0343d7  lui         $v1, 0x43D7
    ctx->pc = 0x2ea75cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17367 << 16));
    // 0x2ea760: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea768: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea76c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2ea76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2ea770: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea774: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2ea774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea778: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ea778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea77c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ea77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea780: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea784: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ea784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea788: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ea788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ea78c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea790: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea794: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA794u;
    SET_GPR_U32(ctx, 31, 0x2EA79Cu);
    ctx->pc = 0x2EA798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA794u;
            // 0x2ea798: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA79Cu; }
        if (ctx->pc != 0x2EA79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA79Cu; }
        if (ctx->pc != 0x2EA79Cu) { return; }
    }
    ctx->pc = 0x2EA79Cu;
label_2ea79c:
    // 0x2ea79c: 0x0  nop
    ctx->pc = 0x2ea79cu;
    // NOP
    // 0x2ea7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ea7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ea7a4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2ea7a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ea7a8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2ea7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2ea7ac: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2EA7ACu;
    {
        const bool branch_taken_0x2ea7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7ACu;
            // 0x2ea7b0: 0x2694000e  addiu       $s4, $s4, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea7ac) {
            ctx->pc = 0x2EA738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea738;
        }
    }
    ctx->pc = 0x2EA7B4u;
    // 0x2ea7b4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea7b8: 0x3c0341b0  lui         $v1, 0x41B0
    ctx->pc = 0x2ea7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16816 << 16));
    // 0x2ea7bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea7c0: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2ea7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ea7c4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea7c8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea7cc: 0x3c0243ed  lui         $v0, 0x43ED
    ctx->pc = 0x2ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17389 << 16));
    // 0x2ea7d0: 0x240500ea  addiu       $a1, $zero, 0xEA
    ctx->pc = 0x2ea7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2ea7d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea7d8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ea7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ea7dc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2ea7dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2ea7e0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA7E0u;
    SET_GPR_U32(ctx, 31, 0x2EA7E8u);
    ctx->pc = 0x2EA7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA7E0u;
            // 0x2ea7e4: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7E8u; }
        if (ctx->pc != 0x2EA7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA7E8u; }
        if (ctx->pc != 0x2EA7E8u) { return; }
    }
    ctx->pc = 0x2EA7E8u;
label_2ea7e8:
    // 0x2ea7e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ea7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2ea7ec: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2ea7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea7f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea7f4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2ea7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ea7f8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea7fc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea800: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
    // 0x2ea804: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea808: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea80c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2ea80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ea810: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2ea810u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2ea814: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA814u;
    SET_GPR_U32(ctx, 31, 0x2EA81Cu);
    ctx->pc = 0x2EA818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA814u;
            // 0x2ea818: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA81Cu; }
        if (ctx->pc != 0x2EA81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA81Cu; }
        if (ctx->pc != 0x2EA81Cu) { return; }
    }
    ctx->pc = 0x2EA81Cu;
label_2ea81c:
    // 0x2ea81c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2ea81cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea820: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x2ea820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x2ea824: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea828: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea82c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea830: 0x2405014a  addiu       $a1, $zero, 0x14A
    ctx->pc = 0x2ea830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2ea834: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ea834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea838: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2ea838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ea83c: 0x3c024398  lui         $v0, 0x4398
    ctx->pc = 0x2ea83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17304 << 16));
    // 0x2ea840: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ea844: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2ea844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea848: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea84c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA84Cu;
    SET_GPR_U32(ctx, 31, 0x2EA854u);
    ctx->pc = 0x2EA850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA84Cu;
            // 0x2ea850: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA854u; }
        if (ctx->pc != 0x2EA854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA854u; }
        if (ctx->pc != 0x2EA854u) { return; }
    }
    ctx->pc = 0x2EA854u;
label_2ea854:
    // 0x2ea854: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2ea854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea858: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2ea858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2ea85c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea85cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea860: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea864: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea868: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x2ea868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    // 0x2ea86c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2ea86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea870: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2ea870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ea874: 0x3c0243c0  lui         $v0, 0x43C0
    ctx->pc = 0x2ea874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17344 << 16));
    // 0x2ea878: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2ea878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2ea87c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2ea87cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea880: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea884: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA884u;
    SET_GPR_U32(ctx, 31, 0x2EA88Cu);
    ctx->pc = 0x2EA888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA884u;
            // 0x2ea888: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA88Cu; }
        if (ctx->pc != 0x2EA88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA88Cu; }
        if (ctx->pc != 0x2EA88Cu) { return; }
    }
    ctx->pc = 0x2EA88Cu;
label_2ea88c:
    // 0x2ea88c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2ea890: 0x3c0343a8  lui         $v1, 0x43A8
    ctx->pc = 0x2ea890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17320 << 16));
    // 0x2ea894: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea898: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea89c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ea89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea8a0: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2ea8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2ea8a4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2ea8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea8a8: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ea8ac: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea8b0: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2ea8b4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2ea8b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2ea8b8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA8B8u;
    SET_GPR_U32(ctx, 31, 0x2EA8C0u);
    ctx->pc = 0x2EA8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA8B8u;
            // 0x2ea8bc: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8C0u; }
        if (ctx->pc != 0x2EA8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8C0u; }
        if (ctx->pc != 0x2EA8C0u) { return; }
    }
    ctx->pc = 0x2EA8C0u;
label_2ea8c0:
    // 0x2ea8c0: 0x3c0343a8  lui         $v1, 0x43A8
    ctx->pc = 0x2ea8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17320 << 16));
    // 0x2ea8c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2ea8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea8c8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ea8c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea8cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea8d0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea8d4: 0x240501a8  addiu       $a1, $zero, 0x1A8
    ctx->pc = 0x2ea8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    // 0x2ea8d8: 0x3c0342aa  lui         $v1, 0x42AA
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17066 << 16));
    // 0x2ea8dc: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2ea8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ea8e0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ea8e4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2ea8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ea8e8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea8ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea8f0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA8F0u;
    SET_GPR_U32(ctx, 31, 0x2EA8F8u);
    ctx->pc = 0x2EA8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA8F0u;
            // 0x2ea8f4: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8F8u; }
        if (ctx->pc != 0x2EA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA8F8u; }
        if (ctx->pc != 0x2EA8F8u) { return; }
    }
    ctx->pc = 0x2EA8F8u;
label_2ea8f8:
    // 0x2ea8f8: 0xc60301f4  lwc1        $f3, 0x1F4($s0)
    ctx->pc = 0x2ea8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ea8fc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2ea8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2ea900: 0xc60101f8  lwc1        $f1, 0x1F8($s0)
    ctx->pc = 0x2ea900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea904: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2ea904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2ea908: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2ea908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ea90c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2ea90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ea910: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea918: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2ea918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2ea91c: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2ea91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ea920: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ea920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ea924: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x2ea924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2ea928: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2ea928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2ea92c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ea92cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea930: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
    // 0x2ea934: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2ea934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ea938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea93c: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2ea93cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2ea940: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2ea940u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea944: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA944u;
    SET_GPR_U32(ctx, 31, 0x2EA94Cu);
    ctx->pc = 0x2EA948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA944u;
            // 0x2ea948: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA94Cu; }
        if (ctx->pc != 0x2EA94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA94Cu; }
        if (ctx->pc != 0x2EA94Cu) { return; }
    }
    ctx->pc = 0x2EA94Cu;
label_2ea94c:
    // 0x2ea94c: 0x3c034250  lui         $v1, 0x4250
    ctx->pc = 0x2ea94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16976 << 16));
    // 0x2ea950: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2ea950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2ea954: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2ea954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea958: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea95c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea960: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x2ea960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x2ea964: 0x3c0343e6  lui         $v1, 0x43E6
    ctx->pc = 0x2ea964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17382 << 16));
    // 0x2ea968: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2ea968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2ea96c: 0x3c0243b2  lui         $v0, 0x43B2
    ctx->pc = 0x2ea96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17330 << 16));
    // 0x2ea970: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x2ea970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2ea974: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea978: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea97c: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA97Cu;
    SET_GPR_U32(ctx, 31, 0x2EA984u);
    ctx->pc = 0x2EA980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA97Cu;
            // 0x2ea980: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA984u; }
        if (ctx->pc != 0x2EA984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA984u; }
        if (ctx->pc != 0x2EA984u) { return; }
    }
    ctx->pc = 0x2EA984u;
label_2ea984:
    // 0x2ea984: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2ea984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2ea988: 0x3c0343e6  lui         $v1, 0x43E6
    ctx->pc = 0x2ea988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17382 << 16));
    // 0x2ea98c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2ea98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ea990: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ea990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ea994: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2ea994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea99c: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2ea99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2ea9a0: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x2ea9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2ea9a4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ea9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ea9a8: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x2ea9a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2ea9ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ea9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ea9b0: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2ea9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2ea9b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ea9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ea9b8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EA9B8u;
    SET_GPR_U32(ctx, 31, 0x2EA9C0u);
    ctx->pc = 0x2EA9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9B8u;
            // 0x2ea9bc: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9C0u; }
        if (ctx->pc != 0x2EA9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9C0u; }
        if (ctx->pc != 0x2EA9C0u) { return; }
    }
    ctx->pc = 0x2EA9C0u;
label_2ea9c0:
    // 0x2ea9c0: 0x8e0401fc  lw          $a0, 0x1FC($s0)
    ctx->pc = 0x2ea9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x2ea9c4: 0xc0ba374  jal         func_2E8DD0
    ctx->pc = 0x2EA9C4u;
    SET_GPR_U32(ctx, 31, 0x2EA9CCu);
    ctx->pc = 0x2EA9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9C4u;
            // 0x2ea9c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8DD0u;
    if (runtime->hasFunction(0x2E8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9CCu; }
        if (ctx->pc != 0x2EA9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaClubDef__Fi_0x2e8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9CCu; }
        if (ctx->pc != 0x2EA9CCu) { return; }
    }
    ctx->pc = 0x2EA9CCu;
label_2ea9cc:
    // 0x2ea9cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2ea9ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9d0: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EA9D0u;
    {
        const bool branch_taken_0x2ea9d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9D0u;
            // 0x2ea9d4: 0x2a2103e8  slti        $at, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9d0) {
            ctx->pc = 0x2EAB4Cu;
            goto label_2eab4c;
        }
    }
    ctx->pc = 0x2EA9D8u;
    // 0x2ea9d8: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2EA9D8u;
    SET_GPR_U32(ctx, 31, 0x2EA9E0u);
    ctx->pc = 0x2EA9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9D8u;
            // 0x2ea9dc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9E0u; }
        if (ctx->pc != 0x2EA9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9E0u; }
        if (ctx->pc != 0x2EA9E0u) { return; }
    }
    ctx->pc = 0x2EA9E0u;
label_2ea9e0:
    // 0x2ea9e0: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2EA9E0u;
    SET_GPR_U32(ctx, 31, 0x2EA9E8u);
    ctx->pc = 0x2EA9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA9E0u;
            // 0x2ea9e4: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9E8u; }
        if (ctx->pc != 0x2EA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA9E8u; }
        if (ctx->pc != 0x2EA9E8u) { return; }
    }
    ctx->pc = 0x2EA9E8u;
label_2ea9e8:
    // 0x2ea9e8: 0x27b10174  addiu       $s1, $sp, 0x174
    ctx->pc = 0x2ea9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x2ea9ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2ea9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2ea9f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2ea9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea9f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea9f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea9f8: 0x0  nop
    ctx->pc = 0x2ea9f8u;
    // NOP
    // 0x2ea9fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea9fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaa00: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2eaa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2eaa04: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EAA04u;
    SET_GPR_U32(ctx, 31, 0x2EAA0Cu);
    ctx->pc = 0x2EAA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA04u;
            // 0x2eaa08: 0xc60c0200  lwc1        $f12, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA0Cu; }
        if (ctx->pc != 0x2EAA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA0Cu; }
        if (ctx->pc != 0x2EAA0Cu) { return; }
    }
    ctx->pc = 0x2EAA0Cu;
label_2eaa0c:
    // 0x2eaa0c: 0xc04768a  jal         func_11DA28
    ctx->pc = 0x2EAA0Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA14u);
    ctx->pc = 0x2EAA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA0Cu;
            // 0x2eaa10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA28u;
    if (runtime->hasFunction(0x11DA28u)) {
        auto targetFn = runtime->lookupFunction(0x11DA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA14u; }
        if (ctx->pc != 0x2EAA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cos_0x11da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA14u; }
        if (ctx->pc != 0x2EAA14u) { return; }
    }
    ctx->pc = 0x2EAA14u;
label_2eaa14:
    // 0x2eaa14: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2eaa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaa18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eaa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa1c: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x2eaa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa24: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EAA24u;
    SET_GPR_U32(ctx, 31, 0x2EAA2Cu);
    ctx->pc = 0x2EAA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA24u;
            // 0x2eaa28: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA2Cu; }
        if (ctx->pc != 0x2EAA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA2Cu; }
        if (ctx->pc != 0x2EAA2Cu) { return; }
    }
    ctx->pc = 0x2EAA2Cu;
label_2eaa2c:
    // 0x2eaa2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eaa2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa30: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2EAA30u;
    SET_GPR_U32(ctx, 31, 0x2EAA38u);
    ctx->pc = 0x2EAA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA30u;
            // 0x2eaa34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA38u; }
        if (ctx->pc != 0x2EAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA38u; }
        if (ctx->pc != 0x2EAA38u) { return; }
    }
    ctx->pc = 0x2EAA38u;
label_2eaa38:
    // 0x2eaa38: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2EAA38u;
    SET_GPR_U32(ctx, 31, 0x2EAA40u);
    ctx->pc = 0x2EAA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA38u;
            // 0x2eaa3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA40u; }
        if (ctx->pc != 0x2EAA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA40u; }
        if (ctx->pc != 0x2EAA40u) { return; }
    }
    ctx->pc = 0x2EAA40u;
label_2eaa40:
    // 0x2eaa40: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x2eaa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2eaa44: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EAA44u;
    SET_GPR_U32(ctx, 31, 0x2EAA4Cu);
    ctx->pc = 0x2EAA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA44u;
            // 0x2eaa48: 0xc60c0200  lwc1        $f12, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA4Cu; }
        if (ctx->pc != 0x2EAA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA4Cu; }
        if (ctx->pc != 0x2EAA4Cu) { return; }
    }
    ctx->pc = 0x2EAA4Cu;
label_2eaa4c:
    // 0x2eaa4c: 0xc047870  jal         func_11E1C0
    ctx->pc = 0x2EAA4Cu;
    SET_GPR_U32(ctx, 31, 0x2EAA54u);
    ctx->pc = 0x2EAA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA4Cu;
            // 0x2eaa50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E1C0u;
    if (runtime->hasFunction(0x11E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA54u; }
        if (ctx->pc != 0x2EAA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sin_0x11e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA54u; }
        if (ctx->pc != 0x2EAA54u) { return; }
    }
    ctx->pc = 0x2EAA54u;
label_2eaa54:
    // 0x2eaa54: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2eaa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaa58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eaa58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa5c: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x2eaa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaa60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eaa60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eaa64: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EAA64u;
    SET_GPR_U32(ctx, 31, 0x2EAA6Cu);
    ctx->pc = 0x2EAA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA64u;
            // 0x2eaa68: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA6Cu; }
        if (ctx->pc != 0x2EAA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA6Cu; }
        if (ctx->pc != 0x2EAA6Cu) { return; }
    }
    ctx->pc = 0x2EAA6Cu;
label_2eaa6c:
    // 0x2eaa6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eaa6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa70: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2EAA70u;
    SET_GPR_U32(ctx, 31, 0x2EAA78u);
    ctx->pc = 0x2EAA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA70u;
            // 0x2eaa74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA78u; }
        if (ctx->pc != 0x2EAA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA78u; }
        if (ctx->pc != 0x2EAA78u) { return; }
    }
    ctx->pc = 0x2EAA78u;
label_2eaa78:
    // 0x2eaa78: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2EAA78u;
    SET_GPR_U32(ctx, 31, 0x2EAA80u);
    ctx->pc = 0x2EAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAA78u;
            // 0x2eaa7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA80u; }
        if (ctx->pc != 0x2EAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAA80u; }
        if (ctx->pc != 0x2EAA80u) { return; }
    }
    ctx->pc = 0x2EAA80u;
label_2eaa80:
    // 0x2eaa80: 0x27b00184  addiu       $s0, $sp, 0x184
    ctx->pc = 0x2eaa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x2eaa84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eaa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaa88: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2eaa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2eaa8c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2eaa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2eaa90:
    // 0x2eaa90: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2eaa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x2eaa94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaa94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaa98: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x2eaa98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
    // 0x2eaa9c: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x2eaa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eaaa0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2eaaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2eaaa4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2eaaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eaaa8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2eaaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaaac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eaaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eaab0: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x2eaab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2eaab4: 0x3c02bb93  lui         $v0, 0xBB93
    ctx->pc = 0x2eaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48019 << 16));
    // 0x2eaab8: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x2eaab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x2eaabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaac0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2eaac0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2eaac4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2eaac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eaac8: 0xe7a20180  swc1        $f2, 0x180($sp)
    ctx->pc = 0x2eaac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x2eaacc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2eaaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eaad0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eaad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eaad4: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2EAAD4u;
    SET_GPR_U32(ctx, 31, 0x2EAADCu);
    ctx->pc = 0x2EAAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAAD4u;
            // 0x2eaad8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAADCu; }
        if (ctx->pc != 0x2EAADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAADCu; }
        if (ctx->pc != 0x2EAADCu) { return; }
    }
    ctx->pc = 0x2EAADCu;
label_2eaadc:
    // 0x2eaadc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2eaadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eaae0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2eaae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2eaae4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eaae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaae8: 0x0  nop
    ctx->pc = 0x2eaae8u;
    // NOP
    // 0x2eaaec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2eaaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eaaf0: 0x0  nop
    ctx->pc = 0x2eaaf0u;
    // NOP
    // 0x2eaaf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAAF4u;
    {
        const bool branch_taken_0x2eaaf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eaaf4) {
            ctx->pc = 0x2EAB0Cu;
            goto label_2eab0c;
        }
    }
    ctx->pc = 0x2EAAFCu;
    // 0x2eaafc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2eaafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2eab00: 0x2a420258  slti        $v0, $s2, 0x258
    ctx->pc = 0x2eab00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x2eab04: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2EAB04u;
    {
        const bool branch_taken_0x2eab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB04u;
            // 0x2eab08: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab04) {
            ctx->pc = 0x2EAA90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eaa90;
        }
    }
    ctx->pc = 0x2EAB0Cu;
label_2eab0c:
    // 0x2eab0c: 0x0  nop
    ctx->pc = 0x2eab0cu;
    // NOP
    // 0x2eab10: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x2eab10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x2eab14: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x2eab14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x2eab18: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2eab1c: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2EAB1Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB24u);
    ctx->pc = 0x2EAB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB1Cu;
            // 0x2eab20: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB24u; }
        if (ctx->pc != 0x2EAB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB24u; }
        if (ctx->pc != 0x2EAB24u) { return; }
    }
    ctx->pc = 0x2EAB24u;
label_2eab24:
    // 0x2eab24: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eab28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eab2c: 0x0  nop
    ctx->pc = 0x2eab2cu;
    // NOP
    // 0x2eab30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2eab30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2eab34: 0x0  nop
    ctx->pc = 0x2eab34u;
    // NOP
    // 0x2eab38: 0x0  nop
    ctx->pc = 0x2eab38u;
    // NOP
    // 0x2eab3c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAB44u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB44u; }
        if (ctx->pc != 0x2EAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAB44u; }
        if (ctx->pc != 0x2EAB44u) { return; }
    }
    ctx->pc = 0x2EAB44u;
label_2eab44:
    // 0x2eab44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eab44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab48: 0x2a2103e8  slti        $at, $s1, 0x3E8
    ctx->pc = 0x2eab48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2eab4c:
    // 0x2eab4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAB4Cu;
    {
        const bool branch_taken_0x2eab4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAB4Cu;
            // 0x2eab50: 0x3c0251eb  lui         $v0, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab4c) {
            ctx->pc = 0x2EAB58u;
            goto label_2eab58;
        }
    }
    ctx->pc = 0x2EAB54u;
    // 0x2eab54: 0x241103e7  addiu       $s1, $zero, 0x3E7
    ctx->pc = 0x2eab54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2eab58:
    // 0x2eab58: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x2eab58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x2eab5c: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2eab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2eab60: 0x27a501c4  addiu       $a1, $sp, 0x1C4
    ctx->pc = 0x2eab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x2eab64: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2eab64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eab68: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2eab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2eab6c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2eab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2eab70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2eab70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eab74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eab78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab7c: 0x1810  mfhi        $v1
    ctx->pc = 0x2eab7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eab80: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2eab80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2eab84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eab88: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x2eab88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x2eab8c: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2eab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2eab90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eab90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eab94: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2eab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eab98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eab98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eab9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2eab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eaba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eaba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eaba4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2eaba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2eaba8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2eaba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eabac: 0x0  nop
    ctx->pc = 0x2eabacu;
    // NOP
    // 0x2eabb0: 0x0  nop
    ctx->pc = 0x2eabb0u;
    // NOP
    // 0x2eabb4: 0x1010  mfhi        $v0
    ctx->pc = 0x2eabb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2eabb8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2eabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2eabbc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2eabbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2eabc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eabc4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2eabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2eabc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eabc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eabcc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x2eabccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2eabd0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2eabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eabd4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2eabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eabd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eabdc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2eabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eabe0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2eabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2eabe4: 0x2222023  subu        $a0, $s1, $v0
    ctx->pc = 0x2eabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eabe8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eabec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eabecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eabf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eabf4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eabf8: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2eabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_2eabfc:
    // 0x2eabfc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2eabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2eac00: 0x8c4301c0  lw          $v1, 0x1C0($v0)
    ctx->pc = 0x2eac00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x2eac04: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAC04u;
    {
        const bool branch_taken_0x2eac04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC04u;
            // 0x2eac08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac04) {
            ctx->pc = 0x2EAC1Cu;
            goto label_2eac1c;
        }
    }
    ctx->pc = 0x2EAC0Cu;
    // 0x2eac0c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAC0Cu;
    {
        const bool branch_taken_0x2eac0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EAC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC0Cu;
            // 0x2eac10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac0c) {
            ctx->pc = 0x2EAC1Cu;
            goto label_2eac1c;
        }
    }
    ctx->pc = 0x2EAC14u;
    // 0x2eac14: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EAC14u;
    {
        const bool branch_taken_0x2eac14 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eac14) {
            ctx->pc = 0x2EAC80u;
            goto label_2eac80;
        }
    }
    ctx->pc = 0x2EAC1Cu;
label_2eac1c:
    // 0x2eac1c: 0x0  nop
    ctx->pc = 0x2eac1cu;
    // NOP
    // 0x2eac20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2eac20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2eac24: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x2eac24u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eac28: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x2eac28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x2eac2c: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x2eac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2eac30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eac34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eac34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eac38: 0x3c0243db  lui         $v0, 0x43DB
    ctx->pc = 0x2eac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17371 << 16));
    // 0x2eac3c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2eac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2eac40: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2eac40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eac44: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2eac44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eac48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eac4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2eac4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eac50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eac50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eac54: 0x0  nop
    ctx->pc = 0x2eac54u;
    // NOP
    // 0x2eac58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eac58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2eac5c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2eac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2eac60: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2eac60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2eac64: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eac68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eac68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eac6c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eac70: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eac70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eac74: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eac74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eac78: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EAC78u;
    SET_GPR_U32(ctx, 31, 0x2EAC80u);
    ctx->pc = 0x2EAC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC78u;
            // 0x2eac7c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC80u; }
        if (ctx->pc != 0x2EAC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAC80u; }
        if (ctx->pc != 0x2EAC80u) { return; }
    }
    ctx->pc = 0x2EAC80u;
label_2eac80:
    // 0x2eac80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eac80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2eac84: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2eac84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eac88: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2EAC88u;
    {
        const bool branch_taken_0x2eac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAC88u;
            // 0x2eac8c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac88) {
            ctx->pc = 0x2EABFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eabfc;
        }
    }
    ctx->pc = 0x2EAC90u;
    // 0x2eac90: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2eac94: 0x3c0343f1  lui         $v1, 0x43F1
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17393 << 16));
    // 0x2eac98: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eac98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eac9c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2eac9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2eaca0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eaca0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eaca4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eaca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eaca8: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2eaca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2eacac: 0x240500ea  addiu       $a1, $zero, 0xEA
    ctx->pc = 0x2eacacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    // 0x2eacb0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eacb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eacb4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2eacb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eacb8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eacb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eacbc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2eacbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EACC0u;
    SET_GPR_U32(ctx, 31, 0x2EACC8u);
    ctx->pc = 0x2EACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EACC0u;
            // 0x2eacc4: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EACC8u; }
        if (ctx->pc != 0x2EACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EACC8u; }
        if (ctx->pc != 0x2EACC8u) { return; }
    }
    ctx->pc = 0x2EACC8u;
label_2eacc8:
    // 0x2eacc8: 0x100001ee  b           . + 4 + (0x1EE << 2)
    ctx->pc = 0x2EACC8u;
    {
        const bool branch_taken_0x2eacc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EACC8u;
            // 0x2eaccc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacc8) {
            ctx->pc = 0x2EB484u;
            goto label_2eb484;
        }
    }
    ctx->pc = 0x2EACD0u;
label_2eacd0:
    // 0x2eacd0: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x2eacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x2eacd4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eacd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eacd8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2eacd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2eacdc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eacdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eace0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eace0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eace4: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x2eace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x2eace8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x2eace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2eacec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eacecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eacf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2eacf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2eacf4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2eacf8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EACF8u;
    SET_GPR_U32(ctx, 31, 0x2EAD00u);
    ctx->pc = 0x2EACFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EACF8u;
            // 0x2eacfc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD00u; }
        if (ctx->pc != 0x2EAD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD00u; }
        if (ctx->pc != 0x2EAD00u) { return; }
    }
    ctx->pc = 0x2EAD00u;
label_2ead00:
    // 0x2ead00: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ead00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ead04: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2ead08: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2ead08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2ead0c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ead0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ead10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ead10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ead14: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2ead14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2ead18: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x2ead18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x2ead1c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x2ead1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2ead20: 0x3c0242cc  lui         $v0, 0x42CC
    ctx->pc = 0x2ead20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17100 << 16));
    // 0x2ead24: 0x24070066  addiu       $a3, $zero, 0x66
    ctx->pc = 0x2ead24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x2ead28: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2ead28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ead2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2ead2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2ead30: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EAD30u;
    SET_GPR_U32(ctx, 31, 0x2EAD38u);
    ctx->pc = 0x2EAD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD30u;
            // 0x2ead34: 0x24080014  addiu       $t0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD38u; }
        if (ctx->pc != 0x2EAD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAD38u; }
        if (ctx->pc != 0x2EAD38u) { return; }
    }
    ctx->pc = 0x2EAD38u;
label_2ead38:
    // 0x2ead38: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x2ead38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x2ead3c: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2ead3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2ead40: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2ead40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2ead44: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2ead44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2ead48: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2ead48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2ead4c: 0x0  nop
    ctx->pc = 0x2ead4cu;
    // NOP
    // 0x2ead50: 0x1010  mfhi        $v0
    ctx->pc = 0x2ead50u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2ead54: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2ead58: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ead58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ead5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ead5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ead60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ead60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ead64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ead64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ead68: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EAD68u;
    {
        const bool branch_taken_0x2ead68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAD68u;
            // 0x2ead6c: 0x828823  subu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead68) {
            ctx->pc = 0x2EADB8u;
            goto label_2eadb8;
        }
    }
    ctx->pc = 0x2EAD70u;
    // 0x2ead70: 0x3c0243b1  lui         $v0, 0x43B1
    ctx->pc = 0x2ead70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17329 << 16));
    // 0x2ead74: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2ead74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2ead78: 0x34458000  ori         $a1, $v0, 0x8000
    ctx->pc = 0x2ead78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ead7c: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2ead7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2ead80: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ead80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ead84: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2ead84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ead88: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ead88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ead8c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2ead8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ead90: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2ead94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ead94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ead98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ead98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ead9c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2ead9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eada0: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x2eada0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eada4: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2eada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2eada8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eada8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eadac: 0x2465014c  addiu       $a1, $v1, 0x14C
    ctx->pc = 0x2eadacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 332));
    // 0x2eadb0: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EADB0u;
    SET_GPR_U32(ctx, 31, 0x2EADB8u);
    ctx->pc = 0x2EADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADB0u;
            // 0x2eadb4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADB8u; }
        if (ctx->pc != 0x2EADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EADB8u; }
        if (ctx->pc != 0x2EADB8u) { return; }
    }
    ctx->pc = 0x2EADB8u;
label_2eadb8:
    // 0x2eadb8: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2eadb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2eadbc: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x2eadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
    // 0x2eadc0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2eadc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2eadc4: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x2eadc8: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x2eadc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
    // 0x2eadcc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2eadccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2eadd0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2eadd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2eadd4: 0x2465014c  addiu       $a1, $v1, 0x14C
    ctx->pc = 0x2eadd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 332));
    // 0x2eadd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eadd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eaddc: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x2eaddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2eade0: 0x44847800  mtc1        $a0, $f15
    ctx->pc = 0x2eade0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eade4: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2eade4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eade8: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x2eade8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
    // 0x2eadec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eadecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eadf0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2eadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
    // 0x2eadf4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eadf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eadf8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EADF8u;
    SET_GPR_U32(ctx, 31, 0x2EAE00u);
    ctx->pc = 0x2EADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EADF8u;
            // 0x2eadfc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE00u; }
        if (ctx->pc != 0x2EAE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE00u; }
        if (ctx->pc != 0x2EAE00u) { return; }
    }
    ctx->pc = 0x2EAE00u;
label_2eae00:
    // 0x2eae00: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2eae00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2eae04: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2eae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2eae08: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2eae08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eae0c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x2eae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2eae10: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eae10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eae14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eae14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eae18: 0x3c0343dd  lui         $v1, 0x43DD
    ctx->pc = 0x2eae18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17373 << 16));
    // 0x2eae1c: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x2eae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2eae20: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x2eae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
    // 0x2eae24: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2eae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2eae28: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eae28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eae2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eae2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eae30: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EAE30u;
    SET_GPR_U32(ctx, 31, 0x2EAE38u);
    ctx->pc = 0x2EAE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE30u;
            // 0x2eae34: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE38u; }
        if (ctx->pc != 0x2EAE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE38u; }
        if (ctx->pc != 0x2EAE38u) { return; }
    }
    ctx->pc = 0x2EAE38u;
label_2eae38:
    // 0x2eae38: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2eae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2eae3c: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EAE3Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE44u);
    ctx->pc = 0x2EAE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE3Cu;
            // 0x2eae40: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE44u; }
        if (ctx->pc != 0x2EAE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE44u; }
        if (ctx->pc != 0x2EAE44u) { return; }
    }
    ctx->pc = 0x2EAE44u;
label_2eae44:
    // 0x2eae44: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eae48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eae48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eae4c: 0x0  nop
    ctx->pc = 0x2eae4cu;
    // NOP
    // 0x2eae50: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2eae50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2eae54: 0x0  nop
    ctx->pc = 0x2eae54u;
    // NOP
    // 0x2eae58: 0x0  nop
    ctx->pc = 0x2eae58u;
    // NOP
    // 0x2eae5c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2EAE64u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE64u; }
        if (ctx->pc != 0x2EAE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAE64u; }
        if (ctx->pc != 0x2EAE64u) { return; }
    }
    ctx->pc = 0x2EAE64u;
label_2eae64:
    // 0x2eae64: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x2eae64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2eae68: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAE68u;
    {
        const bool branch_taken_0x2eae68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAE68u;
            // 0x2eae6c: 0x3c0351eb  lui         $v1, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae68) {
            ctx->pc = 0x2EAE74u;
            goto label_2eae74;
        }
    }
    ctx->pc = 0x2EAE70u;
    // 0x2eae70: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x2eae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2eae74:
    // 0x2eae74: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x2eae74u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2eae78: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x2eae78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2eae7c: 0x27a601d4  addiu       $a2, $sp, 0x1D4
    ctx->pc = 0x2eae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x2eae80: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x2eae80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eae84: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2eae84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2eae88: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2eae88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2eae8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2eae8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2eae90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eae94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eae98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae9c: 0x2010  mfhi        $a0
    ctx->pc = 0x2eae9cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2eaea0: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x2eaea0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x2eaea4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2eaea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eaea8: 0xafa401d0  sw          $a0, 0x1D0($sp)
    ctx->pc = 0x2eaea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 4));
    // 0x2eaeac: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2eaeb0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2eaeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2eaeb4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2eaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2eaeb8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2eaeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2eaebc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2eaebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2eaec0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2eaec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eaec4: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eaec8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x2eaec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eaecc: 0x0  nop
    ctx->pc = 0x2eaeccu;
    // NOP
    // 0x2eaed0: 0x0  nop
    ctx->pc = 0x2eaed0u;
    // NOP
    // 0x2eaed4: 0x1810  mfhi        $v1
    ctx->pc = 0x2eaed4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eaed8: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x2eaed8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2eaedc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2eaedcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2eaee0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eaee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eaee4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2eaee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2eaee8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2eaee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2eaeec: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x2eaeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2eaef0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2eaef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2eaef4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2eaef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2eaef8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eaefc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eaefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eaf00: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2eaf00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2eaf04: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x2eaf04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eaf08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eaf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eaf0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eaf10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eaf14: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2eaf14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eaf18: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x2eaf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_2eaf1c:
    // 0x2eaf1c: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2eaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2eaf20: 0x8c4301d0  lw          $v1, 0x1D0($v0)
    ctx->pc = 0x2eaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x2eaf24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAF24u;
    {
        const bool branch_taken_0x2eaf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF24u;
            // 0x2eaf28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf24) {
            ctx->pc = 0x2EAF34u;
            goto label_2eaf34;
        }
    }
    ctx->pc = 0x2EAF2Cu;
    // 0x2eaf2c: 0x16220016  bne         $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EAF2Cu;
    {
        const bool branch_taken_0x2eaf2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eaf2c) {
            ctx->pc = 0x2EAF88u;
            goto label_2eaf88;
        }
    }
    ctx->pc = 0x2EAF34u;
label_2eaf34:
    // 0x2eaf34: 0x0  nop
    ctx->pc = 0x2eaf34u;
    // NOP
    // 0x2eaf38: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2eaf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2eaf3c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2eaf3cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eaf40: 0x3c0343d7  lui         $v1, 0x43D7
    ctx->pc = 0x2eaf40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17367 << 16));
    // 0x2eaf44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eaf44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eaf48: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x2eaf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2eaf4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eaf4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eaf50: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2eaf50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2eaf54: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2eaf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2eaf58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eaf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eaf5c: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2eaf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2eaf60: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2eaf60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eaf64: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2eaf64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eaf68: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2eaf68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eaf6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2eaf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2eaf70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eaf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eaf74: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eaf74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eaf78: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eaf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eaf7c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eaf7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eaf80: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EAF80u;
    SET_GPR_U32(ctx, 31, 0x2EAF88u);
    ctx->pc = 0x2EAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF80u;
            // 0x2eaf84: 0x460d0301  sub.s       $f12, $f0, $f13 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF88u; }
        if (ctx->pc != 0x2EAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAF88u; }
        if (ctx->pc != 0x2EAF88u) { return; }
    }
    ctx->pc = 0x2EAF88u;
label_2eaf88:
    // 0x2eaf88: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2eaf88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2eaf8c: 0x2a820003  slti        $v0, $s4, 0x3
    ctx->pc = 0x2eaf8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eaf90: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2eaf90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2eaf94: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2EAF94u;
    {
        const bool branch_taken_0x2eaf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAF94u;
            // 0x2eaf98: 0x2673000e  addiu       $s3, $s3, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf94) {
            ctx->pc = 0x2EAF1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eaf1c;
        }
    }
    ctx->pc = 0x2EAF9Cu;
    // 0x2eaf9c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2eaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2eafa0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2eafa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2eafa4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eafa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eafa8: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2eafa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2eafac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eafacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eafb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eafb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eafb4: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x2eafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
    // 0x2eafb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eafb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eafbc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eafbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eafc0: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2eafc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2eafc4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2eafc4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2eafc8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EAFC8u;
    SET_GPR_U32(ctx, 31, 0x2EAFD0u);
    ctx->pc = 0x2EAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EAFC8u;
            // 0x2eafcc: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFD0u; }
        if (ctx->pc != 0x2EAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EAFD0u; }
        if (ctx->pc != 0x2EAFD0u) { return; }
    }
    ctx->pc = 0x2EAFD0u;
label_2eafd0:
    // 0x2eafd0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2eafd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2eafd4: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x2eafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x2eafd8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eafd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eafdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eafe0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eafe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eafe4: 0x2405014a  addiu       $a1, $zero, 0x14A
    ctx->pc = 0x2eafe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x2eafe8: 0x3c034398  lui         $v1, 0x4398
    ctx->pc = 0x2eafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17304 << 16));
    // 0x2eafec: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eafecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eaff0: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eaff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eaff4: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x2eaff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2eaff8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2eaff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eaffc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eaffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb000: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB000u;
    SET_GPR_U32(ctx, 31, 0x2EB008u);
    ctx->pc = 0x2EB004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB000u;
            // 0x2eb004: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB008u; }
        if (ctx->pc != 0x2EB008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB008u; }
        if (ctx->pc != 0x2EB008u) { return; }
    }
    ctx->pc = 0x2EB008u;
label_2eb008:
    // 0x2eb008: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2eb008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2eb00c: 0x3c024268  lui         $v0, 0x4268
    ctx->pc = 0x2eb00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17000 << 16));
    // 0x2eb010: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb014: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb018: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eb018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb01c: 0x240501c6  addiu       $a1, $zero, 0x1C6
    ctx->pc = 0x2eb01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 454));
    // 0x2eb020: 0x3c0343c0  lui         $v1, 0x43C0
    ctx->pc = 0x2eb020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17344 << 16));
    // 0x2eb024: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eb024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eb028: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eb02c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2eb02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2eb030: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2eb030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb034: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eb034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb038: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB038u;
    SET_GPR_U32(ctx, 31, 0x2EB040u);
    ctx->pc = 0x2EB03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB038u;
            // 0x2eb03c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB040u; }
        if (ctx->pc != 0x2EB040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB040u; }
        if (ctx->pc != 0x2EB040u) { return; }
    }
    ctx->pc = 0x2EB040u;
label_2eb040:
    // 0x2eb040: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2eb040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2eb044: 0x3c0243a8  lui         $v0, 0x43A8
    ctx->pc = 0x2eb044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17320 << 16));
    // 0x2eb048: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb048u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb04c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb050: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb054: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x2eb054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2eb058: 0x3c034208  lui         $v1, 0x4208
    ctx->pc = 0x2eb058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16904 << 16));
    // 0x2eb05c: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eb05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eb060: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eb060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eb064: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x2eb064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2eb068: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eb068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb06c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eb06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb070: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB070u;
    SET_GPR_U32(ctx, 31, 0x2EB078u);
    ctx->pc = 0x2EB074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB070u;
            // 0x2eb074: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB078u; }
        if (ctx->pc != 0x2EB078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB078u; }
        if (ctx->pc != 0x2EB078u) { return; }
    }
    ctx->pc = 0x2EB078u;
label_2eb078:
    // 0x2eb078: 0x3c0342aa  lui         $v1, 0x42AA
    ctx->pc = 0x2eb078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17066 << 16));
    // 0x2eb07c: 0x3c0243a8  lui         $v0, 0x43A8
    ctx->pc = 0x2eb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17320 << 16));
    // 0x2eb080: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb084: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb08c: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x2eb08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    // 0x2eb090: 0x3c034210  lui         $v1, 0x4210
    ctx->pc = 0x2eb090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16912 << 16));
    // 0x2eb094: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eb094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eb098: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eb098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eb09c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x2eb09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2eb0a0: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eb0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb0a4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eb0a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb0a8: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB0A8u;
    SET_GPR_U32(ctx, 31, 0x2EB0B0u);
    ctx->pc = 0x2EB0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB0A8u;
            // 0x2eb0ac: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0B0u; }
        if (ctx->pc != 0x2EB0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB0B0u; }
        if (ctx->pc != 0x2EB0B0u) { return; }
    }
    ctx->pc = 0x2EB0B0u;
label_2eb0b0:
    // 0x2eb0b0: 0xc60301f4  lwc1        $f3, 0x1F4($s0)
    ctx->pc = 0x2eb0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eb0b4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2eb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2eb0b8: 0xc60101f8  lwc1        $f1, 0x1F8($s0)
    ctx->pc = 0x2eb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb0bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2eb0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2eb0c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2eb0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2eb0c4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2eb0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2eb0c8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eb0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb0cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb0d0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2eb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2eb0d4: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x2eb0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eb0d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2eb0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eb0dc: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x2eb0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2eb0e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2eb0e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2eb0e4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2eb0e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb0e8: 0x3c0243ac  lui         $v0, 0x43AC
    ctx->pc = 0x2eb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17324 << 16));
    // 0x2eb0ec: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2eb0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2eb0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb0f4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x2eb0f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2eb0f8: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2eb0f8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb0fc: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB0FCu;
    SET_GPR_U32(ctx, 31, 0x2EB104u);
    ctx->pc = 0x2EB100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB0FCu;
            // 0x2eb100: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB104u; }
        if (ctx->pc != 0x2EB104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB104u; }
        if (ctx->pc != 0x2EB104u) { return; }
    }
    ctx->pc = 0x2EB104u;
label_2eb104:
    // 0x2eb104: 0x3c034284  lui         $v1, 0x4284
    ctx->pc = 0x2eb104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17028 << 16));
    // 0x2eb108: 0x3c0243e6  lui         $v0, 0x43E6
    ctx->pc = 0x2eb108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17382 << 16));
    // 0x2eb10c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2eb10cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb110: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb114: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2eb114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb118: 0x24050108  addiu       $a1, $zero, 0x108
    ctx->pc = 0x2eb118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2eb11c: 0x3c0343b2  lui         $v1, 0x43B2
    ctx->pc = 0x2eb11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17330 << 16));
    // 0x2eb120: 0x24060058  addiu       $a2, $zero, 0x58
    ctx->pc = 0x2eb120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x2eb124: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eb124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eb128: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x2eb128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x2eb12c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2eb12cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb130: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eb130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb134: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB134u;
    SET_GPR_U32(ctx, 31, 0x2EB13Cu);
    ctx->pc = 0x2EB138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB134u;
            // 0x2eb138: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB13Cu; }
        if (ctx->pc != 0x2EB13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB13Cu; }
        if (ctx->pc != 0x2EB13Cu) { return; }
    }
    ctx->pc = 0x2EB13Cu;
label_2eb13c:
    // 0x2eb13c: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2eb13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2eb140: 0x3c0343e6  lui         $v1, 0x43E6
    ctx->pc = 0x2eb140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17382 << 16));
    // 0x2eb144: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb148: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb14c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2eb150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb154: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb154u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb158: 0x24060082  addiu       $a2, $zero, 0x82
    ctx->pc = 0x2eb158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2eb15c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2eb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2eb160: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x2eb160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2eb164: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eb164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb168: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2eb168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2eb16c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2eb16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb170: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB170u;
    SET_GPR_U32(ctx, 31, 0x2EB178u);
    ctx->pc = 0x2EB174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB170u;
            // 0x2eb174: 0x2408001c  addiu       $t0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB178u; }
        if (ctx->pc != 0x2EB178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB178u; }
        if (ctx->pc != 0x2EB178u) { return; }
    }
    ctx->pc = 0x2EB178u;
label_2eb178:
    // 0x2eb178: 0x8e0401fc  lw          $a0, 0x1FC($s0)
    ctx->pc = 0x2eb178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
    // 0x2eb17c: 0xc0ba374  jal         func_2E8DD0
    ctx->pc = 0x2EB17Cu;
    SET_GPR_U32(ctx, 31, 0x2EB184u);
    ctx->pc = 0x2EB180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB17Cu;
            // 0x2eb180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8DD0u;
    if (runtime->hasFunction(0x2E8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2E8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB184u; }
        if (ctx->pc != 0x2EB184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaClubDef__Fi_0x2e8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB184u; }
        if (ctx->pc != 0x2EB184u) { return; }
    }
    ctx->pc = 0x2EB184u;
label_2eb184:
    // 0x2eb184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2eb184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb188: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x2EB188u;
    {
        const bool branch_taken_0x2eb188 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EB18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB188u;
            // 0x2eb18c: 0x2a2103e8  slti        $at, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb188) {
            ctx->pc = 0x2EB304u;
            goto label_2eb304;
        }
    }
    ctx->pc = 0x2EB190u;
    // 0x2eb190: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2EB190u;
    SET_GPR_U32(ctx, 31, 0x2EB198u);
    ctx->pc = 0x2EB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB190u;
            // 0x2eb194: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB198u; }
        if (ctx->pc != 0x2EB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB198u; }
        if (ctx->pc != 0x2EB198u) { return; }
    }
    ctx->pc = 0x2EB198u;
label_2eb198:
    // 0x2eb198: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2EB198u;
    SET_GPR_U32(ctx, 31, 0x2EB1A0u);
    ctx->pc = 0x2EB19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB198u;
            // 0x2eb19c: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1A0u; }
        if (ctx->pc != 0x2EB1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1A0u; }
        if (ctx->pc != 0x2EB1A0u) { return; }
    }
    ctx->pc = 0x2EB1A0u;
label_2eb1a0:
    // 0x2eb1a0: 0x27b10194  addiu       $s1, $sp, 0x194
    ctx->pc = 0x2eb1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x2eb1a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2eb1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2eb1a8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2eb1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb1ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb1b0: 0x0  nop
    ctx->pc = 0x2eb1b0u;
    // NOP
    // 0x2eb1b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb1b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb1b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2eb1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2eb1bc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EB1BCu;
    SET_GPR_U32(ctx, 31, 0x2EB1C4u);
    ctx->pc = 0x2EB1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1BCu;
            // 0x2eb1c0: 0xc60c0200  lwc1        $f12, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1C4u; }
        if (ctx->pc != 0x2EB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1C4u; }
        if (ctx->pc != 0x2EB1C4u) { return; }
    }
    ctx->pc = 0x2EB1C4u;
label_2eb1c4:
    // 0x2eb1c4: 0xc04768a  jal         func_11DA28
    ctx->pc = 0x2EB1C4u;
    SET_GPR_U32(ctx, 31, 0x2EB1CCu);
    ctx->pc = 0x2EB1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1C4u;
            // 0x2eb1c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA28u;
    if (runtime->hasFunction(0x11DA28u)) {
        auto targetFn = runtime->lookupFunction(0x11DA28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1CCu; }
        if (ctx->pc != 0x2EB1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cos_0x11da28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1CCu; }
        if (ctx->pc != 0x2EB1CCu) { return; }
    }
    ctx->pc = 0x2EB1CCu;
label_2eb1cc:
    // 0x2eb1cc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2eb1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb1d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eb1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1d4: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x2eb1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb1d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb1d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb1dc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EB1DCu;
    SET_GPR_U32(ctx, 31, 0x2EB1E4u);
    ctx->pc = 0x2EB1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1DCu;
            // 0x2eb1e0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1E4u; }
        if (ctx->pc != 0x2EB1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1E4u; }
        if (ctx->pc != 0x2EB1E4u) { return; }
    }
    ctx->pc = 0x2EB1E4u;
label_2eb1e4:
    // 0x2eb1e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb1e8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2EB1E8u;
    SET_GPR_U32(ctx, 31, 0x2EB1F0u);
    ctx->pc = 0x2EB1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1E8u;
            // 0x2eb1ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1F0u; }
        if (ctx->pc != 0x2EB1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1F0u; }
        if (ctx->pc != 0x2EB1F0u) { return; }
    }
    ctx->pc = 0x2EB1F0u;
label_2eb1f0:
    // 0x2eb1f0: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2EB1F0u;
    SET_GPR_U32(ctx, 31, 0x2EB1F8u);
    ctx->pc = 0x2EB1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1F0u;
            // 0x2eb1f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1F8u; }
        if (ctx->pc != 0x2EB1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB1F8u; }
        if (ctx->pc != 0x2EB1F8u) { return; }
    }
    ctx->pc = 0x2EB1F8u;
label_2eb1f8:
    // 0x2eb1f8: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2eb1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2eb1fc: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EB1FCu;
    SET_GPR_U32(ctx, 31, 0x2EB204u);
    ctx->pc = 0x2EB200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB1FCu;
            // 0x2eb200: 0xc60c0200  lwc1        $f12, 0x200($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB204u; }
        if (ctx->pc != 0x2EB204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB204u; }
        if (ctx->pc != 0x2EB204u) { return; }
    }
    ctx->pc = 0x2EB204u;
label_2eb204:
    // 0x2eb204: 0xc047870  jal         func_11E1C0
    ctx->pc = 0x2EB204u;
    SET_GPR_U32(ctx, 31, 0x2EB20Cu);
    ctx->pc = 0x2EB208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB204u;
            // 0x2eb208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E1C0u;
    if (runtime->hasFunction(0x11E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB20Cu; }
        if (ctx->pc != 0x2EB20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sin_0x11e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB20Cu; }
        if (ctx->pc != 0x2EB20Cu) { return; }
    }
    ctx->pc = 0x2EB20Cu;
label_2eb20c:
    // 0x2eb20c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x2eb20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2eb210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb214: 0xc6000200  lwc1        $f0, 0x200($s0)
    ctx->pc = 0x2eb214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2eb218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eb21c: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x2EB21Cu;
    SET_GPR_U32(ctx, 31, 0x2EB224u);
    ctx->pc = 0x2EB220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB21Cu;
            // 0x2eb220: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB224u; }
        if (ctx->pc != 0x2EB224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB224u; }
        if (ctx->pc != 0x2EB224u) { return; }
    }
    ctx->pc = 0x2EB224u;
label_2eb224:
    // 0x2eb224: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eb224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb228: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x2EB228u;
    SET_GPR_U32(ctx, 31, 0x2EB230u);
    ctx->pc = 0x2EB22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB228u;
            // 0x2eb22c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB230u; }
        if (ctx->pc != 0x2EB230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB230u; }
        if (ctx->pc != 0x2EB230u) { return; }
    }
    ctx->pc = 0x2EB230u;
label_2eb230:
    // 0x2eb230: 0xc0a21f2  jal         func_2887C8
    ctx->pc = 0x2EB230u;
    SET_GPR_U32(ctx, 31, 0x2EB238u);
    ctx->pc = 0x2EB234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB230u;
            // 0x2eb234: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887C8u;
    if (runtime->hasFunction(0x2887C8u)) {
        auto targetFn = runtime->lookupFunction(0x2887C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB238u; }
        if (ctx->pc != 0x2EB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2887c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB238u; }
        if (ctx->pc != 0x2EB238u) { return; }
    }
    ctx->pc = 0x2EB238u;
label_2eb238:
    // 0x2eb238: 0x27b001a4  addiu       $s0, $sp, 0x1A4
    ctx->pc = 0x2eb238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    // 0x2eb23c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eb23cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb240: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2eb240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2eb244: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2eb244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2eb248:
    // 0x2eb248: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2eb248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x2eb24c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eb24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb250: 0x3442be77  ori         $v0, $v0, 0xBE77
    ctx->pc = 0x2eb250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48759);
    // 0x2eb254: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x2eb254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eb258: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2eb258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2eb25c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2eb25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eb260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2eb260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb264: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb268: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2eb268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2eb26c: 0x3c02bb93  lui         $v0, 0xBB93
    ctx->pc = 0x2eb26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48019 << 16));
    // 0x2eb270: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x2eb270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x2eb274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb278: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2eb278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2eb27c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2eb27cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eb280: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x2eb280u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2eb284: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2eb284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eb288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eb288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eb28c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2EB28Cu;
    SET_GPR_U32(ctx, 31, 0x2EB294u);
    ctx->pc = 0x2EB290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB28Cu;
            // 0x2eb290: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB294u; }
        if (ctx->pc != 0x2EB294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB294u; }
        if (ctx->pc != 0x2EB294u) { return; }
    }
    ctx->pc = 0x2EB294u;
label_2eb294:
    // 0x2eb294: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2eb294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eb298: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2eb298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2eb29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb2a0: 0x0  nop
    ctx->pc = 0x2eb2a0u;
    // NOP
    // 0x2eb2a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2eb2a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eb2a8: 0x0  nop
    ctx->pc = 0x2eb2a8u;
    // NOP
    // 0x2eb2ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB2ACu;
    {
        const bool branch_taken_0x2eb2ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eb2ac) {
            ctx->pc = 0x2EB2C4u;
            goto label_2eb2c4;
        }
    }
    ctx->pc = 0x2EB2B4u;
    // 0x2eb2b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2eb2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2eb2b8: 0x2a420258  slti        $v0, $s2, 0x258
    ctx->pc = 0x2eb2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x2eb2bc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2EB2BCu;
    {
        const bool branch_taken_0x2eb2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB2BCu;
            // 0x2eb2c0: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb2bc) {
            ctx->pc = 0x2EB248u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb248;
        }
    }
    ctx->pc = 0x2EB2C4u;
label_2eb2c4:
    // 0x2eb2c4: 0x0  nop
    ctx->pc = 0x2eb2c4u;
    // NOP
    // 0x2eb2c8: 0xafa0019c  sw          $zero, 0x19C($sp)
    ctx->pc = 0x2eb2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 0));
    // 0x2eb2cc: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2eb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x2eb2d0: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2eb2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2eb2d4: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2EB2D4u;
    SET_GPR_U32(ctx, 31, 0x2EB2DCu);
    ctx->pc = 0x2EB2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB2D4u;
            // 0x2eb2d8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2DCu; }
        if (ctx->pc != 0x2EB2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2DCu; }
        if (ctx->pc != 0x2EB2DCu) { return; }
    }
    ctx->pc = 0x2EB2DCu;
label_2eb2dc:
    // 0x2eb2dc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2eb2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2eb2e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eb2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb2e4: 0x0  nop
    ctx->pc = 0x2eb2e4u;
    // NOP
    // 0x2eb2e8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2eb2e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2eb2ec: 0x0  nop
    ctx->pc = 0x2eb2ecu;
    // NOP
    // 0x2eb2f0: 0x0  nop
    ctx->pc = 0x2eb2f0u;
    // NOP
    // 0x2eb2f4: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2EB2F4u;
    SET_GPR_U32(ctx, 31, 0x2EB2FCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2FCu; }
        if (ctx->pc != 0x2EB2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB2FCu; }
        if (ctx->pc != 0x2EB2FCu) { return; }
    }
    ctx->pc = 0x2EB2FCu;
label_2eb2fc:
    // 0x2eb2fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2eb2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb300: 0x2a2103e8  slti        $at, $s1, 0x3E8
    ctx->pc = 0x2eb300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2eb304:
    // 0x2eb304: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB304u;
    {
        const bool branch_taken_0x2eb304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB304u;
            // 0x2eb308: 0x3c0251eb  lui         $v0, 0x51EB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb304) {
            ctx->pc = 0x2EB310u;
            goto label_2eb310;
        }
    }
    ctx->pc = 0x2EB30Cu;
    // 0x2eb30c: 0x241103e7  addiu       $s1, $zero, 0x3E7
    ctx->pc = 0x2eb30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_2eb310:
    // 0x2eb310: 0x1127c2  srl         $a0, $s1, 31
    ctx->pc = 0x2eb310u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x2eb314: 0x3443851f  ori         $v1, $v0, 0x851F
    ctx->pc = 0x2eb314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x2eb318: 0x27a501e4  addiu       $a1, $sp, 0x1E4
    ctx->pc = 0x2eb318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    // 0x2eb31c: 0x710018  mult        $zero, $v1, $s1
    ctx->pc = 0x2eb31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eb320: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2eb320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2eb324: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2eb324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2eb328: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2eb328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb32c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2eb32cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2eb330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb334: 0x1810  mfhi        $v1
    ctx->pc = 0x2eb334u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2eb338: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2eb338u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x2eb33c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2eb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eb340: 0xafa301e0  sw          $v1, 0x1E0($sp)
    ctx->pc = 0x2eb340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 3));
    // 0x2eb344: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2eb344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2eb348: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eb348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb34c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2eb34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2eb350: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2eb350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb354: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2eb354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2eb358: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2eb358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb35c: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x2eb35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2eb360: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x2eb360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2eb364: 0x0  nop
    ctx->pc = 0x2eb364u;
    // NOP
    // 0x2eb368: 0x0  nop
    ctx->pc = 0x2eb368u;
    // NOP
    // 0x2eb36c: 0x1010  mfhi        $v0
    ctx->pc = 0x2eb36cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2eb370: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2eb370u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2eb374: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2eb374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2eb378: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eb378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb37c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2eb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2eb380: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb384: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2eb384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2eb388: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2eb388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2eb38c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2eb38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2eb390: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eb390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb394: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2eb394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eb398: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2eb398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2eb39c: 0x2222023  subu        $a0, $s1, $v0
    ctx->pc = 0x2eb39cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2eb3a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eb3a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eb3a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2eb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2eb3ac: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2eb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eb3b0: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x2eb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_2eb3b4:
    // 0x2eb3b4: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2eb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2eb3b8: 0x8c4301e0  lw          $v1, 0x1E0($v0)
    ctx->pc = 0x2eb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x2eb3bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EB3BCu;
    {
        const bool branch_taken_0x2eb3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB3BCu;
            // 0x2eb3c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3bc) {
            ctx->pc = 0x2EB3D4u;
            goto label_2eb3d4;
        }
    }
    ctx->pc = 0x2EB3C4u;
    // 0x2eb3c4: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EB3C4u;
    {
        const bool branch_taken_0x2eb3c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EB3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB3C4u;
            // 0x2eb3c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb3c4) {
            ctx->pc = 0x2EB3D4u;
            goto label_2eb3d4;
        }
    }
    ctx->pc = 0x2EB3CCu;
    // 0x2eb3cc: 0x1662001a  bne         $s3, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2EB3CCu;
    {
        const bool branch_taken_0x2eb3cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2eb3cc) {
            ctx->pc = 0x2EB438u;
            goto label_2eb438;
        }
    }
    ctx->pc = 0x2EB3D4u;
label_2eb3d4:
    // 0x2eb3d4: 0x0  nop
    ctx->pc = 0x2eb3d4u;
    // NOP
    // 0x2eb3d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2eb3dc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x2eb3dcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eb3e0: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x2eb3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x2eb3e4: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x2eb3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2eb3e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb3ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2eb3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2eb3f0: 0x3c0243db  lui         $v0, 0x43DB
    ctx->pc = 0x2eb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17371 << 16));
    // 0x2eb3f4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x2eb3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2eb3f8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2eb3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eb3fc: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x2eb3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2eb400: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2eb400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb404: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2eb404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2eb408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eb408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eb40c: 0x0  nop
    ctx->pc = 0x2eb40cu;
    // NOP
    // 0x2eb410: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2eb410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2eb414: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2eb414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2eb418: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2eb418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2eb41c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb420: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb424: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2eb424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2eb428: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x2eb428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2eb42c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eb42cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb430: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB430u;
    SET_GPR_U32(ctx, 31, 0x2EB438u);
    ctx->pc = 0x2EB434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB430u;
            // 0x2eb434: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB438u; }
        if (ctx->pc != 0x2EB438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB438u; }
        if (ctx->pc != 0x2EB438u) { return; }
    }
    ctx->pc = 0x2EB438u;
label_2eb438:
    // 0x2eb438: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2eb438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2eb43c: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x2eb43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2eb440: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2EB440u;
    {
        const bool branch_taken_0x2eb440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EB444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB440u;
            // 0x2eb444: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eb440) {
            ctx->pc = 0x2EB3B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2eb3b4;
        }
    }
    ctx->pc = 0x2EB448u;
    // 0x2eb448: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x2eb448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x2eb44c: 0x3c0343f1  lui         $v1, 0x43F1
    ctx->pc = 0x2eb44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17393 << 16));
    // 0x2eb450: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2eb450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2eb454: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x2eb454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2eb458: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2eb458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2eb45c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eb460: 0x3c0243bb  lui         $v0, 0x43BB
    ctx->pc = 0x2eb460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17339 << 16));
    // 0x2eb464: 0x240500b2  addiu       $a1, $zero, 0xB2
    ctx->pc = 0x2eb464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x2eb468: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2eb468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2eb46c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x2eb46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x2eb470: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eb470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eb474: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2eb474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb478: 0xc0ba388  jal         func_2E8E20
    ctx->pc = 0x2EB478u;
    SET_GPR_U32(ctx, 31, 0x2EB480u);
    ctx->pc = 0x2EB47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB478u;
            // 0x2eb47c: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8E20u;
    if (runtime->hasFunction(0x2E8E20u)) {
        auto targetFn = runtime->lookupFunction(0x2E8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB480u; }
        if (ctx->pc != 0x2EB480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB480u; }
        if (ctx->pc != 0x2EB480u) { return; }
    }
    ctx->pc = 0x2EB480u;
label_2eb480:
    // 0x2eb480: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2eb480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2eb484:
    // 0x2eb484: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x2EB484u;
    SET_GPR_U32(ctx, 31, 0x2EB48Cu);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB48Cu; }
        if (ctx->pc != 0x2EB48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EB48Cu; }
        if (ctx->pc != 0x2EB48Cu) { return; }
    }
    ctx->pc = 0x2EB48Cu;
label_2eb48c:
    // 0x2eb48c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2eb48cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eb490: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eb490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eb494: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eb494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eb498: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eb498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eb49c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eb49cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eb4a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eb4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EB4A4u;
            // 0x2eb4a8: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EB4ACu;
}
