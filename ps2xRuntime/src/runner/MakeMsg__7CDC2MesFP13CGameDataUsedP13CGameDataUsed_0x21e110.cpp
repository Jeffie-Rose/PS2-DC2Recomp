#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsg__7CDC2MesFP13CGameDataUsedP13CGameDataUsed
// Address: 0x21e110 - 0x21e258
void MakeMsg__7CDC2MesFP13CGameDataUsedP13CGameDataUsed_0x21e110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsg__7CDC2MesFP13CGameDataUsedP13CGameDataUsed_0x21e110");
#endif

    switch (ctx->pc) {
        case 0x21e15cu: goto label_21e15c;
        case 0x21e17cu: goto label_21e17c;
        case 0x21e190u: goto label_21e190;
        case 0x21e19cu: goto label_21e19c;
        case 0x21e1b0u: goto label_21e1b0;
        case 0x21e1ccu: goto label_21e1cc;
        case 0x21e200u: goto label_21e200;
        case 0x21e20cu: goto label_21e20c;
        case 0x21e234u: goto label_21e234;
        case 0x21e240u: goto label_21e240;
        default: break;
    }

    ctx->pc = 0x21e110u;

    // 0x21e110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21e110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21e114: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21e118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e11c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e120: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e12c: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x21E12Cu;
    {
        const bool branch_taken_0x21e12c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E12Cu;
            // 0x21e130: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e12c) {
            ctx->pc = 0x21E240u;
            goto label_21e240;
        }
    }
    ctx->pc = 0x21E134u;
    // 0x21e134: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E134u;
    {
        const bool branch_taken_0x21e134 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e134) {
            ctx->pc = 0x21E144u;
            goto label_21e144;
        }
    }
    ctx->pc = 0x21E13Cu;
    // 0x21e13c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x21E13Cu;
    {
        const bool branch_taken_0x21e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E13Cu;
            // 0x21e140: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e13c) {
            ctx->pc = 0x21E244u;
            goto label_21e244;
        }
    }
    ctx->pc = 0x21E144u;
label_21e144:
    // 0x21e144: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x21e144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21e148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e14c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E14Cu;
    {
        const bool branch_taken_0x21e14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e14c) {
            ctx->pc = 0x21E164u;
            goto label_21e164;
        }
    }
    ctx->pc = 0x21E154u;
    // 0x21e154: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x21E154u;
    SET_GPR_U32(ctx, 31, 0x21E15Cu);
    ctx->pc = 0x21E158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E154u;
            // 0x21e158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E15Cu; }
        if (ctx->pc != 0x21E15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E15Cu; }
        if (ctx->pc != 0x21E15Cu) { return; }
    }
    ctx->pc = 0x21E15Cu;
label_21e15c:
    // 0x21e15c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E15Cu;
    {
        const bool branch_taken_0x21e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E15Cu;
            // 0x21e160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e15c) {
            ctx->pc = 0x21E1A8u;
            goto label_21e1a8;
        }
    }
    ctx->pc = 0x21E164u;
label_21e164:
    // 0x21e164: 0xc7809328  lwc1        $f0, -0x6CD8($gp)
    ctx->pc = 0x21e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e168: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x21e168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21e16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e174: 0xc065dc0  jal         func_197700
    ctx->pc = 0x21E174u;
    SET_GPR_U32(ctx, 31, 0x21E17Cu);
    ctx->pc = 0x21E178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E174u;
            // 0x21e178: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E17Cu; }
        if (ctx->pc != 0x21E17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E17Cu; }
        if (ctx->pc != 0x21E17Cu) { return; }
    }
    ctx->pc = 0x21E17Cu;
label_21e17c:
    // 0x21e17c: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x21e17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x21e180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e184: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x21e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21e188: 0xc087720  jal         func_21DC80
    ctx->pc = 0x21E188u;
    SET_GPR_U32(ctx, 31, 0x21E190u);
    ctx->pc = 0x21E18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E188u;
            // 0x21e18c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E190u; }
        if (ctx->pc != 0x21E190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E190u; }
        if (ctx->pc != 0x21E190u) { return; }
    }
    ctx->pc = 0x21E190u;
label_21e190:
    // 0x21e190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e194: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21E194u;
    SET_GPR_U32(ctx, 31, 0x21E19Cu);
    ctx->pc = 0x21E198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E194u;
            // 0x21e198: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E19Cu; }
        if (ctx->pc != 0x21E19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E19Cu; }
        if (ctx->pc != 0x21E19Cu) { return; }
    }
    ctx->pc = 0x21E19Cu;
label_21e19c:
    // 0x21e19c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21E19Cu;
    {
        const bool branch_taken_0x21e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e19c) {
            ctx->pc = 0x21E240u;
            goto label_21e240;
        }
    }
    ctx->pc = 0x21E1A4u;
    // 0x21e1a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e1a8:
    // 0x21e1a8: 0xc065f70  jal         func_197DC0
    ctx->pc = 0x21E1A8u;
    SET_GPR_U32(ctx, 31, 0x21E1B0u);
    ctx->pc = 0x197DC0u;
    if (runtime->hasFunction(0x197DC0u)) {
        auto targetFn = runtime->lookupFunction(0x197DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E1B0u; }
        if (ctx->pc != 0x21E1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemainFusion__13CGameDataUsedFv_0x197dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E1B0u; }
        if (ctx->pc != 0x21E1B0u) { return; }
    }
    ctx->pc = 0x21E1B0u;
label_21e1b0:
    // 0x21e1b0: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x21e1b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x21e1b4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x21e1b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21e1b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E1B8u;
    {
        const bool branch_taken_0x21e1b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e1b8) {
            ctx->pc = 0x21E1D4u;
            goto label_21e1d4;
        }
    }
    ctx->pc = 0x21E1C0u;
    // 0x21e1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1c4: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21E1C4u;
    SET_GPR_U32(ctx, 31, 0x21E1CCu);
    ctx->pc = 0x21E1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1C4u;
            // 0x21e1c8: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E1CCu; }
        if (ctx->pc != 0x21E1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E1CCu; }
        if (ctx->pc != 0x21E1CCu) { return; }
    }
    ctx->pc = 0x21E1CCu;
label_21e1cc:
    // 0x21e1cc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x21E1CCu;
    {
        const bool branch_taken_0x21e1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e1cc) {
            ctx->pc = 0x21E240u;
            goto label_21e240;
        }
    }
    ctx->pc = 0x21E1D4u;
label_21e1d4:
    // 0x21e1d4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21e1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21e1d8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e1dc: 0x24a5ca78  addiu       $a1, $a1, -0x3588
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953592));
    // 0x21e1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1e4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x21e1e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21e1e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21e1ec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x21e1f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21e1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e1f4: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x21e1f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x21e1f8: 0xc065f70  jal         func_197DC0
    ctx->pc = 0x21E1F8u;
    SET_GPR_U32(ctx, 31, 0x21E200u);
    ctx->pc = 0x21E1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E1F8u;
            // 0x21e1fc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DC0u;
    if (runtime->hasFunction(0x197DC0u)) {
        auto targetFn = runtime->lookupFunction(0x197DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E200u; }
        if (ctx->pc != 0x21E200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemainFusion__13CGameDataUsedFv_0x197dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E200u; }
        if (ctx->pc != 0x21E200u) { return; }
    }
    ctx->pc = 0x21E200u;
label_21e200:
    // 0x21e200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e204: 0xc065f70  jal         func_197DC0
    ctx->pc = 0x21E204u;
    SET_GPR_U32(ctx, 31, 0x21E20Cu);
    ctx->pc = 0x21E208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E204u;
            // 0x21e208: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197DC0u;
    if (runtime->hasFunction(0x197DC0u)) {
        auto targetFn = runtime->lookupFunction(0x197DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E20Cu; }
        if (ctx->pc != 0x21E20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemainFusion__13CGameDataUsedFv_0x197dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E20Cu; }
        if (ctx->pc != 0x21E20Cu) { return; }
    }
    ctx->pc = 0x21E20Cu;
label_21e20c:
    // 0x21e20c: 0x92270011  lbu         $a3, 0x11($s1)
    ctx->pc = 0x21e20cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x21e210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e218: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x21e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21e21c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x21e21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e220: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x21e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x21e224: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x21e224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x21e228: 0xae431acc  sw          $v1, 0x1ACC($s2)
    ctx->pc = 0x21e228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 3));
    // 0x21e22c: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x21E22Cu;
    SET_GPR_U32(ctx, 31, 0x21E234u);
    ctx->pc = 0x21E230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E22Cu;
            // 0x21e230: 0xae401ac8  sw          $zero, 0x1AC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E234u; }
        if (ctx->pc != 0x21E234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E234u; }
        if (ctx->pc != 0x21E234u) { return; }
    }
    ctx->pc = 0x21E234u;
label_21e234:
    // 0x21e234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e238: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21E238u;
    SET_GPR_U32(ctx, 31, 0x21E240u);
    ctx->pc = 0x21E23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E238u;
            // 0x21e23c: 0x240500bc  addiu       $a1, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E240u; }
        if (ctx->pc != 0x21E240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E240u; }
        if (ctx->pc != 0x21E240u) { return; }
    }
    ctx->pc = 0x21E240u;
label_21e240:
    // 0x21e240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_21e244:
    // 0x21e244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e250: 0x3e00008  jr          $ra
    ctx->pc = 0x21E250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E250u;
            // 0x21e254: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E258u;
}
