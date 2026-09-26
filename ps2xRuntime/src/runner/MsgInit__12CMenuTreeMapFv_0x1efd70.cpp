#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MsgInit__12CMenuTreeMapFv
// Address: 0x1efd70 - 0x1eff40
void MsgInit__12CMenuTreeMapFv_0x1efd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MsgInit__12CMenuTreeMapFv_0x1efd70");
#endif

    switch (ctx->pc) {
        case 0x1efd98u: goto label_1efd98;
        case 0x1efdbcu: goto label_1efdbc;
        case 0x1efdc8u: goto label_1efdc8;
        case 0x1efe00u: goto label_1efe00;
        case 0x1efe20u: goto label_1efe20;
        case 0x1efe38u: goto label_1efe38;
        case 0x1efe50u: goto label_1efe50;
        case 0x1efe64u: goto label_1efe64;
        case 0x1efe6cu: goto label_1efe6c;
        case 0x1efe80u: goto label_1efe80;
        case 0x1efe90u: goto label_1efe90;
        case 0x1efea4u: goto label_1efea4;
        case 0x1efeb0u: goto label_1efeb0;
        default: break;
    }

    ctx->pc = 0x1efd70u;

    // 0x1efd70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1efd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1efd74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1efd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1efd78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1efd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1efd7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1efd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1efd80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1efd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1efd84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1efd84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1efd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1efd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1efd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1efd90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1efd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efd94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1efd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efd98:
    // 0x1efd98: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1efd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1efd9c: 0x2719021  addu        $s2, $s3, $s1
    ctx->pc = 0x1efd9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1efda0: 0x344217b0  ori         $v0, $v0, 0x17B0
    ctx->pc = 0x1efda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6064);
    // 0x1efda4: 0x26540130  addiu       $s4, $s2, 0x130
    ctx->pc = 0x1efda4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
    // 0x1efda8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1efdac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1efdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1efdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efdb4: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x1EFDB4u;
    SET_GPR_U32(ctx, 31, 0x1EFDBCu);
    ctx->pc = 0x1EFDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDB4u;
            // 0x1efdb8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDBCu; }
        if (ctx->pc != 0x1EFDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDBCu; }
        if (ctx->pc != 0x1EFDBCu) { return; }
    }
    ctx->pc = 0x1EFDBCu;
label_1efdbc:
    // 0x1efdbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1efdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efdc0: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x1EFDC0u;
    SET_GPR_U32(ctx, 31, 0x1EFDC8u);
    ctx->pc = 0x1EFDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDC0u;
            // 0x1efdc4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDC8u; }
        if (ctx->pc != 0x1EFDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDC8u; }
        if (ctx->pc != 0x1EFDC8u) { return; }
    }
    ctx->pc = 0x1EFDC8u;
label_1efdc8:
    // 0x1efdc8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1efdcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efdd0: 0xae4301e0  sw          $v1, 0x1E0($s2)
    ctx->pc = 0x1efdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 3));
    // 0x1efdd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1efdd8: 0xae421bfc  sw          $v0, 0x1BFC($s2)
    ctx->pc = 0x1efdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7164), GPR_U32(ctx, 2));
    // 0x1efddc: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1efddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1efde0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1EFDE0u;
    {
        const bool branch_taken_0x1efde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDE0u;
            // 0x1efde4: 0x263122d0  addiu       $s1, $s1, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efde0) {
            ctx->pc = 0x1EFD98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1efd98;
        }
    }
    ctx->pc = 0x1EFDE8u;
    // 0x1efde8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efdec: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1efdecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1efdf0: 0x8c2217b0  lw          $v0, 0x17B0($at)
    ctx->pc = 0x1efdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6064)));
    // 0x1efdf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1efdf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1efdf8: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x1EFDF8u;
    SET_GPR_U32(ctx, 31, 0x1EFE00u);
    ctx->pc = 0x1EFDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDF8u;
            // 0x1efdfc: 0xac22e3b8  sw          $v0, -0x1C48($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE00u; }
        if (ctx->pc != 0x1EFE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE00u; }
        if (ctx->pc != 0x1EFE00u) { return; }
    }
    ctx->pc = 0x1EFE00u;
label_1efe00:
    // 0x1efe00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1efe04: 0xac22e3bc  sw          $v0, -0x1C44($at)
    ctx->pc = 0x1efe04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960060), GPR_U32(ctx, 2));
    // 0x1efe08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1efe0c: 0x2610821  addu        $at, $s3, $at
    ctx->pc = 0x1efe0cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 1)));
    // 0x1efe10: 0x8c2217b0  lw          $v0, 0x17B0($at)
    ctx->pc = 0x1efe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6064)));
    // 0x1efe14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1efe14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1efe18: 0xc065a18  jal         func_196860
    ctx->pc = 0x1EFE18u;
    SET_GPR_U32(ctx, 31, 0x1EFE20u);
    ctx->pc = 0x1EFE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE18u;
            // 0x1efe1c: 0xac22e3a8  sw          $v0, -0x1C58($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960040), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE20u; }
        if (ctx->pc != 0x1EFE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE20u; }
        if (ctx->pc != 0x1EFE20u) { return; }
    }
    ctx->pc = 0x1EFE20u;
label_1efe20:
    // 0x1efe20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1efe24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1efe28: 0xac22e3ac  sw          $v0, -0x1C54($at)
    ctx->pc = 0x1efe28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960044), GPR_U32(ctx, 2));
    // 0x1efe2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1efe2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe30: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x1EFE30u;
    SET_GPR_U32(ctx, 31, 0x1EFE38u);
    ctx->pc = 0x1EFE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE30u;
            // 0x1efe34: 0x24a588c0  addiu       $a1, $a1, -0x7740 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE38u; }
        if (ctx->pc != 0x1EFE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE38u; }
        if (ctx->pc != 0x1EFE38u) { return; }
    }
    ctx->pc = 0x1EFE38u;
label_1efe38:
    // 0x1efe38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1efe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1efe3c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1efe3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1efe40: 0x8c30ca58  lw          $s0, -0x35A8($at)
    ctx->pc = 0x1efe40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953560)));
    // 0x1efe44: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1efe44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1efe48: 0xc0b5128  jal         func_2D44A0
    ctx->pc = 0x1EFE48u;
    SET_GPR_U32(ctx, 31, 0x1EFE50u);
    ctx->pc = 0x1EFE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE48u;
            // 0x1efe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44A0u;
    if (runtime->hasFunction(0x2D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE50u; }
        if (ctx->pc != 0x1EFE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDrawSize__5CFontFii_0x2d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE50u; }
        if (ctx->pc != 0x1EFE50u) { return; }
    }
    ctx->pc = 0x1EFE50u;
label_1efe50:
    // 0x1efe50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efe54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe58: 0xae0217e4  sw          $v0, 0x17E4($s0)
    ctx->pc = 0x1efe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6116), GPR_U32(ctx, 2));
    // 0x1efe5c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1EFE5Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE64u);
    ctx->pc = 0x1EFE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE5Cu;
            // 0x1efe60: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE64u; }
        if (ctx->pc != 0x1EFE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE64u; }
        if (ctx->pc != 0x1EFE64u) { return; }
    }
    ctx->pc = 0x1EFE64u;
label_1efe64:
    // 0x1efe64: 0xc07be14  jal         func_1EF850
    ctx->pc = 0x1EFE64u;
    SET_GPR_U32(ctx, 31, 0x1EFE6Cu);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE6Cu; }
        if (ctx->pc != 0x1EFE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE6Cu; }
        if (ctx->pc != 0x1EFE6Cu) { return; }
    }
    ctx->pc = 0x1EFE6Cu;
label_1efe6c:
    // 0x1efe6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1efe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efe70: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFE70u;
    {
        const bool branch_taken_0x1efe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE70u;
            // 0x1efe74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe70) {
            ctx->pc = 0x1EFE88u;
            goto label_1efe88;
        }
    }
    ctx->pc = 0x1EFE78u;
    // 0x1efe78: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1EFE78u;
    SET_GPR_U32(ctx, 31, 0x1EFE80u);
    ctx->pc = 0x1EFE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE78u;
            // 0x1efe7c: 0x24050051  addiu       $a1, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE80u; }
        if (ctx->pc != 0x1EFE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE80u; }
        if (ctx->pc != 0x1EFE80u) { return; }
    }
    ctx->pc = 0x1EFE80u;
label_1efe80:
    // 0x1efe80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFE80u;
    {
        const bool branch_taken_0x1efe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE80u;
            // 0x1efe84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe80) {
            ctx->pc = 0x1EFEA8u;
            goto label_1efea8;
        }
    }
    ctx->pc = 0x1EFE88u;
label_1efe88:
    // 0x1efe88: 0xc07be14  jal         func_1EF850
    ctx->pc = 0x1EFE88u;
    SET_GPR_U32(ctx, 31, 0x1EFE90u);
    ctx->pc = 0x1EF850u;
    if (runtime->hasFunction(0x1EF850u)) {
        auto targetFn = runtime->lookupFunction(0x1EF850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE90u; }
        if (ctx->pc != 0x1EFE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDngTreeMapFuncType__Fv_0x1ef850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFE90u; }
        if (ctx->pc != 0x1EFE90u) { return; }
    }
    ctx->pc = 0x1EFE90u;
label_1efe90:
    // 0x1efe90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efe90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efe94: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFE94u;
    {
        const bool branch_taken_0x1efe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE94u;
            // 0x1efe98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe94) {
            ctx->pc = 0x1EFEA4u;
            goto label_1efea4;
        }
    }
    ctx->pc = 0x1EFE9Cu;
    // 0x1efe9c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x1EFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EFEA4u);
    ctx->pc = 0x1EFEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE9Cu;
            // 0x1efea0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEA4u; }
        if (ctx->pc != 0x1EFEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEA4u; }
        if (ctx->pc != 0x1EFEA4u) { return; }
    }
    ctx->pc = 0x1EFEA4u;
label_1efea4:
    // 0x1efea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1efea8:
    // 0x1efea8: 0xc087898  jal         func_21E260
    ctx->pc = 0x1EFEA8u;
    SET_GPR_U32(ctx, 31, 0x1EFEB0u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEB0u; }
        if (ctx->pc != 0x1EFEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFEB0u; }
        if (ctx->pc != 0x1EFEB0u) { return; }
    }
    ctx->pc = 0x1EFEB0u;
label_1efeb0:
    // 0x1efeb0: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1efeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1efeb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efeb8: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x1efeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1efebc: 0x8e051e14  lw          $a1, 0x1E14($s0)
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7700)));
    // 0x1efec0: 0x2467ffce  addiu       $a3, $v1, -0x32
    ctx->pc = 0x1efec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967246));
    // 0x1efec4: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x1efec4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1efec8: 0x51843  sra         $v1, $a1, 1
    ctx->pc = 0x1efec8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1efecc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1efed0: 0xae031b94  sw          $v1, 0x1B94($s0)
    ctx->pc = 0x1efed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7060), GPR_U32(ctx, 3));
    // 0x1efed4: 0xae071b98  sw          $a3, 0x1B98($s0)
    ctx->pc = 0x1efed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7064), GPR_U32(ctx, 7));
    // 0x1efed8: 0xae061c34  sw          $a2, 0x1C34($s0)
    ctx->pc = 0x1efed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7220), GPR_U32(ctx, 6));
    // 0x1efedc: 0x8f848780  lw          $a0, -0x7880($gp)
    ctx->pc = 0x1efedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1efee0: 0x8e031e18  lw          $v1, 0x1E18($s0)
    ctx->pc = 0x1efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7704)));
    // 0x1efee4: 0x42883  sra         $a1, $a0, 2
    ctx->pc = 0x1efee4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 2));
    // 0x1efee8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1efee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1efeec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1efef0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1efef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1efef4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1efef8: 0xae031b9c  sw          $v1, 0x1B9C($s0)
    ctx->pc = 0x1efef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 3));
    // 0x1efefc: 0xae071ba0  sw          $a3, 0x1BA0($s0)
    ctx->pc = 0x1efefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 7));
    // 0x1eff00: 0xae061c38  sw          $a2, 0x1C38($s0)
    ctx->pc = 0x1eff00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 6));
    // 0x1eff04: 0x93838f08  lbu         $v1, -0x70F8($gp)
    ctx->pc = 0x1eff04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938376)));
    // 0x1eff08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFF08u;
    {
        const bool branch_taken_0x1eff08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF08u;
            // 0x1eff0c: 0xa7878f18  sh          $a3, -0x70E8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938392), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff08) {
            ctx->pc = 0x1EFF20u;
            goto label_1eff20;
        }
    }
    ctx->pc = 0x1EFF10u;
    // 0x1eff10: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1eff14: 0xae031b9c  sw          $v1, 0x1B9C($s0)
    ctx->pc = 0x1eff14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7068), GPR_U32(ctx, 3));
    // 0x1eff18: 0xae071ba0  sw          $a3, 0x1BA0($s0)
    ctx->pc = 0x1eff18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 7));
    // 0x1eff1c: 0xae061c38  sw          $a2, 0x1C38($s0)
    ctx->pc = 0x1eff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7224), GPR_U32(ctx, 6));
label_1eff20:
    // 0x1eff20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eff24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eff24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eff28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eff28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eff2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eff2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eff30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eff30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eff34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eff34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff38: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF38u;
            // 0x1eff3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFF40u;
}
