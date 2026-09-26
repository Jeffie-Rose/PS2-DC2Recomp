#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemKey__Fv
// Address: 0x24e980 - 0x24eee8
void MenuItemKey__Fv_0x24e980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemKey__Fv_0x24e980");
#endif

    switch (ctx->pc) {
        case 0x24e9f4u: goto label_24e9f4;
        case 0x24ea34u: goto label_24ea34;
        case 0x24ea4cu: goto label_24ea4c;
        case 0x24ea68u: goto label_24ea68;
        case 0x24eaa8u: goto label_24eaa8;
        case 0x24eac0u: goto label_24eac0;
        case 0x24ead8u: goto label_24ead8;
        case 0x24eaf0u: goto label_24eaf0;
        case 0x24eb14u: goto label_24eb14;
        case 0x24eb38u: goto label_24eb38;
        case 0x24eb5cu: goto label_24eb5c;
        case 0x24eb80u: goto label_24eb80;
        case 0x24eba0u: goto label_24eba0;
        case 0x24ebb0u: goto label_24ebb0;
        case 0x24ebb8u: goto label_24ebb8;
        case 0x24ebc0u: goto label_24ebc0;
        case 0x24ebdcu: goto label_24ebdc;
        case 0x24ebf8u: goto label_24ebf8;
        case 0x24ec14u: goto label_24ec14;
        case 0x24ec38u: goto label_24ec38;
        case 0x24ec54u: goto label_24ec54;
        case 0x24ec68u: goto label_24ec68;
        case 0x24ec98u: goto label_24ec98;
        case 0x24ecb4u: goto label_24ecb4;
        case 0x24ecc0u: goto label_24ecc0;
        case 0x24ecdcu: goto label_24ecdc;
        case 0x24ecf4u: goto label_24ecf4;
        case 0x24ed0cu: goto label_24ed0c;
        case 0x24ed24u: goto label_24ed24;
        case 0x24ed2cu: goto label_24ed2c;
        case 0x24ed34u: goto label_24ed34;
        case 0x24ed48u: goto label_24ed48;
        case 0x24ed60u: goto label_24ed60;
        case 0x24ed68u: goto label_24ed68;
        case 0x24ed74u: goto label_24ed74;
        case 0x24ed90u: goto label_24ed90;
        case 0x24eda4u: goto label_24eda4;
        case 0x24ee08u: goto label_24ee08;
        case 0x24ee28u: goto label_24ee28;
        case 0x24ee3cu: goto label_24ee3c;
        case 0x24ee44u: goto label_24ee44;
        case 0x24ee4cu: goto label_24ee4c;
        case 0x24ee54u: goto label_24ee54;
        case 0x24ee5cu: goto label_24ee5c;
        case 0x24ee64u: goto label_24ee64;
        case 0x24ee6cu: goto label_24ee6c;
        case 0x24ee80u: goto label_24ee80;
        case 0x24eeb4u: goto label_24eeb4;
        default: break;
    }

    ctx->pc = 0x24e980u;

    // 0x24e980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24e980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24e984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24e988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24e988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24e98c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24e990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24e990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24e994: 0x8382976c  lb          $v0, -0x6894($gp)
    ctx->pc = 0x24e994u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940524)));
    // 0x24e998: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E998u;
    {
        const bool branch_taken_0x24e998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E998u;
            // 0x24e99c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e998) {
            ctx->pc = 0x24E9A8u;
            goto label_24e9a8;
        }
    }
    ctx->pc = 0x24E9A0u;
    // 0x24e9a0: 0xaf809768  sw          $zero, -0x6898($gp)
    ctx->pc = 0x24e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940520), GPR_U32(ctx, 0));
    // 0x24e9a4: 0xa382976c  sb          $v0, -0x6894($gp)
    ctx->pc = 0x24e9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940524), (uint8_t)GPR_U32(ctx, 2));
label_24e9a8:
    // 0x24e9a8: 0x83829774  lb          $v0, -0x688C($gp)
    ctx->pc = 0x24e9a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940532)));
    // 0x24e9ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E9ACu;
    {
        const bool branch_taken_0x24e9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E9ACu;
            // 0x24e9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9ac) {
            ctx->pc = 0x24E9BCu;
            goto label_24e9bc;
        }
    }
    ctx->pc = 0x24E9B4u;
    // 0x24e9b4: 0xaf809770  sw          $zero, -0x6890($gp)
    ctx->pc = 0x24e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940528), GPR_U32(ctx, 0));
    // 0x24e9b8: 0xa3829774  sb          $v0, -0x688C($gp)
    ctx->pc = 0x24e9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940532), (uint8_t)GPR_U32(ctx, 2));
label_24e9bc:
    // 0x24e9bc: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24e9c0: 0x84850176  lh          $a1, 0x176($a0)
    ctx->pc = 0x24e9c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 374)));
    // 0x24e9c4: 0x20a20001  addi        $v0, $a1, 0x1
    ctx->pc = 0x24e9c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x24e9c8: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x24e9c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24e9cc: 0x1020013f  beqz        $at, . + 4 + (0x13F << 2)
    ctx->pc = 0x24E9CCu;
    {
        const bool branch_taken_0x24e9cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24E9CCu;
            // 0x24e9d0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9cc) {
            ctx->pc = 0x24EECCu;
            goto label_24eecc;
        }
    }
    ctx->pc = 0x24E9D4u;
    // 0x24e9d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24e9d8: 0x2463bb60  addiu       $v1, $v1, -0x44A0
    ctx->pc = 0x24e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949728));
    // 0x24e9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24e9e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e9e4: 0x400008  jr          $v0
    ctx->pc = 0x24E9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24E9ECu: goto label_24e9ec;
            case 0x24EBCCu: goto label_24ebcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24E9ECu;
label_24e9ec:
    // 0x24e9ec: 0xc08e8a8  jal         func_23A2A0
    ctx->pc = 0x24E9ECu;
    SET_GPR_U32(ctx, 31, 0x24E9F4u);
    ctx->pc = 0x24E9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24E9ECu;
            // 0x24e9f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2A0u;
    if (runtime->hasFunction(0x23A2A0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E9F4u; }
        if (ctx->pc != 0x24E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeCheckMenu__14CBaseMenuClassFv_0x23a2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24E9F4u; }
        if (ctx->pc != 0x24E9F4u) { return; }
    }
    ctx->pc = 0x24E9F4u;
label_24e9f4:
    // 0x24e9f4: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24e9f8: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24e9f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24e9fc: 0x20630001  addi        $v1, $v1, 0x1
    ctx->pc = 0x24e9fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x24ea00: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x24ea00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24ea04: 0x1020006e  beqz        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x24EA04u;
    {
        const bool branch_taken_0x24ea04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EA04u;
            // 0x24ea08: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea04) {
            ctx->pc = 0x24EBC0u;
            goto label_24ebc0;
        }
    }
    ctx->pc = 0x24EA0Cu;
    // 0x24ea0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24ea10: 0x24a5bb40  addiu       $a1, $a1, -0x44C0
    ctx->pc = 0x24ea10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949696));
    // 0x24ea14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24ea18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ea1c: 0x600008  jr          $v1
    ctx->pc = 0x24EA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24EA24u: goto label_24ea24;
            case 0x24EB90u: goto label_24eb90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24EA24u;
label_24ea24:
    // 0x24ea24: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x24EA24u;
    {
        const bool branch_taken_0x24ea24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EA24u;
            // 0x24ea28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea24) {
            ctx->pc = 0x24EBC4u;
            goto label_24ebc4;
        }
    }
    ctx->pc = 0x24EA2Cu;
    // 0x24ea2c: 0xc08dc80  jal         func_237200
    ctx->pc = 0x24EA2Cu;
    SET_GPR_U32(ctx, 31, 0x24EA34u);
    ctx->pc = 0x237200u;
    if (runtime->hasFunction(0x237200u)) {
        auto targetFn = runtime->lookupFunction(0x237200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA34u; }
        if (ctx->pc != 0x24EA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexBlock__14CBaseMenuClassFv_0x237200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA34u; }
        if (ctx->pc != 0x24EA34u) { return; }
    }
    ctx->pc = 0x24EA34u;
label_24ea34:
    // 0x24ea34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ea34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ea38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24ea38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea3c: 0xac20dbb4  sw          $zero, -0x244C($at)
    ctx->pc = 0x24ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958004), GPR_U32(ctx, 0));
    // 0x24ea40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24ea40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea44: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ea48: 0xac20dbac  sw          $zero, -0x2454($at)
    ctx->pc = 0x24ea48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957996), GPR_U32(ctx, 0));
label_24ea4c:
    // 0x24ea4c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ea50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x24ea50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24ea54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ea54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea58: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x24ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x24ea5c: 0x8c4401a8  lw          $a0, 0x1A8($v0)
    ctx->pc = 0x24ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x24ea60: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x24EA60u;
    SET_GPR_U32(ctx, 31, 0x24EA68u);
    ctx->pc = 0x24EA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EA60u;
            // 0x24ea64: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA68u; }
        if (ctx->pc != 0x24EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EA68u; }
        if (ctx->pc != 0x24EA68u) { return; }
    }
    ctx->pc = 0x24EA68u;
label_24ea68:
    // 0x24ea68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24ea68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24ea6c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x24ea6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24ea70: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x24EA70u;
    {
        const bool branch_taken_0x24ea70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EA70u;
            // 0x24ea74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea70) {
            ctx->pc = 0x24EA4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ea4c;
        }
    }
    ctx->pc = 0x24EA78u;
    // 0x24ea78: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ea7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ea80: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x24ea80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24ea84: 0xaf839768  sw          $v1, -0x6898($gp)
    ctx->pc = 0x24ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940520), GPR_U32(ctx, 3));
    // 0x24ea88: 0x84830114  lh          $v1, 0x114($a0)
    ctx->pc = 0x24ea88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x24ea8c: 0xaf839770  sw          $v1, -0x6890($gp)
    ctx->pc = 0x24ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940528), GPR_U32(ctx, 3));
    // 0x24ea90: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24ea90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24ea94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24EA94u;
    {
        const bool branch_taken_0x24ea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24ea94) {
            ctx->pc = 0x24EAC0u;
            goto label_24eac0;
        }
    }
    ctx->pc = 0x24EA9Cu;
    // 0x24ea9c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x24ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24eaa0: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x24EAA0u;
    SET_GPR_U32(ctx, 31, 0x24EAA8u);
    ctx->pc = 0x24EAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EAA0u;
            // 0x24eaa4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAA8u; }
        if (ctx->pc != 0x24EAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAA8u; }
        if (ctx->pc != 0x24EAA8u) { return; }
    }
    ctx->pc = 0x24EAA8u;
label_24eaa8:
    // 0x24eaa8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eaac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eab0: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x24eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
    // 0x24eab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eab8: 0xc0adbb4  jal         func_2B6ED0
    ctx->pc = 0x24EAB8u;
    SET_GPR_U32(ctx, 31, 0x24EAC0u);
    ctx->pc = 0x24EABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EAB8u;
            // 0x24eabc: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6ED0u;
    if (runtime->hasFunction(0x2B6ED0u)) {
        auto targetFn = runtime->lookupFunction(0x2B6ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAC0u; }
        if (ctx->pc != 0x24EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxInit__FP9mgCMemoryPii_0x2b6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAC0u; }
        if (ctx->pc != 0x24EAC0u) { return; }
    }
    ctx->pc = 0x24EAC0u;
label_24eac0:
    // 0x24eac0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eac4: 0x84420178  lh          $v0, 0x178($v0)
    ctx->pc = 0x24eac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x24eac8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24EAC8u;
    {
        const bool branch_taken_0x24eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EAC8u;
            // 0x24eacc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eac8) {
            ctx->pc = 0x24EAF0u;
            goto label_24eaf0;
        }
    }
    ctx->pc = 0x24EAD0u;
    // 0x24ead0: 0xc08cb30  jal         func_232CC0
    ctx->pc = 0x24EAD0u;
    SET_GPR_U32(ctx, 31, 0x24EAD8u);
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAD8u; }
        if (ctx->pc != 0x24EAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAD8u; }
        if (ctx->pc != 0x24EAD8u) { return; }
    }
    ctx->pc = 0x24EAD8u;
label_24ead8:
    // 0x24ead8: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eadc: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eae0: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x24eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
    // 0x24eae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eae8: 0xc086250  jal         func_218940
    ctx->pc = 0x24EAE8u;
    SET_GPR_U32(ctx, 31, 0x24EAF0u);
    ctx->pc = 0x24EAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EAE8u;
            // 0x24eaec: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218940u;
    if (runtime->hasFunction(0x218940u)) {
        auto targetFn = runtime->lookupFunction(0x218940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAF0u; }
        if (ctx->pc != 0x24EAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAquaInit__FP9mgCMemoryPii_0x218940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EAF0u; }
        if (ctx->pc != 0x24EAF0u) { return; }
    }
    ctx->pc = 0x24EAF0u;
label_24eaf0:
    // 0x24eaf0: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24eaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eaf4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24eaf8: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24eaf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24eafc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EAFCu;
    {
        const bool branch_taken_0x24eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EAFCu;
            // 0x24eb00: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eafc) {
            ctx->pc = 0x24EB14u;
            goto label_24eb14;
        }
    }
    ctx->pc = 0x24EB04u;
    // 0x24eb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eb0c: 0xc0c2bdc  jal         func_30AF70
    ctx->pc = 0x24EB0Cu;
    SET_GPR_U32(ctx, 31, 0x24EB14u);
    ctx->pc = 0x24EB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB0Cu;
            // 0x24eb10: 0x2484db90  addiu       $a0, $a0, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB14u; }
        if (ctx->pc != 0x24EB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistInit__FP9mgCMemoryPii_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB14u; }
        if (ctx->pc != 0x24EB14u) { return; }
    }
    ctx->pc = 0x24EB14u;
label_24eb14:
    // 0x24eb14: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eb18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24eb1c: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24eb1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24eb20: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB20u;
    {
        const bool branch_taken_0x24eb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB20u;
            // 0x24eb24: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb20) {
            ctx->pc = 0x24EB38u;
            goto label_24eb38;
        }
    }
    ctx->pc = 0x24EB28u;
    // 0x24eb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eb30: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x24EB30u;
    SET_GPR_U32(ctx, 31, 0x24EB38u);
    ctx->pc = 0x24EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB30u;
            // 0x24eb34: 0x2484db90  addiu       $a0, $a0, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB38u; }
        if (ctx->pc != 0x24EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCQuestViewInit__FP9mgCMemoryPii_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB38u; }
        if (ctx->pc != 0x24EB38u) { return; }
    }
    ctx->pc = 0x24EB38u;
label_24eb38:
    // 0x24eb38: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eb3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24eb40: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24eb40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24eb44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB44u;
    {
        const bool branch_taken_0x24eb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB44u;
            // 0x24eb48: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb44) {
            ctx->pc = 0x24EB5Cu;
            goto label_24eb5c;
        }
    }
    ctx->pc = 0x24EB4Cu;
    // 0x24eb4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24eb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eb50: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eb54: 0xc0a55fc  jal         func_2957F0
    ctx->pc = 0x24EB54u;
    SET_GPR_U32(ctx, 31, 0x24EB5Cu);
    ctx->pc = 0x24EB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB54u;
            // 0x24eb58: 0x2484db90  addiu       $a0, $a0, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2957F0u;
    if (runtime->hasFunction(0x2957F0u)) {
        auto targetFn = runtime->lookupFunction(0x2957F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB5Cu; }
        if (ctx->pc != 0x24EB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCQuestViewInit__FP9mgCMemoryPii_0x2957f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB5Cu; }
        if (ctx->pc != 0x24EB5Cu) { return; }
    }
    ctx->pc = 0x24EB5Cu;
label_24eb5c:
    // 0x24eb5c: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24eb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eb60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24eb64: 0x84830178  lh          $v1, 0x178($a0)
    ctx->pc = 0x24eb64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x24eb68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB68u;
    {
        const bool branch_taken_0x24eb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB68u;
            // 0x24eb6c: 0x24850018  addiu       $a1, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb68) {
            ctx->pc = 0x24EB80u;
            goto label_24eb80;
        }
    }
    ctx->pc = 0x24EB70u;
    // 0x24eb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24eb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb74: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24eb78: 0xc0afe58  jal         func_2BF960
    ctx->pc = 0x24EB78u;
    SET_GPR_U32(ctx, 31, 0x24EB80u);
    ctx->pc = 0x24EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB78u;
            // 0x24eb7c: 0x2484db90  addiu       $a0, $a0, -0x2470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF960u;
    if (runtime->hasFunction(0x2BF960u)) {
        auto targetFn = runtime->lookupFunction(0x2BF960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB80u; }
        if (ctx->pc != 0x24EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterBookInit__FP9mgCMemoryPii_0x2bf960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EB80u; }
        if (ctx->pc != 0x24EB80u) { return; }
    }
    ctx->pc = 0x24EB80u;
label_24eb80:
    // 0x24eb80: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eb84: 0x84620178  lh          $v0, 0x178($v1)
    ctx->pc = 0x24eb84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x24eb88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24EB88u;
    {
        const bool branch_taken_0x24eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EB88u;
            // 0x24eb8c: 0xa4620176  sh          $v0, 0x176($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 374), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb88) {
            ctx->pc = 0x24EBC0u;
            goto label_24ebc0;
        }
    }
    ctx->pc = 0x24EB90u;
label_24eb90:
    // 0x24eb90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24EB90u;
    {
        const bool branch_taken_0x24eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb90) {
            ctx->pc = 0x24EBA8u;
            goto label_24eba8;
        }
    }
    ctx->pc = 0x24EB98u;
    // 0x24eb98: 0xc0938ec  jal         func_24E3B0
    ctx->pc = 0x24EB98u;
    SET_GPR_U32(ctx, 31, 0x24EBA0u);
    ctx->pc = 0x24E3B0u;
    if (runtime->hasFunction(0x24E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x24E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBA0u; }
        if (ctx->pc != 0x24EBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyStep__13CMenuItemInfoFv_0x24e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBA0u; }
        if (ctx->pc != 0x24EBA0u) { return; }
    }
    ctx->pc = 0x24EBA0u;
label_24eba0:
    // 0x24eba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24EBA0u;
    {
        const bool branch_taken_0x24eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBA0u;
            // 0x24eba4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eba0) {
            ctx->pc = 0x24EBC0u;
            goto label_24ebc0;
        }
    }
    ctx->pc = 0x24EBA8u;
label_24eba8:
    // 0x24eba8: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x24EBA8u;
    SET_GPR_U32(ctx, 31, 0x24EBB0u);
    ctx->pc = 0x24EBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBA8u;
            // 0x24ebac: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBB0u; }
        if (ctx->pc != 0x24EBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBB0u; }
        if (ctx->pc != 0x24EBB0u) { return; }
    }
    ctx->pc = 0x24EBB0u;
label_24ebb0:
    // 0x24ebb0: 0xc090f28  jal         func_243CA0
    ctx->pc = 0x24EBB0u;
    SET_GPR_U32(ctx, 31, 0x24EBB8u);
    ctx->pc = 0x24EBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBB0u;
            // 0x24ebb4: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243CA0u;
    if (runtime->hasFunction(0x243CA0u)) {
        auto targetFn = runtime->lookupFunction(0x243CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBB8u; }
        if (ctx->pc != 0x24EBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__13CMenuItemInfoFv_0x243ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBB8u; }
        if (ctx->pc != 0x24EBB8u) { return; }
    }
    ctx->pc = 0x24EBB8u;
label_24ebb8:
    // 0x24ebb8: 0xc091268  jal         func_2449A0
    ctx->pc = 0x24EBB8u;
    SET_GPR_U32(ctx, 31, 0x24EBC0u);
    ctx->pc = 0x24EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBB8u;
            // 0x24ebbc: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2449A0u;
    if (runtime->hasFunction(0x2449A0u)) {
        auto targetFn = runtime->lookupFunction(0x2449A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBC0u; }
        if (ctx->pc != 0x24EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__13CMenuItemInfoFv_0x2449a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBC0u; }
        if (ctx->pc != 0x24EBC0u) { return; }
    }
    ctx->pc = 0x24EBC0u;
label_24ebc0:
    // 0x24ebc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24ebc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ebc4:
    // 0x24ebc4: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x24EBC4u;
    {
        const bool branch_taken_0x24ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBC4u;
            // 0x24ebc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebc4) {
            ctx->pc = 0x24EED4u;
            goto label_24eed4;
        }
    }
    ctx->pc = 0x24EBCCu;
label_24ebcc:
    // 0x24ebcc: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EBCCu;
    {
        const bool branch_taken_0x24ebcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EBCCu;
            // 0x24ebd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ebcc) {
            ctx->pc = 0x24EBDCu;
            goto label_24ebdc;
        }
    }
    ctx->pc = 0x24EBD4u;
    // 0x24ebd4: 0xc0862c8  jal         func_218B20
    ctx->pc = 0x24EBD4u;
    SET_GPR_U32(ctx, 31, 0x24EBDCu);
    ctx->pc = 0x218B20u;
    if (runtime->hasFunction(0x218B20u)) {
        auto targetFn = runtime->lookupFunction(0x218B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBDCu; }
        if (ctx->pc != 0x24EBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAquaKey__Fv_0x218b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBDCu; }
        if (ctx->pc != 0x24EBDCu) { return; }
    }
    ctx->pc = 0x24EBDCu;
label_24ebdc:
    // 0x24ebdc: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ebdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ebe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ebe4: 0x84840176  lh          $a0, 0x176($a0)
    ctx->pc = 0x24ebe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 374)));
    // 0x24ebe8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EBE8u;
    {
        const bool branch_taken_0x24ebe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ebe8) {
            ctx->pc = 0x24EBF8u;
            goto label_24ebf8;
        }
    }
    ctx->pc = 0x24EBF0u;
    // 0x24ebf0: 0xc0ae340  jal         func_2B8D00
    ctx->pc = 0x24EBF0u;
    SET_GPR_U32(ctx, 31, 0x24EBF8u);
    ctx->pc = 0x2B8D00u;
    if (runtime->hasFunction(0x2B8D00u)) {
        auto targetFn = runtime->lookupFunction(0x2B8D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBF8u; }
        if (ctx->pc != 0x24EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMonsterBoxKey__Fv_0x2b8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EBF8u; }
        if (ctx->pc != 0x24EBF8u) { return; }
    }
    ctx->pc = 0x24EBF8u;
label_24ebf8:
    // 0x24ebf8: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ebf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ebfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ec00: 0x84840176  lh          $a0, 0x176($a0)
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 374)));
    // 0x24ec04: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EC04u;
    {
        const bool branch_taken_0x24ec04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ec04) {
            ctx->pc = 0x24EC14u;
            goto label_24ec14;
        }
    }
    ctx->pc = 0x24EC0Cu;
    // 0x24ec0c: 0xc0c2d3c  jal         func_30B4F0
    ctx->pc = 0x24EC0Cu;
    SET_GPR_U32(ctx, 31, 0x24EC14u);
    ctx->pc = 0x30B4F0u;
    if (runtime->hasFunction(0x30B4F0u)) {
        auto targetFn = runtime->lookupFunction(0x30B4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC14u; }
        if (ctx->pc != 0x24EC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistKey__Fv_0x30b4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC14u; }
        if (ctx->pc != 0x24EC14u) { return; }
    }
    ctx->pc = 0x24EC14u;
label_24ec14:
    // 0x24ec14: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ec18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24ec1c: 0x84840176  lh          $a0, 0x176($a0)
    ctx->pc = 0x24ec1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 374)));
    // 0x24ec20: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EC20u;
    {
        const bool branch_taken_0x24ec20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24EC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EC20u;
            // 0x24ec24: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec20) {
            ctx->pc = 0x24EC30u;
            goto label_24ec30;
        }
    }
    ctx->pc = 0x24EC28u;
    // 0x24ec28: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EC28u;
    {
        const bool branch_taken_0x24ec28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x24ec28) {
            ctx->pc = 0x24EC38u;
            goto label_24ec38;
        }
    }
    ctx->pc = 0x24EC30u;
label_24ec30:
    // 0x24ec30: 0xc0a5648  jal         func_295920
    ctx->pc = 0x24EC30u;
    SET_GPR_U32(ctx, 31, 0x24EC38u);
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC38u; }
        if (ctx->pc != 0x24EC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCQuestViewKey__Fv_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC38u; }
        if (ctx->pc != 0x24EC38u) { return; }
    }
    ctx->pc = 0x24EC38u;
label_24ec38:
    // 0x24ec38: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ec3c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24ec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24ec40: 0x84840176  lh          $a0, 0x176($a0)
    ctx->pc = 0x24ec40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 374)));
    // 0x24ec44: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EC44u;
    {
        const bool branch_taken_0x24ec44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x24EC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EC44u;
            // 0x24ec48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec44) {
            ctx->pc = 0x24EC58u;
            goto label_24ec58;
        }
    }
    ctx->pc = 0x24EC4Cu;
    // 0x24ec4c: 0xc0afee0  jal         func_2BFB80
    ctx->pc = 0x24EC4Cu;
    SET_GPR_U32(ctx, 31, 0x24EC54u);
    ctx->pc = 0x2BFB80u;
    if (runtime->hasFunction(0x2BFB80u)) {
        auto targetFn = runtime->lookupFunction(0x2BFB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC54u; }
        if (ctx->pc != 0x24EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterBookKey__Fv_0x2bfb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC54u; }
        if (ctx->pc != 0x24EC54u) { return; }
    }
    ctx->pc = 0x24EC54u;
label_24ec54:
    // 0x24ec54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24ec58:
    // 0x24ec58: 0x1444009a  bne         $v0, $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x24EC58u;
    {
        const bool branch_taken_0x24ec58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x24EC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EC58u;
            // 0x24ec5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ec58) {
            ctx->pc = 0x24EEC4u;
            goto label_24eec4;
        }
    }
    ctx->pc = 0x24EC60u;
    // 0x24ec60: 0xc08cb30  jal         func_232CC0
    ctx->pc = 0x24EC60u;
    SET_GPR_U32(ctx, 31, 0x24EC68u);
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC68u; }
        if (ctx->pc != 0x24EC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC68u; }
        if (ctx->pc != 0x24EC68u) { return; }
    }
    ctx->pc = 0x24EC68u;
label_24ec68:
    // 0x24ec68: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ec68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ec6c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x24ec70: 0xac20dbb4  sw          $zero, -0x244C($at)
    ctx->pc = 0x24ec70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958004), GPR_U32(ctx, 0));
    // 0x24ec74: 0x24a5db30  addiu       $a1, $a1, -0x24D0
    ctx->pc = 0x24ec74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
    // 0x24ec78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ec78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ec7c: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ec80: 0xac20dbac  sw          $zero, -0x2454($at)
    ctx->pc = 0x24ec80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294957996), GPR_U32(ctx, 0));
    // 0x24ec84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ec84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ec88: 0xac20dbe4  sw          $zero, -0x241C($at)
    ctx->pc = 0x24ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958052), GPR_U32(ctx, 0));
    // 0x24ec8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ec8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ec90: 0xc090e38  jal         func_2438E0
    ctx->pc = 0x24EC90u;
    SET_GPR_U32(ctx, 31, 0x24EC98u);
    ctx->pc = 0x24EC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EC90u;
            // 0x24ec94: 0xac20dbdc  sw          $zero, -0x2424($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    if (runtime->hasFunction(0x2438E0u)) {
        auto targetFn = runtime->lookupFunction(0x2438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC98u; }
        if (ctx->pc != 0x24EC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeMalloc__13CMenuItemInfoFP9mgCMemory_0x2438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EC98u; }
        if (ctx->pc != 0x24EC98u) { return; }
    }
    ctx->pc = 0x24EC98u;
label_24ec98:
    // 0x24ec98: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ec98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ec9c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x24ec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x24eca0: 0x8c30db80  lw          $s0, -0x2480($at)
    ctx->pc = 0x24eca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957952)));
    // 0x24eca4: 0x2484bb08  addiu       $a0, $a0, -0x44F8
    ctx->pc = 0x24eca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949640));
    // 0x24eca8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24eca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ecac: 0xc094440  jal         func_251100
    ctx->pc = 0x24ECACu;
    SET_GPR_U32(ctx, 31, 0x24ECB4u);
    ctx->pc = 0x24ECB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ECACu;
            // 0x24ecb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECB4u; }
        if (ctx->pc != 0x24ECB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECB4u; }
        if (ctx->pc != 0x24ECB4u) { return; }
    }
    ctx->pc = 0x24ECB4u;
label_24ecb4:
    // 0x24ecb4: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ecb8: 0xc090bd4  jal         func_242F50
    ctx->pc = 0x24ECB8u;
    SET_GPR_U32(ctx, 31, 0x24ECC0u);
    ctx->pc = 0x24ECBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ECB8u;
            // 0x24ecbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F50u;
    if (runtime->hasFunction(0x242F50u)) {
        auto targetFn = runtime->lookupFunction(0x242F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECC0u; }
        if (ctx->pc != 0x24ECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__13CMenuItemInfoFPUi_0x242f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECC0u; }
        if (ctx->pc != 0x24ECC0u) { return; }
    }
    ctx->pc = 0x24ECC0u;
label_24ecc0:
    // 0x24ecc0: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ecc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ecc8: 0x84630176  lh          $v1, 0x176($v1)
    ctx->pc = 0x24ecc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 374)));
    // 0x24eccc: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24ECCCu;
    {
        const bool branch_taken_0x24eccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24eccc) {
            ctx->pc = 0x24ED0Cu;
            goto label_24ed0c;
        }
    }
    ctx->pc = 0x24ECD4u;
    // 0x24ecd4: 0xc08ac10  jal         func_22B040
    ctx->pc = 0x24ECD4u;
    SET_GPR_U32(ctx, 31, 0x24ECDCu);
    ctx->pc = 0x24ECD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ECD4u;
            // 0x24ecd8: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B040u;
    if (runtime->hasFunction(0x22B040u)) {
        auto targetFn = runtime->lookupFunction(0x22B040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECDCu; }
        if (ctx->pc != 0x24ECDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDrawList__14CPosDataManageFv_0x22b040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECDCu; }
        if (ctx->pc != 0x24ECDCu) { return; }
    }
    ctx->pc = 0x24ECDCu;
label_24ecdc:
    // 0x24ecdc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24ece0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ece4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x24ece4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x24ece8: 0x24a5bb18  addiu       $a1, $a1, -0x44E8
    ctx->pc = 0x24ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949656));
    // 0x24ecec: 0xc08ac48  jal         func_22B120
    ctx->pc = 0x24ECECu;
    SET_GPR_U32(ctx, 31, 0x24ECF4u);
    ctx->pc = 0x24ECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ECECu;
            // 0x24ecf0: 0x24c6b198  addiu       $a2, $a2, -0x4E68 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B120u;
    if (runtime->hasFunction(0x22B120u)) {
        auto targetFn = runtime->lookupFunction(0x22B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECF4u; }
        if (ctx->pc != 0x24ECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormReLink__14CPosDataManageFPcPc_0x22b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ECF4u; }
        if (ctx->pc != 0x24ECF4u) { return; }
    }
    ctx->pc = 0x24ECF4u;
label_24ecf4:
    // 0x24ecf4: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24ecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x24ecf8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x24ecfc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x24ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x24ed00: 0x24a5bb28  addiu       $a1, $a1, -0x44D8
    ctx->pc = 0x24ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949672));
    // 0x24ed04: 0xc08ac48  jal         func_22B120
    ctx->pc = 0x24ED04u;
    SET_GPR_U32(ctx, 31, 0x24ED0Cu);
    ctx->pc = 0x24ED08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED04u;
            // 0x24ed08: 0x24c6bb30  addiu       $a2, $a2, -0x44D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B120u;
    if (runtime->hasFunction(0x22B120u)) {
        auto targetFn = runtime->lookupFunction(0x22B120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED0Cu; }
        if (ctx->pc != 0x24ED0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormReLink__14CPosDataManageFPcPc_0x22b120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED0Cu; }
        if (ctx->pc != 0x24ED0Cu) { return; }
    }
    ctx->pc = 0x24ED0Cu;
label_24ed0c:
    // 0x24ed0c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ed0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ed10: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x24ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x24ed14: 0x8c25d5b0  lw          $a1, -0x2A50($at)
    ctx->pc = 0x24ed14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956464)));
    // 0x24ed18: 0x2484bb38  addiu       $a0, $a0, -0x44C8
    ctx->pc = 0x24ed18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949688));
    // 0x24ed1c: 0xc094440  jal         func_251100
    ctx->pc = 0x24ED1Cu;
    SET_GPR_U32(ctx, 31, 0x24ED24u);
    ctx->pc = 0x24ED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED1Cu;
            // 0x24ed20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED24u; }
        if (ctx->pc != 0x24ED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED24u; }
        if (ctx->pc != 0x24ED24u) { return; }
    }
    ctx->pc = 0x24ED24u;
label_24ed24:
    // 0x24ed24: 0xc065a18  jal         func_196860
    ctx->pc = 0x24ED24u;
    SET_GPR_U32(ctx, 31, 0x24ED2Cu);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED2Cu; }
        if (ctx->pc != 0x24ED2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED2Cu; }
        if (ctx->pc != 0x24ED2Cu) { return; }
    }
    ctx->pc = 0x24ED2Cu;
label_24ed2c:
    // 0x24ed2c: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x24ED2Cu;
    SET_GPR_U32(ctx, 31, 0x24ED34u);
    ctx->pc = 0x24ED30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED2Cu;
            // 0x24ed30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED34u; }
        if (ctx->pc != 0x24ED34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED34u; }
        if (ctx->pc != 0x24ED34u) { return; }
    }
    ctx->pc = 0x24ED34u;
label_24ed34:
    // 0x24ed34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ed34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ed38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24ed38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed3c: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x24ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24ed40: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x24ED40u;
    SET_GPR_U32(ctx, 31, 0x24ED48u);
    ctx->pc = 0x24ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED40u;
            // 0x24ed44: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED48u; }
        if (ctx->pc != 0x24ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED48u; }
        if (ctx->pc != 0x24ED48u) { return; }
    }
    ctx->pc = 0x24ED48u;
label_24ed48:
    // 0x24ed48: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ed48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ed4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ed50: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x24ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x24ed54: 0xa04321e0  sb          $v1, 0x21E0($v0)
    ctx->pc = 0x24ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8672), (uint8_t)GPR_U32(ctx, 3));
    // 0x24ed58: 0xc08791c  jal         func_21E470
    ctx->pc = 0x24ED58u;
    SET_GPR_U32(ctx, 31, 0x24ED60u);
    ctx->pc = 0x24ED5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED58u;
            // 0x24ed5c: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED60u; }
        if (ctx->pc != 0x24ED60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED60u; }
        if (ctx->pc != 0x24ED60u) { return; }
    }
    ctx->pc = 0x24ED60u;
label_24ed60:
    // 0x24ed60: 0xc087d68  jal         func_21F5A0
    ctx->pc = 0x24ED60u;
    SET_GPR_U32(ctx, 31, 0x24ED68u);
    ctx->pc = 0x21F5A0u;
    if (runtime->hasFunction(0x21F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x21F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED68u; }
        if (ctx->pc != 0x24ED68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachMessageForm__Fv_0x21f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED68u; }
        if (ctx->pc != 0x24ED68u) { return; }
    }
    ctx->pc = 0x24ED68u;
label_24ed68:
    // 0x24ed68: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x24ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24ed6c: 0xc08900c  jal         func_224030
    ctx->pc = 0x24ED6Cu;
    SET_GPR_U32(ctx, 31, 0x24ED74u);
    ctx->pc = 0x24ED70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED6Cu;
            // 0x24ed70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED74u; }
        if (ctx->pc != 0x24ED74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED74u; }
        if (ctx->pc != 0x24ED74u) { return; }
    }
    ctx->pc = 0x24ED74u;
label_24ed74:
    // 0x24ed74: 0xa3809b70  sb          $zero, -0x6490($gp)
    ctx->pc = 0x24ed74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941552), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ed78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24ed7c: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x24ed7cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ed80: 0xa3809b75  sb          $zero, -0x648B($gp)
    ctx->pc = 0x24ed80u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ed84: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x24ed84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ed88: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x24ED88u;
    SET_GPR_U32(ctx, 31, 0x24ED90u);
    ctx->pc = 0x24ED8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED88u;
            // 0x24ed8c: 0xa3809b71  sb          $zero, -0x648F($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED90u; }
        if (ctx->pc != 0x24ED90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24ED90u; }
        if (ctx->pc != 0x24ED90u) { return; }
    }
    ctx->pc = 0x24ED90u;
label_24ed90:
    // 0x24ed90: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24ED90u;
    {
        const bool branch_taken_0x24ed90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ED94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED90u;
            // 0x24ed94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed90) {
            ctx->pc = 0x24ED9Cu;
            goto label_24ed9c;
        }
    }
    ctx->pc = 0x24ED98u;
    // 0x24ed98: 0xa3829b71  sb          $v0, -0x648F($gp)
    ctx->pc = 0x24ed98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941553), (uint8_t)GPR_U32(ctx, 2));
label_24ed9c:
    // 0x24ed9c: 0xc090c40  jal         func_243100
    ctx->pc = 0x24ED9Cu;
    SET_GPR_U32(ctx, 31, 0x24EDA4u);
    ctx->pc = 0x24EDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24ED9Cu;
            // 0x24eda0: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EDA4u; }
        if (ctx->pc != 0x24EDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EDA4u; }
        if (ctx->pc != 0x24EDA4u) { return; }
    }
    ctx->pc = 0x24EDA4u;
label_24eda4:
    // 0x24eda4: 0xa3829b73  sb          $v0, -0x648D($gp)
    ctx->pc = 0x24eda4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 2));
    // 0x24eda8: 0x83839b73  lb          $v1, -0x648D($gp)
    ctx->pc = 0x24eda8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941555)));
    // 0x24edac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24EDACu;
    {
        const bool branch_taken_0x24edac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EDACu;
            // 0x24edb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edac) {
            ctx->pc = 0x24EDC0u;
            goto label_24edc0;
        }
    }
    ctx->pc = 0x24EDB4u;
    // 0x24edb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24edb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EDB8u;
    {
        const bool branch_taken_0x24edb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24edb8) {
            ctx->pc = 0x24EDC8u;
            goto label_24edc8;
        }
    }
    ctx->pc = 0x24EDC0u;
label_24edc0:
    // 0x24edc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24edc4: 0xa3829b72  sb          $v0, -0x648E($gp)
    ctx->pc = 0x24edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 2));
label_24edc8:
    // 0x24edc8: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24edcc: 0x84620112  lh          $v0, 0x112($v1)
    ctx->pc = 0x24edccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x24edd0: 0xa4620110  sh          $v0, 0x110($v1)
    ctx->pc = 0x24edd0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 272), (uint16_t)GPR_U32(ctx, 2));
    // 0x24edd4: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x24edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24edd8: 0x84620110  lh          $v0, 0x110($v1)
    ctx->pc = 0x24edd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x24eddc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24EDDCu;
    {
        const bool branch_taken_0x24eddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24eddc) {
            ctx->pc = 0x24EDE8u;
            goto label_24ede8;
        }
    }
    ctx->pc = 0x24EDE4u;
    // 0x24ede4: 0xa4600114  sh          $zero, 0x114($v1)
    ctx->pc = 0x24ede4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 276), (uint16_t)GPR_U32(ctx, 0));
label_24ede8:
    // 0x24ede8: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24edec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24edf0: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x24edf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24edf4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24EDF4u;
    {
        const bool branch_taken_0x24edf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24edf4) {
            ctx->pc = 0x24EE00u;
            goto label_24ee00;
        }
    }
    ctx->pc = 0x24EDFCu;
    // 0x24edfc: 0xa4820114  sh          $v0, 0x114($a0)
    ctx->pc = 0x24edfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 276), (uint16_t)GPR_U32(ctx, 2));
label_24ee00:
    // 0x24ee00: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x24EE00u;
    SET_GPR_U32(ctx, 31, 0x24EE08u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE08u; }
        if (ctx->pc != 0x24EE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE08u; }
        if (ctx->pc != 0x24EE08u) { return; }
    }
    ctx->pc = 0x24EE08u;
label_24ee08:
    // 0x24ee08: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x24ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x24ee0c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x24ee0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x24ee10: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x24ee10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x24ee14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x24ee14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ee18: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x24ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
    // 0x24ee1c: 0x24a5dbf0  addiu       $a1, $a1, -0x2410
    ctx->pc = 0x24ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958064));
    // 0x24ee20: 0xc0ac028  jal         func_2B00A0
    ctx->pc = 0x24EE20u;
    SET_GPR_U32(ctx, 31, 0x24EE28u);
    ctx->pc = 0x24EE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EE20u;
            // 0x24ee24: 0x24c6cac0  addiu       $a2, $a2, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE28u; }
        if (ctx->pc != 0x24EE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE28u; }
        if (ctx->pc != 0x24EE28u) { return; }
    }
    ctx->pc = 0x24EE28u;
label_24ee28:
    // 0x24ee28: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ee2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24ee2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ee30: 0x84850110  lh          $a1, 0x110($a0)
    ctx->pc = 0x24ee30u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x24ee34: 0xc093114  jal         func_24C450
    ctx->pc = 0x24EE34u;
    SET_GPR_U32(ctx, 31, 0x24EE3Cu);
    ctx->pc = 0x24EE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EE34u;
            // 0x24ee38: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE3Cu; }
        if (ctx->pc != 0x24EE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE3Cu; }
        if (ctx->pc != 0x24EE3Cu) { return; }
    }
    ctx->pc = 0x24EE3Cu;
label_24ee3c:
    // 0x24ee3c: 0xc05239c  jal         func_148E70
    ctx->pc = 0x24EE3Cu;
    SET_GPR_U32(ctx, 31, 0x24EE44u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE44u; }
        if (ctx->pc != 0x24EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE44u; }
        if (ctx->pc != 0x24EE44u) { return; }
    }
    ctx->pc = 0x24EE44u;
label_24ee44:
    // 0x24ee44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24EE44u;
    {
        const bool branch_taken_0x24ee44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24ee44) {
            ctx->pc = 0x24EE74u;
            goto label_24ee74;
        }
    }
    ctx->pc = 0x24EE4Cu;
label_24ee4c:
    // 0x24ee4c: 0xc052334  jal         func_148CD0
    ctx->pc = 0x24EE4Cu;
    SET_GPR_U32(ctx, 31, 0x24EE54u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE54u; }
        if (ctx->pc != 0x24EE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE54u; }
        if (ctx->pc != 0x24EE54u) { return; }
    }
    ctx->pc = 0x24EE54u;
label_24ee54:
    // 0x24ee54: 0xc08acc8  jal         func_22B320
    ctx->pc = 0x24EE54u;
    SET_GPR_U32(ctx, 31, 0x24EE5Cu);
    ctx->pc = 0x24EE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EE54u;
            // 0x24ee58: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE5Cu; }
        if (ctx->pc != 0x24EE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE5Cu; }
        if (ctx->pc != 0x24EE5Cu) { return; }
    }
    ctx->pc = 0x24EE5Cu;
label_24ee5c:
    // 0x24ee5c: 0xc090f28  jal         func_243CA0
    ctx->pc = 0x24EE5Cu;
    SET_GPR_U32(ctx, 31, 0x24EE64u);
    ctx->pc = 0x24EE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EE5Cu;
            // 0x24ee60: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243CA0u;
    if (runtime->hasFunction(0x243CA0u)) {
        auto targetFn = runtime->lookupFunction(0x243CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE64u; }
        if (ctx->pc != 0x24EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__13CMenuItemInfoFv_0x243ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE64u; }
        if (ctx->pc != 0x24EE64u) { return; }
    }
    ctx->pc = 0x24EE64u;
label_24ee64:
    // 0x24ee64: 0xc05239c  jal         func_148E70
    ctx->pc = 0x24EE64u;
    SET_GPR_U32(ctx, 31, 0x24EE6Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE6Cu; }
        if (ctx->pc != 0x24EE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE6Cu; }
        if (ctx->pc != 0x24EE6Cu) { return; }
    }
    ctx->pc = 0x24EE6Cu;
label_24ee6c:
    // 0x24ee6c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x24EE6Cu;
    {
        const bool branch_taken_0x24ee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ee6c) {
            ctx->pc = 0x24EE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24ee4c;
        }
    }
    ctx->pc = 0x24EE74u;
label_24ee74:
    // 0x24ee74: 0x0  nop
    ctx->pc = 0x24ee74u;
    // NOP
    // 0x24ee78: 0xc0932a8  jal         func_24CAA0
    ctx->pc = 0x24EE78u;
    SET_GPR_U32(ctx, 31, 0x24EE80u);
    ctx->pc = 0x24EE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EE78u;
            // 0x24ee7c: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24CAA0u;
    if (runtime->hasFunction(0x24CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x24CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE80u; }
        if (ctx->pc != 0x24EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadEndCheck__13CMenuItemInfoFv_0x24caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EE80u; }
        if (ctx->pc != 0x24EE80u) { return; }
    }
    ctx->pc = 0x24EE80u;
label_24ee80:
    // 0x24ee80: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ee84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24ee84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24ee88: 0xa420dc20  sh          $zero, -0x23E0($at)
    ctx->pc = 0x24ee88u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958112), (uint16_t)GPR_U32(ctx, 0));
    // 0x24ee8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24ee90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24ee90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24ee94: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x24ee94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x24ee98: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24ee9c: 0xa4430178  sh          $v1, 0x178($v0)
    ctx->pc = 0x24ee9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 376), (uint16_t)GPR_U32(ctx, 3));
    // 0x24eea0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eea4: 0xa4430176  sh          $v1, 0x176($v0)
    ctx->pc = 0x24eea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 374), (uint16_t)GPR_U32(ctx, 3));
    // 0x24eea8: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eeac: 0xc08e88c  jal         func_23A230
    ctx->pc = 0x24EEACu;
    SET_GPR_U32(ctx, 31, 0x24EEB4u);
    ctx->pc = 0x24EEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24EEACu;
            // 0x24eeb0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A230u;
    if (runtime->hasFunction(0x23A230u)) {
        auto targetFn = runtime->lookupFunction(0x23A230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EEB4u; }
        if (ctx->pc != 0x24EEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenu__14CBaseMenuClassFif_0x23a230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24EEB4u; }
        if (ctx->pc != 0x24EEB4u) { return; }
    }
    ctx->pc = 0x24EEB4u;
label_24eeb4:
    // 0x24eeb4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x24eeb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eebc: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x24eebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x24eec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24eec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24eec4:
    // 0x24eec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24EEC4u;
    {
        const bool branch_taken_0x24eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eec4) {
            ctx->pc = 0x24EED0u;
            goto label_24eed0;
        }
    }
    ctx->pc = 0x24EECCu;
label_24eecc:
    // 0x24eecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24eeccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24eed0:
    // 0x24eed0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24eed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24eed4:
    // 0x24eed4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24eed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24eed8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24eed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24eedc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24eedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24eee0: 0x3e00008  jr          $ra
    ctx->pc = 0x24EEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24EEE0u;
            // 0x24eee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24EEE8u;
}
