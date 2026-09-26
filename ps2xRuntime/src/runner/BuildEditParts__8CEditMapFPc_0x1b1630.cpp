#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BuildEditParts__8CEditMapFPc
// Address: 0x1b1630 - 0x1b181c
void BuildEditParts__8CEditMapFPc_0x1b1630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildEditParts__8CEditMapFPc_0x1b1630");
#endif

    switch (ctx->pc) {
        case 0x1b1630u: goto label_1b1630;
        case 0x1b1634u: goto label_1b1634;
        case 0x1b1638u: goto label_1b1638;
        case 0x1b163cu: goto label_1b163c;
        case 0x1b1640u: goto label_1b1640;
        case 0x1b1644u: goto label_1b1644;
        case 0x1b1648u: goto label_1b1648;
        case 0x1b164cu: goto label_1b164c;
        case 0x1b1650u: goto label_1b1650;
        case 0x1b1654u: goto label_1b1654;
        case 0x1b1658u: goto label_1b1658;
        case 0x1b165cu: goto label_1b165c;
        case 0x1b1660u: goto label_1b1660;
        case 0x1b1664u: goto label_1b1664;
        case 0x1b1668u: goto label_1b1668;
        case 0x1b166cu: goto label_1b166c;
        case 0x1b1670u: goto label_1b1670;
        case 0x1b1674u: goto label_1b1674;
        case 0x1b1678u: goto label_1b1678;
        case 0x1b167cu: goto label_1b167c;
        case 0x1b1680u: goto label_1b1680;
        case 0x1b1684u: goto label_1b1684;
        case 0x1b1688u: goto label_1b1688;
        case 0x1b168cu: goto label_1b168c;
        case 0x1b1690u: goto label_1b1690;
        case 0x1b1694u: goto label_1b1694;
        case 0x1b1698u: goto label_1b1698;
        case 0x1b169cu: goto label_1b169c;
        case 0x1b16a0u: goto label_1b16a0;
        case 0x1b16a4u: goto label_1b16a4;
        case 0x1b16a8u: goto label_1b16a8;
        case 0x1b16acu: goto label_1b16ac;
        case 0x1b16b0u: goto label_1b16b0;
        case 0x1b16b4u: goto label_1b16b4;
        case 0x1b16b8u: goto label_1b16b8;
        case 0x1b16bcu: goto label_1b16bc;
        case 0x1b16c0u: goto label_1b16c0;
        case 0x1b16c4u: goto label_1b16c4;
        case 0x1b16c8u: goto label_1b16c8;
        case 0x1b16ccu: goto label_1b16cc;
        case 0x1b16d0u: goto label_1b16d0;
        case 0x1b16d4u: goto label_1b16d4;
        case 0x1b16d8u: goto label_1b16d8;
        case 0x1b16dcu: goto label_1b16dc;
        case 0x1b16e0u: goto label_1b16e0;
        case 0x1b16e4u: goto label_1b16e4;
        case 0x1b16e8u: goto label_1b16e8;
        case 0x1b16ecu: goto label_1b16ec;
        case 0x1b16f0u: goto label_1b16f0;
        case 0x1b16f4u: goto label_1b16f4;
        case 0x1b16f8u: goto label_1b16f8;
        case 0x1b16fcu: goto label_1b16fc;
        case 0x1b1700u: goto label_1b1700;
        case 0x1b1704u: goto label_1b1704;
        case 0x1b1708u: goto label_1b1708;
        case 0x1b170cu: goto label_1b170c;
        case 0x1b1710u: goto label_1b1710;
        case 0x1b1714u: goto label_1b1714;
        case 0x1b1718u: goto label_1b1718;
        case 0x1b171cu: goto label_1b171c;
        case 0x1b1720u: goto label_1b1720;
        case 0x1b1724u: goto label_1b1724;
        case 0x1b1728u: goto label_1b1728;
        case 0x1b172cu: goto label_1b172c;
        case 0x1b1730u: goto label_1b1730;
        case 0x1b1734u: goto label_1b1734;
        case 0x1b1738u: goto label_1b1738;
        case 0x1b173cu: goto label_1b173c;
        case 0x1b1740u: goto label_1b1740;
        case 0x1b1744u: goto label_1b1744;
        case 0x1b1748u: goto label_1b1748;
        case 0x1b174cu: goto label_1b174c;
        case 0x1b1750u: goto label_1b1750;
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1758u: goto label_1b1758;
        case 0x1b175cu: goto label_1b175c;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1764u: goto label_1b1764;
        case 0x1b1768u: goto label_1b1768;
        case 0x1b176cu: goto label_1b176c;
        case 0x1b1770u: goto label_1b1770;
        case 0x1b1774u: goto label_1b1774;
        case 0x1b1778u: goto label_1b1778;
        case 0x1b177cu: goto label_1b177c;
        case 0x1b1780u: goto label_1b1780;
        case 0x1b1784u: goto label_1b1784;
        case 0x1b1788u: goto label_1b1788;
        case 0x1b178cu: goto label_1b178c;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b1794u: goto label_1b1794;
        case 0x1b1798u: goto label_1b1798;
        case 0x1b179cu: goto label_1b179c;
        case 0x1b17a0u: goto label_1b17a0;
        case 0x1b17a4u: goto label_1b17a4;
        case 0x1b17a8u: goto label_1b17a8;
        case 0x1b17acu: goto label_1b17ac;
        case 0x1b17b0u: goto label_1b17b0;
        case 0x1b17b4u: goto label_1b17b4;
        case 0x1b17b8u: goto label_1b17b8;
        case 0x1b17bcu: goto label_1b17bc;
        case 0x1b17c0u: goto label_1b17c0;
        case 0x1b17c4u: goto label_1b17c4;
        case 0x1b17c8u: goto label_1b17c8;
        case 0x1b17ccu: goto label_1b17cc;
        case 0x1b17d0u: goto label_1b17d0;
        case 0x1b17d4u: goto label_1b17d4;
        case 0x1b17d8u: goto label_1b17d8;
        case 0x1b17dcu: goto label_1b17dc;
        case 0x1b17e0u: goto label_1b17e0;
        case 0x1b17e4u: goto label_1b17e4;
        case 0x1b17e8u: goto label_1b17e8;
        case 0x1b17ecu: goto label_1b17ec;
        case 0x1b17f0u: goto label_1b17f0;
        case 0x1b17f4u: goto label_1b17f4;
        case 0x1b17f8u: goto label_1b17f8;
        case 0x1b17fcu: goto label_1b17fc;
        case 0x1b1800u: goto label_1b1800;
        case 0x1b1804u: goto label_1b1804;
        case 0x1b1808u: goto label_1b1808;
        case 0x1b180cu: goto label_1b180c;
        case 0x1b1810u: goto label_1b1810;
        case 0x1b1814u: goto label_1b1814;
        case 0x1b1818u: goto label_1b1818;
        default: break;
    }

    ctx->pc = 0x1b1630u;

label_1b1630:
    // 0x1b1630: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b1630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b1634:
    // 0x1b1634: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b1634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b1638:
    // 0x1b1638: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b1638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b163c:
    // 0x1b163c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b163cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b1640:
    // 0x1b1640: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b1640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b1644:
    // 0x1b1644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b1648:
    // 0x1b1648: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b164c:
    // 0x1b164c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b1650:
    // 0x1b1650: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b1654:
    // 0x1b1654: 0xc06c2d0  jal         func_1B0B40
label_1b1658:
    if (ctx->pc == 0x1B1658u) {
        ctx->pc = 0x1B1658u;
            // 0x1b1658: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1B165Cu;
        goto label_1b165c;
    }
    ctx->pc = 0x1B1654u;
    SET_GPR_U32(ctx, 31, 0x1B165Cu);
    ctx->pc = 0x1B1658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1654u;
            // 0x1b1658: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B40u;
    if (runtime->hasFunction(0x1B0B40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B165Cu; }
        if (ctx->pc != 0x1B165Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFPc_0x1b0b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B165Cu; }
        if (ctx->pc != 0x1B165Cu) { return; }
    }
    ctx->pc = 0x1B165Cu;
label_1b165c:
    // 0x1b165c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b165cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1660:
    // 0x1b1660: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1b1664:
    if (ctx->pc == 0x1B1664u) {
        ctx->pc = 0x1B1664u;
            // 0x1b1664: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1668u;
        goto label_1b1668;
    }
    ctx->pc = 0x1B1660u;
    {
        const bool branch_taken_0x1b1660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1660u;
            // 0x1b1664: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1660) {
            ctx->pc = 0x1B1670u;
            goto label_1b1670;
        }
    }
    ctx->pc = 0x1B1668u;
label_1b1668:
    // 0x1b1668: 0x10000062  b           . + 4 + (0x62 << 2)
label_1b166c:
    if (ctx->pc == 0x1B166Cu) {
        ctx->pc = 0x1B166Cu;
            // 0x1b166c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B1670u;
        goto label_1b1670;
    }
    ctx->pc = 0x1B1668u;
    {
        const bool branch_taken_0x1b1668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B166Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1668u;
            // 0x1b166c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1668) {
            ctx->pc = 0x1B17F4u;
            goto label_1b17f4;
        }
    }
    ctx->pc = 0x1B1670u;
label_1b1670:
    // 0x1b1670: 0xc06c2e8  jal         func_1B0BA0
label_1b1674:
    if (ctx->pc == 0x1B1674u) {
        ctx->pc = 0x1B1678u;
        goto label_1b1678;
    }
    ctx->pc = 0x1B1670u;
    SET_GPR_U32(ctx, 31, 0x1B1678u);
    ctx->pc = 0x1B0BA0u;
    if (runtime->hasFunction(0x1B0BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1678u; }
        if (ctx->pc != 0x1B1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        eNewPlaceParts__8CEditMapFv_0x1b0ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1678u; }
        if (ctx->pc != 0x1B1678u) { return; }
    }
    ctx->pc = 0x1B1678u;
label_1b1678:
    // 0x1b1678: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b167c:
    // 0x1b167c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b167cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b1680:
    // 0x1b1680: 0xc06c310  jal         func_1B0C40
label_1b1684:
    if (ctx->pc == 0x1B1684u) {
        ctx->pc = 0x1B1684u;
            // 0x1b1684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1688u;
        goto label_1b1688;
    }
    ctx->pc = 0x1B1680u;
    SET_GPR_U32(ctx, 31, 0x1B1688u);
    ctx->pc = 0x1B1684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1680u;
            // 0x1b1684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1688u; }
        if (ctx->pc != 0x1B1688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1688u; }
        if (ctx->pc != 0x1B1688u) { return; }
    }
    ctx->pc = 0x1B1688u;
label_1b1688:
    // 0x1b1688: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b1688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b168c:
    // 0x1b168c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_1b1690:
    if (ctx->pc == 0x1B1690u) {
        ctx->pc = 0x1B1690u;
            // 0x1b1690: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1B1694u;
        goto label_1b1694;
    }
    ctx->pc = 0x1B168Cu;
    {
        const bool branch_taken_0x1b168c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B168Cu;
            // 0x1b1690: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b168c) {
            ctx->pc = 0x1B169Cu;
            goto label_1b169c;
        }
    }
    ctx->pc = 0x1B1694u;
label_1b1694:
    // 0x1b1694: 0x10000058  b           . + 4 + (0x58 << 2)
label_1b1698:
    if (ctx->pc == 0x1B1698u) {
        ctx->pc = 0x1B1698u;
            // 0x1b1698: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x1B169Cu;
        goto label_1b169c;
    }
    ctx->pc = 0x1B1694u;
    {
        const bool branch_taken_0x1b1694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1694u;
            // 0x1b1698: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1694) {
            ctx->pc = 0x1B17F8u;
            goto label_1b17f8;
        }
    }
    ctx->pc = 0x1B169Cu;
label_1b169c:
    // 0x1b169c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b16a0:
    // 0x1b16a0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b16a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1b16a4:
    // 0x1b16a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1b16a8:
    if (ctx->pc == 0x1B16A8u) {
        ctx->pc = 0x1B16A8u;
            // 0x1b16a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B16ACu;
        goto label_1b16ac;
    }
    ctx->pc = 0x1B16A4u;
    {
        const bool branch_taken_0x1b16a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16A4u;
            // 0x1b16a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16a4) {
            ctx->pc = 0x1B16D8u;
            goto label_1b16d8;
        }
    }
    ctx->pc = 0x1B16ACu;
label_1b16ac:
    // 0x1b16ac: 0xc06c300  jal         func_1B0C00
label_1b16b0:
    if (ctx->pc == 0x1B16B0u) {
        ctx->pc = 0x1B16B0u;
            // 0x1b16b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B16B4u;
        goto label_1b16b4;
    }
    ctx->pc = 0x1B16ACu;
    SET_GPR_U32(ctx, 31, 0x1B16B4u);
    ctx->pc = 0x1B16B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16ACu;
            // 0x1b16b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C00u;
    if (runtime->hasFunction(0x1B0C00u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16B4u; }
        if (ctx->pc != 0x1B16B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        eNewHouseInfo__8CEditMapFv_0x1b0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16B4u; }
        if (ctx->pc != 0x1B16B4u) { return; }
    }
    ctx->pc = 0x1B16B4u;
label_1b16b4:
    // 0x1b16b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b16b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b16b8:
    // 0x1b16b8: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
label_1b16bc:
    if (ctx->pc == 0x1B16BCu) {
        ctx->pc = 0x1B16C0u;
        goto label_1b16c0;
    }
    ctx->pc = 0x1B16B8u;
    {
        const bool branch_taken_0x1b16b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b16b8) {
            ctx->pc = 0x1B16D8u;
            goto label_1b16d8;
        }
    }
    ctx->pc = 0x1B16C0u;
label_1b16c0:
    // 0x1b16c0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b16c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b16c4:
    // 0x1b16c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b16c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b16c8:
    // 0x1b16c8: 0x320f809  jalr        $t9
label_1b16cc:
    if (ctx->pc == 0x1B16CCu) {
        ctx->pc = 0x1B16CCu;
            // 0x1b16cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D0u;
        goto label_1b16d0;
    }
    ctx->pc = 0x1B16C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B16D0u);
        ctx->pc = 0x1B16CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16C8u;
            // 0x1b16cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B16D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B16D0u; }
            if (ctx->pc != 0x1B16D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B16D0u;
label_1b16d0:
    // 0x1b16d0: 0x10000048  b           . + 4 + (0x48 << 2)
label_1b16d4:
    if (ctx->pc == 0x1B16D4u) {
        ctx->pc = 0x1B16D4u;
            // 0x1b16d4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1B16D8u;
        goto label_1b16d8;
    }
    ctx->pc = 0x1B16D0u;
    {
        const bool branch_taken_0x1b16d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16D0u;
            // 0x1b16d4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d0) {
            ctx->pc = 0x1B17F4u;
            goto label_1b17f4;
        }
    }
    ctx->pc = 0x1B16D8u;
label_1b16d8:
    // 0x1b16d8: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1b16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1b16dc:
    // 0x1b16dc: 0xc057358  jal         func_15CD60
label_1b16e0:
    if (ctx->pc == 0x1B16E0u) {
        ctx->pc = 0x1B16E0u;
            // 0x1b16e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B16E4u;
        goto label_1b16e4;
    }
    ctx->pc = 0x1B16DCu;
    SET_GPR_U32(ctx, 31, 0x1B16E4u);
    ctx->pc = 0x1B16E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16DCu;
            // 0x1b16e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CD60u;
    if (runtime->hasFunction(0x15CD60u)) {
        auto targetFn = runtime->lookupFunction(0x15CD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E4u; }
        if (ctx->pc != 0x1B16E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetParts__4CMapFPc_0x15cd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B16E4u; }
        if (ctx->pc != 0x1B16E4u) { return; }
    }
    ctx->pc = 0x1B16E4u;
label_1b16e4:
    // 0x1b16e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b16e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b16e8:
    // 0x1b16e8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_1b16ec:
    if (ctx->pc == 0x1B16ECu) {
        ctx->pc = 0x1B16ECu;
            // 0x1b16ec: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->pc = 0x1B16F0u;
        goto label_1b16f0;
    }
    ctx->pc = 0x1B16E8u;
    {
        const bool branch_taken_0x1b16e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16E8u;
            // 0x1b16ec: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16e8) {
            ctx->pc = 0x1B16F8u;
            goto label_1b16f8;
        }
    }
    ctx->pc = 0x1B16F0u;
label_1b16f0:
    // 0x1b16f0: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b16f4:
    if (ctx->pc == 0x1B16F4u) {
        ctx->pc = 0x1B16F4u;
            // 0x1b16f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B16F8u;
        goto label_1b16f8;
    }
    ctx->pc = 0x1B16F0u;
    {
        const bool branch_taken_0x1b16f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16F0u;
            // 0x1b16f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f0) {
            ctx->pc = 0x1B17F4u;
            goto label_1b17f4;
        }
    }
    ctx->pc = 0x1B16F8u;
label_1b16f8:
    // 0x1b16f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b16f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b16fc:
    // 0x1b16fc: 0xc04e6a8  jal         func_139AA0
label_1b1700:
    if (ctx->pc == 0x1B1700u) {
        ctx->pc = 0x1B1700u;
            // 0x1b1700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1704u;
        goto label_1b1704;
    }
    ctx->pc = 0x1B16FCu;
    SET_GPR_U32(ctx, 31, 0x1B1704u);
    ctx->pc = 0x1B1700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16FCu;
            // 0x1b1700: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139AA0u;
    if (runtime->hasFunction(0x139AA0u)) {
        auto targetFn = runtime->lookupFunction(0x139AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1704u; }
        if (ctx->pc != 0x1B1704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartStackMode__9mgCMemoryFii_0x139aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1704u; }
        if (ctx->pc != 0x1B1704u) { return; }
    }
    ctx->pc = 0x1B1704u;
label_1b1704:
    // 0x1b1704: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b1704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1708:
    // 0x1b1708: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
label_1b170c:
    if (ctx->pc == 0x1B170Cu) {
        ctx->pc = 0x1B1710u;
        goto label_1b1710;
    }
    ctx->pc = 0x1B1708u;
    {
        const bool branch_taken_0x1b1708 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1708) {
            ctx->pc = 0x1B1728u;
            goto label_1b1728;
        }
    }
    ctx->pc = 0x1B1710u;
label_1b1710:
    // 0x1b1710: 0x8ec30d38  lw          $v1, 0xD38($s6)
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3384)));
label_1b1714:
    // 0x1b1714: 0x8ec20d34  lw          $v0, 0xD34($s6)
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3380)));
label_1b1718:
    // 0x1b1718: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1b1718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b171c:
    // 0x1b171c: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x1b171cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
label_1b1720:
    // 0x1b1720: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1b1724:
    if (ctx->pc == 0x1B1724u) {
        ctx->pc = 0x1B1728u;
        goto label_1b1728;
    }
    ctx->pc = 0x1B1720u;
    {
        const bool branch_taken_0x1b1720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1720) {
            ctx->pc = 0x1B1748u;
            goto label_1b1748;
        }
    }
    ctx->pc = 0x1B1728u;
label_1b1728:
    // 0x1b1728: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b1728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b172c:
    // 0x1b172c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1b1730:
    // 0x1b1730: 0x320f809  jalr        $t9
label_1b1734:
    if (ctx->pc == 0x1B1734u) {
        ctx->pc = 0x1B1734u;
            // 0x1b1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1738u;
        goto label_1b1738;
    }
    ctx->pc = 0x1B1730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1738u);
        ctx->pc = 0x1B1734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1730u;
            // 0x1b1734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1738u; }
            if (ctx->pc != 0x1B1738u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1738u;
label_1b1738:
    // 0x1b1738: 0xc04e6f4  jal         func_139BD0
label_1b173c:
    if (ctx->pc == 0x1B173Cu) {
        ctx->pc = 0x1B173Cu;
            // 0x1b173c: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->pc = 0x1B1740u;
        goto label_1b1740;
    }
    ctx->pc = 0x1B1738u;
    SET_GPR_U32(ctx, 31, 0x1B1740u);
    ctx->pc = 0x1B173Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1738u;
            // 0x1b173c: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1740u; }
        if (ctx->pc != 0x1B1740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1740u; }
        if (ctx->pc != 0x1B1740u) { return; }
    }
    ctx->pc = 0x1B1740u;
label_1b1740:
    // 0x1b1740: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1b1744:
    if (ctx->pc == 0x1B1744u) {
        ctx->pc = 0x1B1744u;
            // 0x1b1744: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B1748u;
        goto label_1b1748;
    }
    ctx->pc = 0x1B1740u;
    {
        const bool branch_taken_0x1b1740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1740u;
            // 0x1b1744: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1740) {
            ctx->pc = 0x1B17F4u;
            goto label_1b17f4;
        }
    }
    ctx->pc = 0x1B1748u;
label_1b1748:
    // 0x1b1748: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x1b1748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1b174c:
    // 0x1b174c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b1750:
    // 0x1b1750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1754:
    // 0x1b1754: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1b1754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1b1758:
    // 0x1b1758: 0x320f809  jalr        $t9
label_1b175c:
    if (ctx->pc == 0x1B175Cu) {
        ctx->pc = 0x1B175Cu;
            // 0x1b175c: 0x26c60d10  addiu       $a2, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->pc = 0x1B1760u;
        goto label_1b1760;
    }
    ctx->pc = 0x1B1758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B1760u);
        ctx->pc = 0x1B175Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1758u;
            // 0x1b175c: 0x26c60d10  addiu       $a2, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1760u; }
            if (ctx->pc != 0x1B1760u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1760u;
label_1b1760:
    // 0x1b1760: 0xc04e6f4  jal         func_139BD0
label_1b1764:
    if (ctx->pc == 0x1B1764u) {
        ctx->pc = 0x1B1764u;
            // 0x1b1764: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->pc = 0x1B1768u;
        goto label_1b1768;
    }
    ctx->pc = 0x1B1760u;
    SET_GPR_U32(ctx, 31, 0x1B1768u);
    ctx->pc = 0x1B1764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1760u;
            // 0x1b1764: 0x26c40d10  addiu       $a0, $s6, 0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139BD0u;
    if (runtime->hasFunction(0x139BD0u)) {
        auto targetFn = runtime->lookupFunction(0x139BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1768u; }
        if (ctx->pc != 0x1B1768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndStackMode__9mgCMemoryFv_0x139bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1768u; }
        if (ctx->pc != 0x1B1768u) { return; }
    }
    ctx->pc = 0x1B1768u;
label_1b1768:
    // 0x1b1768: 0xae550320  sw          $s5, 0x320($s2)
    ctx->pc = 0x1b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 800), GPR_U32(ctx, 21));
label_1b176c:
    // 0x1b176c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b176cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1770:
    // 0x1b1770: 0xae500324  sw          $s0, 0x324($s2)
    ctx->pc = 0x1b1770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 804), GPR_U32(ctx, 16));
label_1b1774:
    // 0x1b1774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1778:
    // 0x1b1778: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b177c:
    // 0x1b177c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b177cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b1780:
    // 0x1b1780: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1b1784:
    // 0x1b1784: 0x320f809  jalr        $t9
label_1b1788:
    if (ctx->pc == 0x1B1788u) {
        ctx->pc = 0x1B1788u;
            // 0x1b1788: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B178Cu;
        goto label_1b178c;
    }
    ctx->pc = 0x1B1784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B178Cu);
        ctx->pc = 0x1B1788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1784u;
            // 0x1b1788: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B178Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B178Cu; }
            if (ctx->pc != 0x1B178Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1B178Cu;
label_1b178c:
    // 0x1b178c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b178cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b1790:
    // 0x1b1790: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b1790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1794:
    // 0x1b1794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b1798:
    // 0x1b1798: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b1798u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b179c:
    // 0x1b179c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1b17a0:
    // 0x1b17a0: 0x320f809  jalr        $t9
label_1b17a4:
    if (ctx->pc == 0x1B17A4u) {
        ctx->pc = 0x1B17A4u;
            // 0x1b17a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B17A8u;
        goto label_1b17a8;
    }
    ctx->pc = 0x1B17A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B17A8u);
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17A0u;
            // 0x1b17a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B17A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B17A8u; }
            if (ctx->pc != 0x1B17A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B17A8u;
label_1b17a8:
    // 0x1b17a8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b17a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b17ac:
    // 0x1b17ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b17acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b17b0:
    // 0x1b17b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b17b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b17b4:
    // 0x1b17b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b17b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b17b8:
    // 0x1b17b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1b17b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1b17bc:
    // 0x1b17bc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1b17bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1b17c0:
    // 0x1b17c0: 0x320f809  jalr        $t9
label_1b17c4:
    if (ctx->pc == 0x1B17C4u) {
        ctx->pc = 0x1B17C4u;
            // 0x1b17c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1B17C8u;
        goto label_1b17c8;
    }
    ctx->pc = 0x1B17C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B17C8u);
        ctx->pc = 0x1B17C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17C0u;
            // 0x1b17c4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B17C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B17C8u; }
            if (ctx->pc != 0x1B17C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B17C8u;
label_1b17c8:
    // 0x1b17c8: 0xc06d7d4  jal         func_1B5F50
label_1b17cc:
    if (ctx->pc == 0x1B17CCu) {
        ctx->pc = 0x1B17CCu;
            // 0x1b17cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B17D0u;
        goto label_1b17d0;
    }
    ctx->pc = 0x1B17C8u;
    SET_GPR_U32(ctx, 31, 0x1B17D0u);
    ctx->pc = 0x1B17CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17C8u;
            // 0x1b17cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F50u;
    if (runtime->hasFunction(0x1B5F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17D0u; }
        if (ctx->pc != 0x1B17D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckColorUpdate__10CEditPartsFv_0x1b5f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17D0u; }
        if (ctx->pc != 0x1B17D0u) { return; }
    }
    ctx->pc = 0x1B17D0u;
label_1b17d0:
    // 0x1b17d0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1b17d4:
    if (ctx->pc == 0x1B17D4u) {
        ctx->pc = 0x1B17D4u;
            // 0x1b17d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B17D8u;
        goto label_1b17d8;
    }
    ctx->pc = 0x1B17D0u;
    {
        const bool branch_taken_0x1b17d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17D0u;
            // 0x1b17d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17d0) {
            ctx->pc = 0x1B17ECu;
            goto label_1b17ec;
        }
    }
    ctx->pc = 0x1B17D8u;
label_1b17d8:
    // 0x1b17d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b17dc:
    // 0x1b17dc: 0xc049c86  jal         func_127218
label_1b17e0:
    if (ctx->pc == 0x1B17E0u) {
        ctx->pc = 0x1B17E0u;
            // 0x1b17e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1B17E4u;
        goto label_1b17e4;
    }
    ctx->pc = 0x1B17DCu;
    SET_GPR_U32(ctx, 31, 0x1B17E4u);
    ctx->pc = 0x1B17E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17DCu;
            // 0x1b17e0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17E4u; }
        if (ctx->pc != 0x1B17E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B17E4u; }
        if (ctx->pc != 0x1B17E4u) { return; }
    }
    ctx->pc = 0x1B17E4u;
label_1b17e4:
    // 0x1b17e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b17e8:
    // 0x1b17e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1b17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1b17ec:
    // 0x1b17ec: 0xae530328  sw          $s3, 0x328($s2)
    ctx->pc = 0x1b17ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 19));
label_1b17f0:
    // 0x1b17f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b17f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b17f4:
    // 0x1b17f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b17f8:
    // 0x1b17f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b17f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b17fc:
    // 0x1b17fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b17fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1800:
    // 0x1b1800: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1800u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1804:
    // 0x1b1804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1808:
    // 0x1b1808: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b180c:
    // 0x1b180c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b180cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1810:
    // 0x1b1810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1814:
    // 0x1b1814: 0x3e00008  jr          $ra
label_1b1818:
    if (ctx->pc == 0x1B1818u) {
        ctx->pc = 0x1B1818u;
            // 0x1b1818: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1B181Cu;
        goto label_fallthrough_0x1b1814;
    }
    ctx->pc = 0x1B1814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1814u;
            // 0x1b1818: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b1814:
    ctx->pc = 0x1B181Cu;
}
