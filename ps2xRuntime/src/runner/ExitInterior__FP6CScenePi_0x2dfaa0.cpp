#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExitInterior__FP6CScenePi
// Address: 0x2dfaa0 - 0x2dfcec
void ExitInterior__FP6CScenePi_0x2dfaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExitInterior__FP6CScenePi_0x2dfaa0");
#endif

    switch (ctx->pc) {
        case 0x2dfaa0u: goto label_2dfaa0;
        case 0x2dfaa4u: goto label_2dfaa4;
        case 0x2dfaa8u: goto label_2dfaa8;
        case 0x2dfaacu: goto label_2dfaac;
        case 0x2dfab0u: goto label_2dfab0;
        case 0x2dfab4u: goto label_2dfab4;
        case 0x2dfab8u: goto label_2dfab8;
        case 0x2dfabcu: goto label_2dfabc;
        case 0x2dfac0u: goto label_2dfac0;
        case 0x2dfac4u: goto label_2dfac4;
        case 0x2dfac8u: goto label_2dfac8;
        case 0x2dfaccu: goto label_2dfacc;
        case 0x2dfad0u: goto label_2dfad0;
        case 0x2dfad4u: goto label_2dfad4;
        case 0x2dfad8u: goto label_2dfad8;
        case 0x2dfadcu: goto label_2dfadc;
        case 0x2dfae0u: goto label_2dfae0;
        case 0x2dfae4u: goto label_2dfae4;
        case 0x2dfae8u: goto label_2dfae8;
        case 0x2dfaecu: goto label_2dfaec;
        case 0x2dfaf0u: goto label_2dfaf0;
        case 0x2dfaf4u: goto label_2dfaf4;
        case 0x2dfaf8u: goto label_2dfaf8;
        case 0x2dfafcu: goto label_2dfafc;
        case 0x2dfb00u: goto label_2dfb00;
        case 0x2dfb04u: goto label_2dfb04;
        case 0x2dfb08u: goto label_2dfb08;
        case 0x2dfb0cu: goto label_2dfb0c;
        case 0x2dfb10u: goto label_2dfb10;
        case 0x2dfb14u: goto label_2dfb14;
        case 0x2dfb18u: goto label_2dfb18;
        case 0x2dfb1cu: goto label_2dfb1c;
        case 0x2dfb20u: goto label_2dfb20;
        case 0x2dfb24u: goto label_2dfb24;
        case 0x2dfb28u: goto label_2dfb28;
        case 0x2dfb2cu: goto label_2dfb2c;
        case 0x2dfb30u: goto label_2dfb30;
        case 0x2dfb34u: goto label_2dfb34;
        case 0x2dfb38u: goto label_2dfb38;
        case 0x2dfb3cu: goto label_2dfb3c;
        case 0x2dfb40u: goto label_2dfb40;
        case 0x2dfb44u: goto label_2dfb44;
        case 0x2dfb48u: goto label_2dfb48;
        case 0x2dfb4cu: goto label_2dfb4c;
        case 0x2dfb50u: goto label_2dfb50;
        case 0x2dfb54u: goto label_2dfb54;
        case 0x2dfb58u: goto label_2dfb58;
        case 0x2dfb5cu: goto label_2dfb5c;
        case 0x2dfb60u: goto label_2dfb60;
        case 0x2dfb64u: goto label_2dfb64;
        case 0x2dfb68u: goto label_2dfb68;
        case 0x2dfb6cu: goto label_2dfb6c;
        case 0x2dfb70u: goto label_2dfb70;
        case 0x2dfb74u: goto label_2dfb74;
        case 0x2dfb78u: goto label_2dfb78;
        case 0x2dfb7cu: goto label_2dfb7c;
        case 0x2dfb80u: goto label_2dfb80;
        case 0x2dfb84u: goto label_2dfb84;
        case 0x2dfb88u: goto label_2dfb88;
        case 0x2dfb8cu: goto label_2dfb8c;
        case 0x2dfb90u: goto label_2dfb90;
        case 0x2dfb94u: goto label_2dfb94;
        case 0x2dfb98u: goto label_2dfb98;
        case 0x2dfb9cu: goto label_2dfb9c;
        case 0x2dfba0u: goto label_2dfba0;
        case 0x2dfba4u: goto label_2dfba4;
        case 0x2dfba8u: goto label_2dfba8;
        case 0x2dfbacu: goto label_2dfbac;
        case 0x2dfbb0u: goto label_2dfbb0;
        case 0x2dfbb4u: goto label_2dfbb4;
        case 0x2dfbb8u: goto label_2dfbb8;
        case 0x2dfbbcu: goto label_2dfbbc;
        case 0x2dfbc0u: goto label_2dfbc0;
        case 0x2dfbc4u: goto label_2dfbc4;
        case 0x2dfbc8u: goto label_2dfbc8;
        case 0x2dfbccu: goto label_2dfbcc;
        case 0x2dfbd0u: goto label_2dfbd0;
        case 0x2dfbd4u: goto label_2dfbd4;
        case 0x2dfbd8u: goto label_2dfbd8;
        case 0x2dfbdcu: goto label_2dfbdc;
        case 0x2dfbe0u: goto label_2dfbe0;
        case 0x2dfbe4u: goto label_2dfbe4;
        case 0x2dfbe8u: goto label_2dfbe8;
        case 0x2dfbecu: goto label_2dfbec;
        case 0x2dfbf0u: goto label_2dfbf0;
        case 0x2dfbf4u: goto label_2dfbf4;
        case 0x2dfbf8u: goto label_2dfbf8;
        case 0x2dfbfcu: goto label_2dfbfc;
        case 0x2dfc00u: goto label_2dfc00;
        case 0x2dfc04u: goto label_2dfc04;
        case 0x2dfc08u: goto label_2dfc08;
        case 0x2dfc0cu: goto label_2dfc0c;
        case 0x2dfc10u: goto label_2dfc10;
        case 0x2dfc14u: goto label_2dfc14;
        case 0x2dfc18u: goto label_2dfc18;
        case 0x2dfc1cu: goto label_2dfc1c;
        case 0x2dfc20u: goto label_2dfc20;
        case 0x2dfc24u: goto label_2dfc24;
        case 0x2dfc28u: goto label_2dfc28;
        case 0x2dfc2cu: goto label_2dfc2c;
        case 0x2dfc30u: goto label_2dfc30;
        case 0x2dfc34u: goto label_2dfc34;
        case 0x2dfc38u: goto label_2dfc38;
        case 0x2dfc3cu: goto label_2dfc3c;
        case 0x2dfc40u: goto label_2dfc40;
        case 0x2dfc44u: goto label_2dfc44;
        case 0x2dfc48u: goto label_2dfc48;
        case 0x2dfc4cu: goto label_2dfc4c;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc54u: goto label_2dfc54;
        case 0x2dfc58u: goto label_2dfc58;
        case 0x2dfc5cu: goto label_2dfc5c;
        case 0x2dfc60u: goto label_2dfc60;
        case 0x2dfc64u: goto label_2dfc64;
        case 0x2dfc68u: goto label_2dfc68;
        case 0x2dfc6cu: goto label_2dfc6c;
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfc78u: goto label_2dfc78;
        case 0x2dfc7cu: goto label_2dfc7c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfc84u: goto label_2dfc84;
        case 0x2dfc88u: goto label_2dfc88;
        case 0x2dfc8cu: goto label_2dfc8c;
        case 0x2dfc90u: goto label_2dfc90;
        case 0x2dfc94u: goto label_2dfc94;
        case 0x2dfc98u: goto label_2dfc98;
        case 0x2dfc9cu: goto label_2dfc9c;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfca4u: goto label_2dfca4;
        case 0x2dfca8u: goto label_2dfca8;
        case 0x2dfcacu: goto label_2dfcac;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcb4u: goto label_2dfcb4;
        case 0x2dfcb8u: goto label_2dfcb8;
        case 0x2dfcbcu: goto label_2dfcbc;
        case 0x2dfcc0u: goto label_2dfcc0;
        case 0x2dfcc4u: goto label_2dfcc4;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcccu: goto label_2dfccc;
        case 0x2dfcd0u: goto label_2dfcd0;
        case 0x2dfcd4u: goto label_2dfcd4;
        case 0x2dfcd8u: goto label_2dfcd8;
        case 0x2dfcdcu: goto label_2dfcdc;
        case 0x2dfce0u: goto label_2dfce0;
        case 0x2dfce4u: goto label_2dfce4;
        case 0x2dfce8u: goto label_2dfce8;
        default: break;
    }

    ctx->pc = 0x2dfaa0u;

label_2dfaa0:
    // 0x2dfaa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dfaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2dfaa4:
    // 0x2dfaa4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2dfaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2dfaa8:
    // 0x2dfaa8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dfaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2dfaac:
    // 0x2dfaac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dfaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2dfab0:
    // 0x2dfab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dfab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dfab4:
    // 0x2dfab4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dfab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfab8:
    // 0x2dfab8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dfab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dfabc:
    // 0x2dfabc: 0xc0b7d7c  jal         func_2DF5F0
label_2dfac0:
    if (ctx->pc == 0x2DFAC0u) {
        ctx->pc = 0x2DFAC0u;
            // 0x2dfac0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2DFAC4u;
        goto label_2dfac4;
    }
    ctx->pc = 0x2DFABCu;
    SET_GPR_U32(ctx, 31, 0x2DFAC4u);
    ctx->pc = 0x2DFAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFABCu;
            // 0x2dfac0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5F0u;
    if (runtime->hasFunction(0x2DF5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAC4u; }
        if (ctx->pc != 0x2DFAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InInterior__Fv_0x2df5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAC4u; }
        if (ctx->pc != 0x2DFAC4u) { return; }
    }
    ctx->pc = 0x2DFAC4u;
label_2dfac4:
    // 0x2dfac4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_2dfac8:
    if (ctx->pc == 0x2DFAC8u) {
        ctx->pc = 0x2DFAC8u;
            // 0x2dfac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFACCu;
        goto label_2dfacc;
    }
    ctx->pc = 0x2DFAC4u;
    {
        const bool branch_taken_0x2dfac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFAC4u;
            // 0x2dfac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfac4) {
            ctx->pc = 0x2DFCD0u;
            goto label_2dfcd0;
        }
    }
    ctx->pc = 0x2DFACCu;
label_2dfacc:
    // 0x2dfacc: 0xc0b7e8c  jal         func_2DFA30
label_2dfad0:
    if (ctx->pc == 0x2DFAD0u) {
        ctx->pc = 0x2DFAD4u;
        goto label_2dfad4;
    }
    ctx->pc = 0x2DFACCu;
    SET_GPR_U32(ctx, 31, 0x2DFAD4u);
    ctx->pc = 0x2DFA30u;
    if (runtime->hasFunction(0x2DFA30u)) {
        auto targetFn = runtime->lookupFunction(0x2DFA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAD4u; }
        if (ctx->pc != 0x2DFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteInterior__FP6CScene_0x2dfa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAD4u; }
        if (ctx->pc != 0x2DFAD4u) { return; }
    }
    ctx->pc = 0x2DFAD4u;
label_2dfad4:
    // 0x2dfad4: 0x8e252e50  lw          $a1, 0x2E50($s1)
    ctx->pc = 0x2dfad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_2dfad8:
    // 0x2dfad8: 0xc0a0ed8  jal         func_283B60
label_2dfadc:
    if (ctx->pc == 0x2DFADCu) {
        ctx->pc = 0x2DFADCu;
            // 0x2dfadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFAE0u;
        goto label_2dfae0;
    }
    ctx->pc = 0x2DFAD8u;
    SET_GPR_U32(ctx, 31, 0x2DFAE0u);
    ctx->pc = 0x2DFADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFAD8u;
            // 0x2dfadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAE0u; }
        if (ctx->pc != 0x2DFAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFAE0u; }
        if (ctx->pc != 0x2DFAE0u) { return; }
    }
    ctx->pc = 0x2DFAE0u;
label_2dfae0:
    // 0x2dfae0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dfae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfae4:
    // 0x2dfae4: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_2dfae8:
    if (ctx->pc == 0x2DFAE8u) {
        ctx->pc = 0x2DFAECu;
        goto label_2dfaec;
    }
    ctx->pc = 0x2DFAE4u;
    {
        const bool branch_taken_0x2dfae4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfae4) {
            ctx->pc = 0x2DFB80u;
            goto label_2dfb80;
        }
    }
    ctx->pc = 0x2DFAECu;
label_2dfaec:
    // 0x2dfaec: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dfaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfaf0:
    // 0x2dfaf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2dfaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2dfaf4:
    // 0x2dfaf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfaf8:
    // 0x2dfaf8: 0x24a50f80  addiu       $a1, $a1, 0xF80
    ctx->pc = 0x2dfaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3968));
label_2dfafc:
    // 0x2dfafc: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2dfafcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2dfb00:
    // 0x2dfb00: 0x320f809  jalr        $t9
label_2dfb04:
    if (ctx->pc == 0x2DFB04u) {
        ctx->pc = 0x2DFB04u;
            // 0x2dfb04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2DFB08u;
        goto label_2dfb08;
    }
    ctx->pc = 0x2DFB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DFB08u);
        ctx->pc = 0x2DFB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB00u;
            // 0x2dfb04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DFB08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB08u; }
            if (ctx->pc != 0x2DFB08u) { return; }
        }
        }
    }
    ctx->pc = 0x2DFB08u;
label_2dfb08:
    // 0x2dfb08: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dfb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfb0c:
    // 0x2dfb0c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dfb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dfb10:
    // 0x2dfb10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb14:
    // 0x2dfb14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2dfb14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2dfb18:
    // 0x2dfb18: 0x320f809  jalr        $t9
label_2dfb1c:
    if (ctx->pc == 0x2DFB1Cu) {
        ctx->pc = 0x2DFB1Cu;
            // 0x2dfb1c: 0x24a58e50  addiu       $a1, $a1, -0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938192));
        ctx->pc = 0x2DFB20u;
        goto label_2dfb20;
    }
    ctx->pc = 0x2DFB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DFB20u);
        ctx->pc = 0x2DFB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB18u;
            // 0x2dfb1c: 0x24a58e50  addiu       $a1, $a1, -0x71B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DFB20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB20u; }
            if (ctx->pc != 0x2DFB20u) { return; }
        }
        }
    }
    ctx->pc = 0x2DFB20u;
label_2dfb20:
    // 0x2dfb20: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfb24:
    // 0x2dfb24: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2dfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2dfb28:
    // 0x2dfb28: 0xc4208e64  lwc1        $f0, -0x719C($at)
    ctx->pc = 0x2dfb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294938212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfb2c:
    // 0x2dfb2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dfb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2dfb30:
    // 0x2dfb30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dfb30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dfb34:
    // 0x2dfb34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dfb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dfb38:
    // 0x2dfb38: 0xc04c374  jal         func_130DD0
label_2dfb3c:
    if (ctx->pc == 0x2DFB3Cu) {
        ctx->pc = 0x2DFB3Cu;
            // 0x2dfb3c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2DFB40u;
        goto label_2dfb40;
    }
    ctx->pc = 0x2DFB38u;
    SET_GPR_U32(ctx, 31, 0x2DFB40u);
    ctx->pc = 0x2DFB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB38u;
            // 0x2dfb3c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB40u; }
        if (ctx->pc != 0x2DFB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB40u; }
        if (ctx->pc != 0x2DFB40u) { return; }
    }
    ctx->pc = 0x2DFB40u;
label_2dfb40:
    // 0x2dfb40: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dfb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfb44:
    // 0x2dfb44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2dfb44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2dfb48:
    // 0x2dfb48: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2dfb48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2dfb4c:
    // 0x2dfb4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb50:
    // 0x2dfb50: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2dfb50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2dfb54:
    // 0x2dfb54: 0x320f809  jalr        $t9
label_2dfb58:
    if (ctx->pc == 0x2DFB58u) {
        ctx->pc = 0x2DFB58u;
            // 0x2dfb58: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DFB5Cu;
        goto label_2dfb5c;
    }
    ctx->pc = 0x2DFB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DFB5Cu);
        ctx->pc = 0x2DFB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB54u;
            // 0x2dfb58: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DFB5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB5Cu; }
            if (ctx->pc != 0x2DFB5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DFB5Cu;
label_2dfb5c:
    // 0x2dfb5c: 0xc05cdec  jal         func_1737B0
label_2dfb60:
    if (ctx->pc == 0x2DFB60u) {
        ctx->pc = 0x2DFB60u;
            // 0x2dfb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB64u;
        goto label_2dfb64;
    }
    ctx->pc = 0x2DFB5Cu;
    SET_GPR_U32(ctx, 31, 0x2DFB64u);
    ctx->pc = 0x2DFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB5Cu;
            // 0x2dfb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1737B0u;
    if (runtime->hasFunction(0x1737B0u)) {
        auto targetFn = runtime->lookupFunction(0x1737B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB64u; }
        if (ctx->pc != 0x2DFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetDAPosition__11CCharacter2Fv_0x1737b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB64u; }
        if (ctx->pc != 0x2DFB64u) { return; }
    }
    ctx->pc = 0x2DFB64u;
label_2dfb64:
    // 0x2dfb64: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dfb64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dfb68:
    // 0x2dfb68: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2dfb68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2dfb6c:
    // 0x2dfb6c: 0x320f809  jalr        $t9
label_2dfb70:
    if (ctx->pc == 0x2DFB70u) {
        ctx->pc = 0x2DFB70u;
            // 0x2dfb70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB74u;
        goto label_2dfb74;
    }
    ctx->pc = 0x2DFB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DFB74u);
        ctx->pc = 0x2DFB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB6Cu;
            // 0x2dfb70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DFB74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB74u; }
            if (ctx->pc != 0x2DFB74u) { return; }
        }
        }
    }
    ctx->pc = 0x2DFB74u;
label_2dfb74:
    // 0x2dfb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb78:
    // 0x2dfb78: 0xc05d0b8  jal         func_1742E0
label_2dfb7c:
    if (ctx->pc == 0x2DFB7Cu) {
        ctx->pc = 0x2DFB7Cu;
            // 0x2dfb7c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DFB80u;
        goto label_2dfb80;
    }
    ctx->pc = 0x2DFB78u;
    SET_GPR_U32(ctx, 31, 0x2DFB80u);
    ctx->pc = 0x2DFB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB78u;
            // 0x2dfb7c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1742E0u;
    if (runtime->hasFunction(0x1742E0u)) {
        auto targetFn = runtime->lookupFunction(0x1742E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB80u; }
        if (ctx->pc != 0x2DFB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepDA__11CCharacter2Fi_0x1742e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB80u; }
        if (ctx->pc != 0x2DFB80u) { return; }
    }
    ctx->pc = 0x2DFB80u;
label_2dfb80:
    // 0x2dfb80: 0x8e252e54  lw          $a1, 0x2E54($s1)
    ctx->pc = 0x2dfb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11860)));
label_2dfb84:
    // 0x2dfb84: 0xc0a0e30  jal         func_2838C0
label_2dfb88:
    if (ctx->pc == 0x2DFB88u) {
        ctx->pc = 0x2DFB88u;
            // 0x2dfb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB8Cu;
        goto label_2dfb8c;
    }
    ctx->pc = 0x2DFB84u;
    SET_GPR_U32(ctx, 31, 0x2DFB8Cu);
    ctx->pc = 0x2DFB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB84u;
            // 0x2dfb88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB8Cu; }
        if (ctx->pc != 0x2DFB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFB8Cu; }
        if (ctx->pc != 0x2DFB8Cu) { return; }
    }
    ctx->pc = 0x2DFB8Cu;
label_2dfb8c:
    // 0x2dfb8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dfb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb90:
    // 0x2dfb90: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2dfb94:
    if (ctx->pc == 0x2DFB94u) {
        ctx->pc = 0x2DFB94u;
            // 0x2dfb94: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DFB98u;
        goto label_2dfb98;
    }
    ctx->pc = 0x2DFB90u;
    {
        const bool branch_taken_0x2dfb90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB90u;
            // 0x2dfb94: 0x3c0501f6  lui         $a1, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfb90) {
            ctx->pc = 0x2DFBB4u;
            goto label_2dfbb4;
        }
    }
    ctx->pc = 0x2DFB98u;
label_2dfb98:
    // 0x2dfb98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfb9c:
    // 0x2dfb9c: 0xc04c504  jal         func_131410
label_2dfba0:
    if (ctx->pc == 0x2DFBA0u) {
        ctx->pc = 0x2DFBA0u;
            // 0x2dfba0: 0x24a58e70  addiu       $a1, $a1, -0x7190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
        ctx->pc = 0x2DFBA4u;
        goto label_2dfba4;
    }
    ctx->pc = 0x2DFB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DFBA4u);
    ctx->pc = 0x2DFBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFB9Cu;
            // 0x2dfba0: 0x24a58e70  addiu       $a1, $a1, -0x7190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBA4u; }
        if (ctx->pc != 0x2DFBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBA4u; }
        if (ctx->pc != 0x2DFBA4u) { return; }
    }
    ctx->pc = 0x2DFBA4u;
label_2dfba4:
    // 0x2dfba4: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dfba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dfba8:
    // 0x2dfba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dfba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbac:
    // 0x2dfbac: 0xc04c518  jal         func_131460
label_2dfbb0:
    if (ctx->pc == 0x2DFBB0u) {
        ctx->pc = 0x2DFBB0u;
            // 0x2dfbb0: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->pc = 0x2DFBB4u;
        goto label_2dfbb4;
    }
    ctx->pc = 0x2DFBACu;
    SET_GPR_U32(ctx, 31, 0x2DFBB4u);
    ctx->pc = 0x2DFBB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBACu;
            // 0x2dfbb0: 0x24a58e80  addiu       $a1, $a1, -0x7180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBB4u; }
        if (ctx->pc != 0x2DFBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBB4u; }
        if (ctx->pc != 0x2DFBB4u) { return; }
    }
    ctx->pc = 0x2DFBB4u;
label_2dfbb4:
    // 0x2dfbb4: 0xc0b7b0c  jal         func_2DEC30
label_2dfbb8:
    if (ctx->pc == 0x2DFBB8u) {
        ctx->pc = 0x2DFBBCu;
        goto label_2dfbbc;
    }
    ctx->pc = 0x2DFBB4u;
    SET_GPR_U32(ctx, 31, 0x2DFBBCu);
    ctx->pc = 0x2DEC30u;
    if (runtime->hasFunction(0x2DEC30u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBBCu; }
        if (ctx->pc != 0x2DFBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearSubMapNo__Fv_0x2dec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBBCu; }
        if (ctx->pc != 0x2DFBBCu) { return; }
    }
    ctx->pc = 0x2DFBBCu;
label_2dfbbc:
    // 0x2dfbbc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2dfbc0:
    if (ctx->pc == 0x2DFBC0u) {
        ctx->pc = 0x2DFBC0u;
            // 0x2dfbc0: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DFBC4u;
        goto label_2dfbc4;
    }
    ctx->pc = 0x2DFBBCu;
    {
        const bool branch_taken_0x2dfbbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBBCu;
            // 0x2dfbc0: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfbbc) {
            ctx->pc = 0x2DFBCCu;
            goto label_2dfbcc;
        }
    }
    ctx->pc = 0x2DFBC4u;
label_2dfbc4:
    // 0x2dfbc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dfbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dfbc8:
    // 0x2dfbc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2dfbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2dfbcc:
    // 0x2dfbcc: 0x80228e10  lb          $v0, -0x71F0($at)
    ctx->pc = 0x2dfbccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294938128)));
label_2dfbd0:
    // 0x2dfbd0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2dfbd4:
    if (ctx->pc == 0x2DFBD4u) {
        ctx->pc = 0x2DFBD4u;
            // 0x2dfbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBD8u;
        goto label_2dfbd8;
    }
    ctx->pc = 0x2DFBD0u;
    {
        const bool branch_taken_0x2dfbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBD0u;
            // 0x2dfbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfbd0) {
            ctx->pc = 0x2DFC2Cu;
            goto label_2dfc2c;
        }
    }
    ctx->pc = 0x2DFBD8u;
label_2dfbd8:
    // 0x2dfbd8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2dfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2dfbdc:
    // 0x2dfbdc: 0xc0b49fc  jal         func_2D27F0
label_2dfbe0:
    if (ctx->pc == 0x2DFBE0u) {
        ctx->pc = 0x2DFBE0u;
            // 0x2dfbe0: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
        ctx->pc = 0x2DFBE4u;
        goto label_2dfbe4;
    }
    ctx->pc = 0x2DFBDCu;
    SET_GPR_U32(ctx, 31, 0x2DFBE4u);
    ctx->pc = 0x2DFBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFBDCu;
            // 0x2dfbe0: 0x24848e10  addiu       $a0, $a0, -0x71F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBE4u; }
        if (ctx->pc != 0x2DFBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFBE4u; }
        if (ctx->pc != 0x2DFBE4u) { return; }
    }
    ctx->pc = 0x2DFBE4u;
label_2dfbe4:
    // 0x2dfbe4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_2dfbe8:
    if (ctx->pc == 0x2DFBE8u) {
        ctx->pc = 0x2DFBECu;
        goto label_2dfbec;
    }
    ctx->pc = 0x2DFBE4u;
    {
        const bool branch_taken_0x2dfbe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfbe4) {
            ctx->pc = 0x2DFBF0u;
            goto label_2dfbf0;
        }
    }
    ctx->pc = 0x2DFBECu;
label_2dfbec:
    // 0x2dfbec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2dfbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2dfbf0:
    // 0x2dfbf0: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_2dfbf4:
    if (ctx->pc == 0x2DFBF4u) {
        ctx->pc = 0x2DFBF8u;
        goto label_2dfbf8;
    }
    ctx->pc = 0x2DFBF0u;
    {
        const bool branch_taken_0x2dfbf0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2dfbf0) {
            ctx->pc = 0x2DFC34u;
            goto label_2dfc34;
        }
    }
    ctx->pc = 0x2DFBF8u;
label_2dfbf8:
    // 0x2dfbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfbfc:
    // 0x2dfbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dfbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc00:
    // 0x2dfc00: 0xc0b7c6c  jal         func_2DF1B0
label_2dfc04:
    if (ctx->pc == 0x2DFC04u) {
        ctx->pc = 0x2DFC04u;
            // 0x2dfc04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC08u;
        goto label_2dfc08;
    }
    ctx->pc = 0x2DFC00u;
    SET_GPR_U32(ctx, 31, 0x2DFC08u);
    ctx->pc = 0x2DFC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC00u;
            // 0x2dfc04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1B0u;
    if (runtime->hasFunction(0x2DF1B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC08u; }
        if (ctx->pc != 0x2DFC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSubMap__FP6CSceneii_0x2df1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC08u; }
        if (ctx->pc != 0x2DFC08u) { return; }
    }
    ctx->pc = 0x2DFC08u;
label_2dfc08:
    // 0x2dfc08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2dfc0c:
    if (ctx->pc == 0x2DFC0Cu) {
        ctx->pc = 0x2DFC10u;
        goto label_2dfc10;
    }
    ctx->pc = 0x2DFC08u;
    {
        const bool branch_taken_0x2dfc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc08) {
            ctx->pc = 0x2DFC34u;
            goto label_2dfc34;
        }
    }
    ctx->pc = 0x2DFC10u;
label_2dfc10:
    // 0x2dfc10: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfc14:
    // 0x2dfc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc18:
    // 0x2dfc18: 0x8c268d70  lw          $a2, -0x7290($at)
    ctx->pc = 0x2dfc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937968)));
label_2dfc1c:
    // 0x2dfc1c: 0xc0a11b4  jal         func_2846D0
label_2dfc20:
    if (ctx->pc == 0x2DFC20u) {
        ctx->pc = 0x2DFC20u;
            // 0x2dfc20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DFC24u;
        goto label_2dfc24;
    }
    ctx->pc = 0x2DFC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC24u);
    ctx->pc = 0x2DFC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC1Cu;
            // 0x2dfc20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC24u; }
        if (ctx->pc != 0x2DFC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC24u; }
        if (ctx->pc != 0x2DFC24u) { return; }
    }
    ctx->pc = 0x2DFC24u;
label_2dfc24:
    // 0x2dfc24: 0x10000003  b           . + 4 + (0x3 << 2)
label_2dfc28:
    if (ctx->pc == 0x2DFC28u) {
        ctx->pc = 0x2DFC2Cu;
        goto label_2dfc2c;
    }
    ctx->pc = 0x2DFC24u;
    {
        const bool branch_taken_0x2dfc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfc24) {
            ctx->pc = 0x2DFC34u;
            goto label_2dfc34;
        }
    }
    ctx->pc = 0x2DFC2Cu;
label_2dfc2c:
    // 0x2dfc2c: 0xc0a12e0  jal         func_284B80
label_2dfc30:
    if (ctx->pc == 0x2DFC30u) {
        ctx->pc = 0x2DFC30u;
            // 0x2dfc30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DFC34u;
        goto label_2dfc34;
    }
    ctx->pc = 0x2DFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC34u);
    ctx->pc = 0x2DFC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC2Cu;
            // 0x2dfc30: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B80u;
    if (runtime->hasFunction(0x284B80u)) {
        auto targetFn = runtime->lookupFunction(0x284B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC34u; }
        if (ctx->pc != 0x2DFC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowSubMapNo__6CSceneFi_0x284b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC34u; }
        if (ctx->pc != 0x2DFC34u) { return; }
    }
    ctx->pc = 0x2DFC34u;
label_2dfc34:
    // 0x2dfc34: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfc38:
    // 0x2dfc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc3c:
    // 0x2dfc3c: 0x8c268d50  lw          $a2, -0x72B0($at)
    ctx->pc = 0x2dfc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
label_2dfc40:
    // 0x2dfc40: 0xc0a11b4  jal         func_2846D0
label_2dfc44:
    if (ctx->pc == 0x2DFC44u) {
        ctx->pc = 0x2DFC44u;
            // 0x2dfc44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DFC48u;
        goto label_2dfc48;
    }
    ctx->pc = 0x2DFC40u;
    SET_GPR_U32(ctx, 31, 0x2DFC48u);
    ctx->pc = 0x2DFC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC40u;
            // 0x2dfc44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC48u; }
        if (ctx->pc != 0x2DFC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC48u; }
        if (ctx->pc != 0x2DFC48u) { return; }
    }
    ctx->pc = 0x2DFC48u;
label_2dfc48:
    // 0x2dfc48: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfc4c:
    // 0x2dfc4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dfc50:
    // 0x2dfc50: 0x8c238d50  lw          $v1, -0x72B0($at)
    ctx->pc = 0x2dfc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
label_2dfc54:
    // 0x2dfc54: 0xae232e5c  sw          $v1, 0x2E5C($s1)
    ctx->pc = 0x2dfc54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11868), GPR_U32(ctx, 3));
label_2dfc58:
    // 0x2dfc58: 0x8f839eb4  lw          $v1, -0x614C($gp)
    ctx->pc = 0x2dfc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942388)));
label_2dfc5c:
    // 0x2dfc5c: 0xaf839eb8  sw          $v1, -0x6148($gp)
    ctx->pc = 0x2dfc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942392), GPR_U32(ctx, 3));
label_2dfc60:
    // 0x2dfc60: 0xaf829eb4  sw          $v0, -0x614C($gp)
    ctx->pc = 0x2dfc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942388), GPR_U32(ctx, 2));
label_2dfc64:
    // 0x2dfc64: 0x8e252e5c  lw          $a1, 0x2E5C($s1)
    ctx->pc = 0x2dfc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11868)));
label_2dfc68:
    // 0x2dfc68: 0xc0a0f58  jal         func_283D60
label_2dfc6c:
    if (ctx->pc == 0x2DFC6Cu) {
        ctx->pc = 0x2DFC6Cu;
            // 0x2dfc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC70u;
        goto label_2dfc70;
    }
    ctx->pc = 0x2DFC68u;
    SET_GPR_U32(ctx, 31, 0x2DFC70u);
    ctx->pc = 0x2DFC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC68u;
            // 0x2dfc6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC70u; }
        if (ctx->pc != 0x2DFC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC70u; }
        if (ctx->pc != 0x2DFC70u) { return; }
    }
    ctx->pc = 0x2DFC70u;
label_2dfc70:
    // 0x2dfc70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2dfc74:
    if (ctx->pc == 0x2DFC74u) {
        ctx->pc = 0x2DFC74u;
            // 0x2dfc74: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2DFC78u;
        goto label_2dfc78;
    }
    ctx->pc = 0x2DFC70u;
    {
        const bool branch_taken_0x2dfc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC70u;
            // 0x2dfc74: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfc70) {
            ctx->pc = 0x2DFC80u;
            goto label_2dfc80;
        }
    }
    ctx->pc = 0x2DFC78u;
label_2dfc78:
    // 0x2dfc78: 0xc6202f6c  lwc1        $f0, 0x2F6C($s1)
    ctx->pc = 0x2dfc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfc7c:
    // 0x2dfc7c: 0xe4400c88  swc1        $f0, 0xC88($v0)
    ctx->pc = 0x2dfc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3208), bits); }
label_2dfc80:
    // 0x2dfc80: 0x8c258d50  lw          $a1, -0x72B0($at)
    ctx->pc = 0x2dfc80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937936)));
label_2dfc84:
    // 0x2dfc84: 0xc0a0f24  jal         func_283C90
label_2dfc88:
    if (ctx->pc == 0x2DFC88u) {
        ctx->pc = 0x2DFC88u;
            // 0x2dfc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC8Cu;
        goto label_2dfc8c;
    }
    ctx->pc = 0x2DFC84u;
    SET_GPR_U32(ctx, 31, 0x2DFC8Cu);
    ctx->pc = 0x2DFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC84u;
            // 0x2dfc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283C90u;
    if (runtime->hasFunction(0x283C90u)) {
        auto targetFn = runtime->lookupFunction(0x283C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC8Cu; }
        if (ctx->pc != 0x2DFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__6CSceneFi_0x283c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC8Cu; }
        if (ctx->pc != 0x2DFC8Cu) { return; }
    }
    ctx->pc = 0x2DFC8Cu;
label_2dfc8c:
    // 0x2dfc8c: 0xc0b7cdc  jal         func_2DF370
label_2dfc90:
    if (ctx->pc == 0x2DFC90u) {
        ctx->pc = 0x2DFC90u;
            // 0x2dfc90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFC94u;
        goto label_2dfc94;
    }
    ctx->pc = 0x2DFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC94u);
    ctx->pc = 0x2DFC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFC8Cu;
            // 0x2dfc90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF370u;
    if (runtime->hasFunction(0x2DF370u)) {
        auto targetFn = runtime->lookupFunction(0x2DF370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC94u; }
        if (ctx->pc != 0x2DFC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMapScript__FPc_0x2df370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFC94u; }
        if (ctx->pc != 0x2DFC94u) { return; }
    }
    ctx->pc = 0x2DFC94u;
label_2dfc94:
    // 0x2dfc94: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfc94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfc98:
    // 0x2dfc98: 0xa0208e90  sb          $zero, -0x7170($at)
    ctx->pc = 0x2dfc98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294938256), (uint8_t)GPR_U32(ctx, 0));
label_2dfc9c:
    // 0x2dfc9c: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2dfc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2dfca0:
    // 0x2dfca0: 0xc0b7d74  jal         func_2DF5D0
label_2dfca4:
    if (ctx->pc == 0x2DFCA4u) {
        ctx->pc = 0x2DFCA4u;
            // 0x2dfca4: 0xa0208ed0  sb          $zero, -0x7130($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294938320), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2DFCA8u;
        goto label_2dfca8;
    }
    ctx->pc = 0x2DFCA0u;
    SET_GPR_U32(ctx, 31, 0x2DFCA8u);
    ctx->pc = 0x2DFCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCA0u;
            // 0x2dfca4: 0xa0208ed0  sb          $zero, -0x7130($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294938320), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D0u;
    if (runtime->hasFunction(0x2DF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCA8u; }
        if (ctx->pc != 0x2DFCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitInterior__Fv_0x2df5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCA8u; }
        if (ctx->pc != 0x2DFCA8u) { return; }
    }
    ctx->pc = 0x2DFCA8u;
label_2dfca8:
    // 0x2dfca8: 0x8f859ec4  lw          $a1, -0x613C($gp)
    ctx->pc = 0x2dfca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942404)));
label_2dfcac:
    // 0x2dfcac: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_2dfcb0:
    if (ctx->pc == 0x2DFCB0u) {
        ctx->pc = 0x2DFCB4u;
        goto label_2dfcb4;
    }
    ctx->pc = 0x2DFCACu;
    {
        const bool branch_taken_0x2dfcac = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x2dfcac) {
            ctx->pc = 0x2DFCD0u;
            goto label_2dfcd0;
        }
    }
    ctx->pc = 0x2DFCB4u;
label_2dfcb4:
    // 0x2dfcb4: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x2dfcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_2dfcb8:
    // 0x2dfcb8: 0xc0a9be4  jal         func_2A6F90
label_2dfcbc:
    if (ctx->pc == 0x2DFCBCu) {
        ctx->pc = 0x2DFCBCu;
            // 0x2dfcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DFCC0u;
        goto label_2dfcc0;
    }
    ctx->pc = 0x2DFCB8u;
    SET_GPR_U32(ctx, 31, 0x2DFCC0u);
    ctx->pc = 0x2DFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCB8u;
            // 0x2dfcbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCC0u; }
        if (ctx->pc != 0x2DFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCC0u; }
        if (ctx->pc != 0x2DFCC0u) { return; }
    }
    ctx->pc = 0x2DFCC0u;
label_2dfcc0:
    // 0x2dfcc0: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2dfcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2dfcc4:
    // 0x2dfcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfcc8:
    // 0x2dfcc8: 0xc0a9960  jal         func_2A6580
label_2dfccc:
    if (ctx->pc == 0x2DFCCCu) {
        ctx->pc = 0x2DFCCCu;
            // 0x2dfccc: 0x24a58f10  addiu       $a1, $a1, -0x70F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
        ctx->pc = 0x2DFCD0u;
        goto label_2dfcd0;
    }
    ctx->pc = 0x2DFCC8u;
    SET_GPR_U32(ctx, 31, 0x2DFCD0u);
    ctx->pc = 0x2DFCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCC8u;
            // 0x2dfccc: 0x24a58f10  addiu       $a1, $a1, -0x70F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6580u;
    if (runtime->hasFunction(0x2A6580u)) {
        auto targetFn = runtime->lookupFunction(0x2A6580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCD0u; }
        if (ctx->pc != 0x2DFCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActiveBgmStatus__6CSceneFPQ26CScene10BGM_STATUS_0x2a6580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DFCD0u; }
        if (ctx->pc != 0x2DFCD0u) { return; }
    }
    ctx->pc = 0x2DFCD0u;
label_2dfcd0:
    // 0x2dfcd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2dfcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dfcd4:
    // 0x2dfcd4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2dfcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dfcd8:
    // 0x2dfcd8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2dfcd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2dfcdc:
    // 0x2dfcdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2dfcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dfce0:
    // 0x2dfce0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dfce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dfce4:
    // 0x2dfce4: 0x3e00008  jr          $ra
label_2dfce8:
    if (ctx->pc == 0x2DFCE8u) {
        ctx->pc = 0x2DFCE8u;
            // 0x2dfce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DFCECu;
        goto label_fallthrough_0x2dfce4;
    }
    ctx->pc = 0x2DFCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFCE4u;
            // 0x2dfce8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2dfce4:
    ctx->pc = 0x2DFCECu;
}
