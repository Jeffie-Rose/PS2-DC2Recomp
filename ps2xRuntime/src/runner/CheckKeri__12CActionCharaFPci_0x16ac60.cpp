#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckKeri__12CActionCharaFPci
// Address: 0x16ac60 - 0x16ad2c
void CheckKeri__12CActionCharaFPci_0x16ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckKeri__12CActionCharaFPci_0x16ac60");
#endif

    switch (ctx->pc) {
        case 0x16ac60u: goto label_16ac60;
        case 0x16ac64u: goto label_16ac64;
        case 0x16ac68u: goto label_16ac68;
        case 0x16ac6cu: goto label_16ac6c;
        case 0x16ac70u: goto label_16ac70;
        case 0x16ac74u: goto label_16ac74;
        case 0x16ac78u: goto label_16ac78;
        case 0x16ac7cu: goto label_16ac7c;
        case 0x16ac80u: goto label_16ac80;
        case 0x16ac84u: goto label_16ac84;
        case 0x16ac88u: goto label_16ac88;
        case 0x16ac8cu: goto label_16ac8c;
        case 0x16ac90u: goto label_16ac90;
        case 0x16ac94u: goto label_16ac94;
        case 0x16ac98u: goto label_16ac98;
        case 0x16ac9cu: goto label_16ac9c;
        case 0x16aca0u: goto label_16aca0;
        case 0x16aca4u: goto label_16aca4;
        case 0x16aca8u: goto label_16aca8;
        case 0x16acacu: goto label_16acac;
        case 0x16acb0u: goto label_16acb0;
        case 0x16acb4u: goto label_16acb4;
        case 0x16acb8u: goto label_16acb8;
        case 0x16acbcu: goto label_16acbc;
        case 0x16acc0u: goto label_16acc0;
        case 0x16acc4u: goto label_16acc4;
        case 0x16acc8u: goto label_16acc8;
        case 0x16acccu: goto label_16accc;
        case 0x16acd0u: goto label_16acd0;
        case 0x16acd4u: goto label_16acd4;
        case 0x16acd8u: goto label_16acd8;
        case 0x16acdcu: goto label_16acdc;
        case 0x16ace0u: goto label_16ace0;
        case 0x16ace4u: goto label_16ace4;
        case 0x16ace8u: goto label_16ace8;
        case 0x16acecu: goto label_16acec;
        case 0x16acf0u: goto label_16acf0;
        case 0x16acf4u: goto label_16acf4;
        case 0x16acf8u: goto label_16acf8;
        case 0x16acfcu: goto label_16acfc;
        case 0x16ad00u: goto label_16ad00;
        case 0x16ad04u: goto label_16ad04;
        case 0x16ad08u: goto label_16ad08;
        case 0x16ad0cu: goto label_16ad0c;
        case 0x16ad10u: goto label_16ad10;
        case 0x16ad14u: goto label_16ad14;
        case 0x16ad18u: goto label_16ad18;
        case 0x16ad1cu: goto label_16ad1c;
        case 0x16ad20u: goto label_16ad20;
        case 0x16ad24u: goto label_16ad24;
        case 0x16ad28u: goto label_16ad28;
        default: break;
    }

    ctx->pc = 0x16ac60u;

label_16ac60:
    // 0x16ac60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_16ac64:
    // 0x16ac64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16ac68:
    // 0x16ac68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_16ac6c:
    // 0x16ac6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16ac70:
    // 0x16ac70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16ac70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_16ac74:
    // 0x16ac74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ac74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16ac78:
    // 0x16ac78: 0xc05af3c  jal         func_16BCF0
label_16ac7c:
    if (ctx->pc == 0x16AC7Cu) {
        ctx->pc = 0x16AC7Cu;
            // 0x16ac7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AC80u;
        goto label_16ac80;
    }
    ctx->pc = 0x16AC78u;
    SET_GPR_U32(ctx, 31, 0x16AC80u);
    ctx->pc = 0x16AC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC78u;
            // 0x16ac7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC80u; }
        if (ctx->pc != 0x16AC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC80u; }
        if (ctx->pc != 0x16AC80u) { return; }
    }
    ctx->pc = 0x16AC80u;
label_16ac80:
    // 0x16ac80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_16ac84:
    if (ctx->pc == 0x16AC84u) {
        ctx->pc = 0x16AC84u;
            // 0x16ac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AC88u;
        goto label_16ac88;
    }
    ctx->pc = 0x16AC80u;
    {
        const bool branch_taken_0x16ac80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC80u;
            // 0x16ac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac80) {
            ctx->pc = 0x16AC90u;
            goto label_16ac90;
        }
    }
    ctx->pc = 0x16AC88u;
label_16ac88:
    // 0x16ac88: 0x10000022  b           . + 4 + (0x22 << 2)
label_16ac8c:
    if (ctx->pc == 0x16AC8Cu) {
        ctx->pc = 0x16AC8Cu;
            // 0x16ac8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AC90u;
        goto label_16ac90;
    }
    ctx->pc = 0x16AC88u;
    {
        const bool branch_taken_0x16ac88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC88u;
            // 0x16ac8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac88) {
            ctx->pc = 0x16AD14u;
            goto label_16ad14;
        }
    }
    ctx->pc = 0x16AC90u;
label_16ac90:
    // 0x16ac90: 0xc04de0c  jal         func_137830
label_16ac94:
    if (ctx->pc == 0x16AC94u) {
        ctx->pc = 0x16AC94u;
            // 0x16ac94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x16AC98u;
        goto label_16ac98;
    }
    ctx->pc = 0x16AC90u;
    SET_GPR_U32(ctx, 31, 0x16AC98u);
    ctx->pc = 0x16AC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC90u;
            // 0x16ac94: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137830u;
    if (runtime->hasFunction(0x137830u)) {
        auto targetFn = runtime->lookupFunction(0x137830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC98u; }
        if (ctx->pc != 0x16AC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition0__8mgCFrameFPf_0x137830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AC98u; }
        if (ctx->pc != 0x16AC98u) { return; }
    }
    ctx->pc = 0x16AC98u;
label_16ac98:
    // 0x16ac98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_16ac9c:
    // 0x16ac9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_16aca0:
    // 0x16aca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16aca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16aca4:
    // 0x16aca4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_16aca8:
    if (ctx->pc == 0x16ACA8u) {
        ctx->pc = 0x16ACA8u;
            // 0x16aca8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x16ACACu;
        goto label_16acac;
    }
    ctx->pc = 0x16ACA4u;
    {
        const bool branch_taken_0x16aca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACA4u;
            // 0x16aca8: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aca4) {
            ctx->pc = 0x16ACB4u;
            goto label_16acb4;
        }
    }
    ctx->pc = 0x16ACACu;
label_16acac:
    // 0x16acac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_16acb0:
    // 0x16acb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16acb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16acb4:
    // 0x16acb4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_16acb8:
    // 0x16acb8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16acbc:
    // 0x16acbc: 0xc0764fc  jal         func_1D93F0
label_16acc0:
    if (ctx->pc == 0x16ACC0u) {
        ctx->pc = 0x16ACC0u;
            // 0x16acc0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->pc = 0x16ACC4u;
        goto label_16acc4;
    }
    ctx->pc = 0x16ACBCu;
    SET_GPR_U32(ctx, 31, 0x16ACC4u);
    ctx->pc = 0x16ACC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACBCu;
            // 0x16acc0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93F0u;
    if (runtime->hasFunction(0x1D93F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC4u; }
        if (ctx->pc != 0x16ACC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACC4u; }
        if (ctx->pc != 0x16ACC4u) { return; }
    }
    ctx->pc = 0x16ACC4u;
label_16acc4:
    // 0x16acc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16acc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16acc8:
    // 0x16acc8: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_16accc:
    if (ctx->pc == 0x16ACCCu) {
        ctx->pc = 0x16ACCCu;
            // 0x16accc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16ACD0u;
        goto label_16acd0;
    }
    ctx->pc = 0x16ACC8u;
    {
        const bool branch_taken_0x16acc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACC8u;
            // 0x16accc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acc8) {
            ctx->pc = 0x16AD14u;
            goto label_16ad14;
        }
    }
    ctx->pc = 0x16ACD0u;
label_16acd0:
    // 0x16acd0: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_16acd4:
    if (ctx->pc == 0x16ACD4u) {
        ctx->pc = 0x16ACD4u;
            // 0x16acd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16ACD8u;
        goto label_16acd8;
    }
    ctx->pc = 0x16ACD0u;
    {
        const bool branch_taken_0x16acd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACD0u;
            // 0x16acd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acd0) {
            ctx->pc = 0x16AD14u;
            goto label_16ad14;
        }
    }
    ctx->pc = 0x16ACD8u;
label_16acd8:
    // 0x16acd8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16acdc:
    // 0x16acdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16ace0:
    // 0x16ace0: 0xc059924  jal         func_166490
label_16ace4:
    if (ctx->pc == 0x16ACE4u) {
        ctx->pc = 0x16ACE4u;
            // 0x16ace4: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
        ctx->pc = 0x16ACE8u;
        goto label_16ace8;
    }
    ctx->pc = 0x16ACE0u;
    SET_GPR_U32(ctx, 31, 0x16ACE8u);
    ctx->pc = 0x16ACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACE0u;
            // 0x16ace4: 0x24a53520  addiu       $a1, $a1, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACE8u; }
        if (ctx->pc != 0x16ACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ACE8u; }
        if (ctx->pc != 0x16ACE8u) { return; }
    }
    ctx->pc = 0x16ACE8u;
label_16ace8:
    // 0x16ace8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16acec:
    if (ctx->pc == 0x16ACECu) {
        ctx->pc = 0x16ACF0u;
        goto label_16acf0;
    }
    ctx->pc = 0x16ACE8u;
    {
        const bool branch_taken_0x16ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ace8) {
            ctx->pc = 0x16AD04u;
            goto label_16ad04;
        }
    }
    ctx->pc = 0x16ACF0u;
label_16acf0:
    // 0x16acf0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16acf4:
    // 0x16acf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16acf8:
    // 0x16acf8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16acf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16acfc:
    // 0x16acfc: 0x320f809  jalr        $t9
label_16ad00:
    if (ctx->pc == 0x16AD00u) {
        ctx->pc = 0x16AD00u;
            // 0x16ad00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16AD04u;
        goto label_16ad04;
    }
    ctx->pc = 0x16ACFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16AD04u);
        ctx->pc = 0x16AD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACFCu;
            // 0x16ad00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16AD04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16AD04u; }
            if (ctx->pc != 0x16AD04u) { return; }
        }
        }
    }
    ctx->pc = 0x16AD04u;
label_16ad04:
    // 0x16ad04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16ad08:
    // 0x16ad08: 0xa6020728  sh          $v0, 0x728($s0)
    ctx->pc = 0x16ad08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1832), (uint16_t)GPR_U32(ctx, 2));
label_16ad0c:
    // 0x16ad0c: 0xae110720  sw          $s1, 0x720($s0)
    ctx->pc = 0x16ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 17));
label_16ad10:
    // 0x16ad10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ad14:
    // 0x16ad14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16ad18:
    // 0x16ad18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16ad18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16ad1c:
    // 0x16ad1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ad1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16ad20:
    // 0x16ad20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ad20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16ad24:
    // 0x16ad24: 0x3e00008  jr          $ra
label_16ad28:
    if (ctx->pc == 0x16AD28u) {
        ctx->pc = 0x16AD28u;
            // 0x16ad28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16AD2Cu;
        goto label_fallthrough_0x16ad24;
    }
    ctx->pc = 0x16AD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD24u;
            // 0x16ad28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16ad24:
    ctx->pc = 0x16AD2Cu;
}
