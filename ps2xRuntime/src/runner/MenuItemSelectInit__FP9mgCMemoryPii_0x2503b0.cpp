#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemSelectInit__FP9mgCMemoryPii
// Address: 0x2503b0 - 0x250554
void MenuItemSelectInit__FP9mgCMemoryPii_0x2503b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemSelectInit__FP9mgCMemoryPii_0x2503b0");
#endif

    switch (ctx->pc) {
        case 0x2503f0u: goto label_2503f0;
        case 0x250400u: goto label_250400;
        case 0x25040cu: goto label_25040c;
        case 0x25041cu: goto label_25041c;
        case 0x25042cu: goto label_25042c;
        case 0x250460u: goto label_250460;
        case 0x250468u: goto label_250468;
        case 0x250474u: goto label_250474;
        case 0x25047cu: goto label_25047c;
        case 0x2504b0u: goto label_2504b0;
        case 0x2504e8u: goto label_2504e8;
        case 0x25050cu: goto label_25050c;
        case 0x25051cu: goto label_25051c;
        case 0x25053cu: goto label_25053c;
        default: break;
    }

    ctx->pc = 0x2503b0u;

    // 0x2503b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2503b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2503b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2503b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2503b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2503b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2503bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2503bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2503c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2503c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2503c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2503c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2503c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503cc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2503ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2503d0: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2503d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2503d4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2503d8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2503d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2503dc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2503dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2503e0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2503e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2503e4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2503e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2503e8: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2503E8u;
    SET_GPR_U32(ctx, 31, 0x2503F0u);
    ctx->pc = 0x2503ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2503E8u;
            // 0x2503ec: 0x2484db30  addiu       $a0, $a0, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2503F0u; }
        if (ctx->pc != 0x2503F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2503F0u; }
        if (ctx->pc != 0x2503F0u) { return; }
    }
    ctx->pc = 0x2503F0u;
label_2503f0:
    // 0x2503f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2503f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2503f4: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x2503f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2503f8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2503F8u;
    SET_GPR_U32(ctx, 31, 0x250400u);
    ctx->pc = 0x2503FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2503F8u;
            // 0x2503fc: 0x2484db30  addiu       $a0, $a0, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250400u; }
        if (ctx->pc != 0x250400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250400u; }
        if (ctx->pc != 0x250400u) { return; }
    }
    ctx->pc = 0x250400u;
label_250400:
    // 0x250400: 0x24040450  addiu       $a0, $zero, 0x450
    ctx->pc = 0x250400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    // 0x250404: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x250404u;
    SET_GPR_U32(ctx, 31, 0x25040Cu);
    ctx->pc = 0x250408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250404u;
            // 0x250408: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25040Cu; }
        if (ctx->pc != 0x25040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25040Cu; }
        if (ctx->pc != 0x25040Cu) { return; }
    }
    ctx->pc = 0x25040Cu;
label_25040c:
    // 0x25040c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25040Cu;
    {
        const bool branch_taken_0x25040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25040Cu;
            // 0x250410: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25040c) {
            ctx->pc = 0x250420u;
            goto label_250420;
        }
    }
    ctx->pc = 0x250414u;
    // 0x250414: 0xc093c54  jal         func_24F150
    ctx->pc = 0x250414u;
    SET_GPR_U32(ctx, 31, 0x25041Cu);
    ctx->pc = 0x250418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250414u;
            // 0x250418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24F150u;
    if (runtime->hasFunction(0x24F150u)) {
        auto targetFn = runtime->lookupFunction(0x24F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25041Cu; }
        if (ctx->pc != 0x25041Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11CItemSelectFv_0x24f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25041Cu; }
        if (ctx->pc != 0x25041Cu) { return; }
    }
    ctx->pc = 0x25041Cu;
label_25041c:
    // 0x25041c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25041cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250420:
    // 0x250420: 0xaf829788  sw          $v0, -0x6878($gp)
    ctx->pc = 0x250420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940552), GPR_U32(ctx, 2));
    // 0x250424: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x250424u;
    SET_GPR_U32(ctx, 31, 0x25042Cu);
    ctx->pc = 0x250428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250424u;
            // 0x250428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25042Cu; }
        if (ctx->pc != 0x25042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25042Cu; }
        if (ctx->pc != 0x25042Cu) { return; }
    }
    ctx->pc = 0x25042Cu;
label_25042c:
    // 0x25042c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x25042cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x250430: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x250430u;
    {
        const bool branch_taken_0x250430 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x250434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250430u;
            // 0x250434: 0xa3809778  sb          $zero, -0x6888($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940536), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250430) {
            ctx->pc = 0x250440u;
            goto label_250440;
        }
    }
    ctx->pc = 0x250438u;
    // 0x250438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25043c: 0xa3829778  sb          $v0, -0x6888($gp)
    ctx->pc = 0x25043cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940536), (uint8_t)GPR_U32(ctx, 2));
label_250440:
    // 0x250440: 0x8f829788  lw          $v0, -0x6878($gp)
    ctx->pc = 0x250440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940552)));
    // 0x250444: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x250444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x250448: 0x24a5db30  addiu       $a1, $a1, -0x24D0
    ctx->pc = 0x250448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957872));
    // 0x25044c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x25044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x250450: 0xaf828304  sw          $v0, -0x7CFC($gp)
    ctx->pc = 0x250450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 2));
    // 0x250454: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x250454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    // 0x250458: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x250458u;
    SET_GPR_U32(ctx, 31, 0x250460u);
    ctx->pc = 0x25045Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250458u;
            // 0x25045c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250460u; }
        if (ctx->pc != 0x250460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250460u; }
        if (ctx->pc != 0x250460u) { return; }
    }
    ctx->pc = 0x250460u;
label_250460:
    // 0x250460: 0xc08ad38  jal         func_22B4E0
    ctx->pc = 0x250460u;
    SET_GPR_U32(ctx, 31, 0x250468u);
    ctx->pc = 0x250464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250460u;
            // 0x250464: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B4E0u;
    if (runtime->hasFunction(0x22B4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250468u; }
        if (ctx->pc != 0x250468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachCommonTexInfo__18CMenuPosDataManageFv_0x22b4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250468u; }
        if (ctx->pc != 0x250468u) { return; }
    }
    ctx->pc = 0x250468u;
label_250468:
    // 0x250468: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x250468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25046c: 0xc04e780  jal         func_139E00
    ctx->pc = 0x25046Cu;
    SET_GPR_U32(ctx, 31, 0x250474u);
    ctx->pc = 0x250470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25046Cu;
            // 0x250470: 0x2484db30  addiu       $a0, $a0, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250474u; }
        if (ctx->pc != 0x250474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250474u; }
        if (ctx->pc != 0x250474u) { return; }
    }
    ctx->pc = 0x250474u;
label_250474:
    // 0x250474: 0xc052330  jal         func_148CC0
    ctx->pc = 0x250474u;
    SET_GPR_U32(ctx, 31, 0x25047Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25047Cu; }
        if (ctx->pc != 0x25047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25047Cu; }
        if (ctx->pc != 0x25047Cu) { return; }
    }
    ctx->pc = 0x25047Cu;
label_25047c:
    // 0x25047c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x250480: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x250480u;
    {
        const bool branch_taken_0x250480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x250484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x250480u;
            // 0x250484: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250480) {
            ctx->pc = 0x2504B8u;
            goto label_2504b8;
        }
    }
    ctx->pc = 0x250488u;
    // 0x250488: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x250488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x25048c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x250490: 0x8c23db54  lw          $v1, -0x24AC($at)
    ctx->pc = 0x250490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957908)));
    // 0x250494: 0x2484bbe0  addiu       $a0, $a0, -0x4420
    ctx->pc = 0x250494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949856));
    // 0x250498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x250498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25049c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25049cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2504a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2504a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2504a4: 0x8c22db50  lw          $v0, -0x24B0($at)
    ctx->pc = 0x2504a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957904)));
    // 0x2504a8: 0xc094440  jal         func_251100
    ctx->pc = 0x2504A8u;
    SET_GPR_U32(ctx, 31, 0x2504B0u);
    ctx->pc = 0x2504ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2504A8u;
            // 0x2504ac: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2504B0u; }
        if (ctx->pc != 0x2504B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2504B0u; }
        if (ctx->pc != 0x2504B0u) { return; }
    }
    ctx->pc = 0x2504B0u;
label_2504b0:
    // 0x2504b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2504b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504b4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2504b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2504b8:
    // 0x2504b8: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2504B8u;
    {
        const bool branch_taken_0x2504b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2504BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2504B8u;
            // 0x2504bc: 0x3202000f  andi        $v0, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504b8) {
            ctx->pc = 0x2504F0u;
            goto label_2504f0;
        }
    }
    ctx->pc = 0x2504C0u;
    // 0x2504c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2504c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2504c4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2504c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x2504c8: 0x8c23db54  lw          $v1, -0x24AC($at)
    ctx->pc = 0x2504c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957908)));
    // 0x2504cc: 0x2484bbf0  addiu       $a0, $a0, -0x4410
    ctx->pc = 0x2504ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949872));
    // 0x2504d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2504d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2504d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2504d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2504d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2504dc: 0x8c22db50  lw          $v0, -0x24B0($at)
    ctx->pc = 0x2504dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957904)));
    // 0x2504e0: 0xc094440  jal         func_251100
    ctx->pc = 0x2504E0u;
    SET_GPR_U32(ctx, 31, 0x2504E8u);
    ctx->pc = 0x2504E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2504E0u;
            // 0x2504e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2504E8u; }
        if (ctx->pc != 0x2504E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2504E8u; }
        if (ctx->pc != 0x2504E8u) { return; }
    }
    ctx->pc = 0x2504E8u;
label_2504e8:
    // 0x2504e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2504e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2504ec: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x2504ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_2504f0:
    // 0x2504f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2504F0u;
    {
        const bool branch_taken_0x2504f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2504F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2504F0u;
            // 0x2504f4: 0x102902  srl         $a1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2504f0) {
            ctx->pc = 0x250500u;
            goto label_250500;
        }
    }
    ctx->pc = 0x2504F8u;
    // 0x2504f8: 0x101102  srl         $v0, $s0, 4
    ctx->pc = 0x2504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x2504fc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2504fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_250500:
    // 0x250500: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x250500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x250504: 0xc04e748  jal         func_139D20
    ctx->pc = 0x250504u;
    SET_GPR_U32(ctx, 31, 0x25050Cu);
    ctx->pc = 0x250508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250504u;
            // 0x250508: 0x2484db30  addiu       $a0, $a0, -0x24D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25050Cu; }
        if (ctx->pc != 0x25050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25050Cu; }
        if (ctx->pc != 0x25050Cu) { return; }
    }
    ctx->pc = 0x25050Cu;
label_25050c:
    // 0x25050c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25050cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250510: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x250510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x250514: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x250514u;
    SET_GPR_U32(ctx, 31, 0x25051Cu);
    ctx->pc = 0x250518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250514u;
            // 0x250518: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25051Cu; }
        if (ctx->pc != 0x25051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25051Cu; }
        if (ctx->pc != 0x25051Cu) { return; }
    }
    ctx->pc = 0x25051Cu;
label_25051c:
    // 0x25051c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25051cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250520: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x250520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x250524: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x250524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x250528: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x250528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
    // 0x25052c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x25052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x250530: 0x8c24ca40  lw          $a0, -0x35C0($at)
    ctx->pc = 0x250530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
    // 0x250534: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x250534u;
    SET_GPR_U32(ctx, 31, 0x25053Cu);
    ctx->pc = 0x250538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x250534u;
            // 0x250538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25053Cu; }
        if (ctx->pc != 0x25053Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25053Cu; }
        if (ctx->pc != 0x25053Cu) { return; }
    }
    ctx->pc = 0x25053Cu;
label_25053c:
    // 0x25053c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x250540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x250544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x250548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25054c: 0x3e00008  jr          $ra
    ctx->pc = 0x25054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25054Cu;
            // 0x250550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x250554u;
}
