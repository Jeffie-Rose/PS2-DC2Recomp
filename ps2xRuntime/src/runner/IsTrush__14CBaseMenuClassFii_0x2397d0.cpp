#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsTrush__14CBaseMenuClassFii
// Address: 0x2397d0 - 0x2399c8
void IsTrush__14CBaseMenuClassFii_0x2397d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsTrush__14CBaseMenuClassFii_0x2397d0");
#endif

    switch (ctx->pc) {
        case 0x239828u: goto label_239828;
        case 0x239850u: goto label_239850;
        case 0x239860u: goto label_239860;
        case 0x239874u: goto label_239874;
        case 0x23989cu: goto label_23989c;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398fcu: goto label_2398fc;
        case 0x239918u: goto label_239918;
        case 0x23995cu: goto label_23995c;
        case 0x239974u: goto label_239974;
        case 0x23997cu: goto label_23997c;
        case 0x2399a0u: goto label_2399a0;
        default: break;
    }

    ctx->pc = 0x2397d0u;

    // 0x2397d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2397d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2397d4: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2397d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2397d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2397d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2397dc: 0x2442ca40  addiu       $v0, $v0, -0x35C0
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x2397e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2397e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2397e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2397e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2397e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2397e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2397ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2397f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2397f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2397f4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2397f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2397f8: 0x8487005a  lh          $a3, 0x5A($a0)
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2397fc: 0x24c6cb30  addiu       $a2, $a2, -0x34D0
    ctx->pc = 0x2397fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953776));
    // 0x239800: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x239800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x239804: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x239808: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x23980c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x23980cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x239810: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x239810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x239814: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x239814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239818: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x239818u;
    {
        const bool branch_taken_0x239818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239818u;
            // 0x23981c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239818) {
            ctx->pc = 0x2398E4u;
            goto label_2398e4;
        }
    }
    ctx->pc = 0x239820u;
    // 0x239820: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x239820u;
    SET_GPR_U32(ctx, 31, 0x239828u);
    ctx->pc = 0x239824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239820u;
            // 0x239824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239828u; }
        if (ctx->pc != 0x239828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239828u; }
        if (ctx->pc != 0x239828u) { return; }
    }
    ctx->pc = 0x239828u;
label_239828:
    // 0x239828: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23982c: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23982Cu;
    {
        const bool branch_taken_0x23982c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x239830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23982Cu;
            // 0x239830: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23982c) {
            ctx->pc = 0x2398D0u;
            goto label_2398d0;
        }
    }
    ctx->pc = 0x239834u;
    // 0x239834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239838: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x239838u;
    {
        const bool branch_taken_0x239838 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x23983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239838u;
            // 0x23983c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239838) {
            ctx->pc = 0x239848u;
            goto label_239848;
        }
    }
    ctx->pc = 0x239840u;
    // 0x239840: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x239840u;
    {
        const bool branch_taken_0x239840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239840u;
            // 0x239844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239840) {
            ctx->pc = 0x2399ACu;
            goto label_2399ac;
        }
    }
    ctx->pc = 0x239848u;
label_239848:
    // 0x239848: 0xc087690  jal         func_21DA40
    ctx->pc = 0x239848u;
    SET_GPR_U32(ctx, 31, 0x239850u);
    ctx->pc = 0x21DA40u;
    if (runtime->hasFunction(0x21DA40u)) {
        auto targetFn = runtime->lookupFunction(0x21DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239850u; }
        if (ctx->pc != 0x239850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgCursor__7CDC2MesFv_0x21da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239850u; }
        if (ctx->pc != 0x239850u) { return; }
    }
    ctx->pc = 0x239850u;
label_239850:
    // 0x239850: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x239850u;
    {
        const bool branch_taken_0x239850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239850) {
            ctx->pc = 0x2398CCu;
            goto label_2398cc;
        }
    }
    ctx->pc = 0x239858u;
    // 0x239858: 0xc08e3e8  jal         func_238FA0
    ctx->pc = 0x239858u;
    SET_GPR_U32(ctx, 31, 0x239860u);
    ctx->pc = 0x23985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239858u;
            // 0x23985c: 0x8e6400d4  lw          $a0, 0xD4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238FA0u;
    if (runtime->hasFunction(0x238FA0u)) {
        auto targetFn = runtime->lookupFunction(0x238FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239860u; }
        if (ctx->pc != 0x239860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEquipFishRod__FP13CGameDataUsed_0x238fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239860u; }
        if (ctx->pc != 0x239860u) { return; }
    }
    ctx->pc = 0x239860u;
label_239860:
    // 0x239860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239864: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239864u;
    {
        const bool branch_taken_0x239864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x239868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239864u;
            // 0x239868: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239864) {
            ctx->pc = 0x23987Cu;
            goto label_23987c;
        }
    }
    ctx->pc = 0x23986Cu;
    // 0x23986c: 0xc094274  jal         func_2509D0
    ctx->pc = 0x23986Cu;
    SET_GPR_U32(ctx, 31, 0x239874u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239874u; }
        if (ctx->pc != 0x239874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239874u; }
        if (ctx->pc != 0x239874u) { return; }
    }
    ctx->pc = 0x239874u;
label_239874:
    // 0x239874: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x239874u;
    {
        const bool branch_taken_0x239874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239874) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x23987Cu;
label_23987c:
    // 0x23987c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x23987cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x239880: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239884: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x239884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x239888: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239888u;
    {
        const bool branch_taken_0x239888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239888) {
            ctx->pc = 0x239894u;
            goto label_239894;
        }
    }
    ctx->pc = 0x239890u;
    // 0x239890: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x239890u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_239894:
    // 0x239894: 0xc08fa80  jal         func_23EA00
    ctx->pc = 0x239894u;
    SET_GPR_U32(ctx, 31, 0x23989Cu);
    ctx->pc = 0x239898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239894u;
            // 0x239898: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA00u;
    if (runtime->hasFunction(0x23EA00u)) {
        auto targetFn = runtime->lookupFunction(0x23EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23989Cu; }
        if (ctx->pc != 0x23989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitHaveData__12CMenuKeyFuncFv_0x23ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23989Cu; }
        if (ctx->pc != 0x23989Cu) { return; }
    }
    ctx->pc = 0x23989Cu;
label_23989c:
    // 0x23989c: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x23989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x2398a0: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x2398A0u;
    SET_GPR_U32(ctx, 31, 0x2398A8u);
    ctx->pc = 0x2398A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2398A0u;
            // 0x2398a4: 0x87859640  lh          $a1, -0x69C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398A8u; }
        if (ctx->pc != 0x2398A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398A8u; }
        if (ctx->pc != 0x2398A8u) { return; }
    }
    ctx->pc = 0x2398A8u;
label_2398a8:
    // 0x2398a8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2398A8u;
    SET_GPR_U32(ctx, 31, 0x2398B0u);
    ctx->pc = 0x2398ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2398A8u;
            // 0x2398ac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398B0u; }
        if (ctx->pc != 0x2398B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398B0u; }
        if (ctx->pc != 0x2398B0u) { return; }
    }
    ctx->pc = 0x2398B0u;
label_2398b0:
    // 0x2398b0: 0xc08fc00  jal         func_23F000
    ctx->pc = 0x2398B0u;
    SET_GPR_U32(ctx, 31, 0x2398B8u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398B8u; }
        if (ctx->pc != 0x2398B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398B8u; }
        if (ctx->pc != 0x2398B8u) { return; }
    }
    ctx->pc = 0x2398B8u;
label_2398b8:
    // 0x2398b8: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2398b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2398bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2398bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2398c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2398c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2398c4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2398C4u;
    {
        const bool branch_taken_0x2398c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398C4u;
            // 0x2398c8: 0xa6630002  sh          $v1, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398c4) {
            ctx->pc = 0x2399ACu;
            goto label_2399ac;
        }
    }
    ctx->pc = 0x2398CCu;
label_2398cc:
    // 0x2398cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2398ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2398d0:
    // 0x2398d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2398d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398d4: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x2398D4u;
    SET_GPR_U32(ctx, 31, 0x2398DCu);
    ctx->pc = 0x2398D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2398D4u;
            // 0x2398d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398DCu; }
        if (ctx->pc != 0x2398DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398DCu; }
        if (ctx->pc != 0x2398DCu) { return; }
    }
    ctx->pc = 0x2398DCu;
label_2398dc:
    // 0x2398dc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2398DCu;
    {
        const bool branch_taken_0x2398dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398DCu;
            // 0x2398e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398dc) {
            ctx->pc = 0x2399ACu;
            goto label_2399ac;
        }
    }
    ctx->pc = 0x2398E4u;
label_2398e4:
    // 0x2398e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2398e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2398e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2398E8u;
    {
        const bool branch_taken_0x2398e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2398ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398E8u;
            // 0x2398ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398e8) {
            ctx->pc = 0x239904u;
            goto label_239904;
        }
    }
    ctx->pc = 0x2398F0u;
    // 0x2398f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2398f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2398f4: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x2398F4u;
    SET_GPR_U32(ctx, 31, 0x2398FCu);
    ctx->pc = 0x2398F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2398F4u;
            // 0x2398f8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398FCu; }
        if (ctx->pc != 0x2398FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398FCu; }
        if (ctx->pc != 0x2398FCu) { return; }
    }
    ctx->pc = 0x2398FCu;
label_2398fc:
    // 0x2398fc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2398FCu;
    {
        const bool branch_taken_0x2398fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398FCu;
            // 0x239900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398fc) {
            ctx->pc = 0x2399ACu;
            goto label_2399ac;
        }
    }
    ctx->pc = 0x239904u;
label_239904:
    // 0x239904: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x239904u;
    {
        const bool branch_taken_0x239904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239904u;
            // 0x239908: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239904) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x23990Cu;
    // 0x23990c: 0x8e6500d4  lw          $a1, 0xD4($s3)
    ctx->pc = 0x23990cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x239910: 0xc08e254  jal         func_238950
    ctx->pc = 0x239910u;
    SET_GPR_U32(ctx, 31, 0x239918u);
    ctx->pc = 0x239914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239910u;
            // 0x239914: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238950u;
    if (runtime->hasFunction(0x238950u)) {
        auto targetFn = runtime->lookupFunction(0x238950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239918u; }
        if (ctx->pc != 0x239918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuHowMuchNumSelect__FiP13CGameDataUsedi_0x238950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239918u; }
        if (ctx->pc != 0x239918u) { return; }
    }
    ctx->pc = 0x239918u;
label_239918:
    // 0x239918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23991c: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23991Cu;
    {
        const bool branch_taken_0x23991c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x239920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23991Cu;
            // 0x239920: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23991c) {
            ctx->pc = 0x239984u;
            goto label_239984;
        }
    }
    ctx->pc = 0x239924u;
    // 0x239924: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x239924u;
    {
        const bool branch_taken_0x239924 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x239924) {
            ctx->pc = 0x239934u;
            goto label_239934;
        }
    }
    ctx->pc = 0x23992Cu;
    // 0x23992c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x23992Cu;
    {
        const bool branch_taken_0x23992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23992c) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x239934u;
label_239934:
    // 0x239934: 0x87829608  lh          $v0, -0x69F8($gp)
    ctx->pc = 0x239934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x239938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23993c: 0x240500b0  addiu       $a1, $zero, 0xB0
    ctx->pc = 0x23993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x239940: 0xa7829640  sh          $v0, -0x69C0($gp)
    ctx->pc = 0x239940u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940224), (uint16_t)GPR_U32(ctx, 2));
    // 0x239944: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x239944u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239948: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23994c: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x239950: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x239950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x239954: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x239954u;
    SET_GPR_U32(ctx, 31, 0x23995Cu);
    ctx->pc = 0x239958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239954u;
            // 0x239958: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23995Cu; }
        if (ctx->pc != 0x23995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23995Cu; }
        if (ctx->pc != 0x23995Cu) { return; }
    }
    ctx->pc = 0x23995Cu;
label_23995c:
    // 0x23995c: 0x8f829608  lw          $v0, -0x69F8($gp)
    ctx->pc = 0x23995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
    // 0x239960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x239964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239968: 0xae221a44  sw          $v0, 0x1A44($s1)
    ctx->pc = 0x239968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6724), GPR_U32(ctx, 2));
    // 0x23996c: 0xc0875b0  jal         func_21D6C0
    ctx->pc = 0x23996Cu;
    SET_GPR_U32(ctx, 31, 0x239974u);
    ctx->pc = 0x239970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23996Cu;
            // 0x239970: 0xae201a84  sw          $zero, 0x1A84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6788), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D6C0u;
    if (runtime->hasFunction(0x21D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239974u; }
        if (ctx->pc != 0x239974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgCursor__7CDC2MesFi_0x21d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239974u; }
        if (ctx->pc != 0x239974u) { return; }
    }
    ctx->pc = 0x239974u;
label_239974:
    // 0x239974: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239974u;
    SET_GPR_U32(ctx, 31, 0x23997Cu);
    ctx->pc = 0x239978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239974u;
            // 0x239978: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23997Cu; }
        if (ctx->pc != 0x23997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23997Cu; }
        if (ctx->pc != 0x23997Cu) { return; }
    }
    ctx->pc = 0x23997Cu;
label_23997c:
    // 0x23997c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23997Cu;
    {
        const bool branch_taken_0x23997c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23997c) {
            ctx->pc = 0x2399A8u;
            goto label_2399a8;
        }
    }
    ctx->pc = 0x239984u;
label_239984:
    // 0x239984: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239988: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23998c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23998cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239990: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x239990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239994: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x239994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x239998: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 31, 0x2399A0u);
    ctx->pc = 0x23999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239998u;
            // 0x23999c: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A0u; }
        if (ctx->pc != 0x2399A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A0u; }
        if (ctx->pc != 0x2399A0u) { return; }
    }
    ctx->pc = 0x2399A0u;
label_2399a0:
    // 0x2399a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2399A0u;
    {
        const bool branch_taken_0x2399a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399A0u;
            // 0x2399a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399a0) {
            ctx->pc = 0x2399ACu;
            goto label_2399ac;
        }
    }
    ctx->pc = 0x2399A8u;
label_2399a8:
    // 0x2399a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2399a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2399ac:
    // 0x2399ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2399acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2399b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2399b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2399b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2399b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2399b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2399b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2399bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2399bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2399c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2399C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2399C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399C0u;
            // 0x2399c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2399C8u;
}
