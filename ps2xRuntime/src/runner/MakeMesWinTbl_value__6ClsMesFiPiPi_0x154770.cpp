#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMesWinTbl_value__6ClsMesFiPiPi
// Address: 0x154770 - 0x154aa4
void MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMesWinTbl_value__6ClsMesFiPiPi_0x154770");
#endif

    switch (ctx->pc) {
        case 0x1547e8u: goto label_1547e8;
        case 0x15480cu: goto label_15480c;
        case 0x154818u: goto label_154818;
        case 0x154858u: goto label_154858;
        case 0x154874u: goto label_154874;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548e0u: goto label_1548e0;
        case 0x154900u: goto label_154900;
        case 0x154920u: goto label_154920;
        case 0x154940u: goto label_154940;
        case 0x154960u: goto label_154960;
        case 0x154980u: goto label_154980;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549e0u: goto label_1549e0;
        case 0x154a00u: goto label_154a00;
        case 0x154a20u: goto label_154a20;
        default: break;
    }

    ctx->pc = 0x154770u;

    // 0x154770: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x154770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x154774: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x154774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x154778: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x154778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15477c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15477cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154780: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x154780u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154788: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x154788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15478c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15478cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154790: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154794: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154798: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x154798u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15479c: 0x8c831acc  lw          $v1, 0x1ACC($a0)
    ctx->pc = 0x15479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6860)));
    // 0x1547a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1547A0u;
    {
        const bool branch_taken_0x1547a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1547A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547A0u;
            // 0x1547a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547a0) {
            ctx->pc = 0x1547BCu;
            goto label_1547bc;
        }
    }
    ctx->pc = 0x1547A8u;
    // 0x1547a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1547a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1547ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1547acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1547b0: 0x8c631a44  lw          $v1, 0x1A44($v1)
    ctx->pc = 0x1547b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6724)));
    // 0x1547b4: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1547B4u;
    {
        const bool branch_taken_0x1547b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547b4) {
            ctx->pc = 0x154A80u;
            goto label_154a80;
        }
    }
    ctx->pc = 0x1547BCu;
label_1547bc:
    // 0x1547bc: 0x8e021ac8  lw          $v0, 0x1AC8($s0)
    ctx->pc = 0x1547bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6856)));
    // 0x1547c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1547C0u;
    {
        const bool branch_taken_0x1547c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547C0u;
            // 0x1547c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547c0) {
            ctx->pc = 0x1547F4u;
            goto label_1547f4;
        }
    }
    ctx->pc = 0x1547C8u;
    // 0x1547c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1547c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1547cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1547d0: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x1547d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x1547d4: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1547D4u;
    {
        const bool branch_taken_0x1547d4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1547D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547D4u;
            // 0x1547d8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547d4) {
            ctx->pc = 0x1547F0u;
            goto label_1547f0;
        }
    }
    ctx->pc = 0x1547DCu;
    // 0x1547dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1547dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1547e0: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1547E0u;
    SET_GPR_U32(ctx, 31, 0x1547E8u);
    ctx->pc = 0x1547E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1547E0u;
            // 0x1547e4: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547E8u; }
        if (ctx->pc != 0x1547E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1547E8u; }
        if (ctx->pc != 0x1547E8u) { return; }
    }
    ctx->pc = 0x1547E8u;
label_1547e8:
    // 0x1547e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1547E8u;
    {
        const bool branch_taken_0x1547e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1547ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1547E8u;
            // 0x1547ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1547e8) {
            ctx->pc = 0x154810u;
            goto label_154810;
        }
    }
    ctx->pc = 0x1547F0u;
label_1547f0:
    // 0x1547f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1547f4:
    // 0x1547f4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1547f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1547f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1547f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1547fc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1547fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x154800: 0x8c461a44  lw          $a2, 0x1A44($v0)
    ctx->pc = 0x154800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6724)));
    // 0x154804: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x154804u;
    SET_GPR_U32(ctx, 31, 0x15480Cu);
    ctx->pc = 0x154808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154804u;
            // 0x154808: 0x24a52960  addiu       $a1, $a1, 0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15480Cu; }
        if (ctx->pc != 0x15480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15480Cu; }
        if (ctx->pc != 0x15480Cu) { return; }
    }
    ctx->pc = 0x15480Cu;
label_15480c:
    // 0x15480c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x15480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_154810:
    // 0x154810: 0xc04a422  jal         func_129088
    ctx->pc = 0x154810u;
    SET_GPR_U32(ctx, 31, 0x154818u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154818u; }
        if (ctx->pc != 0x154818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154818u; }
        if (ctx->pc != 0x154818u) { return; }
    }
    ctx->pc = 0x154818u;
label_154818:
    // 0x154818: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15481c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x15481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154820: 0x8c631a84  lw          $v1, 0x1A84($v1)
    ctx->pc = 0x154820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6788)));
    // 0x154824: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x154824u;
    {
        const bool branch_taken_0x154824 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x154828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154824u;
            // 0x154828: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154824) {
            ctx->pc = 0x15484Cu;
            goto label_15484c;
        }
    }
    ctx->pc = 0x15482Cu;
    // 0x15482c: 0x8e0600c0  lw          $a2, 0xC0($s0)
    ctx->pc = 0x15482cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x154830: 0x712023  subu        $a0, $v1, $s1
    ctx->pc = 0x154830u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154834: 0x8e051ad4  lw          $a1, 0x1AD4($s0)
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6868)));
    // 0x154838: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x154838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15483c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x154840: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x154840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x154844: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154848: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x154848u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_15484c:
    // 0x15484c: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15484cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x154850: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x154850u;
    {
        const bool branch_taken_0x154850 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154850u;
            // 0x154854: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154850) {
            ctx->pc = 0x154A80u;
            goto label_154a80;
        }
    }
    ctx->pc = 0x154858u;
label_154858:
    // 0x154858: 0x8e031ad0  lw          $v1, 0x1AD0($s0)
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x15485c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x15485Cu;
    {
        const bool branch_taken_0x15485c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15485Cu;
            // 0x154860: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15485c) {
            ctx->pc = 0x15487Cu;
            goto label_15487c;
        }
    }
    ctx->pc = 0x154864u;
    // 0x154864: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x154868: 0x80450070  lb          $a1, 0x70($v0)
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x15486c: 0xc0b522c  jal         func_2D48B0
    ctx->pc = 0x15486Cu;
    SET_GPR_U32(ctx, 31, 0x154874u);
    ctx->pc = 0x154870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15486Cu;
            // 0x154870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D48B0u;
    if (runtime->hasFunction(0x2D48B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D48B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154874u; }
        if (ctx->pc != 0x154874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHalfFontNo__5CFontFc_0x2d48b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154874u; }
        if (ctx->pc != 0x154874u) { return; }
    }
    ctx->pc = 0x154874u;
label_154874:
    // 0x154874: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x154874u;
    {
        const bool branch_taken_0x154874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154874u;
            // 0x154878: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154874) {
            ctx->pc = 0x154A04u;
            goto label_154a04;
        }
    }
    ctx->pc = 0x15487Cu;
label_15487c:
    // 0x15487c: 0x0  nop
    ctx->pc = 0x15487cu;
    // NOP
    // 0x154880: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x154884: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x154884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x154888: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15488c: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x15488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x154890: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154890u;
    {
        const bool branch_taken_0x154890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154890u;
            // 0x154894: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154890) {
            ctx->pc = 0x1548A4u;
            goto label_1548a4;
        }
    }
    ctx->pc = 0x154898u;
    // 0x154898: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154898u;
    SET_GPR_U32(ctx, 31, 0x1548A0u);
    ctx->pc = 0x15489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154898u;
            // 0x15489c: 0x24842968  addiu       $a0, $a0, 0x2968 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548A0u; }
        if (ctx->pc != 0x1548A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548A0u; }
        if (ctx->pc != 0x1548A0u) { return; }
    }
    ctx->pc = 0x1548A0u;
label_1548a0:
    // 0x1548a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548a4:
    // 0x1548a4: 0x0  nop
    ctx->pc = 0x1548a4u;
    // NOP
    // 0x1548a8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1548a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1548ac: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1548b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1548B0u;
    {
        const bool branch_taken_0x1548b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1548B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548B0u;
            // 0x1548b4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548b0) {
            ctx->pc = 0x1548C4u;
            goto label_1548c4;
        }
    }
    ctx->pc = 0x1548B8u;
    // 0x1548b8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1548B8u;
    SET_GPR_U32(ctx, 31, 0x1548C0u);
    ctx->pc = 0x1548BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1548B8u;
            // 0x1548bc: 0x24842970  addiu       $a0, $a0, 0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548C0u; }
        if (ctx->pc != 0x1548C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548C0u; }
        if (ctx->pc != 0x1548C0u) { return; }
    }
    ctx->pc = 0x1548C0u;
label_1548c0:
    // 0x1548c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548c4:
    // 0x1548c4: 0x0  nop
    ctx->pc = 0x1548c4u;
    // NOP
    // 0x1548c8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1548c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1548cc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1548ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1548d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1548D0u;
    {
        const bool branch_taken_0x1548d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1548D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548D0u;
            // 0x1548d4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548d0) {
            ctx->pc = 0x1548E4u;
            goto label_1548e4;
        }
    }
    ctx->pc = 0x1548D8u;
    // 0x1548d8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1548D8u;
    SET_GPR_U32(ctx, 31, 0x1548E0u);
    ctx->pc = 0x1548DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1548D8u;
            // 0x1548dc: 0x24842978  addiu       $a0, $a0, 0x2978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548E0u; }
        if (ctx->pc != 0x1548E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1548E0u; }
        if (ctx->pc != 0x1548E0u) { return; }
    }
    ctx->pc = 0x1548E0u;
label_1548e0:
    // 0x1548e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1548e4:
    // 0x1548e4: 0x0  nop
    ctx->pc = 0x1548e4u;
    // NOP
    // 0x1548e8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1548ec: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1548f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1548F0u;
    {
        const bool branch_taken_0x1548f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1548F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1548F0u;
            // 0x1548f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548f0) {
            ctx->pc = 0x154904u;
            goto label_154904;
        }
    }
    ctx->pc = 0x1548F8u;
    // 0x1548f8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1548F8u;
    SET_GPR_U32(ctx, 31, 0x154900u);
    ctx->pc = 0x1548FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1548F8u;
            // 0x1548fc: 0x24842980  addiu       $a0, $a0, 0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154900u; }
        if (ctx->pc != 0x154900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154900u; }
        if (ctx->pc != 0x154900u) { return; }
    }
    ctx->pc = 0x154900u;
label_154900:
    // 0x154900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154904:
    // 0x154904: 0x0  nop
    ctx->pc = 0x154904u;
    // NOP
    // 0x154908: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15490c: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x154910: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154910u;
    {
        const bool branch_taken_0x154910 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154910u;
            // 0x154914: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154910) {
            ctx->pc = 0x154924u;
            goto label_154924;
        }
    }
    ctx->pc = 0x154918u;
    // 0x154918: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154918u;
    SET_GPR_U32(ctx, 31, 0x154920u);
    ctx->pc = 0x15491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154918u;
            // 0x15491c: 0x24842988  addiu       $a0, $a0, 0x2988 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154920u; }
        if (ctx->pc != 0x154920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154920u; }
        if (ctx->pc != 0x154920u) { return; }
    }
    ctx->pc = 0x154920u;
label_154920:
    // 0x154920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154924:
    // 0x154924: 0x0  nop
    ctx->pc = 0x154924u;
    // NOP
    // 0x154928: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15492c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x154930: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154930u;
    {
        const bool branch_taken_0x154930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154930u;
            // 0x154934: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154930) {
            ctx->pc = 0x154944u;
            goto label_154944;
        }
    }
    ctx->pc = 0x154938u;
    // 0x154938: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154938u;
    SET_GPR_U32(ctx, 31, 0x154940u);
    ctx->pc = 0x15493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154938u;
            // 0x15493c: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154940u; }
        if (ctx->pc != 0x154940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154940u; }
        if (ctx->pc != 0x154940u) { return; }
    }
    ctx->pc = 0x154940u;
label_154940:
    // 0x154940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154944:
    // 0x154944: 0x0  nop
    ctx->pc = 0x154944u;
    // NOP
    // 0x154948: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15494c: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x154950: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154950u;
    {
        const bool branch_taken_0x154950 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154950u;
            // 0x154954: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154950) {
            ctx->pc = 0x154964u;
            goto label_154964;
        }
    }
    ctx->pc = 0x154958u;
    // 0x154958: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154958u;
    SET_GPR_U32(ctx, 31, 0x154960u);
    ctx->pc = 0x15495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154958u;
            // 0x15495c: 0x24842998  addiu       $a0, $a0, 0x2998 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154960u; }
        if (ctx->pc != 0x154960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154960u; }
        if (ctx->pc != 0x154960u) { return; }
    }
    ctx->pc = 0x154960u;
label_154960:
    // 0x154960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154964:
    // 0x154964: 0x0  nop
    ctx->pc = 0x154964u;
    // NOP
    // 0x154968: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15496c: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x154970: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154970u;
    {
        const bool branch_taken_0x154970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154970u;
            // 0x154974: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154970) {
            ctx->pc = 0x154984u;
            goto label_154984;
        }
    }
    ctx->pc = 0x154978u;
    // 0x154978: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154978u;
    SET_GPR_U32(ctx, 31, 0x154980u);
    ctx->pc = 0x15497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154978u;
            // 0x15497c: 0x248429a0  addiu       $a0, $a0, 0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154980u; }
        if (ctx->pc != 0x154980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154980u; }
        if (ctx->pc != 0x154980u) { return; }
    }
    ctx->pc = 0x154980u;
label_154980:
    // 0x154980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154984:
    // 0x154984: 0x0  nop
    ctx->pc = 0x154984u;
    // NOP
    // 0x154988: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15498c: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x154990: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154990u;
    {
        const bool branch_taken_0x154990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154990u;
            // 0x154994: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154990) {
            ctx->pc = 0x1549A4u;
            goto label_1549a4;
        }
    }
    ctx->pc = 0x154998u;
    // 0x154998: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x154998u;
    SET_GPR_U32(ctx, 31, 0x1549A0u);
    ctx->pc = 0x15499Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154998u;
            // 0x15499c: 0x248429a8  addiu       $a0, $a0, 0x29A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549A0u; }
        if (ctx->pc != 0x1549A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549A0u; }
        if (ctx->pc != 0x1549A0u) { return; }
    }
    ctx->pc = 0x1549A0u;
label_1549a0:
    // 0x1549a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1549a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549a4:
    // 0x1549a4: 0x0  nop
    ctx->pc = 0x1549a4u;
    // NOP
    // 0x1549a8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1549a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1549ac: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1549acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1549b0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549B0u;
    {
        const bool branch_taken_0x1549b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1549B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549B0u;
            // 0x1549b4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549b0) {
            ctx->pc = 0x1549C4u;
            goto label_1549c4;
        }
    }
    ctx->pc = 0x1549B8u;
    // 0x1549b8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1549B8u;
    SET_GPR_U32(ctx, 31, 0x1549C0u);
    ctx->pc = 0x1549BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1549B8u;
            // 0x1549bc: 0x248429b0  addiu       $a0, $a0, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549C0u; }
        if (ctx->pc != 0x1549C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549C0u; }
        if (ctx->pc != 0x1549C0u) { return; }
    }
    ctx->pc = 0x1549C0u;
label_1549c0:
    // 0x1549c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1549c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549c4:
    // 0x1549c4: 0x0  nop
    ctx->pc = 0x1549c4u;
    // NOP
    // 0x1549c8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1549cc: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1549d0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549D0u;
    {
        const bool branch_taken_0x1549d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1549D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549D0u;
            // 0x1549d4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549d0) {
            ctx->pc = 0x1549E4u;
            goto label_1549e4;
        }
    }
    ctx->pc = 0x1549D8u;
    // 0x1549d8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1549D8u;
    SET_GPR_U32(ctx, 31, 0x1549E0u);
    ctx->pc = 0x1549DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1549D8u;
            // 0x1549dc: 0x248429b8  addiu       $a0, $a0, 0x29B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549E0u; }
        if (ctx->pc != 0x1549E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1549E0u; }
        if (ctx->pc != 0x1549E0u) { return; }
    }
    ctx->pc = 0x1549E0u;
label_1549e0:
    // 0x1549e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1549e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549e4:
    // 0x1549e4: 0x0  nop
    ctx->pc = 0x1549e4u;
    // NOP
    // 0x1549e8: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x1549e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1549ec: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1549ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1549f0: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1549F0u;
    {
        const bool branch_taken_0x1549f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1549F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1549F0u;
            // 0x1549f4: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1549f0) {
            ctx->pc = 0x154A04u;
            goto label_154a04;
        }
    }
    ctx->pc = 0x1549F8u;
    // 0x1549f8: 0xc0b51d0  jal         func_2D4740
    ctx->pc = 0x1549F8u;
    SET_GPR_U32(ctx, 31, 0x154A00u);
    ctx->pc = 0x1549FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1549F8u;
            // 0x1549fc: 0x248429c0  addiu       $a0, $a0, 0x29C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4740u;
    if (runtime->hasFunction(0x2D4740u)) {
        auto targetFn = runtime->lookupFunction(0x2D4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A00u; }
        if (ctx->pc != 0x154A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontNo__FPc_0x2d4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A00u; }
        if (ctx->pc != 0x154A00u) { return; }
    }
    ctx->pc = 0x154A00u;
label_154a00:
    // 0x154a00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x154a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_154a04:
    // 0x154a04: 0x0  nop
    ctx->pc = 0x154a04u;
    // NOP
    // 0x154a08: 0x4a00019  bltz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x154A08u;
    {
        const bool branch_taken_0x154a08 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x154a08) {
            ctx->pc = 0x154A70u;
            goto label_154a70;
        }
    }
    ctx->pc = 0x154A10u;
    // 0x154a10: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x154a10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154a14: 0x86870000  lh          $a3, 0x0($s4)
    ctx->pc = 0x154a14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x154a18: 0xc055834  jal         func_1560D0
    ctx->pc = 0x154A18u;
    SET_GPR_U32(ctx, 31, 0x154A20u);
    ctx->pc = 0x154A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154A18u;
            // 0x154a1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1560D0u;
    if (runtime->hasFunction(0x1560D0u)) {
        auto targetFn = runtime->lookupFunction(0x1560D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A20u; }
        if (ctx->pc != 0x154A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMesWinTbl__6ClsMesFiss_0x1560d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154A20u; }
        if (ctx->pc != 0x154A20u) { return; }
    }
    ctx->pc = 0x154A20u;
label_154a20:
    // 0x154a20: 0x8e031ad0  lw          $v1, 0x1AD0($s0)
    ctx->pc = 0x154a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6864)));
    // 0x154a24: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x154A24u;
    {
        const bool branch_taken_0x154a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a24) {
            ctx->pc = 0x154A58u;
            goto label_154a58;
        }
    }
    ctx->pc = 0x154A2Cu;
    // 0x154a2c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x154a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x154a30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x154A30u;
    {
        const bool branch_taken_0x154a30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x154A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A30u;
            // 0x154a34: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a30) {
            ctx->pc = 0x154A40u;
            goto label_154a40;
        }
    }
    ctx->pc = 0x154A38u;
    // 0x154a38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x154a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x154a3c: 0x32843  sra         $a1, $v1, 1
    ctx->pc = 0x154a3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
label_154a40:
    // 0x154a40: 0x8e041ad4  lw          $a0, 0x1AD4($s0)
    ctx->pc = 0x154a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6868)));
    // 0x154a44: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x154a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154a48: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154a4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x154A50u;
    {
        const bool branch_taken_0x154a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A50u;
            // 0x154a54: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154a50) {
            ctx->pc = 0x154A70u;
            goto label_154a70;
        }
    }
    ctx->pc = 0x154A58u;
label_154a58:
    // 0x154a58: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x154a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x154a5c: 0x8e041ad4  lw          $a0, 0x1AD4($s0)
    ctx->pc = 0x154a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6868)));
    // 0x154a60: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x154a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x154a64: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x154a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154a6c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x154a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_154a70:
    // 0x154a70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x154a70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x154a74: 0x251182a  slt         $v1, $s2, $s1
    ctx->pc = 0x154a74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x154a78: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
    ctx->pc = 0x154A78u;
    {
        const bool branch_taken_0x154a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x154a78) {
            ctx->pc = 0x154858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_154858;
        }
    }
    ctx->pc = 0x154A80u;
label_154a80:
    // 0x154a80: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x154a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154a84: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x154a84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154a88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154a88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154a8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x154a8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x154a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154a94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154a98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x154A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154A9Cu;
            // 0x154aa0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x154AA4u;
}
