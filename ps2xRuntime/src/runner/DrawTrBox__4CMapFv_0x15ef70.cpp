#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawTrBox__4CMapFv
// Address: 0x15ef70 - 0x15f110
void DrawTrBox__4CMapFv_0x15ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawTrBox__4CMapFv_0x15ef70");
#endif

    switch (ctx->pc) {
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef74u: goto label_15ef74;
        case 0x15ef78u: goto label_15ef78;
        case 0x15ef7cu: goto label_15ef7c;
        case 0x15ef80u: goto label_15ef80;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef88u: goto label_15ef88;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef94u: goto label_15ef94;
        case 0x15ef98u: goto label_15ef98;
        case 0x15ef9cu: goto label_15ef9c;
        case 0x15efa0u: goto label_15efa0;
        case 0x15efa4u: goto label_15efa4;
        case 0x15efa8u: goto label_15efa8;
        case 0x15efacu: goto label_15efac;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc0u: goto label_15efc0;
        case 0x15efc4u: goto label_15efc4;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efccu: goto label_15efcc;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd4u: goto label_15efd4;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efdcu: goto label_15efdc;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efe4u: goto label_15efe4;
        case 0x15efe8u: goto label_15efe8;
        case 0x15efecu: goto label_15efec;
        case 0x15eff0u: goto label_15eff0;
        case 0x15eff4u: goto label_15eff4;
        case 0x15eff8u: goto label_15eff8;
        case 0x15effcu: goto label_15effc;
        case 0x15f000u: goto label_15f000;
        case 0x15f004u: goto label_15f004;
        case 0x15f008u: goto label_15f008;
        case 0x15f00cu: goto label_15f00c;
        case 0x15f010u: goto label_15f010;
        case 0x15f014u: goto label_15f014;
        case 0x15f018u: goto label_15f018;
        case 0x15f01cu: goto label_15f01c;
        case 0x15f020u: goto label_15f020;
        case 0x15f024u: goto label_15f024;
        case 0x15f028u: goto label_15f028;
        case 0x15f02cu: goto label_15f02c;
        case 0x15f030u: goto label_15f030;
        case 0x15f034u: goto label_15f034;
        case 0x15f038u: goto label_15f038;
        case 0x15f03cu: goto label_15f03c;
        case 0x15f040u: goto label_15f040;
        case 0x15f044u: goto label_15f044;
        case 0x15f048u: goto label_15f048;
        case 0x15f04cu: goto label_15f04c;
        case 0x15f050u: goto label_15f050;
        case 0x15f054u: goto label_15f054;
        case 0x15f058u: goto label_15f058;
        case 0x15f05cu: goto label_15f05c;
        case 0x15f060u: goto label_15f060;
        case 0x15f064u: goto label_15f064;
        case 0x15f068u: goto label_15f068;
        case 0x15f06cu: goto label_15f06c;
        case 0x15f070u: goto label_15f070;
        case 0x15f074u: goto label_15f074;
        case 0x15f078u: goto label_15f078;
        case 0x15f07cu: goto label_15f07c;
        case 0x15f080u: goto label_15f080;
        case 0x15f084u: goto label_15f084;
        case 0x15f088u: goto label_15f088;
        case 0x15f08cu: goto label_15f08c;
        case 0x15f090u: goto label_15f090;
        case 0x15f094u: goto label_15f094;
        case 0x15f098u: goto label_15f098;
        case 0x15f09cu: goto label_15f09c;
        case 0x15f0a0u: goto label_15f0a0;
        case 0x15f0a4u: goto label_15f0a4;
        case 0x15f0a8u: goto label_15f0a8;
        case 0x15f0acu: goto label_15f0ac;
        case 0x15f0b0u: goto label_15f0b0;
        case 0x15f0b4u: goto label_15f0b4;
        case 0x15f0b8u: goto label_15f0b8;
        case 0x15f0bcu: goto label_15f0bc;
        case 0x15f0c0u: goto label_15f0c0;
        case 0x15f0c4u: goto label_15f0c4;
        case 0x15f0c8u: goto label_15f0c8;
        case 0x15f0ccu: goto label_15f0cc;
        case 0x15f0d0u: goto label_15f0d0;
        case 0x15f0d4u: goto label_15f0d4;
        case 0x15f0d8u: goto label_15f0d8;
        case 0x15f0dcu: goto label_15f0dc;
        case 0x15f0e0u: goto label_15f0e0;
        case 0x15f0e4u: goto label_15f0e4;
        case 0x15f0e8u: goto label_15f0e8;
        case 0x15f0ecu: goto label_15f0ec;
        case 0x15f0f0u: goto label_15f0f0;
        case 0x15f0f4u: goto label_15f0f4;
        case 0x15f0f8u: goto label_15f0f8;
        case 0x15f0fcu: goto label_15f0fc;
        case 0x15f100u: goto label_15f100;
        case 0x15f104u: goto label_15f104;
        case 0x15f108u: goto label_15f108;
        case 0x15f10cu: goto label_15f10c;
        default: break;
    }

    ctx->pc = 0x15ef70u;

label_15ef70:
    // 0x15ef70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_15ef74:
    // 0x15ef74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15ef78:
    // 0x15ef78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_15ef7c:
    // 0x15ef7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_15ef80:
    // 0x15ef80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_15ef84:
    // 0x15ef84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ef84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15ef88:
    // 0x15ef88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ef88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15ef8c:
    // 0x15ef8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ef8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15ef90:
    // 0x15ef90: 0x8c830c98  lw          $v1, 0xC98($a0)
    ctx->pc = 0x15ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3224)));
label_15ef94:
    // 0x15ef94: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
label_15ef98:
    if (ctx->pc == 0x15EF98u) {
        ctx->pc = 0x15EF98u;
            // 0x15ef98: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EF9Cu;
        goto label_15ef9c;
    }
    ctx->pc = 0x15EF94u;
    {
        const bool branch_taken_0x15ef94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EF94u;
            // 0x15ef98: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef94) {
            ctx->pc = 0x15F0ECu;
            goto label_15f0ec;
        }
    }
    ctx->pc = 0x15EF9Cu;
label_15ef9c:
    // 0x15ef9c: 0x8e830c9c  lw          $v1, 0xC9C($s4)
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3228)));
label_15efa0:
    // 0x15efa0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15efa4:
    if (ctx->pc == 0x15EFA4u) {
        ctx->pc = 0x15EFA8u;
        goto label_15efa8;
    }
    ctx->pc = 0x15EFA0u;
    {
        const bool branch_taken_0x15efa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15efa0) {
            ctx->pc = 0x15EFB0u;
            goto label_15efb0;
        }
    }
    ctx->pc = 0x15EFA8u;
label_15efa8:
    // 0x15efa8: 0x10000051  b           . + 4 + (0x51 << 2)
label_15efac:
    if (ctx->pc == 0x15EFACu) {
        ctx->pc = 0x15EFACu;
            // 0x15efac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x15EFB0u;
        goto label_15efb0;
    }
    ctx->pc = 0x15EFA8u;
    {
        const bool branch_taken_0x15efa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFA8u;
            // 0x15efac: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efa8) {
            ctx->pc = 0x15F0F0u;
            goto label_15f0f0;
        }
    }
    ctx->pc = 0x15EFB0u;
label_15efb0:
    // 0x15efb0: 0x8e850c94  lw          $a1, 0xC94($s4)
    ctx->pc = 0x15efb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3220)));
label_15efb4:
    // 0x15efb4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x15efb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_15efb8:
    // 0x15efb8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x15efb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_15efbc:
    // 0x15efbc: 0xc04ba14  jal         func_12E850
label_15efc0:
    if (ctx->pc == 0x15EFC0u) {
        ctx->pc = 0x15EFC0u;
            // 0x15efc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EFC4u;
        goto label_15efc4;
    }
    ctx->pc = 0x15EFBCu;
    SET_GPR_U32(ctx, 31, 0x15EFC4u);
    ctx->pc = 0x15EFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFBCu;
            // 0x15efc0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC4u; }
        if (ctx->pc != 0x15EFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFC4u; }
        if (ctx->pc != 0x15EFC4u) { return; }
    }
    ctx->pc = 0x15EFC4u;
label_15efc4:
    // 0x15efc4: 0xc050e44  jal         func_143910
label_15efc8:
    if (ctx->pc == 0x15EFC8u) {
        ctx->pc = 0x15EFCCu;
        goto label_15efcc;
    }
    ctx->pc = 0x15EFC4u;
    SET_GPR_U32(ctx, 31, 0x15EFCCu);
    ctx->pc = 0x143910u;
    if (runtime->hasFunction(0x143910u)) {
        auto targetFn = runtime->lookupFunction(0x143910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetPlightEnable__Fv_0x143910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFCCu; }
        if (ctx->pc != 0x15EFCCu) { return; }
    }
    ctx->pc = 0x15EFCCu;
label_15efcc:
    // 0x15efcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15efccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15efd0:
    // 0x15efd0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15efd4:
    // 0x15efd4: 0xc050dc8  jal         func_143720
label_15efd8:
    if (ctx->pc == 0x15EFD8u) {
        ctx->pc = 0x15EFD8u;
            // 0x15efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15EFDCu;
        goto label_15efdc;
    }
    ctx->pc = 0x15EFD4u;
    SET_GPR_U32(ctx, 31, 0x15EFDCu);
    ctx->pc = 0x15EFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFD4u;
            // 0x15efd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFDCu; }
        if (ctx->pc != 0x15EFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFDCu; }
        if (ctx->pc != 0x15EFDCu) { return; }
    }
    ctx->pc = 0x15EFDCu;
label_15efdc:
    // 0x15efdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15efdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15efe0:
    // 0x15efe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15efe4:
    // 0x15efe4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x15efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_15efe8:
    // 0x15efe8: 0xc0575cc  jal         func_15D730
label_15efec:
    if (ctx->pc == 0x15EFECu) {
        ctx->pc = 0x15EFECu;
            // 0x15efec: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->pc = 0x15EFF0u;
        goto label_15eff0;
    }
    ctx->pc = 0x15EFE8u;
    SET_GPR_U32(ctx, 31, 0x15EFF0u);
    ctx->pc = 0x15EFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFE8u;
            // 0x15efec: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF0u; }
        if (ctx->pc != 0x15EFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF0u; }
        if (ctx->pc != 0x15EFF0u) { return; }
    }
    ctx->pc = 0x15EFF0u;
label_15eff0:
    // 0x15eff0: 0xc05834c  jal         func_160D30
label_15eff4:
    if (ctx->pc == 0x15EFF4u) {
        ctx->pc = 0x15EFF4u;
            // 0x15eff4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15EFF8u;
        goto label_15eff8;
    }
    ctx->pc = 0x15EFF0u;
    SET_GPR_U32(ctx, 31, 0x15EFF8u);
    ctx->pc = 0x15EFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFF0u;
            // 0x15eff4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF8u; }
        if (ctx->pc != 0x15EFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EFF8u; }
        if (ctx->pc != 0x15EFF8u) { return; }
    }
    ctx->pc = 0x15EFF8u;
label_15eff8:
    // 0x15eff8: 0x8e920c9c  lw          $s2, 0xC9C($s4)
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3228)));
label_15effc:
    // 0x15effc: 0x10000030  b           . + 4 + (0x30 << 2)
label_15f000:
    if (ctx->pc == 0x15F000u) {
        ctx->pc = 0x15F000u;
            // 0x15f000: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F004u;
        goto label_15f004;
    }
    ctx->pc = 0x15EFFCu;
    {
        const bool branch_taken_0x15effc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EFFCu;
            // 0x15f000: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15effc) {
            ctx->pc = 0x15F0C0u;
            goto label_15f0c0;
        }
    }
    ctx->pc = 0x15F004u;
label_15f004:
    // 0x15f004: 0x8e420660  lw          $v0, 0x660($s2)
    ctx->pc = 0x15f004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1632)));
label_15f008:
    // 0x15f008: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_15f00c:
    if (ctx->pc == 0x15F00Cu) {
        ctx->pc = 0x15F010u;
        goto label_15f010;
    }
    ctx->pc = 0x15F008u;
    {
        const bool branch_taken_0x15f008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f008) {
            ctx->pc = 0x15F0B4u;
            goto label_15f0b4;
        }
    }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x8e440678  lw          $a0, 0x678($s2)
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_15f014:
    // 0x15f014: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_15f018:
    if (ctx->pc == 0x15F018u) {
        ctx->pc = 0x15F01Cu;
        goto label_15f01c;
    }
    ctx->pc = 0x15F014u;
    {
        const bool branch_taken_0x15f014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f014) {
            ctx->pc = 0x15F034u;
            goto label_15f034;
        }
    }
    ctx->pc = 0x15F01Cu;
label_15f01c:
    // 0x15f01c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x15f01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15f020:
    // 0x15f020: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x15f020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_15f024:
    // 0x15f024: 0x320f809  jalr        $t9
label_15f028:
    if (ctx->pc == 0x15F028u) {
        ctx->pc = 0x15F02Cu;
        goto label_15f02c;
    }
    ctx->pc = 0x15F024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F02Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F02Cu; }
            if (ctx->pc != 0x15F02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15F02Cu;
label_15f02c:
    // 0x15f02c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_15f030:
    if (ctx->pc == 0x15F030u) {
        ctx->pc = 0x15F034u;
        goto label_15f034;
    }
    ctx->pc = 0x15F02Cu;
    {
        const bool branch_taken_0x15f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f02c) {
            ctx->pc = 0x15F0B4u;
            goto label_15f0b4;
        }
    }
    ctx->pc = 0x15F034u;
label_15f034:
    // 0x15f034: 0x0  nop
    ctx->pc = 0x15f034u;
    // NOP
label_15f038:
    // 0x15f038: 0x8e820cb0  lw          $v0, 0xCB0($s4)
    ctx->pc = 0x15f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3248)));
label_15f03c:
    // 0x15f03c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x15f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_15f040:
    // 0x15f040: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_15f044:
    if (ctx->pc == 0x15F044u) {
        ctx->pc = 0x15F048u;
        goto label_15f048;
    }
    ctx->pc = 0x15F040u;
    {
        const bool branch_taken_0x15f040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f040) {
            ctx->pc = 0x15F07Cu;
            goto label_15f07c;
        }
    }
    ctx->pc = 0x15F048u;
label_15f048:
    // 0x15f048: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15f048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f04c:
    // 0x15f04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15f04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15f050:
    // 0x15f050: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15f050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15f054:
    // 0x15f054: 0x320f809  jalr        $t9
label_15f058:
    if (ctx->pc == 0x15F058u) {
        ctx->pc = 0x15F058u;
            // 0x15f058: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15F05Cu;
        goto label_15f05c;
    }
    ctx->pc = 0x15F054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F05Cu);
        ctx->pc = 0x15F058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F054u;
            // 0x15f058: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F05Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F05Cu; }
            if (ctx->pc != 0x15F05Cu) { return; }
        }
        }
    }
    ctx->pc = 0x15F05Cu;
label_15f05c:
    // 0x15f05c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15f05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_15f060:
    // 0x15f060: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15f060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15f064:
    // 0x15f064: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x15f064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_15f068:
    // 0x15f068: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_15f06c:
    // 0x15f06c: 0xc05782c  jal         func_15E0B0
label_15f070:
    if (ctx->pc == 0x15F070u) {
        ctx->pc = 0x15F070u;
            // 0x15f070: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->pc = 0x15F074u;
        goto label_15f074;
    }
    ctx->pc = 0x15F06Cu;
    SET_GPR_U32(ctx, 31, 0x15F074u);
    ctx->pc = 0x15F070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F06Cu;
            // 0x15f070: 0x27a60088  addiu       $a2, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E0B0u;
    if (runtime->hasFunction(0x15E0B0u)) {
        auto targetFn = runtime->lookupFunction(0x15E0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F074u; }
        if (ctx->pc != 0x15F074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFuncPLight__4CMapFPfP15CFuncPointCheck_0x15e0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F074u; }
        if (ctx->pc != 0x15F074u) { return; }
    }
    ctx->pc = 0x15F074u;
label_15f074:
    // 0x15f074: 0x10000003  b           . + 4 + (0x3 << 2)
label_15f078:
    if (ctx->pc == 0x15F078u) {
        ctx->pc = 0x15F078u;
            // 0x15f078: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F07Cu;
        goto label_15f07c;
    }
    ctx->pc = 0x15F074u;
    {
        const bool branch_taken_0x15f074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F074u;
            // 0x15f078: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f074) {
            ctx->pc = 0x15F084u;
            goto label_15f084;
        }
    }
    ctx->pc = 0x15F07Cu;
label_15f07c:
    // 0x15f07c: 0x0  nop
    ctx->pc = 0x15f07cu;
    // NOP
label_15f080:
    // 0x15f080: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x15f080u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f084:
    // 0x15f084: 0x0  nop
    ctx->pc = 0x15f084u;
    // NOP
label_15f088:
    // 0x15f088: 0x1aa00003  blez        $s5, . + 4 + (0x3 << 2)
label_15f08c:
    if (ctx->pc == 0x15F08Cu) {
        ctx->pc = 0x15F090u;
        goto label_15f090;
    }
    ctx->pc = 0x15F088u;
    {
        const bool branch_taken_0x15f088 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x15f088) {
            ctx->pc = 0x15F098u;
            goto label_15f098;
        }
    }
    ctx->pc = 0x15F090u;
label_15f090:
    // 0x15f090: 0xc050e40  jal         func_143900
label_15f094:
    if (ctx->pc == 0x15F094u) {
        ctx->pc = 0x15F094u;
            // 0x15f094: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x15F098u;
        goto label_15f098;
    }
    ctx->pc = 0x15F090u;
    SET_GPR_U32(ctx, 31, 0x15F098u);
    ctx->pc = 0x15F094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F090u;
            // 0x15f094: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F098u; }
        if (ctx->pc != 0x15F098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F098u; }
        if (ctx->pc != 0x15F098u) { return; }
    }
    ctx->pc = 0x15F098u;
label_15f098:
    // 0x15f098: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x15f098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_15f09c:
    // 0x15f09c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x15f09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_15f0a0:
    // 0x15f0a0: 0x320f809  jalr        $t9
label_15f0a4:
    if (ctx->pc == 0x15F0A4u) {
        ctx->pc = 0x15F0A4u;
            // 0x15f0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F0A8u;
        goto label_15f0a8;
    }
    ctx->pc = 0x15F0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15F0A8u);
        ctx->pc = 0x15F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0A0u;
            // 0x15f0a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15F0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F0A8u; }
            if (ctx->pc != 0x15F0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x15F0A8u;
label_15f0a8:
    // 0x15f0a8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15f0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15f0ac:
    // 0x15f0ac: 0xc05787c  jal         func_15E1F0
label_15f0b0:
    if (ctx->pc == 0x15F0B0u) {
        ctx->pc = 0x15F0B0u;
            // 0x15f0b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F0B4u;
        goto label_15f0b4;
    }
    ctx->pc = 0x15F0ACu;
    SET_GPR_U32(ctx, 31, 0x15F0B4u);
    ctx->pc = 0x15F0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0ACu;
            // 0x15f0b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E1F0u;
    if (runtime->hasFunction(0x15E1F0u)) {
        auto targetFn = runtime->lookupFunction(0x15E1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0B4u; }
        if (ctx->pc != 0x15F0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetFuncPLight__4CMapFi_0x15e1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0B4u; }
        if (ctx->pc != 0x15F0B4u) { return; }
    }
    ctx->pc = 0x15F0B4u;
label_15f0b4:
    // 0x15f0b4: 0x0  nop
    ctx->pc = 0x15f0b4u;
    // NOP
label_15f0b8:
    // 0x15f0b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15f0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15f0bc:
    // 0x15f0bc: 0x26520680  addiu       $s2, $s2, 0x680
    ctx->pc = 0x15f0bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1664));
label_15f0c0:
    // 0x15f0c0: 0x8e820c98  lw          $v0, 0xC98($s4)
    ctx->pc = 0x15f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3224)));
label_15f0c4:
    // 0x15f0c4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x15f0c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15f0c8:
    // 0x15f0c8: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_15f0cc:
    if (ctx->pc == 0x15F0CCu) {
        ctx->pc = 0x15F0D0u;
        goto label_15f0d0;
    }
    ctx->pc = 0x15F0C8u;
    {
        const bool branch_taken_0x15f0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f0c8) {
            ctx->pc = 0x15F004u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15f004;
        }
    }
    ctx->pc = 0x15F0D0u;
label_15f0d0:
    // 0x15f0d0: 0xc050e40  jal         func_143900
label_15f0d4:
    if (ctx->pc == 0x15F0D4u) {
        ctx->pc = 0x15F0D4u;
            // 0x15f0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F0D8u;
        goto label_15f0d8;
    }
    ctx->pc = 0x15F0D0u;
    SET_GPR_U32(ctx, 31, 0x15F0D8u);
    ctx->pc = 0x15F0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0D0u;
            // 0x15f0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0D8u; }
        if (ctx->pc != 0x15F0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0D8u; }
        if (ctx->pc != 0x15F0D8u) { return; }
    }
    ctx->pc = 0x15F0D8u;
label_15f0d8:
    // 0x15f0d8: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
label_15f0dc:
    if (ctx->pc == 0x15F0DCu) {
        ctx->pc = 0x15F0E0u;
        goto label_15f0e0;
    }
    ctx->pc = 0x15F0D8u;
    {
        const bool branch_taken_0x15f0d8 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x15f0d8) {
            ctx->pc = 0x15F0ECu;
            goto label_15f0ec;
        }
    }
    ctx->pc = 0x15F0E0u;
label_15f0e0:
    // 0x15f0e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f0e4:
    // 0x15f0e4: 0xc050dc8  jal         func_143720
label_15f0e8:
    if (ctx->pc == 0x15F0E8u) {
        ctx->pc = 0x15F0E8u;
            // 0x15f0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F0ECu;
        goto label_15f0ec;
    }
    ctx->pc = 0x15F0E4u;
    SET_GPR_U32(ctx, 31, 0x15F0ECu);
    ctx->pc = 0x15F0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F0E4u;
            // 0x15f0e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0ECu; }
        if (ctx->pc != 0x15F0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0ECu; }
        if (ctx->pc != 0x15F0ECu) { return; }
    }
    ctx->pc = 0x15F0ECu;
label_15f0ec:
    // 0x15f0ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15f0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15f0f0:
    // 0x15f0f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15f0f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15f0f4:
    // 0x15f0f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15f0f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15f0f8:
    // 0x15f0f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f0f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f0fc:
    // 0x15f0fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15f0fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f100:
    // 0x15f100: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15f100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f104:
    // 0x15f104: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15f104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15f108:
    // 0x15f108: 0x3e00008  jr          $ra
label_15f10c:
    if (ctx->pc == 0x15F10Cu) {
        ctx->pc = 0x15F10Cu;
            // 0x15f10c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x15F110u;
        goto label_fallthrough_0x15f108;
    }
    ctx->pc = 0x15F108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F108u;
            // 0x15f10c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x15f108:
    ctx->pc = 0x15F110u;
}
