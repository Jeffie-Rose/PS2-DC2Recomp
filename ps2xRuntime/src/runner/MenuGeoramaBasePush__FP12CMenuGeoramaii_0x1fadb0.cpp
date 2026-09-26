#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaBasePush__FP12CMenuGeoramaii
// Address: 0x1fadb0 - 0x1fb318
void MenuGeoramaBasePush__FP12CMenuGeoramaii_0x1fadb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaBasePush__FP12CMenuGeoramaii_0x1fadb0");
#endif

    switch (ctx->pc) {
        case 0x1fadecu: goto label_1fadec;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faf34u: goto label_1faf34;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf48u: goto label_1faf48;
        case 0x1faf84u: goto label_1faf84;
        case 0x1fafacu: goto label_1fafac;
        case 0x1fafe8u: goto label_1fafe8;
        case 0x1fb00cu: goto label_1fb00c;
        case 0x1fb040u: goto label_1fb040;
        case 0x1fb064u: goto label_1fb064;
        case 0x1fb07cu: goto label_1fb07c;
        case 0x1fb088u: goto label_1fb088;
        case 0x1fb0a0u: goto label_1fb0a0;
        case 0x1fb0bcu: goto label_1fb0bc;
        case 0x1fb118u: goto label_1fb118;
        case 0x1fb128u: goto label_1fb128;
        case 0x1fb1b4u: goto label_1fb1b4;
        case 0x1fb1e4u: goto label_1fb1e4;
        case 0x1fb1f8u: goto label_1fb1f8;
        case 0x1fb280u: goto label_1fb280;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb2a4u: goto label_1fb2a4;
        case 0x1fb2d0u: goto label_1fb2d0;
        case 0x1fb2f4u: goto label_1fb2f4;
        default: break;
    }

    ctx->pc = 0x1fadb0u;

    // 0x1fadb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fadb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fadb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fadb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1fadb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fadb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1fadbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fadbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fadc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1fadc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fadc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fadc8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1fadc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fadccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fadd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fadd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fadd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fadd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadd8: 0x83828fd8  lb          $v0, -0x7028($gp)
    ctx->pc = 0x1fadd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1faddc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FADDCu;
    {
        const bool branch_taken_0x1faddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FADE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADDCu;
            // 0x1fade0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faddc) {
            ctx->pc = 0x1FAEB4u;
            goto label_1faeb4;
        }
    }
    ctx->pc = 0x1FADE4u;
    // 0x1fade4: 0xc07da9c  jal         func_1F6A70
    ctx->pc = 0x1FADE4u;
    SET_GPR_U32(ctx, 31, 0x1FADECu);
    ctx->pc = 0x1F6A70u;
    if (runtime->hasFunction(0x1F6A70u)) {
        auto targetFn = runtime->lookupFunction(0x1F6A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADECu; }
        if (ctx->pc != 0x1FADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMenuDl3__Fv_0x1f6a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FADECu; }
        if (ctx->pc != 0x1FADECu) { return; }
    }
    ctx->pc = 0x1FADECu;
label_1fadec:
    // 0x1fadec: 0x83848fd8  lb          $a0, -0x7028($gp)
    ctx->pc = 0x1fadecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1fadf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fadf4: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FADF4u;
    {
        const bool branch_taken_0x1fadf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fadf4) {
            ctx->pc = 0x1FAE20u;
            goto label_1fae20;
        }
    }
    ctx->pc = 0x1FADFCu;
    // 0x1fadfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FADFCu;
    {
        const bool branch_taken_0x1fadfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FADFCu;
            // 0x1fae00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fadfc) {
            ctx->pc = 0x1FAE20u;
            goto label_1fae20;
        }
    }
    ctx->pc = 0x1FAE04u;
    // 0x1fae04: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1fae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1fae08: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FAE08u;
    SET_GPR_U32(ctx, 31, 0x1FAE10u);
    ctx->pc = 0x1FAE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE08u;
            // 0x1fae0c: 0xa3828fd8  sb          $v0, -0x7028($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE10u; }
        if (ctx->pc != 0x1FAE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE10u; }
        if (ctx->pc != 0x1FAE10u) { return; }
    }
    ctx->pc = 0x1FAE10u;
label_1fae10:
    // 0x1fae10: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fae14: 0x8c24ca54  lw          $a0, -0x35AC($at)
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x1fae18: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1FAE18u;
    SET_GPR_U32(ctx, 31, 0x1FAE20u);
    ctx->pc = 0x1FAE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE18u;
            // 0x1fae1c: 0x240505dd  addiu       $a1, $zero, 0x5DD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1501));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE20u; }
        if (ctx->pc != 0x1FAE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE20u; }
        if (ctx->pc != 0x1FAE20u) { return; }
    }
    ctx->pc = 0x1FAE20u;
label_1fae20:
    // 0x1fae20: 0x83838fd8  lb          $v1, -0x7028($gp)
    ctx->pc = 0x1fae20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1fae24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fae28: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FAE28u;
    {
        const bool branch_taken_0x1fae28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fae28) {
            ctx->pc = 0x1FAE64u;
            goto label_1fae64;
        }
    }
    ctx->pc = 0x1FAE30u;
    // 0x1fae30: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAE30u;
    {
        const bool branch_taken_0x1fae30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE30u;
            // 0x1fae34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae30) {
            ctx->pc = 0x1FAE64u;
            goto label_1fae64;
        }
    }
    ctx->pc = 0x1FAE38u;
    // 0x1fae38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fae3c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FAE3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE44u);
    ctx->pc = 0x1FAE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE3Cu;
            // 0x1fae40: 0x24a589d8  addiu       $a1, $a1, -0x7628 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE44u; }
        if (ctx->pc != 0x1FAE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE44u; }
        if (ctx->pc != 0x1FAE44u) { return; }
    }
    ctx->pc = 0x1FAE44u;
label_1fae44:
    // 0x1fae44: 0xc07d57c  jal         func_1F55F0
    ctx->pc = 0x1FAE44u;
    SET_GPR_U32(ctx, 31, 0x1FAE4Cu);
    ctx->pc = 0x1FAE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE44u;
            // 0x1fae48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F55F0u;
    if (runtime->hasFunction(0x1F55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE4Cu; }
        if (ctx->pc != 0x1FAE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDownLoadAnaunceSwitch__Fi_0x1f55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE4Cu; }
        if (ctx->pc != 0x1FAE4Cu) { return; }
    }
    ctx->pc = 0x1FAE4Cu;
label_1fae4c:
    // 0x1fae4c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1FAE54u);
    ctx->pc = 0x1FAE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE4Cu;
            // 0x1fae50: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE54u; }
        if (ctx->pc != 0x1FAE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE54u; }
        if (ctx->pc != 0x1FAE54u) { return; }
    }
    ctx->pc = 0x1FAE54u;
label_1fae54:
    // 0x1fae54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fae54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fae58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fae5c: 0xa3838fd8  sb          $v1, -0x7028($gp)
    ctx->pc = 0x1fae5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fae60: 0xa3828fb0  sb          $v0, -0x7050($gp)
    ctx->pc = 0x1fae60u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938544), (uint8_t)GPR_U32(ctx, 2));
label_1fae64:
    // 0x1fae64: 0x83838fd8  lb          $v1, -0x7028($gp)
    ctx->pc = 0x1fae64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1fae68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fae6c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAE6Cu;
    {
        const bool branch_taken_0x1fae6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE6Cu;
            // 0x1fae70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae6c) {
            ctx->pc = 0x1FAE8Cu;
            goto label_1fae8c;
        }
    }
    ctx->pc = 0x1FAE74u;
    // 0x1fae74: 0xc07d580  jal         func_1F5600
    ctx->pc = 0x1FAE74u;
    SET_GPR_U32(ctx, 31, 0x1FAE7Cu);
    ctx->pc = 0x1F5600u;
    if (runtime->hasFunction(0x1F5600u)) {
        auto targetFn = runtime->lookupFunction(0x1F5600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE7Cu; }
        if (ctx->pc != 0x1FAE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDownLoadAnaunce__Fi_0x1f5600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE7Cu; }
        if (ctx->pc != 0x1FAE7Cu) { return; }
    }
    ctx->pc = 0x1FAE7Cu;
label_1fae7c:
    // 0x1fae7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fae80: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAE80u;
    {
        const bool branch_taken_0x1fae80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FAE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE80u;
            // 0x1fae84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae80) {
            ctx->pc = 0x1FAE8Cu;
            goto label_1fae8c;
        }
    }
    ctx->pc = 0x1FAE88u;
    // 0x1fae88: 0xa3828fd8  sb          $v0, -0x7028($gp)
    ctx->pc = 0x1fae88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 2));
label_1fae8c:
    // 0x1fae8c: 0x83838fd8  lb          $v1, -0x7028($gp)
    ctx->pc = 0x1fae8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938584)));
    // 0x1fae90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fae94: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAE94u;
    {
        const bool branch_taken_0x1fae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE94u;
            // 0x1fae98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae94) {
            ctx->pc = 0x1FAEACu;
            goto label_1faeac;
        }
    }
    ctx->pc = 0x1FAE9Cu;
    // 0x1fae9c: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAE9Cu;
    {
        const bool branch_taken_0x1fae9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fae9c) {
            ctx->pc = 0x1FAEA8u;
            goto label_1faea8;
        }
    }
    ctx->pc = 0x1FAEA4u;
    // 0x1faea4: 0xa3808fd8  sb          $zero, -0x7028($gp)
    ctx->pc = 0x1faea4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938584), (uint8_t)GPR_U32(ctx, 0));
label_1faea8:
    // 0x1faea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1faea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faeac:
    // 0x1faeac: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x1FAEACu;
    {
        const bool branch_taken_0x1faeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEACu;
            // 0x1faeb0: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faeac) {
            ctx->pc = 0x1FB2FCu;
            goto label_1fb2fc;
        }
    }
    ctx->pc = 0x1FAEB4u;
label_1faeb4:
    // 0x1faeb4: 0x8f828fb4  lw          $v0, -0x704C($gp)
    ctx->pc = 0x1faeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938548)));
    // 0x1faeb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1faeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1faebc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FAEBCu;
    {
        const bool branch_taken_0x1faebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faebc) {
            ctx->pc = 0x1FAEE0u;
            goto label_1faee0;
        }
    }
    ctx->pc = 0x1FAEC4u;
    // 0x1faec4: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1faec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1faec8: 0xaf828fb4  sw          $v0, -0x704C($gp)
    ctx->pc = 0x1faec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938548), GPR_U32(ctx, 2));
    // 0x1faecc: 0x8f828fb4  lw          $v0, -0x704C($gp)
    ctx->pc = 0x1faeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938548)));
    // 0x1faed0: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAED0u;
    {
        const bool branch_taken_0x1faed0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FAED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAED0u;
            // 0x1faed4: 0x32220008  andi        $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faed0) {
            ctx->pc = 0x1FAEE4u;
            goto label_1faee4;
        }
    }
    ctx->pc = 0x1FAED8u;
    // 0x1faed8: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x1FAED8u;
    SET_GPR_U32(ctx, 31, 0x1FAEE0u);
    ctx->pc = 0x1FAEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAED8u;
            // 0x1faedc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAEE0u; }
        if (ctx->pc != 0x1FAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAEE0u; }
        if (ctx->pc != 0x1FAEE0u) { return; }
    }
    ctx->pc = 0x1FAEE0u;
label_1faee0:
    // 0x1faee0: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x1faee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
label_1faee4:
    // 0x1faee4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAEE4u;
    {
        const bool branch_taken_0x1faee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEE4u;
            // 0x1faee8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee4) {
            ctx->pc = 0x1FAEF8u;
            goto label_1faef8;
        }
    }
    ctx->pc = 0x1FAEECu;
    // 0x1faeec: 0x32220020  andi        $v0, $s1, 0x20
    ctx->pc = 0x1faeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32);
    // 0x1faef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAEF0u;
    {
        const bool branch_taken_0x1faef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEF0u;
            // 0x1faef4: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faef0) {
            ctx->pc = 0x1FAF00u;
            goto label_1faf00;
        }
    }
    ctx->pc = 0x1FAEF8u;
label_1faef8:
    // 0x1faef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1faefc: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x1faefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_1faf00:
    // 0x1faf00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF00u;
    {
        const bool branch_taken_0x1faf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF00u;
            // 0x1faf04: 0x32220010  andi        $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf00) {
            ctx->pc = 0x1FAF10u;
            goto label_1faf10;
        }
    }
    ctx->pc = 0x1FAF08u;
    // 0x1faf08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF08u;
    {
        const bool branch_taken_0x1faf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF08u;
            // 0x1faf0c: 0x24080006  addiu       $t0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf08) {
            ctx->pc = 0x1FAF18u;
            goto label_1faf18;
        }
    }
    ctx->pc = 0x1FAF10u;
label_1faf10:
    // 0x1faf10: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1faf14: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1faf14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1faf18:
    // 0x1faf18: 0x26850148  addiu       $a1, $s4, 0x148
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 328));
    // 0x1faf1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1faf20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1faf24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf28: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1faf28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf2c: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1FAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF34u);
    ctx->pc = 0x1FAF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF2Cu;
            // 0x1faf30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF34u; }
        if (ctx->pc != 0x1FAF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF34u; }
        if (ctx->pc != 0x1FAF34u) { return; }
    }
    ctx->pc = 0x1FAF34u;
label_1faf34:
    // 0x1faf34: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1FAF34u;
    {
        const bool branch_taken_0x1faf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF34u;
            // 0x1faf38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf34) {
            ctx->pc = 0x1FB0C8u;
            goto label_1fb0c8;
        }
    }
    ctx->pc = 0x1FAF3Cu;
    // 0x1faf3c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF44u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF44u; }
        if (ctx->pc != 0x1FAF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF44u; }
        if (ctx->pc != 0x1FAF44u) { return; }
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1faf44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1faf48:
    // 0x1faf48: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x1faf48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1faf4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF4Cu;
    {
        const bool branch_taken_0x1faf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF4Cu;
            // 0x1faf50: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf4c) {
            ctx->pc = 0x1FAF5Cu;
            goto label_1faf5c;
        }
    }
    ctx->pc = 0x1FAF54u;
    // 0x1faf54: 0x16220017  bne         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FAF54u;
    {
        const bool branch_taken_0x1faf54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1faf54) {
            ctx->pc = 0x1FAFB4u;
            goto label_1fafb4;
        }
    }
    ctx->pc = 0x1FAF5Cu;
label_1faf5c:
    // 0x1faf5c: 0x0  nop
    ctx->pc = 0x1faf5cu;
    // NOP
    // 0x1faf60: 0x8e820148  lw          $v0, 0x148($s4)
    ctx->pc = 0x1faf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1faf64: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FAF64u;
    {
        const bool branch_taken_0x1faf64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF64u;
            // 0x1faf68: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf64) {
            ctx->pc = 0x1FAF8Cu;
            goto label_1faf8c;
        }
    }
    ctx->pc = 0x1FAF6Cu;
    // 0x1faf6c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1faf6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1faf70: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1faf70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1faf74: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1faf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1faf78: 0x8c24b8cc  lw          $a0, -0x4734($at)
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
    // 0x1faf7c: 0xc08a240  jal         func_228900
    ctx->pc = 0x1FAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF84u);
    ctx->pc = 0x1FAF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF7Cu;
            // 0x1faf80: 0x24a58af8  addiu       $a1, $a1, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF84u; }
        if (ctx->pc != 0x1FAF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAF84u; }
        if (ctx->pc != 0x1FAF84u) { return; }
    }
    ctx->pc = 0x1FAF84u;
label_1faf84:
    // 0x1faf84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FAF84u;
    {
        const bool branch_taken_0x1faf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faf84) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAF8Cu;
label_1faf8c:
    // 0x1faf8c: 0x0  nop
    ctx->pc = 0x1faf8cu;
    // NOP
    // 0x1faf90: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x1faf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1faf94: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1faf98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1faf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1faf9c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1faf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fafa0: 0x8c24b8cc  lw          $a0, -0x4734($at)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949068)));
    // 0x1fafa4: 0xc08a240  jal         func_228900
    ctx->pc = 0x1FAFA4u;
    SET_GPR_U32(ctx, 31, 0x1FAFACu);
    ctx->pc = 0x1FAFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAFA4u;
            // 0x1fafa8: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFACu; }
        if (ctx->pc != 0x1FAFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFACu; }
        if (ctx->pc != 0x1FAFACu) { return; }
    }
    ctx->pc = 0x1FAFACu;
label_1fafac:
    // 0x1fafac: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FAFACu;
    {
        const bool branch_taken_0x1fafac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fafac) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAFB4u;
label_1fafb4:
    // 0x1fafb4: 0x0  nop
    ctx->pc = 0x1fafb4u;
    // NOP
    // 0x1fafb8: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fafbc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fafc0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FAFC0u;
    {
        const bool branch_taken_0x1fafc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAFC0u;
            // 0x1fafc4: 0x28610005  slti        $at, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafc0) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAFC8u;
    // 0x1fafc8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAFC8u;
    {
        const bool branch_taken_0x1fafc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAFC8u;
            // 0x1fafcc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafc8) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAFD0u;
    // 0x1fafd0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fafd4: 0x3442b8d4  ori         $v0, $v0, 0xB8D4
    ctx->pc = 0x1fafd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47316);
    // 0x1fafd8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1fafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1fafdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fafe0: 0xc08a240  jal         func_228900
    ctx->pc = 0x1FAFE0u;
    SET_GPR_U32(ctx, 31, 0x1FAFE8u);
    ctx->pc = 0x1FAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAFE0u;
            // 0x1fafe4: 0x24a58af8  addiu       $a1, $a1, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFE8u; }
        if (ctx->pc != 0x1FAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAFE8u; }
        if (ctx->pc != 0x1FAFE8u) { return; }
    }
    ctx->pc = 0x1FAFE8u;
label_1fafe8:
    // 0x1fafe8: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fafec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1faff0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FAFF0u;
    {
        const bool branch_taken_0x1faff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAFF0u;
            // 0x1faff4: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faff0) {
            ctx->pc = 0x1FB00Cu;
            goto label_1fb00c;
        }
    }
    ctx->pc = 0x1FAFF8u;
    // 0x1faff8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1faff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1faffc: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1faffcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fb000: 0x8c24b8d4  lw          $a0, -0x472C($at)
    ctx->pc = 0x1fb000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949076)));
    // 0x1fb004: 0xc08a240  jal         func_228900
    ctx->pc = 0x1FB004u;
    SET_GPR_U32(ctx, 31, 0x1FB00Cu);
    ctx->pc = 0x1FB008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB004u;
            // 0x1fb008: 0x24a58cc0  addiu       $a1, $a1, -0x7340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB00Cu; }
        if (ctx->pc != 0x1FB00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB00Cu; }
        if (ctx->pc != 0x1FB00Cu) { return; }
    }
    ctx->pc = 0x1FB00Cu;
label_1fb00c:
    // 0x1fb00c: 0x0  nop
    ctx->pc = 0x1fb00cu;
    // NOP
    // 0x1fb010: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fb010u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fb014: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1fb014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb018: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1FB018u;
    {
        const bool branch_taken_0x1fb018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB018u;
            // 0x1fb01c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb018) {
            ctx->pc = 0x1FAF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FB020u;
    // 0x1fb020: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb024: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fb024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb028: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB028u;
    {
        const bool branch_taken_0x1fb028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB028u;
            // 0x1fb02c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb028) {
            ctx->pc = 0x1FB04Cu;
            goto label_1fb04c;
        }
    }
    ctx->pc = 0x1FB030u;
    // 0x1fb030: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb034: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb038: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB038u;
    SET_GPR_U32(ctx, 31, 0x1FB040u);
    ctx->pc = 0x1FB03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB038u;
            // 0x1fb03c: 0x24a58cc8  addiu       $a1, $a1, -0x7338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB040u; }
        if (ctx->pc != 0x1FB040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB040u; }
        if (ctx->pc != 0x1FB040u) { return; }
    }
    ctx->pc = 0x1FB040u;
label_1fb040:
    // 0x1fb040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb044: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FB044u;
    {
        const bool branch_taken_0x1fb044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB044u;
            // 0x1fb048: 0xa3828fc8  sb          $v0, -0x7038($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb044) {
            ctx->pc = 0x1FB080u;
            goto label_1fb080;
        }
    }
    ctx->pc = 0x1FB04Cu;
label_1fb04c:
    // 0x1fb04c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB04Cu;
    {
        const bool branch_taken_0x1fb04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB04Cu;
            // 0x1fb050: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb04c) {
            ctx->pc = 0x1FB070u;
            goto label_1fb070;
        }
    }
    ctx->pc = 0x1FB054u;
    // 0x1fb054: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb058: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb05c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB05Cu;
    SET_GPR_U32(ctx, 31, 0x1FB064u);
    ctx->pc = 0x1FB060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB05Cu;
            // 0x1fb060: 0x24a58cd8  addiu       $a1, $a1, -0x7328 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB064u; }
        if (ctx->pc != 0x1FB064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB064u; }
        if (ctx->pc != 0x1FB064u) { return; }
    }
    ctx->pc = 0x1FB064u;
label_1fb064:
    // 0x1fb064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB068u;
    {
        const bool branch_taken_0x1fb068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB068u;
            // 0x1fb06c: 0xa3828fc8  sb          $v0, -0x7038($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938568), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb068) {
            ctx->pc = 0x1FB080u;
            goto label_1fb080;
        }
    }
    ctx->pc = 0x1FB070u;
label_1fb070:
    // 0x1fb070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb074: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB074u;
    SET_GPR_U32(ctx, 31, 0x1FB07Cu);
    ctx->pc = 0x1FB078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB074u;
            // 0x1fb078: 0x24a58ce8  addiu       $a1, $a1, -0x7318 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB07Cu; }
        if (ctx->pc != 0x1FB07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB07Cu; }
        if (ctx->pc != 0x1FB07Cu) { return; }
    }
    ctx->pc = 0x1FB07Cu;
label_1fb07c:
    // 0x1fb07c: 0xa3808fc8  sb          $zero, -0x7038($gp)
    ctx->pc = 0x1fb07cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938568), (uint8_t)GPR_U32(ctx, 0));
label_1fb080:
    // 0x1fb080: 0xc07e06c  jal         func_1F81B0
    ctx->pc = 0x1FB080u;
    SET_GPR_U32(ctx, 31, 0x1FB088u);
    ctx->pc = 0x1FB084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB080u;
            // 0x1fb084: 0x8e840140  lw          $a0, 0x140($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F81B0u;
    if (runtime->hasFunction(0x1F81B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB088u; }
        if (ctx->pc != 0x1FB088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGekkaViewMode__Fi_0x1f81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB088u; }
        if (ctx->pc != 0x1FB088u) { return; }
    }
    ctx->pc = 0x1FB088u;
label_1fb088:
    // 0x1fb088: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB088u;
    {
        const bool branch_taken_0x1fb088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB088u;
            // 0x1fb08c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb088) {
            ctx->pc = 0x1FB0C8u;
            goto label_1fb0c8;
        }
    }
    ctx->pc = 0x1FB090u;
    // 0x1fb090: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb094: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb098: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB098u;
    SET_GPR_U32(ctx, 31, 0x1FB0A0u);
    ctx->pc = 0x1FB09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB098u;
            // 0x1fb09c: 0x24a58cf8  addiu       $a1, $a1, -0x7308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB0A0u; }
        if (ctx->pc != 0x1FB0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB0A0u; }
        if (ctx->pc != 0x1FB0A0u) { return; }
    }
    ctx->pc = 0x1FB0A0u;
label_1fb0a0:
    // 0x1fb0a0: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb0a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fb0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb0a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB0A8u;
    {
        const bool branch_taken_0x1fb0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0A8u;
            // 0x1fb0ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0a8) {
            ctx->pc = 0x1FB0C4u;
            goto label_1fb0c4;
        }
    }
    ctx->pc = 0x1FB0B0u;
    // 0x1fb0b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0b4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB0B4u;
    SET_GPR_U32(ctx, 31, 0x1FB0BCu);
    ctx->pc = 0x1FB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0B4u;
            // 0x1fb0b8: 0x24a58d08  addiu       $a1, $a1, -0x72F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB0BCu; }
        if (ctx->pc != 0x1FB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB0BCu; }
        if (ctx->pc != 0x1FB0BCu) { return; }
    }
    ctx->pc = 0x1FB0BCu;
label_1fb0bc:
    // 0x1fb0bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb0c0: 0xa3828fc8  sb          $v0, -0x7038($gp)
    ctx->pc = 0x1fb0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938568), (uint8_t)GPR_U32(ctx, 2));
label_1fb0c4:
    // 0x1fb0c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fb0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb0c8:
    // 0x1fb0c8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB0C8u;
    {
        const bool branch_taken_0x1fb0c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb0c8) {
            ctx->pc = 0x1FB0E8u;
            goto label_1fb0e8;
        }
    }
    ctx->pc = 0x1FB0D0u;
    // 0x1fb0d0: 0x8282014c  lb          $v0, 0x14C($s4)
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x1fb0d4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FB0D4u;
    {
        const bool branch_taken_0x1fb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0D4u;
            // 0x1fb0d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0d4) {
            ctx->pc = 0x1FB13Cu;
            goto label_1fb13c;
        }
    }
    ctx->pc = 0x1FB0DCu;
    // 0x1fb0dc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x1fb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1fb0e0: 0x1c400015  bgtz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FB0E0u;
    {
        const bool branch_taken_0x1fb0e0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fb0e0) {
            ctx->pc = 0x1FB138u;
            goto label_1fb138;
        }
    }
    ctx->pc = 0x1FB0E8u;
label_1fb0e8:
    // 0x1fb0e8: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb0ec: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1fb0ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fb0f0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB0F0u;
    {
        const bool branch_taken_0x1fb0f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0F0u;
            // 0x1fb0f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0f0) {
            ctx->pc = 0x1FB128u;
            goto label_1fb128;
        }
    }
    ctx->pc = 0x1FB0F8u;
    // 0x1fb0f8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB0F8u;
    {
        const bool branch_taken_0x1fb0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB0F8u;
            // 0x1fb0fc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb0f8) {
            ctx->pc = 0x1FB104u;
            goto label_1fb104;
        }
    }
    ctx->pc = 0x1FB100u;
    // 0x1fb100: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1fb100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fb104:
    // 0x1fb104: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB104u;
    {
        const bool branch_taken_0x1fb104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB104u;
            // 0x1fb108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb104) {
            ctx->pc = 0x1FB110u;
            goto label_1fb110;
        }
    }
    ctx->pc = 0x1FB10Cu;
    // 0x1fb10c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb110:
    // 0x1fb110: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1FB110u;
    SET_GPR_U32(ctx, 31, 0x1FB118u);
    ctx->pc = 0x1F9590u;
    if (runtime->hasFunction(0x1F9590u)) {
        auto targetFn = runtime->lookupFunction(0x1F9590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB118u; }
        if (ctx->pc != 0x1FB118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowModeLoadPartsID__12CMenuGeoramaFv_0x1f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB118u; }
        if (ctx->pc != 0x1FB118u) { return; }
    }
    ctx->pc = 0x1FB118u;
label_1fb118:
    // 0x1fb118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fb118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb11c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fb11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb120: 0xc07e5b0  jal         func_1F96C0
    ctx->pc = 0x1FB120u;
    SET_GPR_U32(ctx, 31, 0x1FB128u);
    ctx->pc = 0x1FB124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB120u;
            // 0x1fb124: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB128u; }
        if (ctx->pc != 0x1FB128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB128u; }
        if (ctx->pc != 0x1FB128u) { return; }
    }
    ctx->pc = 0x1FB128u;
label_1fb128:
    // 0x1fb128: 0x8282014c  lb          $v0, 0x14C($s4)
    ctx->pc = 0x1fb128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 332)));
    // 0x1fb12c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FB12Cu;
    {
        const bool branch_taken_0x1fb12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB12Cu;
            // 0x1fb130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb12c) {
            ctx->pc = 0x1FB138u;
            goto label_1fb138;
        }
    }
    ctx->pc = 0x1FB134u;
    // 0x1fb134: 0xa282014c  sb          $v0, 0x14C($s4)
    ctx->pc = 0x1fb134u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 332), (uint8_t)GPR_U32(ctx, 2));
label_1fb138:
    // 0x1fb138: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fb13c:
    // 0x1fb13c: 0x12620066  beq         $s3, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FB13Cu;
    {
        const bool branch_taken_0x1fb13c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB13Cu;
            // 0x1fb140: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb13c) {
            ctx->pc = 0x1FB2D8u;
            goto label_1fb2d8;
        }
    }
    ctx->pc = 0x1FB144u;
    // 0x1fb144: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1fb144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fb148: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB148u;
    {
        const bool branch_taken_0x1fb148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB148u;
            // 0x1fb14c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb148) {
            ctx->pc = 0x1FB168u;
            goto label_1fb168;
        }
    }
    ctx->pc = 0x1FB150u;
    // 0x1fb150: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB150u;
    {
        const bool branch_taken_0x1fb150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB150u;
            // 0x1fb154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb150) {
            ctx->pc = 0x1FB168u;
            goto label_1fb168;
        }
    }
    ctx->pc = 0x1FB158u;
    // 0x1fb158: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB158u;
    {
        const bool branch_taken_0x1fb158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fb158) {
            ctx->pc = 0x1FB168u;
            goto label_1fb168;
        }
    }
    ctx->pc = 0x1FB160u;
    // 0x1fb160: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1FB160u;
    {
        const bool branch_taken_0x1fb160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB160u;
            // 0x1fb164: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb160) {
            ctx->pc = 0x1FB2F8u;
            goto label_1fb2f8;
        }
    }
    ctx->pc = 0x1FB168u;
label_1fb168:
    // 0x1fb168: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb16c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1fb16cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fb170: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB170u;
    {
        const bool branch_taken_0x1fb170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB170u;
            // 0x1fb174: 0x3c010002  lui         $at, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb170) {
            ctx->pc = 0x1FB190u;
            goto label_1fb190;
        }
    }
    ctx->pc = 0x1FB178u;
    // 0x1fb178: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fb178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb17c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB17Cu;
    {
        const bool branch_taken_0x1fb17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB17Cu;
            // 0x1fb180: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb17c) {
            ctx->pc = 0x1FB18Cu;
            goto label_1fb18c;
        }
    }
    ctx->pc = 0x1FB184u;
    // 0x1fb184: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1FB184u;
    {
        const bool branch_taken_0x1fb184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB184u;
            // 0x1fb188: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb184) {
            ctx->pc = 0x1FB2ACu;
            goto label_1fb2ac;
        }
    }
    ctx->pc = 0x1FB18Cu;
label_1fb18c:
    // 0x1fb18c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1fb190:
    // 0x1fb190: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fb190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb194: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1fb194u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
    // 0x1fb198: 0xac20b8f4  sw          $zero, -0x470C($at)
    ctx->pc = 0x1fb198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
    // 0x1fb19c: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb1a0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB1A0u;
    {
        const bool branch_taken_0x1fb1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB1A0u;
            // 0x1fb1a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1a0) {
            ctx->pc = 0x1FB1F0u;
            goto label_1fb1f0;
        }
    }
    ctx->pc = 0x1FB1A8u;
    // 0x1fb1a8: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1fb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1fb1ac: 0xc07e06c  jal         func_1F81B0
    ctx->pc = 0x1FB1ACu;
    SET_GPR_U32(ctx, 31, 0x1FB1B4u);
    ctx->pc = 0x1FB1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB1ACu;
            // 0x1fb1b0: 0x8c440140  lw          $a0, 0x140($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F81B0u;
    if (runtime->hasFunction(0x1F81B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F81B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1B4u; }
        if (ctx->pc != 0x1FB1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGekkaViewMode__Fi_0x1f81b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1B4u; }
        if (ctx->pc != 0x1FB1B4u) { return; }
    }
    ctx->pc = 0x1FB1B4u;
label_1fb1b4:
    // 0x1fb1b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB1B4u;
    {
        const bool branch_taken_0x1fb1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1b4) {
            ctx->pc = 0x1FB1ECu;
            goto label_1fb1ec;
        }
    }
    ctx->pc = 0x1FB1BCu;
    // 0x1fb1bc: 0x86820148  lh          $v0, 0x148($s4)
    ctx->pc = 0x1fb1bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb1c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb1c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1c8: 0x24a58d18  addiu       $a1, $a1, -0x72E8
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937880));
    // 0x1fb1cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb1d0: 0xa6820014  sh          $v0, 0x14($s4)
    ctx->pc = 0x1fb1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb1d4: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x1fb1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb1d8: 0xa7809000  sh          $zero, -0x7000($gp)
    ctx->pc = 0x1fb1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938624), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb1dc: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB1DCu;
    SET_GPR_U32(ctx, 31, 0x1FB1E4u);
    ctx->pc = 0x1FB1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB1DCu;
            // 0x1fb1e0: 0xaf809004  sw          $zero, -0x6FFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1E4u; }
        if (ctx->pc != 0x1FB1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1E4u; }
        if (ctx->pc != 0x1FB1E4u) { return; }
    }
    ctx->pc = 0x1FB1E4u;
label_1fb1e4:
    // 0x1fb1e4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1FB1E4u;
    {
        const bool branch_taken_0x1fb1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1e4) {
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB1ECu;
label_1fb1ec:
    // 0x1fb1ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1f0:
    // 0x1fb1f0: 0xc07e22c  jal         func_1F88B0
    ctx->pc = 0x1FB1F0u;
    SET_GPR_U32(ctx, 31, 0x1FB1F8u);
    ctx->pc = 0x1FB1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB1F0u;
            // 0x1fb1f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F88B0u;
    if (runtime->hasFunction(0x1F88B0u)) {
        auto targetFn = runtime->lookupFunction(0x1F88B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1F8u; }
        if (ctx->pc != 0x1FB1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartsIDListNum__12CMenuGeoramaFi_0x1f88b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB1F8u; }
        if (ctx->pc != 0x1FB1F8u) { return; }
    }
    ctx->pc = 0x1FB1F8u;
label_1fb1f8:
    // 0x1fb1f8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1fb1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1fb1fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB1FCu;
    {
        const bool branch_taken_0x1fb1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb1fc) {
            ctx->pc = 0x1FB214u;
            goto label_1fb214;
        }
    }
    ctx->pc = 0x1FB204u;
    // 0x1fb204: 0x8e820148  lw          $v0, 0x148($s4)
    ctx->pc = 0x1fb204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb208: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fb208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb20c: 0x14440023  bne         $v0, $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FB20Cu;
    {
        const bool branch_taken_0x1fb20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1fb20c) {
            ctx->pc = 0x1FB29Cu;
            goto label_1fb29c;
        }
    }
    ctx->pc = 0x1FB214u;
label_1fb214:
    // 0x1fb214: 0x86840148  lh          $a0, 0x148($s4)
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb218: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb21c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb220: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1fb220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb224: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fb224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb228: 0xa6840014  sh          $a0, 0x14($s4)
    ctx->pc = 0x1fb228u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fb22c: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x1fb22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb230: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1fb230u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fb234: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fb234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fb238: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fb238u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fb23c: 0x8c24b7f8  lw          $a0, -0x4808($at)
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948856)));
    // 0x1fb240: 0xae840150  sw          $a0, 0x150($s4)
    ctx->pc = 0x1fb240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 336), GPR_U32(ctx, 4));
    // 0x1fb244: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1fb244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1fb248: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x1fb248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb24c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1fb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fb250: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1fb250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1fb254: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x1fb258: 0x8c24b7f4  lw          $a0, -0x480C($at)
    ctx->pc = 0x1fb258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948852)));
    // 0x1fb25c: 0xae840154  sw          $a0, 0x154($s4)
    ctx->pc = 0x1fb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 340), GPR_U32(ctx, 4));
    // 0x1fb260: 0xa3838fd4  sb          $v1, -0x702C($gp)
    ctx->pc = 0x1fb260u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938580), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb264: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x1fb264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x1fb268: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB268u;
    {
        const bool branch_taken_0x1fb268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB268u;
            // 0x1fb26c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb268) {
            ctx->pc = 0x1FB288u;
            goto label_1fb288;
        }
    }
    ctx->pc = 0x1FB270u;
    // 0x1fb270: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1fb274: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb278: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB278u;
    SET_GPR_U32(ctx, 31, 0x1FB280u);
    ctx->pc = 0x1FB27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB278u;
            // 0x1fb27c: 0x24a58d20  addiu       $a1, $a1, -0x72E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB280u; }
        if (ctx->pc != 0x1FB280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB280u; }
        if (ctx->pc != 0x1FB280u) { return; }
    }
    ctx->pc = 0x1FB280u;
label_1fb280:
    // 0x1fb280: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FB280u;
    {
        const bool branch_taken_0x1fb280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb280) {
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB288u;
label_1fb288:
    // 0x1fb288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fb288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb28c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1FB28Cu;
    SET_GPR_U32(ctx, 31, 0x1FB294u);
    ctx->pc = 0x1FB290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB28Cu;
            // 0x1fb290: 0x24a58d28  addiu       $a1, $a1, -0x72D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB294u; }
        if (ctx->pc != 0x1FB294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB294u; }
        if (ctx->pc != 0x1FB294u) { return; }
    }
    ctx->pc = 0x1FB294u;
label_1fb294:
    // 0x1fb294: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FB294u;
    {
        const bool branch_taken_0x1fb294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb294) {
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB29Cu;
label_1fb29c:
    // 0x1fb29c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB29Cu;
    SET_GPR_U32(ctx, 31, 0x1FB2A4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2A4u; }
        if (ctx->pc != 0x1FB2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2A4u; }
        if (ctx->pc != 0x1FB2A4u) { return; }
    }
    ctx->pc = 0x1FB2A4u;
label_1fb2a4:
    // 0x1fb2a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB2A4u;
    {
        const bool branch_taken_0x1fb2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2a4) {
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB2ACu;
label_1fb2ac:
    // 0x1fb2ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB2ACu;
    {
        const bool branch_taken_0x1fb2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB2ACu;
            // 0x1fb2b0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2ac) {
            ctx->pc = 0x1FB2C8u;
            goto label_1fb2c8;
        }
    }
    ctx->pc = 0x1FB2B4u;
    // 0x1fb2b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb2b8: 0xac22d62c  sw          $v0, -0x29D4($at)
    ctx->pc = 0x1fb2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 2));
    // 0x1fb2bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb2c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb2c4: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1fb2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
label_1fb2c8:
    // 0x1fb2c8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB2C8u;
    SET_GPR_U32(ctx, 31, 0x1FB2D0u);
    ctx->pc = 0x1FB2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB2C8u;
            // 0x1fb2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2D0u; }
        if (ctx->pc != 0x1FB2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2D0u; }
        if (ctx->pc != 0x1FB2D0u) { return; }
    }
    ctx->pc = 0x1FB2D0u;
label_1fb2d0:
    // 0x1fb2d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB2D0u;
    {
        const bool branch_taken_0x1fb2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb2d0) {
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB2D8u;
label_1fb2d8:
    // 0x1fb2d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb2dc: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x1fb2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
    // 0x1fb2e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fb2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fb2e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1fb2e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb2ec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x1FB2ECu;
    SET_GPR_U32(ctx, 31, 0x1FB2F4u);
    ctx->pc = 0x1FB2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB2ECu;
            // 0x1fb2f0: 0xac22d630  sw          $v0, -0x29D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2F4u; }
        if (ctx->pc != 0x1FB2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB2F4u; }
        if (ctx->pc != 0x1FB2F4u) { return; }
    }
    ctx->pc = 0x1FB2F4u;
label_1fb2f4:
    // 0x1fb2f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb2f8:
    // 0x1fb2f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1fb2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1fb2fc:
    // 0x1fb2fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fb2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fb300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fb304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fb304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fb308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb30c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fb30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb310: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB310u;
            // 0x1fb314: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB318u;
}
