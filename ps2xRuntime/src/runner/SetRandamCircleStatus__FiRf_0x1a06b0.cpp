#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetRandamCircleStatus__FiRf
// Address: 0x1a06b0 - 0x1a08cc
void SetRandamCircleStatus__FiRf_0x1a06b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetRandamCircleStatus__FiRf_0x1a06b0");
#endif

    switch (ctx->pc) {
        case 0x1a06e8u: goto label_1a06e8;
        case 0x1a0700u: goto label_1a0700;
        case 0x1a0714u: goto label_1a0714;
        case 0x1a0724u: goto label_1a0724;
        case 0x1a0730u: goto label_1a0730;
        case 0x1a073cu: goto label_1a073c;
        case 0x1a074cu: goto label_1a074c;
        case 0x1a0758u: goto label_1a0758;
        case 0x1a0778u: goto label_1a0778;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a07dcu: goto label_1a07dc;
        case 0x1a07ecu: goto label_1a07ec;
        case 0x1a080cu: goto label_1a080c;
        case 0x1a0834u: goto label_1a0834;
        case 0x1a0858u: goto label_1a0858;
        case 0x1a0890u: goto label_1a0890;
        default: break;
    }

    ctx->pc = 0x1a06b0u;

    // 0x1a06b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a06b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a06b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a06b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a06bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a06c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a06c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a06c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a06ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a06d0: 0x1e600003  bgtz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A06D0u;
    {
        const bool branch_taken_0x1a06d0 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x1A06D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06D0u;
            // 0x1a06d4: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06d0) {
            ctx->pc = 0x1A06E0u;
            goto label_1a06e0;
        }
    }
    ctx->pc = 0x1A06D8u;
    // 0x1a06d8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1A06D8u;
    {
        const bool branch_taken_0x1a06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A06DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06D8u;
            // 0x1a06dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06d8) {
            ctx->pc = 0x1A08ACu;
            goto label_1a08ac;
        }
    }
    ctx->pc = 0x1A06E0u;
label_1a06e0:
    // 0x1a06e0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1A06E0u;
    SET_GPR_U32(ctx, 31, 0x1A06E8u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E8u; }
        if (ctx->pc != 0x1A06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A06E8u; }
        if (ctx->pc != 0x1A06E8u) { return; }
    }
    ctx->pc = 0x1A06E8u;
label_1a06e8:
    // 0x1a06e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a06e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a06ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a06f0: 0x1662001c  bne         $s3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A06F0u;
    {
        const bool branch_taken_0x1a06f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A06F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A06F0u;
            // 0x1a06f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a06f0) {
            ctx->pc = 0x1A0764u;
            goto label_1a0764;
        }
    }
    ctx->pc = 0x1A06F8u;
    // 0x1a06f8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1A06F8u;
    SET_GPR_U32(ctx, 31, 0x1A0700u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0700u; }
        if (ctx->pc != 0x1A0700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0700u; }
        if (ctx->pc != 0x1A0700u) { return; }
    }
    ctx->pc = 0x1A0700u;
label_1a0700:
    // 0x1a0700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0704: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1A0704u;
    {
        const bool branch_taken_0x1a0704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0704u;
            // 0x1a0708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0704) {
            ctx->pc = 0x1A0760u;
            goto label_1a0760;
        }
    }
    ctx->pc = 0x1A070Cu;
    // 0x1a070c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A070Cu;
    SET_GPR_U32(ctx, 31, 0x1A0714u);
    ctx->pc = 0x1A0710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A070Cu;
            // 0x1a0710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0714u; }
        if (ctx->pc != 0x1A0714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0714u; }
        if (ctx->pc != 0x1A0714u) { return; }
    }
    ctx->pc = 0x1A0714u;
label_1a0714:
    // 0x1a0714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0718: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x1a0718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1a071c: 0xc06609c  jal         func_198270
    ctx->pc = 0x1A071Cu;
    SET_GPR_U32(ctx, 31, 0x1A0724u);
    ctx->pc = 0x1A0720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A071Cu;
            // 0x1a0720: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0724u; }
        if (ctx->pc != 0x1A0724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0724u; }
        if (ctx->pc != 0x1A0724u) { return; }
    }
    ctx->pc = 0x1A0724u;
label_1a0724:
    // 0x1a0724: 0x260401dc  addiu       $a0, $s0, 0x1DC
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x1a0728: 0xc06609c  jal         func_198270
    ctx->pc = 0x1A0728u;
    SET_GPR_U32(ctx, 31, 0x1A0730u);
    ctx->pc = 0x1A072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0728u;
            // 0x1a072c: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0730u; }
        if (ctx->pc != 0x1A0730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0730u; }
        if (ctx->pc != 0x1A0730u) { return; }
    }
    ctx->pc = 0x1A0730u;
label_1a0730:
    // 0x1a0730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0734: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1A0734u;
    SET_GPR_U32(ctx, 31, 0x1A073Cu);
    ctx->pc = 0x1A0738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0734u;
            // 0x1a0738: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A073Cu; }
        if (ctx->pc != 0x1A073Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A073Cu; }
        if (ctx->pc != 0x1A073Cu) { return; }
    }
    ctx->pc = 0x1A073Cu;
label_1a073c:
    // 0x1a073c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a073cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0740: 0x240503e7  addiu       $a1, $zero, 0x3E7
    ctx->pc = 0x1a0740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1a0744: 0xc06609c  jal         func_198270
    ctx->pc = 0x1A0744u;
    SET_GPR_U32(ctx, 31, 0x1A074Cu);
    ctx->pc = 0x1A0748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0744u;
            // 0x1a0748: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A074Cu; }
        if (ctx->pc != 0x1A074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A074Cu; }
        if (ctx->pc != 0x1A074Cu) { return; }
    }
    ctx->pc = 0x1A074Cu;
label_1a074c:
    // 0x1a074c: 0x260401dc  addiu       $a0, $s0, 0x1DC
    ctx->pc = 0x1a074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x1a0750: 0xc06609c  jal         func_198270
    ctx->pc = 0x1A0750u;
    SET_GPR_U32(ctx, 31, 0x1A0758u);
    ctx->pc = 0x1A0754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0750u;
            // 0x1a0754: 0x240503e7  addiu       $a1, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0758u; }
        if (ctx->pc != 0x1A0758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0758u; }
        if (ctx->pc != 0x1A0758u) { return; }
    }
    ctx->pc = 0x1A0758u;
label_1a0758:
    // 0x1a0758: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1A0758u;
    {
        const bool branch_taken_0x1a0758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A075Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0758u;
            // 0x1a075c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0758) {
            ctx->pc = 0x1A08ACu;
            goto label_1a08ac;
        }
    }
    ctx->pc = 0x1A0760u;
label_1a0760:
    // 0x1a0760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0764:
    // 0x1a0764: 0x16620014  bne         $s3, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A0764u;
    {
        const bool branch_taken_0x1a0764 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0764u;
            // 0x1a0768: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0764) {
            ctx->pc = 0x1A07B8u;
            goto label_1a07b8;
        }
    }
    ctx->pc = 0x1A076Cu;
    // 0x1a076c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0770: 0xc067e44  jal         func_19F910
    ctx->pc = 0x1A0770u;
    SET_GPR_U32(ctx, 31, 0x1A0778u);
    ctx->pc = 0x1A0774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0770u;
            // 0x1a0774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F910u;
    if (runtime->hasFunction(0x19F910u)) {
        auto targetFn = runtime->lookupFunction(0x19F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0778u; }
        if (ctx->pc != 0x1A0778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0778u; }
        if (ctx->pc != 0x1A0778u) { return; }
    }
    ctx->pc = 0x1A0778u;
label_1a0778:
    // 0x1a0778: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a0778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a077c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a077cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a0780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0788: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1a0788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a078c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a078cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0790: 0xc067e44  jal         func_19F910
    ctx->pc = 0x1A0790u;
    SET_GPR_U32(ctx, 31, 0x1A0798u);
    ctx->pc = 0x1A0794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0790u;
            // 0x1a0794: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F910u;
    if (runtime->hasFunction(0x19F910u)) {
        auto targetFn = runtime->lookupFunction(0x19F910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0798u; }
        if (ctx->pc != 0x1A0798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessAbs__16CBattleCharaInfoFi_0x19f910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0798u; }
        if (ctx->pc != 0x1A0798u) { return; }
    }
    ctx->pc = 0x1A0798u;
label_1a0798:
    // 0x1a0798: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a0798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a079c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1a07a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1a07a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1a07a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a07a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a07a8: 0x0  nop
    ctx->pc = 0x1a07a8u;
    // NOP
    // 0x1a07ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a07acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a07b0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1a07b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1a07b4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1a07b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_1a07b8:
    // 0x1a07b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a07bc: 0x1662000d  bne         $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A07BCu;
    {
        const bool branch_taken_0x1a07bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A07C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07BCu;
            // 0x1a07c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07bc) {
            ctx->pc = 0x1A07F4u;
            goto label_1a07f4;
        }
    }
    ctx->pc = 0x1A07C4u;
    // 0x1a07c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a07c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a07c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a07ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a07d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a07d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a07d4: 0xc06806c  jal         func_1A01B0
    ctx->pc = 0x1A07D4u;
    SET_GPR_U32(ctx, 31, 0x1A07DCu);
    ctx->pc = 0x1A07D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07D4u;
            // 0x1a07d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A01B0u;
    if (runtime->hasFunction(0x1A01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07DCu; }
        if (ctx->pc != 0x1A07DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07DCu; }
        if (ctx->pc != 0x1A07DCu) { return; }
    }
    ctx->pc = 0x1A07DCu;
label_1a07dc:
    // 0x1a07dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a07dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07e0: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1a07e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1a07e4: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A07E4u;
    SET_GPR_U32(ctx, 31, 0x1A07ECu);
    ctx->pc = 0x1A07E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07E4u;
            // 0x1a07e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07ECu; }
        if (ctx->pc != 0x1A07ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A07ECu; }
        if (ctx->pc != 0x1A07ECu) { return; }
    }
    ctx->pc = 0x1A07ECu;
label_1a07ec:
    // 0x1a07ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a07ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a07f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a07f4:
    // 0x1a07f4: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A07F4u;
    {
        const bool branch_taken_0x1a07f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A07F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A07F4u;
            // 0x1a07f8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a07f4) {
            ctx->pc = 0x1A0814u;
            goto label_1a0814;
        }
    }
    ctx->pc = 0x1A07FCu;
    // 0x1a07fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a07fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0800: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0804: 0xc068108  jal         func_1A0420
    ctx->pc = 0x1A0804u;
    SET_GPR_U32(ctx, 31, 0x1A080Cu);
    ctx->pc = 0x1A0808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0804u;
            // 0x1a0808: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A080Cu; }
        if (ctx->pc != 0x1A080Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A080Cu; }
        if (ctx->pc != 0x1A080Cu) { return; }
    }
    ctx->pc = 0x1A080Cu;
label_1a080c:
    // 0x1a080c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a080cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0810: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a0810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a0814:
    // 0x1a0814: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0814u;
    {
        const bool branch_taken_0x1a0814 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0814u;
            // 0x1a0818: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0814) {
            ctx->pc = 0x1A083Cu;
            goto label_1a083c;
        }
    }
    ctx->pc = 0x1A081Cu;
    // 0x1a081c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
    // 0x1a0820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0824: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a0824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1a0828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a0828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a082c: 0xc06806c  jal         func_1A01B0
    ctx->pc = 0x1A082Cu;
    SET_GPR_U32(ctx, 31, 0x1A0834u);
    ctx->pc = 0x1A0830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A082Cu;
            // 0x1a0830: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A01B0u;
    if (runtime->hasFunction(0x1A01B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A01B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0834u; }
        if (ctx->pc != 0x1A0834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Rate__16CBattleCharaInfoFfif_0x1a01b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0834u; }
        if (ctx->pc != 0x1A0834u) { return; }
    }
    ctx->pc = 0x1A0834u;
label_1a0834:
    // 0x1a0834: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0838: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a083c:
    // 0x1a083c: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A083Cu;
    {
        const bool branch_taken_0x1a083c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A083Cu;
            // 0x1a0840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a083c) {
            ctx->pc = 0x1A0850u;
            goto label_1a0850;
        }
    }
    ctx->pc = 0x1A0844u;
    // 0x1a0844: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a0848: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0848u;
    {
        const bool branch_taken_0x1a0848 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A084Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0848u;
            // 0x1a084c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0848) {
            ctx->pc = 0x1A0874u;
            goto label_1a0874;
        }
    }
    ctx->pc = 0x1A0850u;
label_1a0850:
    // 0x1a0850: 0xc067e24  jal         func_19F890
    ctx->pc = 0x1A0850u;
    SET_GPR_U32(ctx, 31, 0x1A0858u);
    ctx->pc = 0x1A0854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0850u;
            // 0x1a0854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F890u;
    if (runtime->hasFunction(0x19F890u)) {
        auto targetFn = runtime->lookupFunction(0x19F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0858u; }
        if (ctx->pc != 0x1A0858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0858u; }
        if (ctx->pc != 0x1A0858u) { return; }
    }
    ctx->pc = 0x1A0858u;
label_1a0858:
    // 0x1a0858: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a085c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1a0860: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a0860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0864: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a0864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0868: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a086c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a0870: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a0874:
    // 0x1a0874: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0874u;
    {
        const bool branch_taken_0x1a0874 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A0878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0874u;
            // 0x1a0878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0874) {
            ctx->pc = 0x1A0888u;
            goto label_1a0888;
        }
    }
    ctx->pc = 0x1A087Cu;
    // 0x1a087c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a087cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a0880: 0x1662000a  bne         $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A0880u;
    {
        const bool branch_taken_0x1a0880 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0880u;
            // 0x1a0884: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0880) {
            ctx->pc = 0x1A08ACu;
            goto label_1a08ac;
        }
    }
    ctx->pc = 0x1A0888u;
label_1a0888:
    // 0x1a0888: 0xc067e24  jal         func_19F890
    ctx->pc = 0x1A0888u;
    SET_GPR_U32(ctx, 31, 0x1A0890u);
    ctx->pc = 0x1A088Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0888u;
            // 0x1a088c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F890u;
    if (runtime->hasFunction(0x19F890u)) {
        auto targetFn = runtime->lookupFunction(0x19F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0890u; }
        if (ctx->pc != 0x1A0890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowAccessWHp__16CBattleCharaInfoFi_0x19f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0890u; }
        if (ctx->pc != 0x1A0890u) { return; }
    }
    ctx->pc = 0x1A0890u;
label_1a0890:
    // 0x1a0890: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a0890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0894: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a0894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1a0898: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a0898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a089c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a089cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a08a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a08a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a08a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1a08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a08a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a08a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a08ac:
    // 0x1a08ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a08acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a08b0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1a08b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a08b4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a08b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a08b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a08b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a08bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a08bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a08c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a08c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a08c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A08C4u;
            // 0x1a08c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A08CCu;
}
