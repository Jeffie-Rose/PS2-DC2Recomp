#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__16CEffectScriptManFv
// Address: 0x2e1600 - 0x2e19a4
void Step__16CEffectScriptManFv_0x2e1600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__16CEffectScriptManFv_0x2e1600");
#endif

    switch (ctx->pc) {
        case 0x2e1600u: goto label_2e1600;
        case 0x2e1604u: goto label_2e1604;
        case 0x2e1608u: goto label_2e1608;
        case 0x2e160cu: goto label_2e160c;
        case 0x2e1610u: goto label_2e1610;
        case 0x2e1614u: goto label_2e1614;
        case 0x2e1618u: goto label_2e1618;
        case 0x2e161cu: goto label_2e161c;
        case 0x2e1620u: goto label_2e1620;
        case 0x2e1624u: goto label_2e1624;
        case 0x2e1628u: goto label_2e1628;
        case 0x2e162cu: goto label_2e162c;
        case 0x2e1630u: goto label_2e1630;
        case 0x2e1634u: goto label_2e1634;
        case 0x2e1638u: goto label_2e1638;
        case 0x2e163cu: goto label_2e163c;
        case 0x2e1640u: goto label_2e1640;
        case 0x2e1644u: goto label_2e1644;
        case 0x2e1648u: goto label_2e1648;
        case 0x2e164cu: goto label_2e164c;
        case 0x2e1650u: goto label_2e1650;
        case 0x2e1654u: goto label_2e1654;
        case 0x2e1658u: goto label_2e1658;
        case 0x2e165cu: goto label_2e165c;
        case 0x2e1660u: goto label_2e1660;
        case 0x2e1664u: goto label_2e1664;
        case 0x2e1668u: goto label_2e1668;
        case 0x2e166cu: goto label_2e166c;
        case 0x2e1670u: goto label_2e1670;
        case 0x2e1674u: goto label_2e1674;
        case 0x2e1678u: goto label_2e1678;
        case 0x2e167cu: goto label_2e167c;
        case 0x2e1680u: goto label_2e1680;
        case 0x2e1684u: goto label_2e1684;
        case 0x2e1688u: goto label_2e1688;
        case 0x2e168cu: goto label_2e168c;
        case 0x2e1690u: goto label_2e1690;
        case 0x2e1694u: goto label_2e1694;
        case 0x2e1698u: goto label_2e1698;
        case 0x2e169cu: goto label_2e169c;
        case 0x2e16a0u: goto label_2e16a0;
        case 0x2e16a4u: goto label_2e16a4;
        case 0x2e16a8u: goto label_2e16a8;
        case 0x2e16acu: goto label_2e16ac;
        case 0x2e16b0u: goto label_2e16b0;
        case 0x2e16b4u: goto label_2e16b4;
        case 0x2e16b8u: goto label_2e16b8;
        case 0x2e16bcu: goto label_2e16bc;
        case 0x2e16c0u: goto label_2e16c0;
        case 0x2e16c4u: goto label_2e16c4;
        case 0x2e16c8u: goto label_2e16c8;
        case 0x2e16ccu: goto label_2e16cc;
        case 0x2e16d0u: goto label_2e16d0;
        case 0x2e16d4u: goto label_2e16d4;
        case 0x2e16d8u: goto label_2e16d8;
        case 0x2e16dcu: goto label_2e16dc;
        case 0x2e16e0u: goto label_2e16e0;
        case 0x2e16e4u: goto label_2e16e4;
        case 0x2e16e8u: goto label_2e16e8;
        case 0x2e16ecu: goto label_2e16ec;
        case 0x2e16f0u: goto label_2e16f0;
        case 0x2e16f4u: goto label_2e16f4;
        case 0x2e16f8u: goto label_2e16f8;
        case 0x2e16fcu: goto label_2e16fc;
        case 0x2e1700u: goto label_2e1700;
        case 0x2e1704u: goto label_2e1704;
        case 0x2e1708u: goto label_2e1708;
        case 0x2e170cu: goto label_2e170c;
        case 0x2e1710u: goto label_2e1710;
        case 0x2e1714u: goto label_2e1714;
        case 0x2e1718u: goto label_2e1718;
        case 0x2e171cu: goto label_2e171c;
        case 0x2e1720u: goto label_2e1720;
        case 0x2e1724u: goto label_2e1724;
        case 0x2e1728u: goto label_2e1728;
        case 0x2e172cu: goto label_2e172c;
        case 0x2e1730u: goto label_2e1730;
        case 0x2e1734u: goto label_2e1734;
        case 0x2e1738u: goto label_2e1738;
        case 0x2e173cu: goto label_2e173c;
        case 0x2e1740u: goto label_2e1740;
        case 0x2e1744u: goto label_2e1744;
        case 0x2e1748u: goto label_2e1748;
        case 0x2e174cu: goto label_2e174c;
        case 0x2e1750u: goto label_2e1750;
        case 0x2e1754u: goto label_2e1754;
        case 0x2e1758u: goto label_2e1758;
        case 0x2e175cu: goto label_2e175c;
        case 0x2e1760u: goto label_2e1760;
        case 0x2e1764u: goto label_2e1764;
        case 0x2e1768u: goto label_2e1768;
        case 0x2e176cu: goto label_2e176c;
        case 0x2e1770u: goto label_2e1770;
        case 0x2e1774u: goto label_2e1774;
        case 0x2e1778u: goto label_2e1778;
        case 0x2e177cu: goto label_2e177c;
        case 0x2e1780u: goto label_2e1780;
        case 0x2e1784u: goto label_2e1784;
        case 0x2e1788u: goto label_2e1788;
        case 0x2e178cu: goto label_2e178c;
        case 0x2e1790u: goto label_2e1790;
        case 0x2e1794u: goto label_2e1794;
        case 0x2e1798u: goto label_2e1798;
        case 0x2e179cu: goto label_2e179c;
        case 0x2e17a0u: goto label_2e17a0;
        case 0x2e17a4u: goto label_2e17a4;
        case 0x2e17a8u: goto label_2e17a8;
        case 0x2e17acu: goto label_2e17ac;
        case 0x2e17b0u: goto label_2e17b0;
        case 0x2e17b4u: goto label_2e17b4;
        case 0x2e17b8u: goto label_2e17b8;
        case 0x2e17bcu: goto label_2e17bc;
        case 0x2e17c0u: goto label_2e17c0;
        case 0x2e17c4u: goto label_2e17c4;
        case 0x2e17c8u: goto label_2e17c8;
        case 0x2e17ccu: goto label_2e17cc;
        case 0x2e17d0u: goto label_2e17d0;
        case 0x2e17d4u: goto label_2e17d4;
        case 0x2e17d8u: goto label_2e17d8;
        case 0x2e17dcu: goto label_2e17dc;
        case 0x2e17e0u: goto label_2e17e0;
        case 0x2e17e4u: goto label_2e17e4;
        case 0x2e17e8u: goto label_2e17e8;
        case 0x2e17ecu: goto label_2e17ec;
        case 0x2e17f0u: goto label_2e17f0;
        case 0x2e17f4u: goto label_2e17f4;
        case 0x2e17f8u: goto label_2e17f8;
        case 0x2e17fcu: goto label_2e17fc;
        case 0x2e1800u: goto label_2e1800;
        case 0x2e1804u: goto label_2e1804;
        case 0x2e1808u: goto label_2e1808;
        case 0x2e180cu: goto label_2e180c;
        case 0x2e1810u: goto label_2e1810;
        case 0x2e1814u: goto label_2e1814;
        case 0x2e1818u: goto label_2e1818;
        case 0x2e181cu: goto label_2e181c;
        case 0x2e1820u: goto label_2e1820;
        case 0x2e1824u: goto label_2e1824;
        case 0x2e1828u: goto label_2e1828;
        case 0x2e182cu: goto label_2e182c;
        case 0x2e1830u: goto label_2e1830;
        case 0x2e1834u: goto label_2e1834;
        case 0x2e1838u: goto label_2e1838;
        case 0x2e183cu: goto label_2e183c;
        case 0x2e1840u: goto label_2e1840;
        case 0x2e1844u: goto label_2e1844;
        case 0x2e1848u: goto label_2e1848;
        case 0x2e184cu: goto label_2e184c;
        case 0x2e1850u: goto label_2e1850;
        case 0x2e1854u: goto label_2e1854;
        case 0x2e1858u: goto label_2e1858;
        case 0x2e185cu: goto label_2e185c;
        case 0x2e1860u: goto label_2e1860;
        case 0x2e1864u: goto label_2e1864;
        case 0x2e1868u: goto label_2e1868;
        case 0x2e186cu: goto label_2e186c;
        case 0x2e1870u: goto label_2e1870;
        case 0x2e1874u: goto label_2e1874;
        case 0x2e1878u: goto label_2e1878;
        case 0x2e187cu: goto label_2e187c;
        case 0x2e1880u: goto label_2e1880;
        case 0x2e1884u: goto label_2e1884;
        case 0x2e1888u: goto label_2e1888;
        case 0x2e188cu: goto label_2e188c;
        case 0x2e1890u: goto label_2e1890;
        case 0x2e1894u: goto label_2e1894;
        case 0x2e1898u: goto label_2e1898;
        case 0x2e189cu: goto label_2e189c;
        case 0x2e18a0u: goto label_2e18a0;
        case 0x2e18a4u: goto label_2e18a4;
        case 0x2e18a8u: goto label_2e18a8;
        case 0x2e18acu: goto label_2e18ac;
        case 0x2e18b0u: goto label_2e18b0;
        case 0x2e18b4u: goto label_2e18b4;
        case 0x2e18b8u: goto label_2e18b8;
        case 0x2e18bcu: goto label_2e18bc;
        case 0x2e18c0u: goto label_2e18c0;
        case 0x2e18c4u: goto label_2e18c4;
        case 0x2e18c8u: goto label_2e18c8;
        case 0x2e18ccu: goto label_2e18cc;
        case 0x2e18d0u: goto label_2e18d0;
        case 0x2e18d4u: goto label_2e18d4;
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e18dcu: goto label_2e18dc;
        case 0x2e18e0u: goto label_2e18e0;
        case 0x2e18e4u: goto label_2e18e4;
        case 0x2e18e8u: goto label_2e18e8;
        case 0x2e18ecu: goto label_2e18ec;
        case 0x2e18f0u: goto label_2e18f0;
        case 0x2e18f4u: goto label_2e18f4;
        case 0x2e18f8u: goto label_2e18f8;
        case 0x2e18fcu: goto label_2e18fc;
        case 0x2e1900u: goto label_2e1900;
        case 0x2e1904u: goto label_2e1904;
        case 0x2e1908u: goto label_2e1908;
        case 0x2e190cu: goto label_2e190c;
        case 0x2e1910u: goto label_2e1910;
        case 0x2e1914u: goto label_2e1914;
        case 0x2e1918u: goto label_2e1918;
        case 0x2e191cu: goto label_2e191c;
        case 0x2e1920u: goto label_2e1920;
        case 0x2e1924u: goto label_2e1924;
        case 0x2e1928u: goto label_2e1928;
        case 0x2e192cu: goto label_2e192c;
        case 0x2e1930u: goto label_2e1930;
        case 0x2e1934u: goto label_2e1934;
        case 0x2e1938u: goto label_2e1938;
        case 0x2e193cu: goto label_2e193c;
        case 0x2e1940u: goto label_2e1940;
        case 0x2e1944u: goto label_2e1944;
        case 0x2e1948u: goto label_2e1948;
        case 0x2e194cu: goto label_2e194c;
        case 0x2e1950u: goto label_2e1950;
        case 0x2e1954u: goto label_2e1954;
        case 0x2e1958u: goto label_2e1958;
        case 0x2e195cu: goto label_2e195c;
        case 0x2e1960u: goto label_2e1960;
        case 0x2e1964u: goto label_2e1964;
        case 0x2e1968u: goto label_2e1968;
        case 0x2e196cu: goto label_2e196c;
        case 0x2e1970u: goto label_2e1970;
        case 0x2e1974u: goto label_2e1974;
        case 0x2e1978u: goto label_2e1978;
        case 0x2e197cu: goto label_2e197c;
        case 0x2e1980u: goto label_2e1980;
        case 0x2e1984u: goto label_2e1984;
        case 0x2e1988u: goto label_2e1988;
        case 0x2e198cu: goto label_2e198c;
        case 0x2e1990u: goto label_2e1990;
        case 0x2e1994u: goto label_2e1994;
        case 0x2e1998u: goto label_2e1998;
        case 0x2e199cu: goto label_2e199c;
        case 0x2e19a0u: goto label_2e19a0;
        default: break;
    }

    ctx->pc = 0x2e1600u;

label_2e1600:
    // 0x2e1600: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e1600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2e1604:
    // 0x2e1604: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e1604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2e1608:
    // 0x2e1608: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e1608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e160c:
    // 0x2e160c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e1610:
    // 0x2e1610: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e1610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1614:
    // 0x2e1614: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e1614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e1618:
    // 0x2e1618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e1618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e161c:
    // 0x2e161c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e161cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e1620:
    // 0x2e1620: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e1624:
    // 0x2e1624: 0x8c901188  lw          $s0, 0x1188($a0)
    ctx->pc = 0x2e1624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4488)));
label_2e1628:
    // 0x2e1628: 0x120000d3  beqz        $s0, . + 4 + (0xD3 << 2)
label_2e162c:
    if (ctx->pc == 0x2E162Cu) {
        ctx->pc = 0x2E162Cu;
            // 0x2e162c: 0xaf949ecc  sw          $s4, -0x6134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942412), GPR_U32(ctx, 20));
        ctx->pc = 0x2E1630u;
        goto label_2e1630;
    }
    ctx->pc = 0x2E1628u;
    {
        const bool branch_taken_0x2e1628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1628u;
            // 0x2e162c: 0xaf949ecc  sw          $s4, -0x6134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942412), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1628) {
            ctx->pc = 0x2E1978u;
            goto label_2e1978;
        }
    }
    ctx->pc = 0x2E1630u;
label_2e1630:
    // 0x2e1630: 0xaf909ed0  sw          $s0, -0x6130($gp)
    ctx->pc = 0x2e1630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942416), GPR_U32(ctx, 16));
label_2e1634:
    // 0x2e1634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e1634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e1638:
    // 0x2e1638: 0x8e04013c  lw          $a0, 0x13C($s0)
    ctx->pc = 0x2e1638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
label_2e163c:
    // 0x2e163c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_2e1640:
    if (ctx->pc == 0x2E1640u) {
        ctx->pc = 0x2E1640u;
            // 0x2e1640: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2E1644u;
        goto label_2e1644;
    }
    ctx->pc = 0x2E163Cu;
    {
        const bool branch_taken_0x2e163c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E163Cu;
            // 0x2e1640: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e163c) {
            ctx->pc = 0x2E164Cu;
            goto label_2e164c;
        }
    }
    ctx->pc = 0x2E1644u;
label_2e1644:
    // 0x2e1644: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2e1648:
    if (ctx->pc == 0x2E1648u) {
        ctx->pc = 0x2E164Cu;
        goto label_2e164c;
    }
    ctx->pc = 0x2E1644u;
    {
        const bool branch_taken_0x2e1644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1644) {
            ctx->pc = 0x2E1658u;
            goto label_2e1658;
        }
    }
    ctx->pc = 0x2E164Cu;
label_2e164c:
    // 0x2e164c: 0x0  nop
    ctx->pc = 0x2e164cu;
    // NOP
label_2e1650:
    // 0x2e1650: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_2e1654:
    if (ctx->pc == 0x2E1654u) {
        ctx->pc = 0x2E1654u;
            // 0x2e1654: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->pc = 0x2E1658u;
        goto label_2e1658;
    }
    ctx->pc = 0x2E1650u;
    {
        const bool branch_taken_0x2e1650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1650u;
            // 0x2e1654: 0x8e100144  lw          $s0, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1650) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E1658u;
label_2e1658:
    // 0x2e1658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e165c:
    // 0x2e165c: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
label_2e1660:
    if (ctx->pc == 0x2E1660u) {
        ctx->pc = 0x2E1664u;
        goto label_2e1664;
    }
    ctx->pc = 0x2E165Cu;
    {
        const bool branch_taken_0x2e165c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e165c) {
            ctx->pc = 0x2E16E8u;
            goto label_2e16e8;
        }
    }
    ctx->pc = 0x2E1664u;
label_2e1664:
    // 0x2e1664: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x2e1664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2e1668:
    // 0x2e1668: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e1668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e166c:
    // 0x2e166c: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
label_2e1670:
    if (ctx->pc == 0x2E1670u) {
        ctx->pc = 0x2E1670u;
            // 0x2e1670: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2E1674u;
        goto label_2e1674;
    }
    ctx->pc = 0x2E166Cu;
    {
        const bool branch_taken_0x2e166c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E166Cu;
            // 0x2e1670: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e166c) {
            ctx->pc = 0x2E16DCu;
            goto label_2e16dc;
        }
    }
    ctx->pc = 0x2E1674u;
label_2e1674:
    // 0x2e1674: 0xc061cd8  jal         func_187360
label_2e1678:
    if (ctx->pc == 0x2E1678u) {
        ctx->pc = 0x2E167Cu;
        goto label_2e167c;
    }
    ctx->pc = 0x2E1674u;
    SET_GPR_U32(ctx, 31, 0x2E167Cu);
    ctx->pc = 0x187360u;
    if (runtime->hasFunction(0x187360u)) {
        auto targetFn = runtime->lookupFunction(0x187360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E167Cu; }
        if (ctx->pc != 0x2E167Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_program__10CRunScriptFi_0x187360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E167Cu; }
        if (ctx->pc != 0x2E167Cu) { return; }
    }
    ctx->pc = 0x2E167Cu;
label_2e167c:
    // 0x2e167c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2e1680:
    if (ctx->pc == 0x2E1680u) {
        ctx->pc = 0x2E1684u;
        goto label_2e1684;
    }
    ctx->pc = 0x2E167Cu;
    {
        const bool branch_taken_0x2e167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e167c) {
            ctx->pc = 0x2E16E8u;
            goto label_2e16e8;
        }
    }
    ctx->pc = 0x2E1684u;
label_2e1684:
    // 0x2e1684: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_2e1688:
    // 0x2e1688: 0xc061c84  jal         func_187210
label_2e168c:
    if (ctx->pc == 0x2E168Cu) {
        ctx->pc = 0x2E168Cu;
            // 0x2e168c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2E1690u;
        goto label_2e1690;
    }
    ctx->pc = 0x2E1688u;
    SET_GPR_U32(ctx, 31, 0x2E1690u);
    ctx->pc = 0x2E168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1688u;
            // 0x2e168c: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187210u;
    if (runtime->hasFunction(0x187210u)) {
        auto targetFn = runtime->lookupFunction(0x187210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1690u; }
        if (ctx->pc != 0x2E1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        run__10CRunScriptFi_0x187210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1690u; }
        if (ctx->pc != 0x2E1690u) { return; }
    }
    ctx->pc = 0x2E1690u;
label_2e1690:
    // 0x2e1690: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2e1694:
    if (ctx->pc == 0x2E1694u) {
        ctx->pc = 0x2E1698u;
        goto label_2e1698;
    }
    ctx->pc = 0x2E1690u;
    {
        const bool branch_taken_0x2e1690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1690) {
            ctx->pc = 0x2E16D0u;
            goto label_2e16d0;
        }
    }
    ctx->pc = 0x2E1698u;
label_2e1698:
    // 0x2e1698: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x2e1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2e169c:
    // 0x2e169c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e16a0:
    if (ctx->pc == 0x2E16A0u) {
        ctx->pc = 0x2E16A0u;
            // 0x2e16a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E16A4u;
        goto label_2e16a4;
    }
    ctx->pc = 0x2E169Cu;
    {
        const bool branch_taken_0x2e169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E16A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E169Cu;
            // 0x2e16a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e169c) {
            ctx->pc = 0x2E16B4u;
            goto label_2e16b4;
        }
    }
    ctx->pc = 0x2E16A4u;
label_2e16a4:
    // 0x2e16a4: 0xc0b84ec  jal         func_2E13B0
label_2e16a8:
    if (ctx->pc == 0x2E16A8u) {
        ctx->pc = 0x2E16A8u;
            // 0x2e16a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E16ACu;
        goto label_2e16ac;
    }
    ctx->pc = 0x2E16A4u;
    SET_GPR_U32(ctx, 31, 0x2E16ACu);
    ctx->pc = 0x2E16A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16A4u;
            // 0x2e16a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16ACu; }
        if (ctx->pc != 0x2E16ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16ACu; }
        if (ctx->pc != 0x2E16ACu) { return; }
    }
    ctx->pc = 0x2E16ACu;
label_2e16ac:
    // 0x2e16ac: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_2e16b0:
    if (ctx->pc == 0x2E16B0u) {
        ctx->pc = 0x2E16B0u;
            // 0x2e16b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E16B4u;
        goto label_2e16b4;
    }
    ctx->pc = 0x2E16ACu;
    {
        const bool branch_taken_0x2e16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16ACu;
            // 0x2e16b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16ac) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E16B4u;
label_2e16b4:
    // 0x2e16b4: 0x0  nop
    ctx->pc = 0x2e16b4u;
    // NOP
label_2e16b8:
    // 0x2e16b8: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x2e16b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_2e16bc:
    // 0x2e16bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e16bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e16c0:
    // 0x2e16c0: 0xc0b84ec  jal         func_2E13B0
label_2e16c4:
    if (ctx->pc == 0x2E16C4u) {
        ctx->pc = 0x2E16C4u;
            // 0x2e16c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E16C8u;
        goto label_2e16c8;
    }
    ctx->pc = 0x2E16C0u;
    SET_GPR_U32(ctx, 31, 0x2E16C8u);
    ctx->pc = 0x2E16C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16C0u;
            // 0x2e16c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16C8u; }
        if (ctx->pc != 0x2E16C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16C8u; }
        if (ctx->pc != 0x2E16C8u) { return; }
    }
    ctx->pc = 0x2E16C8u;
label_2e16c8:
    // 0x2e16c8: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_2e16cc:
    if (ctx->pc == 0x2E16CCu) {
        ctx->pc = 0x2E16D0u;
        goto label_2e16d0;
    }
    ctx->pc = 0x2E16C8u;
    {
        const bool branch_taken_0x2e16c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16c8) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E16D0u;
label_2e16d0:
    // 0x2e16d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e16d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e16d4:
    // 0x2e16d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e16d8:
    if (ctx->pc == 0x2E16D8u) {
        ctx->pc = 0x2E16D8u;
            // 0x2e16d8: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x2E16DCu;
        goto label_2e16dc;
    }
    ctx->pc = 0x2E16D4u;
    {
        const bool branch_taken_0x2e16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E16D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16D4u;
            // 0x2e16d8: 0xae0300a4  sw          $v1, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e16d4) {
            ctx->pc = 0x2E16E8u;
            goto label_2e16e8;
        }
    }
    ctx->pc = 0x2E16DCu;
label_2e16dc:
    // 0x2e16dc: 0x0  nop
    ctx->pc = 0x2e16dcu;
    // NOP
label_2e16e0:
    // 0x2e16e0: 0xc061c78  jal         func_1871E0
label_2e16e4:
    if (ctx->pc == 0x2E16E4u) {
        ctx->pc = 0x2E16E4u;
            // 0x2e16e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2E16E8u;
        goto label_2e16e8;
    }
    ctx->pc = 0x2E16E0u;
    SET_GPR_U32(ctx, 31, 0x2E16E8u);
    ctx->pc = 0x2E16E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E16E0u;
            // 0x2e16e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1871E0u;
    if (runtime->hasFunction(0x1871E0u)) {
        auto targetFn = runtime->lookupFunction(0x1871E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16E8u; }
        if (ctx->pc != 0x2E16E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resume__10CRunScriptFv_0x1871e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E16E8u; }
        if (ctx->pc != 0x2E16E8u) { return; }
    }
    ctx->pc = 0x2E16E8u;
label_2e16e8:
    // 0x2e16e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2e16ec:
    // 0x2e16ec: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_2e16f0:
    if (ctx->pc == 0x2E16F0u) {
        ctx->pc = 0x2E16F4u;
        goto label_2e16f4;
    }
    ctx->pc = 0x2E16ECu;
    {
        const bool branch_taken_0x2e16ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16ec) {
            ctx->pc = 0x2E1740u;
            goto label_2e1740;
        }
    }
    ctx->pc = 0x2E16F4u;
label_2e16f4:
    // 0x2e16f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e16f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e16f8:
    // 0x2e16f8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2e16f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2e16fc:
    // 0x2e16fc: 0x320f809  jalr        $t9
label_2e1700:
    if (ctx->pc == 0x2E1700u) {
        ctx->pc = 0x2E1704u;
        goto label_2e1704;
    }
    ctx->pc = 0x2E16FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1704u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1704u; }
            if (ctx->pc != 0x2E1704u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1704u;
label_2e1704:
    // 0x2e1704: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e1704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1708:
    // 0x2e1708: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1708u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e170c:
    // 0x2e170c: 0x0  nop
    ctx->pc = 0x2e170cu;
    // NOP
label_2e1710:
    // 0x2e1710: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2e1710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2e1714:
    // 0x2e1714: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2e1714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e1718:
    // 0x2e1718: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2e171c:
    if (ctx->pc == 0x2E171Cu) {
        ctx->pc = 0x2E1720u;
        goto label_2e1720;
    }
    ctx->pc = 0x2E1718u;
    {
        const bool branch_taken_0x2e1718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1718) {
            ctx->pc = 0x2E1730u;
            goto label_2e1730;
        }
    }
    ctx->pc = 0x2E1720u;
label_2e1720:
    // 0x2e1720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1724:
    // 0x2e1724: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2e1724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2e1728:
    // 0x2e1728: 0x320f809  jalr        $t9
label_2e172c:
    if (ctx->pc == 0x2E172Cu) {
        ctx->pc = 0x2E1730u;
        goto label_2e1730;
    }
    ctx->pc = 0x2E1728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E1730u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E1730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E1730u; }
            if (ctx->pc != 0x2E1730u) { return; }
        }
        }
    }
    ctx->pc = 0x2E1730u;
label_2e1730:
    // 0x2e1730: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e1734:
    // 0x2e1734: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x2e1734u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e1738:
    // 0x2e1738: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2e173c:
    if (ctx->pc == 0x2E173Cu) {
        ctx->pc = 0x2E173Cu;
            // 0x2e173c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2E1740u;
        goto label_2e1740;
    }
    ctx->pc = 0x2E1738u;
    {
        const bool branch_taken_0x2e1738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E173Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1738u;
            // 0x2e173c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1738) {
            ctx->pc = 0x2E170Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e170c;
        }
    }
    ctx->pc = 0x2E1740u;
label_2e1740:
    // 0x2e1740: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2e1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2e1744:
    // 0x2e1744: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_2e1748:
    if (ctx->pc == 0x2E1748u) {
        ctx->pc = 0x2E1748u;
            // 0x2e1748: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E174Cu;
        goto label_2e174c;
    }
    ctx->pc = 0x2E1744u;
    {
        const bool branch_taken_0x2e1744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1744u;
            // 0x2e1748: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1744) {
            ctx->pc = 0x2E1928u;
            goto label_2e1928;
        }
    }
    ctx->pc = 0x2E174Cu;
label_2e174c:
    // 0x2e174c: 0x10000072  b           . + 4 + (0x72 << 2)
label_2e1750:
    if (ctx->pc == 0x2E1750u) {
        ctx->pc = 0x2E1750u;
            // 0x2e1750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1754u;
        goto label_2e1754;
    }
    ctx->pc = 0x2E174Cu;
    {
        const bool branch_taken_0x2e174c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E174Cu;
            // 0x2e1750: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e174c) {
            ctx->pc = 0x2E1918u;
            goto label_2e1918;
        }
    }
    ctx->pc = 0x2E1754u;
label_2e1754:
    // 0x2e1754: 0x0  nop
    ctx->pc = 0x2e1754u;
    // NOP
label_2e1758:
    // 0x2e1758: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2e1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2e175c:
    // 0x2e175c: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x2e175cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2e1760:
    // 0x2e1760: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x2e1760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2e1764:
    // 0x2e1764: 0x26460060  addiu       $a2, $s2, 0x60
    ctx->pc = 0x2e1764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_2e1768:
    // 0x2e1768: 0xc041c38  jal         func_1070E0
label_2e176c:
    if (ctx->pc == 0x2E176Cu) {
        ctx->pc = 0x2E176Cu;
            // 0x2e176c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1770u;
        goto label_2e1770;
    }
    ctx->pc = 0x2E1768u;
    SET_GPR_U32(ctx, 31, 0x2E1770u);
    ctx->pc = 0x2E176Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1768u;
            // 0x2e176c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1770u; }
        if (ctx->pc != 0x2E1770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1770u; }
        if (ctx->pc != 0x2E1770u) { return; }
    }
    ctx->pc = 0x2E1770u;
label_2e1770:
    // 0x2e1770: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x2e1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_2e1774:
    // 0x2e1774: 0x26460070  addiu       $a2, $s2, 0x70
    ctx->pc = 0x2e1774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2e1778:
    // 0x2e1778: 0xc041c38  jal         func_1070E0
label_2e177c:
    if (ctx->pc == 0x2E177Cu) {
        ctx->pc = 0x2E177Cu;
            // 0x2e177c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1780u;
        goto label_2e1780;
    }
    ctx->pc = 0x2E1778u;
    SET_GPR_U32(ctx, 31, 0x2E1780u);
    ctx->pc = 0x2E177Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1778u;
            // 0x2e177c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1780u; }
        if (ctx->pc != 0x2E1780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1780u; }
        if (ctx->pc != 0x2E1780u) { return; }
    }
    ctx->pc = 0x2E1780u;
label_2e1780:
    // 0x2e1780: 0xc64100a0  lwc1        $f1, 0xA0($s2)
    ctx->pc = 0x2e1780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1784:
    // 0x2e1784: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x2e1784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1788:
    // 0x2e1788: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e1788u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e178c:
    // 0x2e178c: 0xc04c374  jal         func_130DD0
label_2e1790:
    if (ctx->pc == 0x2E1790u) {
        ctx->pc = 0x2E1790u;
            // 0x2e1790: 0xe64c0050  swc1        $f12, 0x50($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->pc = 0x2E1794u;
        goto label_2e1794;
    }
    ctx->pc = 0x2E178Cu;
    SET_GPR_U32(ctx, 31, 0x2E1794u);
    ctx->pc = 0x2E1790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E178Cu;
            // 0x2e1790: 0xe64c0050  swc1        $f12, 0x50($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1794u; }
        if (ctx->pc != 0x2E1794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1794u; }
        if (ctx->pc != 0x2E1794u) { return; }
    }
    ctx->pc = 0x2E1794u;
label_2e1794:
    // 0x2e1794: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2e1794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_2e1798:
    // 0x2e1798: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2e1798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2e179c:
    // 0x2e179c: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x2e179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e17a0:
    // 0x2e17a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e17a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2e17a4:
    // 0x2e17a4: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x2e17a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e17a8:
    // 0x2e17a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e17a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e17ac:
    // 0x2e17ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e17acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e17b0:
    // 0x2e17b0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2e17b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e17b4:
    // 0x2e17b4: 0x0  nop
    ctx->pc = 0x2e17b4u;
    // NOP
label_2e17b8:
    // 0x2e17b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2e17bc:
    if (ctx->pc == 0x2E17BCu) {
        ctx->pc = 0x2E17BCu;
            // 0x2e17bc: 0xe64000a0  swc1        $f0, 0xA0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
        ctx->pc = 0x2E17C0u;
        goto label_2e17c0;
    }
    ctx->pc = 0x2E17B8u;
    {
        const bool branch_taken_0x2e17b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E17BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E17B8u;
            // 0x2e17bc: 0xe64000a0  swc1        $f0, 0xA0($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e17b8) {
            ctx->pc = 0x2E17C4u;
            goto label_2e17c4;
        }
    }
    ctx->pc = 0x2E17C0u;
label_2e17c0:
    // 0x2e17c0: 0xe64200a0  swc1        $f2, 0xA0($s2)
    ctx->pc = 0x2e17c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 160), bits); }
label_2e17c4:
    // 0x2e17c4: 0x0  nop
    ctx->pc = 0x2e17c4u;
    // NOP
label_2e17c8:
    // 0x2e17c8: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2e17cc:
    // 0x2e17cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2e17ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e17d0:
    // 0x2e17d0: 0xc041c38  jal         func_1070E0
label_2e17d4:
    if (ctx->pc == 0x2E17D4u) {
        ctx->pc = 0x2E17D4u;
            // 0x2e17d4: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x2E17D8u;
        goto label_2e17d8;
    }
    ctx->pc = 0x2E17D0u;
    SET_GPR_U32(ctx, 31, 0x2E17D8u);
    ctx->pc = 0x2E17D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E17D0u;
            // 0x2e17d4: 0x26460080  addiu       $a2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17D8u; }
        if (ctx->pc != 0x2E17D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17D8u; }
        if (ctx->pc != 0x2E17D8u) { return; }
    }
    ctx->pc = 0x2E17D8u;
label_2e17d8:
    // 0x2e17d8: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x2e17d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_2e17dc:
    // 0x2e17dc: 0x26460090  addiu       $a2, $s2, 0x90
    ctx->pc = 0x2e17dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e17e0:
    // 0x2e17e0: 0xc041c38  jal         func_1070E0
label_2e17e4:
    if (ctx->pc == 0x2E17E4u) {
        ctx->pc = 0x2E17E4u;
            // 0x2e17e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E17E8u;
        goto label_2e17e8;
    }
    ctx->pc = 0x2E17E0u;
    SET_GPR_U32(ctx, 31, 0x2E17E8u);
    ctx->pc = 0x2E17E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E17E0u;
            // 0x2e17e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17E8u; }
        if (ctx->pc != 0x2E17E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17E8u; }
        if (ctx->pc != 0x2E17E8u) { return; }
    }
    ctx->pc = 0x2E17E8u;
label_2e17e8:
    // 0x2e17e8: 0xc65400e0  lwc1        $f20, 0xE0($s2)
    ctx->pc = 0x2e17e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e17ec:
    // 0x2e17ec: 0xc0a24f0  jal         func_2893C0
label_2e17f0:
    if (ctx->pc == 0x2E17F0u) {
        ctx->pc = 0x2E17F0u;
            // 0x2e17f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2E17F4u;
        goto label_2e17f4;
    }
    ctx->pc = 0x2E17ECu;
    SET_GPR_U32(ctx, 31, 0x2E17F4u);
    ctx->pc = 0x2E17F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E17ECu;
            // 0x2e17f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17F4u; }
        if (ctx->pc != 0x2E17F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E17F4u; }
        if (ctx->pc != 0x2E17F4u) { return; }
    }
    ctx->pc = 0x2E17F4u;
label_2e17f4:
    // 0x2e17f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e17f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e17f8:
    // 0x2e17f8: 0xc040050  jal         func_100140
label_2e17fc:
    if (ctx->pc == 0x2E17FCu) {
        ctx->pc = 0x2E17FCu;
            // 0x2e17fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1800u;
        goto label_2e1800;
    }
    ctx->pc = 0x2E17F8u;
    SET_GPR_U32(ctx, 31, 0x2E1800u);
    ctx->pc = 0x2E17FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E17F8u;
            // 0x2e17fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100140u;
    if (runtime->hasFunction(0x100140u)) {
        auto targetFn = runtime->lookupFunction(0x100140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1800u; }
        if (ctx->pc != 0x2E1800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1800u; }
        if (ctx->pc != 0x2E1800u) { return; }
    }
    ctx->pc = 0x2E1800u;
label_2e1800:
    // 0x2e1800: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2e1804:
    if (ctx->pc == 0x2E1804u) {
        ctx->pc = 0x2E1808u;
        goto label_2e1808;
    }
    ctx->pc = 0x2E1800u;
    {
        const bool branch_taken_0x2e1800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1800) {
            ctx->pc = 0x2E1874u;
            goto label_2e1874;
        }
    }
    ctx->pc = 0x2E1808u;
label_2e1808:
    // 0x2e1808: 0xc64000d0  lwc1        $f0, 0xD0($s2)
    ctx->pc = 0x2e1808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e180c:
    // 0x2e180c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2e180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1810:
    // 0x2e1810: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e1810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e1814:
    // 0x2e1814: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2e1814u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_2e1818:
    // 0x2e1818: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e181c:
    // 0x2e181c: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2e181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
label_2e1820:
    // 0x2e1820: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x2e1820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1824:
    // 0x2e1824: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2e1824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1828:
    // 0x2e1828: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x2e1828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e182c:
    // 0x2e182c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2e182cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2e1830:
    // 0x2e1830: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e1830u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2e1834:
    // 0x2e1834: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e1834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e1838:
    // 0x2e1838: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2e1838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
label_2e183c:
    // 0x2e183c: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x2e183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1840:
    // 0x2e1840: 0xc6420038  lwc1        $f2, 0x38($s2)
    ctx->pc = 0x2e1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1844:
    // 0x2e1844: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x2e1844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1848:
    // 0x2e1848: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2e1848u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2e184c:
    // 0x2e184c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e184cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2e1850:
    // 0x2e1850: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e1850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e1854:
    // 0x2e1854: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x2e1854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
label_2e1858:
    // 0x2e1858: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x2e1858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e185c:
    // 0x2e185c: 0xc642003c  lwc1        $f2, 0x3C($s2)
    ctx->pc = 0x2e185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1860:
    // 0x2e1860: 0xc64000e0  lwc1        $f0, 0xE0($s2)
    ctx->pc = 0x2e1860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1864:
    // 0x2e1864: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2e1864u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2e1868:
    // 0x2e1868: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e1868u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2e186c:
    // 0x2e186c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e186cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e1870:
    // 0x2e1870: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x2e1870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
label_2e1874:
    // 0x2e1874: 0x0  nop
    ctx->pc = 0x2e1874u;
    // NOP
label_2e1878:
    // 0x2e1878: 0xc64100a8  lwc1        $f1, 0xA8($s2)
    ctx->pc = 0x2e1878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e187c:
    // 0x2e187c: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x2e187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1880:
    // 0x2e1880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e1880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e1884:
    // 0x2e1884: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x2e1884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_2e1888:
    // 0x2e1888: 0xc64100ac  lwc1        $f1, 0xAC($s2)
    ctx->pc = 0x2e1888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e188c:
    // 0x2e188c: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x2e188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1890:
    // 0x2e1890: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e1890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e1894:
    // 0x2e1894: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2e1894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_2e1898:
    // 0x2e1898: 0xc64100b0  lwc1        $f1, 0xB0($s2)
    ctx->pc = 0x2e1898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e189c:
    // 0x2e189c: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e18a0:
    // 0x2e18a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e18a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e18a4:
    // 0x2e18a4: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e18a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
label_2e18a8:
    // 0x2e18a8: 0xc64100b4  lwc1        $f1, 0xB4($s2)
    ctx->pc = 0x2e18a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e18ac:
    // 0x2e18ac: 0xc64000ac  lwc1        $f0, 0xAC($s2)
    ctx->pc = 0x2e18acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e18b0:
    // 0x2e18b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e18b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e18b4:
    // 0x2e18b4: 0xe64000ac  swc1        $f0, 0xAC($s2)
    ctx->pc = 0x2e18b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 172), bits); }
label_2e18b8:
    // 0x2e18b8: 0xc65400c0  lwc1        $f20, 0xC0($s2)
    ctx->pc = 0x2e18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e18bc:
    // 0x2e18bc: 0xc0a24f0  jal         func_2893C0
label_2e18c0:
    if (ctx->pc == 0x2E18C0u) {
        ctx->pc = 0x2E18C0u;
            // 0x2e18c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2E18C4u;
        goto label_2e18c4;
    }
    ctx->pc = 0x2E18BCu;
    SET_GPR_U32(ctx, 31, 0x2E18C4u);
    ctx->pc = 0x2E18C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18BCu;
            // 0x2e18c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18C4u; }
        if (ctx->pc != 0x2E18C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18C4u; }
        if (ctx->pc != 0x2E18C4u) { return; }
    }
    ctx->pc = 0x2E18C4u;
label_2e18c4:
    // 0x2e18c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e18c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e18c8:
    // 0x2e18c8: 0xc040050  jal         func_100140
label_2e18cc:
    if (ctx->pc == 0x2E18CCu) {
        ctx->pc = 0x2E18CCu;
            // 0x2e18cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E18D0u;
        goto label_2e18d0;
    }
    ctx->pc = 0x2E18C8u;
    SET_GPR_U32(ctx, 31, 0x2E18D0u);
    ctx->pc = 0x2E18CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18C8u;
            // 0x2e18cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100140u;
    if (runtime->hasFunction(0x100140u)) {
        auto targetFn = runtime->lookupFunction(0x100140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18D0u; }
        if (ctx->pc != 0x2E18D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18D0u; }
        if (ctx->pc != 0x2E18D0u) { return; }
    }
    ctx->pc = 0x2E18D0u;
label_2e18d0:
    // 0x2e18d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2e18d4:
    if (ctx->pc == 0x2E18D4u) {
        ctx->pc = 0x2E18D8u;
        goto label_2e18d8;
    }
    ctx->pc = 0x2E18D0u;
    {
        const bool branch_taken_0x2e18d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e18d0) {
            ctx->pc = 0x2E190Cu;
            goto label_2e190c;
        }
    }
    ctx->pc = 0x2E18D8u;
label_2e18d8:
    // 0x2e18d8: 0xc64000b8  lwc1        $f0, 0xB8($s2)
    ctx->pc = 0x2e18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e18dc:
    // 0x2e18dc: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2e18dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e18e0:
    // 0x2e18e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e18e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e18e4:
    // 0x2e18e4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2e18e4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_2e18e8:
    // 0x2e18e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e18e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e18ec:
    // 0x2e18ec: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x2e18ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_2e18f0:
    // 0x2e18f0: 0xc64100bc  lwc1        $f1, 0xBC($s2)
    ctx->pc = 0x2e18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e18f4:
    // 0x2e18f4: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x2e18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e18f8:
    // 0x2e18f8: 0xc64000c0  lwc1        $f0, 0xC0($s2)
    ctx->pc = 0x2e18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e18fc:
    // 0x2e18fc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2e18fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2e1900:
    // 0x2e1900: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e1900u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2e1904:
    // 0x2e1904: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2e1904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2e1908:
    // 0x2e1908: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x2e1908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
label_2e190c:
    // 0x2e190c: 0x0  nop
    ctx->pc = 0x2e190cu;
    // NOP
label_2e1910:
    // 0x2e1910: 0x26730110  addiu       $s3, $s3, 0x110
    ctx->pc = 0x2e1910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2e1914:
    // 0x2e1914: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e1914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e1918:
    // 0x2e1918: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2e1918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2e191c:
    // 0x2e191c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e191cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e1920:
    // 0x2e1920: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
label_2e1924:
    if (ctx->pc == 0x2E1924u) {
        ctx->pc = 0x2E1928u;
        goto label_2e1928;
    }
    ctx->pc = 0x2E1920u;
    {
        const bool branch_taken_0x2e1920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1920) {
            ctx->pc = 0x2E1754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1754;
        }
    }
    ctx->pc = 0x2E1928u;
label_2e1928:
    // 0x2e1928: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2e1928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2e192c:
    // 0x2e192c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2e1930:
    if (ctx->pc == 0x2E1930u) {
        ctx->pc = 0x2E1934u;
        goto label_2e1934;
    }
    ctx->pc = 0x2E192Cu;
    {
        const bool branch_taken_0x2e192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e192c) {
            ctx->pc = 0x2E1968u;
            goto label_2e1968;
        }
    }
    ctx->pc = 0x2E1934u;
label_2e1934:
    // 0x2e1934: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x2e1934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2e1938:
    // 0x2e1938: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2e193c:
    if (ctx->pc == 0x2E193Cu) {
        ctx->pc = 0x2E193Cu;
            // 0x2e193c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1940u;
        goto label_2e1940;
    }
    ctx->pc = 0x2E1938u;
    {
        const bool branch_taken_0x2e1938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E193Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1938u;
            // 0x2e193c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1938) {
            ctx->pc = 0x2E1950u;
            goto label_2e1950;
        }
    }
    ctx->pc = 0x2E1940u;
label_2e1940:
    // 0x2e1940: 0xc0b84ec  jal         func_2E13B0
label_2e1944:
    if (ctx->pc == 0x2E1944u) {
        ctx->pc = 0x2E1944u;
            // 0x2e1944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1948u;
        goto label_2e1948;
    }
    ctx->pc = 0x2E1940u;
    SET_GPR_U32(ctx, 31, 0x2E1948u);
    ctx->pc = 0x2E1944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1940u;
            // 0x2e1944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1948u; }
        if (ctx->pc != 0x2E1948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1948u; }
        if (ctx->pc != 0x2E1948u) { return; }
    }
    ctx->pc = 0x2E1948u;
label_2e1948:
    // 0x2e1948: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e194c:
    if (ctx->pc == 0x2E194Cu) {
        ctx->pc = 0x2E194Cu;
            // 0x2e194c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1950u;
        goto label_2e1950;
    }
    ctx->pc = 0x2E1948u;
    {
        const bool branch_taken_0x2e1948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E194Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1948u;
            // 0x2e194c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1948) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E1950u;
label_2e1950:
    // 0x2e1950: 0x8c450140  lw          $a1, 0x140($v0)
    ctx->pc = 0x2e1950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
label_2e1954:
    // 0x2e1954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1958:
    // 0x2e1958: 0xc0b84ec  jal         func_2E13B0
label_2e195c:
    if (ctx->pc == 0x2E195Cu) {
        ctx->pc = 0x2E195Cu;
            // 0x2e195c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E1960u;
        goto label_2e1960;
    }
    ctx->pc = 0x2E1958u;
    SET_GPR_U32(ctx, 31, 0x2E1960u);
    ctx->pc = 0x2E195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1958u;
            // 0x2e195c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E13B0u;
    if (runtime->hasFunction(0x2E13B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1960u; }
        if (ctx->pc != 0x2E1960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffSpt__16CEffectScriptManFP11_EFF_SCRIPT_0x2e13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1960u; }
        if (ctx->pc != 0x2E1960u) { return; }
    }
    ctx->pc = 0x2E1960u;
label_2e1960:
    // 0x2e1960: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e1964:
    if (ctx->pc == 0x2E1964u) {
        ctx->pc = 0x2E1968u;
        goto label_2e1968;
    }
    ctx->pc = 0x2E1960u;
    {
        const bool branch_taken_0x2e1960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1960) {
            ctx->pc = 0x2E1970u;
            goto label_2e1970;
        }
    }
    ctx->pc = 0x2E1968u;
label_2e1968:
    // 0x2e1968: 0x8e100144  lw          $s0, 0x144($s0)
    ctx->pc = 0x2e1968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2e196c:
    // 0x2e196c: 0x0  nop
    ctx->pc = 0x2e196cu;
    // NOP
label_2e1970:
    // 0x2e1970: 0x1600ff2f  bnez        $s0, . + 4 + (-0xD1 << 2)
label_2e1974:
    if (ctx->pc == 0x2E1974u) {
        ctx->pc = 0x2E1978u;
        goto label_2e1978;
    }
    ctx->pc = 0x2E1970u;
    {
        const bool branch_taken_0x2e1970 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1970) {
            ctx->pc = 0x2E1630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1630;
        }
    }
    ctx->pc = 0x2E1978u;
label_2e1978:
    // 0x2e1978: 0xaf809ed0  sw          $zero, -0x6130($gp)
    ctx->pc = 0x2e1978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942416), GPR_U32(ctx, 0));
label_2e197c:
    // 0x2e197c: 0xae801184  sw          $zero, 0x1184($s4)
    ctx->pc = 0x2e197cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4484), GPR_U32(ctx, 0));
label_2e1980:
    // 0x2e1980: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e1980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1984:
    // 0x2e1984: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1988:
    // 0x2e1988: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e1988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e198c:
    // 0x2e198c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e198cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e1990:
    // 0x2e1990: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e1990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1994:
    // 0x2e1994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e1998:
    // 0x2e1998: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e199c:
    // 0x2e199c: 0x3e00008  jr          $ra
label_2e19a0:
    if (ctx->pc == 0x2E19A0u) {
        ctx->pc = 0x2E19A0u;
            // 0x2e19a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2E19A4u;
        goto label_fallthrough_0x2e199c;
    }
    ctx->pc = 0x2E199Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E19A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E199Cu;
            // 0x2e19a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e199c:
    ctx->pc = 0x2E19A4u;
}
