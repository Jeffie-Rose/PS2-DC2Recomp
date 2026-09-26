#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitCasting__FP6CScene
// Address: 0x2ffda0 - 0x2ffe84
void InitCasting__FP6CScene_0x2ffda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitCasting__FP6CScene_0x2ffda0");
#endif

    switch (ctx->pc) {
        case 0x2ffda0u: goto label_2ffda0;
        case 0x2ffda4u: goto label_2ffda4;
        case 0x2ffda8u: goto label_2ffda8;
        case 0x2ffdacu: goto label_2ffdac;
        case 0x2ffdb0u: goto label_2ffdb0;
        case 0x2ffdb4u: goto label_2ffdb4;
        case 0x2ffdb8u: goto label_2ffdb8;
        case 0x2ffdbcu: goto label_2ffdbc;
        case 0x2ffdc0u: goto label_2ffdc0;
        case 0x2ffdc4u: goto label_2ffdc4;
        case 0x2ffdc8u: goto label_2ffdc8;
        case 0x2ffdccu: goto label_2ffdcc;
        case 0x2ffdd0u: goto label_2ffdd0;
        case 0x2ffdd4u: goto label_2ffdd4;
        case 0x2ffdd8u: goto label_2ffdd8;
        case 0x2ffddcu: goto label_2ffddc;
        case 0x2ffde0u: goto label_2ffde0;
        case 0x2ffde4u: goto label_2ffde4;
        case 0x2ffde8u: goto label_2ffde8;
        case 0x2ffdecu: goto label_2ffdec;
        case 0x2ffdf0u: goto label_2ffdf0;
        case 0x2ffdf4u: goto label_2ffdf4;
        case 0x2ffdf8u: goto label_2ffdf8;
        case 0x2ffdfcu: goto label_2ffdfc;
        case 0x2ffe00u: goto label_2ffe00;
        case 0x2ffe04u: goto label_2ffe04;
        case 0x2ffe08u: goto label_2ffe08;
        case 0x2ffe0cu: goto label_2ffe0c;
        case 0x2ffe10u: goto label_2ffe10;
        case 0x2ffe14u: goto label_2ffe14;
        case 0x2ffe18u: goto label_2ffe18;
        case 0x2ffe1cu: goto label_2ffe1c;
        case 0x2ffe20u: goto label_2ffe20;
        case 0x2ffe24u: goto label_2ffe24;
        case 0x2ffe28u: goto label_2ffe28;
        case 0x2ffe2cu: goto label_2ffe2c;
        case 0x2ffe30u: goto label_2ffe30;
        case 0x2ffe34u: goto label_2ffe34;
        case 0x2ffe38u: goto label_2ffe38;
        case 0x2ffe3cu: goto label_2ffe3c;
        case 0x2ffe40u: goto label_2ffe40;
        case 0x2ffe44u: goto label_2ffe44;
        case 0x2ffe48u: goto label_2ffe48;
        case 0x2ffe4cu: goto label_2ffe4c;
        case 0x2ffe50u: goto label_2ffe50;
        case 0x2ffe54u: goto label_2ffe54;
        case 0x2ffe58u: goto label_2ffe58;
        case 0x2ffe5cu: goto label_2ffe5c;
        case 0x2ffe60u: goto label_2ffe60;
        case 0x2ffe64u: goto label_2ffe64;
        case 0x2ffe68u: goto label_2ffe68;
        case 0x2ffe6cu: goto label_2ffe6c;
        case 0x2ffe70u: goto label_2ffe70;
        case 0x2ffe74u: goto label_2ffe74;
        case 0x2ffe78u: goto label_2ffe78;
        case 0x2ffe7cu: goto label_2ffe7c;
        case 0x2ffe80u: goto label_2ffe80;
        default: break;
    }

    ctx->pc = 0x2ffda0u;

label_2ffda0:
    // 0x2ffda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ffda4:
    // 0x2ffda4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ffda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ffda8:
    // 0x2ffda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ffda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ffdac:
    // 0x2ffdac: 0xc0a0ed8  jal         func_283B60
label_2ffdb0:
    if (ctx->pc == 0x2FFDB0u) {
        ctx->pc = 0x2FFDB0u;
            // 0x2ffdb0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x2FFDB4u;
        goto label_2ffdb4;
    }
    ctx->pc = 0x2FFDACu;
    SET_GPR_U32(ctx, 31, 0x2FFDB4u);
    ctx->pc = 0x2FFDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDACu;
            // 0x2ffdb0: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDB4u; }
        if (ctx->pc != 0x2FFDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDB4u; }
        if (ctx->pc != 0x2FFDB4u) { return; }
    }
    ctx->pc = 0x2FFDB4u;
label_2ffdb4:
    // 0x2ffdb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffdb8:
    // 0x2ffdb8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2ffdbc:
    if (ctx->pc == 0x2FFDBCu) {
        ctx->pc = 0x2FFDBCu;
            // 0x2ffdbc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2FFDC0u;
        goto label_2ffdc0;
    }
    ctx->pc = 0x2FFDB8u;
    {
        const bool branch_taken_0x2ffdb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDB8u;
            // 0x2ffdbc: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdb8) {
            ctx->pc = 0x2FFDC8u;
            goto label_2ffdc8;
        }
    }
    ctx->pc = 0x2FFDC0u;
label_2ffdc0:
    // 0x2ffdc0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2ffdc4:
    if (ctx->pc == 0x2FFDC4u) {
        ctx->pc = 0x2FFDC4u;
            // 0x2ffdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDC8u;
        goto label_2ffdc8;
    }
    ctx->pc = 0x2FFDC0u;
    {
        const bool branch_taken_0x2ffdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDC0u;
            // 0x2ffdc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdc0) {
            ctx->pc = 0x2FFE74u;
            goto label_2ffe74;
        }
    }
    ctx->pc = 0x2FFDC8u;
label_2ffdc8:
    // 0x2ffdc8: 0xac209d54  sw          $zero, -0x62AC($at)
    ctx->pc = 0x2ffdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942036), GPR_U32(ctx, 0));
label_2ffdcc:
    // 0x2ffdcc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ffdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2ffdd0:
    // 0x2ffdd0: 0xac209d4c  sw          $zero, -0x62B4($at)
    ctx->pc = 0x2ffdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942028), GPR_U32(ctx, 0));
label_2ffdd4:
    // 0x2ffdd4: 0xc0c0fd0  jal         func_303F40
label_2ffdd8:
    if (ctx->pc == 0x2FFDD8u) {
        ctx->pc = 0x2FFDDCu;
        goto label_2ffddc;
    }
    ctx->pc = 0x2FFDD4u;
    SET_GPR_U32(ctx, 31, 0x2FFDDCu);
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDDCu; }
        if (ctx->pc != 0x2FFDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDDCu; }
        if (ctx->pc != 0x2FFDDCu) { return; }
    }
    ctx->pc = 0x2FFDDCu;
label_2ffddc:
    // 0x2ffddc: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2ffddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_2ffde0:
    // 0x2ffde0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ffde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ffde4:
    // 0x2ffde4: 0xc0bf1a0  jal         func_2FC680
label_2ffde8:
    if (ctx->pc == 0x2FFDE8u) {
        ctx->pc = 0x2FFDE8u;
            // 0x2ffde8: 0x24a59d30  addiu       $a1, $a1, -0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942000));
        ctx->pc = 0x2FFDECu;
        goto label_2ffdec;
    }
    ctx->pc = 0x2FFDE4u;
    SET_GPR_U32(ctx, 31, 0x2FFDECu);
    ctx->pc = 0x2FFDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFDE4u;
            // 0x2ffde8: 0x24a59d30  addiu       $a1, $a1, -0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC680u;
    if (runtime->hasFunction(0x2FC680u)) {
        auto targetFn = runtime->lookupFunction(0x2FC680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDECu; }
        if (ctx->pc != 0x2FFDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadExMotionStep__FP11SubGameInfoP9mgCMemory_0x2fc680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFDECu; }
        if (ctx->pc != 0x2FFDECu) { return; }
    }
    ctx->pc = 0x2FFDECu;
label_2ffdec:
    // 0x2ffdec: 0x0  nop
    ctx->pc = 0x2ffdecu;
    // NOP
label_2ffdf0:
    // 0x2ffdf0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2ffdf4:
    if (ctx->pc == 0x2FFDF4u) {
        ctx->pc = 0x2FFDF8u;
        goto label_2ffdf8;
    }
    ctx->pc = 0x2FFDF0u;
    {
        const bool branch_taken_0x2ffdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ffdf0) {
            ctx->pc = 0x2FFDD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ffdd4;
        }
    }
    ctx->pc = 0x2FFDF8u;
label_2ffdf8:
    // 0x2ffdf8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffdf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffdfc:
    // 0x2ffdfc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ffe00:
    // 0x2ffe00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe04:
    // 0x2ffe04: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x2ffe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
label_2ffe08:
    // 0x2ffe08: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ffe08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ffe0c:
    // 0x2ffe0c: 0x320f809  jalr        $t9
label_2ffe10:
    if (ctx->pc == 0x2FFE10u) {
        ctx->pc = 0x2FFE10u;
            // 0x2ffe10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FFE14u;
        goto label_2ffe14;
    }
    ctx->pc = 0x2FFE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFE14u);
        ctx->pc = 0x2FFE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE0Cu;
            // 0x2ffe10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFE14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE14u; }
            if (ctx->pc != 0x2FFE14u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFE14u;
label_2ffe14:
    // 0x2ffe14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffe14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffe18:
    // 0x2ffe18: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2ffe18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2ffe1c:
    // 0x2ffe1c: 0x320f809  jalr        $t9
label_2ffe20:
    if (ctx->pc == 0x2FFE20u) {
        ctx->pc = 0x2FFE20u;
            // 0x2ffe20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE24u;
        goto label_2ffe24;
    }
    ctx->pc = 0x2FFE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFE24u);
        ctx->pc = 0x2FFE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE1Cu;
            // 0x2ffe20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFE24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE24u; }
            if (ctx->pc != 0x2FFE24u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFE24u;
label_2ffe24:
    // 0x2ffe24: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2ffe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_2ffe28:
    // 0x2ffe28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ffe2c:
    // 0x2ffe2c: 0xaf80a088  sw          $zero, -0x5F78($gp)
    ctx->pc = 0x2ffe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942856), GPR_U32(ctx, 0));
label_2ffe30:
    // 0x2ffe30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe34:
    // 0x2ffe34: 0xaf82a090  sw          $v0, -0x5F70($gp)
    ctx->pc = 0x2ffe34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942864), GPR_U32(ctx, 2));
label_2ffe38:
    // 0x2ffe38: 0x24a52008  addiu       $a1, $a1, 0x2008
    ctx->pc = 0x2ffe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8200));
label_2ffe3c:
    // 0x2ffe3c: 0xaf80a08c  sw          $zero, -0x5F74($gp)
    ctx->pc = 0x2ffe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942860), GPR_U32(ctx, 0));
label_2ffe40:
    // 0x2ffe40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffe40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffe44:
    // 0x2ffe44: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ffe44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ffe48:
    // 0x2ffe48: 0x320f809  jalr        $t9
label_2ffe4c:
    if (ctx->pc == 0x2FFE4Cu) {
        ctx->pc = 0x2FFE4Cu;
            // 0x2ffe4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FFE50u;
        goto label_2ffe50;
    }
    ctx->pc = 0x2FFE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFE50u);
        ctx->pc = 0x2FFE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE48u;
            // 0x2ffe4c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFE50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE50u; }
            if (ctx->pc != 0x2FFE50u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFE50u;
label_2ffe50:
    // 0x2ffe50: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ffe54:
    // 0x2ffe54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffe54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffe58:
    // 0x2ffe58: 0x24a52008  addiu       $a1, $a1, 0x2008
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8200));
label_2ffe5c:
    // 0x2ffe5c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ffe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ffe60:
    // 0x2ffe60: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x2ffe60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2ffe64:
    // 0x2ffe64: 0xc0bff38  jal         func_2FFCE0
label_2ffe68:
    if (ctx->pc == 0x2FFE68u) {
        ctx->pc = 0x2FFE68u;
            // 0x2ffe68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE6Cu;
        goto label_2ffe6c;
    }
    ctx->pc = 0x2FFE64u;
    SET_GPR_U32(ctx, 31, 0x2FFE6Cu);
    ctx->pc = 0x2FFE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE64u;
            // 0x2ffe68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFCE0u;
    if (runtime->hasFunction(0x2FFCE0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFCE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE6Cu; }
        if (ctx->pc != 0x2FFE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionCount__FP11CCharacter2Pciii_0x2ffce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFE6Cu; }
        if (ctx->pc != 0x2FFE6Cu) { return; }
    }
    ctx->pc = 0x2FFE6Cu;
label_2ffe6c:
    // 0x2ffe6c: 0xaf82a094  sw          $v0, -0x5F6C($gp)
    ctx->pc = 0x2ffe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942868), GPR_U32(ctx, 2));
label_2ffe70:
    // 0x2ffe70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffe70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ffe74:
    // 0x2ffe74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ffe74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffe78:
    // 0x2ffe78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffe78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ffe7c:
    // 0x2ffe7c: 0x3e00008  jr          $ra
label_2ffe80:
    if (ctx->pc == 0x2FFE80u) {
        ctx->pc = 0x2FFE80u;
            // 0x2ffe80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2FFE84u;
        goto label_fallthrough_0x2ffe7c;
    }
    ctx->pc = 0x2FFE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFE7Cu;
            // 0x2ffe80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ffe7c:
    ctx->pc = 0x2FFE84u;
}
